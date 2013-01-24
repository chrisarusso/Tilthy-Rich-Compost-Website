<?php
/**
 * @file
 * content_types.features.inc
 */

/**
 * Implements hook_node_info().
 */
function content_types_node_info() {
  $items = array(
    'route_run' => array(
      'name' => t('Route run'),
      'base' => 'node_content',
      'description' => t('This is a content type used for scheduling who is doing the route, and the cleaning on a given date.'),
      'has_title' => '1',
      'title_label' => t('Route'),
      'help' => '',
    ),
  );
  return $items;
}
