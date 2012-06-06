<?php
/**
 * @file
 * at_eb_reviewer.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function at_eb_reviewer_user_default_roles() {
  $roles = array();

  // Exported role: EB Reviewer.
  $roles['EB Reviewer'] = array(
    'name' => 'EB Reviewer',
    'weight' => '3',
  );

  return $roles;
}
