<?php
/**
 * @file
 * compost_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function compost_views_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'addresses';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Addresses';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Addresses';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access draggableviews';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_location' => 'field_location',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_location' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<a href="/addresses/csv">Download spreadsheet</a>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_route_target_id']['id'] = 'field_route_target_id';
  $handler->display->display_options['relationships']['field_route_target_id']['table'] = 'field_data_field_route';
  $handler->display->display_options['relationships']['field_route_target_id']['field'] = 'field_route_target_id';
  /* Field: Draggableviews: User */
  $handler->display->display_options['fields']['draggableviews']['id'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['table'] = 'users';
  $handler->display->display_options['fields']['draggableviews']['field'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['label'] = '';
  $handler->display->display_options['fields']['draggableviews']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['draggableviews']['ajax'] = 0;
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = '';
  $handler->display->display_options['fields']['counter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  /* Field: User: Location */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['label'] = 'Address';
  $handler->display->display_options['fields']['field_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_location']['type'] = 'just_street_name';
  /* Field: User: Outside Collection Location */
  $handler->display->display_options['fields']['field_bucket_location']['id'] = 'field_bucket_location';
  $handler->display->display_options['fields']['field_bucket_location']['table'] = 'field_data_field_bucket_location';
  $handler->display->display_options['fields']['field_bucket_location']['field'] = 'field_bucket_location';
  $handler->display->display_options['fields']['field_bucket_location']['label'] = 'Location';
  $handler->display->display_options['fields']['field_bucket_location']['settings'] = array(
    'click_to_edit' => 1,
    'empty_text' => '',
    'fallback_format' => 'text_default',
  );
  /* Field: User: Bucket Size */
  $handler->display->display_options['fields']['field_bucket_size']['id'] = 'field_bucket_size';
  $handler->display->display_options['fields']['field_bucket_size']['table'] = 'field_data_field_bucket_size';
  $handler->display->display_options['fields']['field_bucket_size']['field'] = 'field_bucket_size';
  $handler->display->display_options['fields']['field_bucket_size']['label'] = 'Size';
  $handler->display->display_options['fields']['field_bucket_size']['settings'] = array(
    'click_to_edit' => 1,
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Field: User: Subscriber Notes */
  $handler->display->display_options['fields']['field_subscriber_notes']['id'] = 'field_subscriber_notes';
  $handler->display->display_options['fields']['field_subscriber_notes']['table'] = 'field_data_field_subscriber_notes';
  $handler->display->display_options['fields']['field_subscriber_notes']['field'] = 'field_subscriber_notes';
  $handler->display->display_options['fields']['field_subscriber_notes']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_subscriber_notes']['settings'] = array(
    'click_to_edit' => 1,
    'empty_text' => '',
    'fallback_format' => 'text_default',
  );
  /* Field: User: Skip date */
  $handler->display->display_options['fields']['field_skip_day']['id'] = 'field_skip_day';
  $handler->display->display_options['fields']['field_skip_day']['table'] = 'field_data_field_skip_day';
  $handler->display->display_options['fields']['field_skip_day']['field'] = 'field_skip_day';
  $handler->display->display_options['fields']['field_skip_day']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_skip_day']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_skip_day']['delta_offset'] = '0';
  /* Field: User: Created date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'users';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['date_format'] = 'raw time ago';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Status';
  /* Field: User revision: Created date */
  $handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['table'] = 'user_revision';
  $handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['label'] = 'Last updated';
  $handler->display->display_options['fields']['timestamp']['date_format'] = 'raw time ago';
  $handler->display->display_options['fields']['timestamp']['second_date_format'] = 'long';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'field_route_target_id';
  $handler->display->display_options['fields']['nid']['label'] = 'Route ID';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Field: Route */
  $handler->display->display_options['fields']['field_route']['id'] = 'field_route';
  $handler->display->display_options['fields']['field_route']['table'] = 'field_data_field_route';
  $handler->display->display_options['fields']['field_route']['field'] = 'field_route';
  $handler->display->display_options['fields']['field_route']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_route']['settings'] = array(
    'link' => 0,
  );
  /* Sort criterion: Draggableviews: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'self';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: User: Active (field_active) */
  $handler->display->display_options['filters']['field_active_value']['id'] = 'field_active_value';
  $handler->display->display_options['filters']['field_active_value']['table'] = 'field_data_field_active';
  $handler->display->display_options['filters']['field_active_value']['field'] = 'field_active_value';
  $handler->display->display_options['filters']['field_active_value']['value'] = array(
    1 => '1',
  );
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['operator'] = 'empty';
  /* Filter criterion: User: Service Type (field_service_type) */
  $handler->display->display_options['filters']['field_service_type_value']['id'] = 'field_service_type_value';
  $handler->display->display_options['filters']['field_service_type_value']['table'] = 'field_data_field_service_type';
  $handler->display->display_options['filters']['field_service_type_value']['field'] = 'field_service_type_value';
  $handler->display->display_options['filters']['field_service_type_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_service_type_value']['value'] = array(
    2 => '2',
    3 => '3',
  );
  /* Filter criterion: Field: Route (field_route) */
  $handler->display->display_options['filters']['field_route_target_id']['id'] = 'field_route_target_id';
  $handler->display->display_options['filters']['field_route_target_id']['table'] = 'field_data_field_route';
  $handler->display->display_options['filters']['field_route_target_id']['field'] = 'field_route_target_id';
  $handler->display->display_options['filters']['field_route_target_id']['value'] = array(
    'all' => 'all',
    13 => '13',
    14 => '14',
    40 => '40',
  );
  $handler->display->display_options['filters']['field_route_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_route_target_id']['expose']['operator_id'] = 'field_route_target_id_op';
  $handler->display->display_options['filters']['field_route_target_id']['expose']['label'] = 'Route ';
  $handler->display->display_options['filters']['field_route_target_id']['expose']['operator'] = 'field_route_target_id_op';
  $handler->display->display_options['filters']['field_route_target_id']['expose']['identifier'] = 'field_route_target_id';
  $handler->display->display_options['filters']['field_route_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<a href="/addresses/csv?field_route_target_id=[nid]">Download [field_route]\'s spreadsheet</a>
<a href="/addresses/csv?field_route_target_id=All">Download full route spreadsheet</a>
';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['header']['area']['tokenize'] = TRUE;
  $handler->display->display_options['path'] = 'addresses';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = '%timestamp-yyyy-%timestamp-mmm-%timestamp-dd-%view.csv';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Location */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['label'] = 'Address';
  $handler->display->display_options['fields']['field_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_location']['type'] = 'just_street_name';
  /* Field: User: Outside Collection Location */
  $handler->display->display_options['fields']['field_bucket_location']['id'] = 'field_bucket_location';
  $handler->display->display_options['fields']['field_bucket_location']['table'] = 'field_data_field_bucket_location';
  $handler->display->display_options['fields']['field_bucket_location']['field'] = 'field_bucket_location';
  $handler->display->display_options['fields']['field_bucket_location']['settings'] = array(
    'click_to_edit' => 1,
    'empty_text' => '',
    'fallback_format' => 'text_default',
  );
  /* Field: User: Subscriber Notes */
  $handler->display->display_options['fields']['field_subscriber_notes']['id'] = 'field_subscriber_notes';
  $handler->display->display_options['fields']['field_subscriber_notes']['table'] = 'field_data_field_subscriber_notes';
  $handler->display->display_options['fields']['field_subscriber_notes']['field'] = 'field_subscriber_notes';
  $handler->display->display_options['fields']['field_subscriber_notes']['label'] = 'Notes';
  $handler->display->display_options['fields']['field_subscriber_notes']['settings'] = array(
    'click_to_edit' => 1,
    'empty_text' => '',
    'fallback_format' => 'text_default',
  );
  /* Field: User: Skip date */
  $handler->display->display_options['fields']['field_skip_day']['id'] = 'field_skip_day';
  $handler->display->display_options['fields']['field_skip_day']['table'] = 'field_data_field_skip_day';
  $handler->display->display_options['fields']['field_skip_day']['field'] = 'field_skip_day';
  $handler->display->display_options['fields']['field_skip_day']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_skip_day']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_skip_day']['delta_offset'] = '0';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Status';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = 'Missed time?';
  /* Field: User: Created date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'users';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['date_format'] = 'long';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Draggableviews: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'addresses:page';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
  $handler->display->display_options['path'] = 'addresses/csv';
  $export['addresses'] = $view;

  $view = new view();
  $view->name = 'route_runners_and_cleaners';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Route runners and cleaners';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: User: First Name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['label'] = '';
  $handler->display->display_options['fields']['field_first_name']['element_label_colon'] = FALSE;
  /* Field: User: Last Name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['label'] = '';
  $handler->display->display_options['fields']['field_last_name']['element_label_colon'] = FALSE;
  /* Sort criterion: User: Created date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
  $handler->display->display_options['filters']['rid']['value'] = array(
    3 => '3',
    4 => '4',
  );

  /* Display: Entity Reference */
  $handler = $view->new_display('entityreference', 'Entity Reference', 'entityreference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'field_first_name' => 'field_first_name',
    'field_last_name' => 'field_last_name',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $export['route_runners_and_cleaners'] = $view;

  return $export;
}
