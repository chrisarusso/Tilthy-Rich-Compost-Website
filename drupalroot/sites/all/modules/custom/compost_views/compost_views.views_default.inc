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
  /* Field: User: Location */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['label'] = 'Address';
  $handler->display->display_options['fields']['field_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_location']['type'] = 'just_street_name';
  /* Field: User: Bucket Location */
  $handler->display->display_options['fields']['field_bucket_location']['id'] = 'field_bucket_location';
  $handler->display->display_options['fields']['field_bucket_location']['table'] = 'field_data_field_bucket_location';
  $handler->display->display_options['fields']['field_bucket_location']['field'] = 'field_bucket_location';
  $handler->display->display_options['fields']['field_bucket_location']['type'] = 'editable';
  $handler->display->display_options['fields']['field_bucket_location']['settings'] = array(
    'click_to_edit' => 1,
    'empty_text' => '',
    'fallback_format' => 'text_default',
  );
  /* Field: User: Bucket Size */
  $handler->display->display_options['fields']['field_bucket_size']['id'] = 'field_bucket_size';
  $handler->display->display_options['fields']['field_bucket_size']['table'] = 'field_data_field_bucket_size';
  $handler->display->display_options['fields']['field_bucket_size']['field'] = 'field_bucket_size';
  $handler->display->display_options['fields']['field_bucket_size']['type'] = 'editable';
  $handler->display->display_options['fields']['field_bucket_size']['settings'] = array(
    'click_to_edit' => 1,
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  /* Field: User: Subscriber Notes */
  $handler->display->display_options['fields']['field_subscriber_notes']['id'] = 'field_subscriber_notes';
  $handler->display->display_options['fields']['field_subscriber_notes']['table'] = 'field_data_field_subscriber_notes';
  $handler->display->display_options['fields']['field_subscriber_notes']['field'] = 'field_subscriber_notes';
  $handler->display->display_options['fields']['field_subscriber_notes']['type'] = 'editable';
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
  /* Sort criterion: Draggableviews: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'self';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
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
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
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
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Location */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['label'] = 'Address';
  $handler->display->display_options['fields']['field_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_location']['type'] = 'just_street_name';
  /* Field: User: Bucket Location */
  $handler->display->display_options['fields']['field_bucket_location']['id'] = 'field_bucket_location';
  $handler->display->display_options['fields']['field_bucket_location']['table'] = 'field_data_field_bucket_location';
  $handler->display->display_options['fields']['field_bucket_location']['field'] = 'field_bucket_location';
  $handler->display->display_options['fields']['field_bucket_location']['settings'] = array(
    'click_to_edit' => 1,
    'empty_text' => '',
    'fallback_format' => 'text_default',
  );
  /* Field: User: Bucket Size */
  $handler->display->display_options['fields']['field_bucket_size']['id'] = 'field_bucket_size';
  $handler->display->display_options['fields']['field_bucket_size']['table'] = 'field_data_field_bucket_size';
  $handler->display->display_options['fields']['field_bucket_size']['field'] = 'field_bucket_size';
  $handler->display->display_options['fields']['field_bucket_size']['alter']['max_length'] = '1';
  $handler->display->display_options['fields']['field_bucket_size']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['field_bucket_size']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['field_bucket_size']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_bucket_size']['settings'] = array(
    'click_to_edit' => 1,
    'empty_text' => '',
    'fallback_format' => 'list_default',
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
