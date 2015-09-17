<?php

/**
 * @file
 * Drush script to sync Stripe payment info to Drupal
 */

$query = new EntityFieldQuery();

$query->entityCondition('entity_type', 'user')
  ->fieldCondition('field_active', 'value', 1)
  ->range(50, 10);

$result = $query->execute();

if (!empty($result['user'])) {

  $user_uids = array_keys($result['user']);
  $users = entity_load('user', $user_uids);

  _stripe_integration_stripe_init();
  $exempted_roles = array(
    'administrator',
    'Rider'
  );

  foreach ($users as $user) {
    if (array_intersect($user->roles, $exempted_roles)) {
      continue;
    }
    elseif (!empty($user->field_stripe_customer_id)) {
      $stripe_id = $user->field_stripe_customer_id[LANGUAGE_NONE][0]['value'];
      $stripe_customer = Stripe_Customer::retrieve($stripe_id);
      $charges = $stripe_customer->charges();
      $keys = $charges->keys();
      $charges_array = $charges->__toArray();
      if (isset($charges_array['data'][0])) {
        $most_recent_charge = $charges_array['data'][0];
        $status = $most_recent_charge->__get('status');
        $amount = $most_recent_charge->__get('amount') / 100;
        $date = $most_recent_charge->__get('created');

        if ($status == 'paid') {
          // Record payment
          $user_wrapper = entity_metadata_wrapper('user', $user);
          $raw_collection = $user_wrapper->field_last_payment->value();
          $last_payment = entity_metadata_wrapper('field_collection_item', $raw_collection);
          $last_payment->field_last_payment_date->set($date);
          $last_payment->field_last_payment_amount->set($amount);
          $last_payment->save();
        }
      }

      // Update their profile with most recent payment received.
    }
  }


  $do = 'something';
}

//Stripe_List::constructFrom()


//drush_log(dt("Users are synced", array()), 'success');
