<?php

/**
 * @file
 * Permission and roles related to exercise content type
 */

/**
 * Implements hook_permissions_secure_permissions_roles().
 */
function udoglaer_exercise_secure_permissions_roles() {
  return array(
    'lejrskole',
  );
}

/**
 * Implements hook_secure_permissions().
 */
function udoglaer_exercise_secure_permissions($role) {
  $permissions = array(
    'lejrskole' => array(
      'view the administration theme',
      'access toolbar',
      'use text format editor'
    ),
    'course provider' => array(
      'create exercise content'
    ),
    'editor' => array(
      'create exercise content',
      'edit own exercise content',
      'edit any exercise content',
      'assign lejrskole role'
    )
  );

  return isset($permissions[$role]) ? $permissions[$role] : NULL;
}
