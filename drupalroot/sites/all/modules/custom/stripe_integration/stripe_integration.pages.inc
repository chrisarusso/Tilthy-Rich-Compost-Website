<?php

/**
 * @file
 * Page callbacks for the Stripe Integration module.
 */

/**
 * Form constructor for the update payment form.
 *
 * Path: user/%user/contact
 *
 *
 * Two cases for arriving here:
 * Current subscriber updating payment / moving to paypal
 * Current subscriber (existing customer in Stripe) changing service
 *  type or amount paid.
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

  $default_payment = empty($account->field_monthly_contribution) ? 22 :
    $account->field_monthly_contribution[LANGUAGE_NONE][0]['value'];

  // Use fields built in profile form
  $form['field_monthly_contribution'] = $profile_form['field_monthly_contribution'];
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

  // Check when building form for existence of customer.  No need to
  // prompt for card if customer exists.
  // @todo: May have to do some advanced checking for active card

  if (!empty($account->field_stripe_customer_id) && empty($_POST)) {
    // @todo: Tuck this into stripe_init function of sorts
    require_once(drupal_get_path('module', 'stripe_integration') . "/stripe-php/lib/Stripe.php");
    global $conf;
    $environment = ($conf['production']) == TRUE ? 'live' : 'test';

    Stripe::setApiKey($conf['stripe_' . $environment . '_secret_key']);

    $customer_id = $form_state['user']->field_stripe_customer_id[LANGUAGE_NONE][0]['value'];
    $existing_customer = Stripe_Customer::retrieve($customer_id);
  }

  if ($existing_customer) {
    $form['stripe_customer_id'] = array(
      '#type' => 'hidden',
      '#value' => $customer_id,
    );
  }

  $form['actions']['#weight'] =  99;
  $form['actions']['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Update Payment'),
  );

  // Only add stripe checkout js if customer doesn't exist
  if(!$existing_customer) {
    $form['actions']['submit']['#attached'] = array(
      'js' => array(
        drupal_get_path('module', 'stripe_integration') . "/js/stripe_integration_checkout.js" => array(
          'scope' => 'footer',
        ),
        'https://checkout.stripe.com/checkout.js' => array('external'),
        array('data' => array(
          'stripeIntegration' => array(
            'publishableKey' => $conf['stripe_' . $environment . '_publishable_key'],
            'logoURL' => drupal_get_path('theme', 'tilthyrich') . "/logo.jpg"
          )),
          'type' => 'setting'
        )
      )
    );
  }

  $form['#validate'][] = 'stripe_integration_form_validate';
  $form['#submit'][] = 'stripe_integration_form_submit';
  $form['#submit'][] = 'stripe_integration_payment_update_form_submit';

  return $form;
}


/*
 * Form submission handler for stripe_integration_payment_update_form().
 */
function stripe_integration_payment_update_form_submit($form, &$form_state) {

  // If we've gotten here, we've passed other validation

  // Drupal set message
  drupal_set_message('Your subscription has been updated!');
  // @todo: Do something with message they include


  // Redirect to edit page
  $form_state['redirect'] = array(
    'user/' . $form_state['user']->uid . '/edit',
  );

  /* With response from
  global $user, $language;

  $values = $form_state['values'];
  $values['sender'] = $user;
  $values['sender']->name = $values['name'];
  $values['sender']->mail = $values['mail'];

  // Save the anonymous user information to a cookie for reuse.
  if (!$user->uid) {
    user_cookie_save(array_intersect_key($values, array_flip(array('name', 'mail'))));
  }

  // Get the to and from e-mail addresses.
  $to = $values['recipient']->mail;
  $from = $values['sender']->mail;

  // Send the e-mail in the requested user language.
  drupal_mail('contact', 'user_mail', $to, user_preferred_language($values['recipient']), $values, $from);

  // Send a copy if requested, using current page language.
  if ($values['copy']) {
    drupal_mail('contact', 'user_copy', $from, $language, $values, $from);
  }

  flood_register_event('contact', variable_get('contact_threshold_window', 3600));
  watchdog('mail', '%sender-name (@sender-from) sent %recipient-name an e-mail.', array('%sender-name' => $values['name'], '@sender-from' => $from, '%recipient-name' => $values['recipient']->name));

  // Jump to the contacted user's profile page.
  drupal_set_message(t('Your message has been sent.'));
  $form_state['redirect'] = user_access('access user profiles') ? 'user/' . $values['recipient']->uid : '';

  */
}
