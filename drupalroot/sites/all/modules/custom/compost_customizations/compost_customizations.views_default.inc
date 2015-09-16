<?php
/**
 * @file
 * compost_customizations.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function compost_customizations_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'update_user';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Update User';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Update User';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'name' => 'name',
    'views_bulk_operations' => 'views_bulk_operations',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = '#';
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  /* Field: User: Phone number */
  $handler->display->display_options['fields']['field_phone_number']['id'] = 'field_phone_number';
  $handler->display->display_options['fields']['field_phone_number']['table'] = 'field_data_field_phone_number';
  $handler->display->display_options['fields']['field_phone_number']['field'] = 'field_phone_number';
  $handler->display->display_options['fields']['field_phone_number']['label'] = '';
  $handler->display->display_options['fields']['field_phone_number']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_phone_number']['element_label_colon'] = FALSE;
  /* Field: User: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'users';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  /* Field: Bulk operations: User */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'users';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          '_all_' => '_all_',
        ),
      ),
      'postpone_processing' => 0,
    ),
    'action::system_send_email_action' => array(
      'selected' => 1,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'postpone_processing' => 1,
    ),
  );
  /* Field: User: First Name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_first_name']['alter']['text'] = '[edit_node] [field_first_name]';
  /* Field: User: Last Name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['label'] = 'Contact Info';
  $handler->display->display_options['fields']['mail']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['mail']['alter']['text'] = '[mail]<br />
[field_phone_number] 
';
  /* Field: User: Location */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['type'] = 'just_street_name';
  /* Field: User: Bucket Size */
  $handler->display->display_options['fields']['field_bucket_size']['id'] = 'field_bucket_size';
  $handler->display->display_options['fields']['field_bucket_size']['table'] = 'field_data_field_bucket_size';
  $handler->display->display_options['fields']['field_bucket_size']['field'] = 'field_bucket_size';
  /* Field: User: Stripe Customer ID */
  $handler->display->display_options['fields']['field_stripe_customer_id']['id'] = 'field_stripe_customer_id';
  $handler->display->display_options['fields']['field_stripe_customer_id']['table'] = 'field_data_field_stripe_customer_id';
  $handler->display->display_options['fields']['field_stripe_customer_id']['field'] = 'field_stripe_customer_id';
  /* Sort criterion: User: Created date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: User: Collection Day Reminders (field_reminders) */
  $handler->display->display_options['filters']['field_reminders_value']['id'] = 'field_reminders_value';
  $handler->display->display_options['filters']['field_reminders_value']['table'] = 'field_data_field_reminders';
  $handler->display->display_options['filters']['field_reminders_value']['field'] = 'field_reminders_value';
  $handler->display->display_options['filters']['field_reminders_value']['value'] = array(
    'all' => 'all',
  );
  $handler->display->display_options['filters']['field_reminders_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_reminders_value']['expose']['operator_id'] = 'field_reminders_value_op';
  $handler->display->display_options['filters']['field_reminders_value']['expose']['label'] = 'Pick up reminders';
  $handler->display->display_options['filters']['field_reminders_value']['expose']['operator'] = 'field_reminders_value_op';
  $handler->display->display_options['filters']['field_reminders_value']['expose']['identifier'] = 'field_reminders_value';
  $handler->display->display_options['filters']['field_reminders_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: User: Active (field_active) */
  $handler->display->display_options['filters']['field_active_value']['id'] = 'field_active_value';
  $handler->display->display_options['filters']['field_active_value']['table'] = 'field_data_field_active';
  $handler->display->display_options['filters']['field_active_value']['field'] = 'field_active_value';
  $handler->display->display_options['filters']['field_active_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_active_value']['expose']['operator_id'] = 'field_active_value_op';
  $handler->display->display_options['filters']['field_active_value']['expose']['label'] = 'Active ';
  $handler->display->display_options['filters']['field_active_value']['expose']['operator'] = 'field_active_value_op';
  $handler->display->display_options['filters']['field_active_value']['expose']['identifier'] = 'field_active_value';
  $handler->display->display_options['filters']['field_active_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['operator'] = 'not';
  $handler->display->display_options['filters']['rid']['value'] = array(
    3 => '3',
    4 => '4',
  );
  /* Filter criterion: User: Service Type (field_service_type) */
  $handler->display->display_options['filters']['field_service_type_value']['id'] = 'field_service_type_value';
  $handler->display->display_options['filters']['field_service_type_value']['table'] = 'field_data_field_service_type';
  $handler->display->display_options['filters']['field_service_type_value']['field'] = 'field_service_type_value';
  $handler->display->display_options['filters']['field_service_type_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_service_type_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_service_type_value']['expose']['operator_id'] = 'field_service_type_value_op';
  $handler->display->display_options['filters']['field_service_type_value']['expose']['label'] = 'Service Type ';
  $handler->display->display_options['filters']['field_service_type_value']['expose']['operator'] = 'field_service_type_value_op';
  $handler->display->display_options['filters']['field_service_type_value']['expose']['identifier'] = 'field_service_type_value';
  $handler->display->display_options['filters']['field_service_type_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  /* Filter criterion: Field: Route (field_route) */
  $handler->display->display_options['filters']['field_route_target_id']['id'] = 'field_route_target_id';
  $handler->display->display_options['filters']['field_route_target_id']['table'] = 'field_data_field_route';
  $handler->display->display_options['filters']['field_route_target_id']['field'] = 'field_route_target_id';
  $handler->display->display_options['filters']['field_route_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_route_target_id']['expose']['operator_id'] = 'field_route_target_id_op';
  $handler->display->display_options['filters']['field_route_target_id']['expose']['label'] = 'Route ';
  $handler->display->display_options['filters']['field_route_target_id']['expose']['operator'] = 'field_route_target_id_op';
  $handler->display->display_options['filters']['field_route_target_id']['expose']['identifier'] = 'field_route_target_id';
  $handler->display->display_options['filters']['field_route_target_id']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_route_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  /* Filter criterion: User: Bucket Size (field_bucket_size) */
  $handler->display->display_options['filters']['field_bucket_size_value']['id'] = 'field_bucket_size_value';
  $handler->display->display_options['filters']['field_bucket_size_value']['table'] = 'field_data_field_bucket_size';
  $handler->display->display_options['filters']['field_bucket_size_value']['field'] = 'field_bucket_size_value';
  $handler->display->display_options['filters']['field_bucket_size_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_bucket_size_value']['expose']['operator_id'] = 'field_bucket_size_value_op';
  $handler->display->display_options['filters']['field_bucket_size_value']['expose']['label'] = 'Bucket Size ';
  $handler->display->display_options['filters']['field_bucket_size_value']['expose']['operator'] = 'field_bucket_size_value_op';
  $handler->display->display_options['filters']['field_bucket_size_value']['expose']['identifier'] = 'field_bucket_size_value';
  $handler->display->display_options['filters']['field_bucket_size_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_bucket_size_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'update-user';
  $export['update_user'] = $view;

  return $export;
}
