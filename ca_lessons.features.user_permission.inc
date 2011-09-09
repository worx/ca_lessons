<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function ca_lessons_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer features
  $permissions['administer features'] = array(
    'name' => 'administer features',
    'roles' => array(),
  );

  // Exported permission: create ca_lessons content
  $permissions['create ca_lessons content'] = array(
    'name' => 'create ca_lessons content',
    'roles' => array(
      '0' => 'lesson administrator',
      '1' => 'lesson writer',
    ),
  );

  // Exported permission: create webform content
  $permissions['create webform content'] = array(
    'name' => 'create webform content',
    'roles' => array(
      '0' => 'lesson administrator',
      '1' => 'lesson writer',
    ),
  );

  // Exported permission: delete any ca_lessons content
  $permissions['delete any ca_lessons content'] = array(
    'name' => 'delete any ca_lessons content',
    'roles' => array(
      '0' => 'lesson administrator',
    ),
  );

  // Exported permission: delete own ca_lessons content
  $permissions['delete own ca_lessons content'] = array(
    'name' => 'delete own ca_lessons content',
    'roles' => array(
      '0' => 'lesson administrator',
      '1' => 'lesson writer',
    ),
  );

  // Exported permission: delete own webform content
  $permissions['delete own webform content'] = array(
    'name' => 'delete own webform content',
    'roles' => array(
      '0' => 'lesson administrator',
      '1' => 'lesson writer',
    ),
  );

  // Exported permission: edit any ca_lessons content
  $permissions['edit any ca_lessons content'] = array(
    'name' => 'edit any ca_lessons content',
    'roles' => array(
      '0' => 'lesson administrator',
    ),
  );

  // Exported permission: edit any webform content
  $permissions['edit any webform content'] = array(
    'name' => 'edit any webform content',
    'roles' => array(
      '0' => 'lesson administrator',
    ),
  );

  // Exported permission: edit own ca_lessons content
  $permissions['edit own ca_lessons content'] = array(
    'name' => 'edit own ca_lessons content',
    'roles' => array(
      '0' => 'lesson administrator',
      '1' => 'lesson writer',
    ),
  );

  // Exported permission: edit own webform content
  $permissions['edit own webform content'] = array(
    'name' => 'edit own webform content',
    'roles' => array(
      '0' => 'lesson administrator',
      '1' => 'lesson writer',
    ),
  );

  return $permissions;
}
