<?php

/**
 * @file
 * Drush script to sanitize data so it's safe to use in development.
 */

$query = new EntityFieldQuery();

// Load all users except uid = 1 (admin) and uid = 0 (anonymous)
$query->entityCondition('entity_type', 'user')
  ->propertyCondition('uid', 1, '>');

$result = $query->execute();

if (isset($result['user'])) {
  $user_uids = array_keys($result['user']);
  $users = entity_load('user', $user_uids);
}

foreach ($users as $user) {
  // Change username
  $fields['name'] = 'John Doe ' . $user->uid;

  // Anonymize first and last names
  $user->field_first_name[LANGUAGE_NONE][0]['value'] = "John";
  $user->field_last_name[LANGUAGE_NONE][0]['value'] = "Doe";

  // Change phone number
  $user->field_phone_number[LANGUAGE_NONE][0]['value'] = "(919) 999-9999";

  // @todo: Something is still not write about this.  When it's run from the browser, it logs in each
  // of these users, and keeps the session of the last one to run.  This is minor as this will only
  // be run as a drush script though.
  user_save($user, $fields);
}


drush_log(dt("All clean!", array()), 'success');
