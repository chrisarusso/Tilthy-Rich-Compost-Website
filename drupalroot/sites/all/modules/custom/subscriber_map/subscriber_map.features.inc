<?php
/**
 * @file
 * subscriber_map.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function subscriber_map_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function subscriber_map_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function subscriber_map_node_info() {
  $items = array(
    'store_location' => array(
      'name' => t('Store Location'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Store name'),
      'help' => '',
    ),
  );
  return $items;
}
