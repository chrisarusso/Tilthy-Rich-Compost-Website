<?php

/**
 * @file
 * Page callbacks for the Stripe Integration module.
 */

/**
 * Form constructor for the update payment form.
 *
 * Path: user/%user/update-payment
 *
 *
 * Two cases for arriving here:
 * Current subscriber updating payment / moving to paypal
 * Current subscriber (existing customer in Stripe) changing service
 *  type, amount paid, or updating credit card.
 *
 * Borrowed from personal contact form
 */
function stripe_integration_payment_update_form($form, &$form_state, $account) {
  // @todo: Consider removing this in favor of regular profile form.
  global $conf;
  $environment = ($conf['production']) == TRUE ? 'live' : 'test';

  $form_state['build_info'] = array(
   'args' => array(
     $account
   )
  );

  require_once(drupal_get_path('module', 'user') . '/user.pages.inc');
  $profile_form = drupal_retrieve_form('user_profile_form', $form_state);

  // Use fields built in profile form
  $form['field_monthly_contribution'] = $profile_form['field_monthly_contribution'];

  if (empty($form['field_monthly_contribution'][LANGUAGE_NONE][0]['value']['#default_value'])) {
    // Retrieve amount from field default value in database
    $field = field_info_instance('user', 'field_monthly_contribution', 'user');
    $preselected_amount = $field['default_value'][0]['value'];
    $form['field_monthly_contribution'][LANGUAGE_NONE][0]['value']['#default_value'] = $preselected_amount;
  }

  $form['field_service_type'] = $profile_form['field_service_type'];

  // Used for stripe only, so hidden
  $form['mail'] = array(
    '#type' => 'hidden',
    '#attributes' => array('id' => array('edit-mail')),
    '#title' => t('New Monthly Contribution'),
    '#default_value' => $account->mail,
  );

  // Reason for updating payment
  $form['reason_for_update'] = array(
    '#type' => 'textfield',
    '#title' => t('If you are changing your subscription payment, please tell us why.'),
    '#maxlength' => 255,
  );

  // We can pre-fill reason box if we choose
  if (isset($_GET['reason'])) {
    $form['reason_for_update']['#default_value'] = $_GET['reason'];
  }

  if (!empty($account->field_stripe_customer_id) && empty($_POST)) {
    // @todo: Tuck this into stripe_init function of sorts
    require_once(drupal_get_path('module', 'stripe_integration') . "/stripe-php/lib/Stripe.php");
    global $conf;
    $environment = ($conf['production']) == TRUE ? 'live' : 'test';

    Stripe::setApiKey($conf['stripe_' . $environment . '_secret_key']);

    $customer_id = $form_state['user']->field_stripe_customer_id[LANGUAGE_NONE][0]['value'];
    // Populate the existing customer object with the default card information.
    $existing_customer = Stripe_Customer::retrieve(array(
      "id" => $customer_id,
      "expand" => array("default_card")
    ));
  }

  if ($existing_customer) {
    $form['stripe_customer_id'] = array(
      '#type' => 'hidden',
      '#value' => $customer_id,
    );

    // Get last four digits of default credit card.
    $type = $existing_customer->default_card->type;
    $exp_year = $existing_customer->default_card->exp_year;
    $exp_month = $existing_customer->default_card->exp_month;
    $last4 = $existing_customer->default_card->last4;


    // Display the current credit card information for existing customers.
    $form['current_card'] = array(
      '#type' => 'item',
      '#title' => t('Current Credit Card'),
      '#markup' => '<div class="existing-card">' . t('@type ending in @last4. Expires on @month/@year',
          array(
            '@type' => $type,
            '@last4' => $last4,
            '@month' => $exp_month,
            '@year' => $exp_year,
          )
        ) . '</div>',
      '#weight' => 80,
    );
  }

  // Require the user to update their credit card information if they are not an existing customer.
  // @todo: Are there customers that pay in cash or check. If so, this should not be disabled for those customers.
  // @todo: Require if the credit card expiration date has passed.
  $form['update_existing_credit_card'] = array(
    '#type' => 'checkbox',
    '#title' => t('Add/update card information.'),
    '#weight' => 90,
    '#disabled' => $existing_customer ? 0 : 1,
    '#default_value' => $existing_customer ? 0 : 1,
  );

  $form['actions']['#weight'] =  99;
  $form['actions']['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Update Payment'),
  );

  // Add stripe checkout.js and our custom handling, which checks if the user wants to update their card info.
  $form['actions']['submit']['#attached'] = array(
    'js' => array(
      drupal_get_path('module', 'stripe_integration') . "/js/stripe_integration_checkout.js" => array(
        'scope' => 'footer',
      ),
      'https://checkout.stripe.com/checkout.js' => array('type' => 'external', 'cache' => FALSE),
      array('data' => array(
        'stripeIntegration' => array(
          'publishableKey' => $conf['stripe_' . $environment . '_publishable_key'],
          'logoURL' => drupal_get_path('theme', 'tilthyrich2') . "/stripe-logo.png"
        )),
        'type' => 'setting'
      )
    )
  );

  $form['#validate'][] = 'stripe_integration_form_validate';
  $form['#submit'][] = 'stripe_integration_form_submit';
  $form['#submit'][] = 'stripe_integration_payment_update_form_submit';

  return $form;
}

/*
 * Form submission handler for stripe_integration_payment_update_form().
 */
function stripe_integration_payment_update_form_submit($form, &$form_state) {

  // Drupal set message
  drupal_set_message(t('Your subscription has been updated!'));

  // @todo: Do something with message they include


  // Redirect to edit page
  $form_state['redirect'] = array(
    'user/' . $form_state['user']->uid . '/edit',
  );

}

/**
 * @param string $event
 *  The web event POSTed to Drupal from Stripe
 */
function _stripe_integration_webhook_consume($event = 'e') {
  _stripe_integration_stripe_init();

  $input = @file_get_contents("php://input");
  $event = json_decode($input);

  if (!isset($event->data->object->customer)) {
    return;
  }

  // Get associated user.
  $stripe_customer_id = $event->data->object->customer;
  $query = new EntityFieldQuery();
  $query->entityCondition('entity_type', 'user')
    ->fieldCondition('field_stripe_customer_id', 'value', $stripe_customer_id);

  $result = $query->execute();
  $uid = key($result['user']);

  $user = user_load($uid);

  switch ($event->type) {

    case 'invoice.payment_failed' :

      $params['user'] = $user;
      // If payment fails, let's email user.
      drupal_mail('stripe_integration', 'invoice_failed', $user->mail, $user->language, $params);
      break;
    case 'invoice.payment_succeeded':

      // If payment succeeds, let's update the user's account with last payment.
      $user_wrapper = entity_metadata_wrapper('user', $user);
      $raw_collection = $user_wrapper->field_last_payment->value();
      $last_payment = entity_metadata_wrapper('field_collection_item', $raw_collection);
      $last_payment->field_last_payment_date->set($event->data->object->date);
      $last_payment->field_last_payment_amount->set($event->data->object->total/100);
      $last_payment->save();
      break;
  }
}
