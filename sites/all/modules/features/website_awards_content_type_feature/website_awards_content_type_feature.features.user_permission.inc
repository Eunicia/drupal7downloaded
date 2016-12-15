<?php
/**
 * @file
 * website_awards_content_type_feature.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function website_awards_content_type_feature_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create awards content'.
  $permissions['create awards content'] = array(
    'name' => 'create awards content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any awards content'.
  $permissions['delete any awards content'] = array(
    'name' => 'delete any awards content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own awards content'.
  $permissions['delete own awards content'] = array(
    'name' => 'delete own awards content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any awards content'.
  $permissions['edit any awards content'] = array(
    'name' => 'edit any awards content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own awards content'.
  $permissions['edit own awards content'] = array(
    'name' => 'edit own awards content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
