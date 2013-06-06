<?php
/**
 * @file
 * subscriber_map.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function subscriber_map_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'map';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Map';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Map';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access draggableviews';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_route_target_id']['id'] = 'field_route_target_id';
  $handler->display->display_options['relationships']['field_route_target_id']['table'] = 'field_data_field_route';
  $handler->display->display_options['relationships']['field_route_target_id']['field'] = 'field_route_target_id';
  /* Field: User: Location */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['label'] = '';
  $handler->display->display_options['fields']['field_location']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_location']['alter']['text'] = ' ';
  $handler->display->display_options['fields']['field_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_location']['type'] = 'just_street_name';
  /* Field: User: First Name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['label'] = '';
  $handler->display->display_options['fields']['field_first_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_first_name']['element_label_colon'] = FALSE;
  /* Field: User: Last Name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_last_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_last_name']['alter']['text'] = '[field_first_name] [field_last_name]';
  /* Field: User: Active */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'users';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['exclude'] = TRUE;
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: User: Last access */
  $handler->display->display_options['fields']['access']['id'] = 'access';
  $handler->display->display_options['fields']['access']['table'] = 'users';
  $handler->display->display_options['fields']['access']['field'] = 'access';
  $handler->display->display_options['fields']['access']['exclude'] = TRUE;
  $handler->display->display_options['fields']['access']['date_format'] = 'long';
  /* Field: User: Skip date */
  $handler->display->display_options['fields']['field_skip_day']['id'] = 'field_skip_day';
  $handler->display->display_options['fields']['field_skip_day']['table'] = 'field_data_field_skip_day';
  $handler->display->display_options['fields']['field_skip_day']['field'] = 'field_skip_day';
  $handler->display->display_options['fields']['field_skip_day']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_skip_day']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_skip_day']['delta_offset'] = '0';
  /* Field: User: Bucket Location */
  $handler->display->display_options['fields']['field_bucket_location']['id'] = 'field_bucket_location';
  $handler->display->display_options['fields']['field_bucket_location']['table'] = 'field_data_field_bucket_location';
  $handler->display->display_options['fields']['field_bucket_location']['field'] = 'field_bucket_location';
  $handler->display->display_options['fields']['field_bucket_location']['exclude'] = TRUE;
  /* Field: Content: Pickup day */
  $handler->display->display_options['fields']['field_pickup_day']['id'] = 'field_pickup_day';
  $handler->display->display_options['fields']['field_pickup_day']['table'] = 'field_data_field_pickup_day';
  $handler->display->display_options['fields']['field_pickup_day']['field'] = 'field_pickup_day';
  $handler->display->display_options['fields']['field_pickup_day']['relationship'] = 'field_route_target_id';
  $handler->display->display_options['fields']['field_pickup_day']['label'] = '';
  $handler->display->display_options['fields']['field_pickup_day']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_pickup_day']['element_label_colon'] = FALSE;
  /* Sort criterion: Draggableviews: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'addresses:page';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['operator'] = 'not';
  $handler->display->display_options['filters']['rid']['value'] = array(
    3 => '3',
    4 => '4',
  );
  $handler->display->display_options['filters']['rid']['group'] = 1;
  /* Filter criterion: User: Active (field_active) */
  $handler->display->display_options['filters']['field_active_value']['id'] = 'field_active_value';
  $handler->display->display_options['filters']['field_active_value']['table'] = 'field_data_field_active';
  $handler->display->display_options['filters']['field_active_value']['field'] = 'field_active_value';
  $handler->display->display_options['filters']['field_active_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_active_value']['group'] = 1;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['relationship'] = 'field_route_target_id';
  $handler->display->display_options['filters']['title']['value'] = 'All';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Route name';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    3 => '3',
    4 => '4',
    1 => 0,
  );
  $handler->display->display_options['filters']['title']['group_info']['label'] = 'Title';
  $handler->display->display_options['filters']['title']['group_info']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['group_info']['default_group'] = '1';
  $handler->display->display_options['filters']['title']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'louie',
      'operator' => '=',
      'value' => 'louie',
    ),
    2 => array(
      'title' => 'time',
      'operator' => '=',
      'value' => 'time',
    ),
    3 => array(
      'title' => '',
      'operator' => '=',
      'value' => '',
    ),
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'map';
  $export['map'] = $view;

  return $export;
}
