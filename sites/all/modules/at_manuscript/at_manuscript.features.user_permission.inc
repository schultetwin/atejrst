<?php
/**
 * @file
 * at_manuscript.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function at_manuscript_user_default_permissions() {
  $permissions = array();

  // Exported permission: create manuscript content.
  $permissions['create manuscript content'] = array(
    'name' => 'create manuscript content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete any manuscript content.
  $permissions['delete any manuscript content'] = array(
    'name' => 'delete any manuscript content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete own manuscript content.
  $permissions['delete own manuscript content'] = array(
    'name' => 'delete own manuscript content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit any manuscript content.
  $permissions['edit any manuscript content'] = array(
    'name' => 'edit any manuscript content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit own manuscript content.
  $permissions['edit own manuscript content'] = array(
    'name' => 'edit own manuscript content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
