<?php

/**
 * Implementation of hook_user_default_roles().
 */
function ca_lessons_user_default_roles() {
  $roles = array();

  // Exported role: lesson administrator
  $roles['lesson administrator'] = array(
    'name' => 'lesson administrator',
  );

  // Exported role: lesson writer
  $roles['lesson writer'] = array(
    'name' => 'lesson writer',
  );

  return $roles;
}
