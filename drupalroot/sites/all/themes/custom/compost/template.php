<?php

/**
 * Implements hook_css_alter().
 */
function compost_css_alter(&$css) {
  // Add back system.base.css for draggable table stuff which is inexplicably removed in titan
  $c = drupal_add_css();
  $path = drupal_get_path('module', 'system') . '/system.base.css';
  $css[$path] = $c[$path];
}

