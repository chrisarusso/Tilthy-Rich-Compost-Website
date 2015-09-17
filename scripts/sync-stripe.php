<?php

/**
 * @file
 * Drush script to sync Stripe payment info to Drupal
 */

$query = new EntityFieldQuery();

$query->entityCondition('entity_type', 'user')
  ->fieldCondition('field_active', 'value', 1);

$result = $query->execute();

if (!empty($result['user'])) {

  $user_uids = array_keys($result['user']);
  $users = entity_load('user', $user_uids);

  _stripe_integration_stripe_init();
  $exempted_roles = array(
    'administrator',
    'Rider'
  );

  foreach ($users as $account) {
    if (array_intersect($account->roles, $exempted_roles)) {
      continue;
    }
    elseif (!empty($account->field_stripe_customer_id)) {
      $stripe_id = $account->field_stripe_customer_id[LANGUAGE_NONE][0]['value'];
      $stripe_customer = Stripe_Customer::retrieve($stripe_id);
      $charges = $stripe_customer->charges();
      $charges_array = $charges->__toArray();
      if (isset($charges_array['data'][0])) {
        $most_recent_charge = $charges_array['data'][0];
        $status = $most_recent_charge->__get('status');
        $amount = $most_recent_charge->__get('amount') / 100;
        $date = $most_recent_charge->__get('created');

        if ($status == 'paid') {
          // Record payment
          $field_collection_entity2 = field_collection_item_load($account->field_last_payment[LANGUAGE_NONE][0]['value']);
          $account->field_last_payment_amount[LANGUAGE_NONE][0]['value'] = $amount;
          $account->field_last_payment_date[LANGUAGE_NONE][0]['value'] = $date;
          user_save($account);
        }
      }
    }
  }
}

drush_log(dt("Users are synced", array()), 'success');
