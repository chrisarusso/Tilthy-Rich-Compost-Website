<?php
/**
 * @file
 * compost_customizations.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function compost_customizations_user_default_permissions() {
  $permissions = array();

  // Exported permission: access private fields.
  $permissions['access private fields'] = array(
    'name' => 'access private fields',
    'roles' => array(
      0 => 'Rider',
      1 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: administer field permissions.
  $permissions['administer field permissions'] = array(
    'name' => 'administer field permissions',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_active.
  $permissions['create field_active'] = array(
    'name' => 'create field_active',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_active.
  $permissions['edit field_active'] = array(
    'name' => 'edit field_active',
    'roles' => array(
      0 => 'Rider',
      1 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_active.
  $permissions['edit own field_active'] = array(
    'name' => 'edit own field_active',
    'roles' => array(
      0 => 'Rider',
      1 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_active.
  $permissions['view field_active'] = array(
    'name' => 'view field_active',
    'roles' => array(
      0 => 'Rider',
      1 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_active.
  $permissions['view own field_active'] = array(
    'name' => 'view own field_active',
    'roles' => array(
      0 => 'Rider',
      1 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  return $permissions;
}
