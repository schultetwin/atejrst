<?php
/**
 * @file
 * at_eb_reviewer.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function at_eb_reviewer_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'at_ebreviewer_email_template';
  $strongarm->value = 'Hello [user:name],

You have been selected to review [node:title]. Please reply with your response or reply that you would rather not review this article. Thank you for your time.

JRST Editors';
  $export['at_ebreviewer_email_template'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'at_ebreviewer_roles';
  $strongarm->value = array(
    4 => '4',
    1 => 0,
    2 => 0,
    3 => 0,
  );
  $export['at_ebreviewer_roles'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'at_ebreviwer_email_from';
  $strongarm->value = 'ebreviewers@ejrst.net';
  $export['at_ebreviwer_email_from'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'at_ebreviwer_email_subject';
  $strongarm->value = 'Invitation to Review Attached Manuscript';
  $export['at_ebreviwer_email_subject'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'at_eb_review_relation_type';
  $strongarm->value = 'eb_reviewers';
  $export['at_eb_review_relation_type'] = $strongarm;

  return $export;
}
