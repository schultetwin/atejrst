<?php
/**
 * @file
 * at_manuscript.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function at_manuscript_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_manuscript';
  $strongarm->value = 'edit-menu';
  $export['additional_settings__active_tab_manuscript'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_manuscript';
  $strongarm->value = 0;
  $export['comment_anonymous_manuscript'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_manuscript';
  $strongarm->value = 1;
  $export['comment_default_mode_manuscript'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_manuscript';
  $strongarm->value = '50';
  $export['comment_default_per_page_manuscript'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_manuscript';
  $strongarm->value = 1;
  $export['comment_form_location_manuscript'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_manuscript';
  $strongarm->value = '2';
  $export['comment_manuscript'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_manuscript';
  $strongarm->value = '1';
  $export['comment_preview_manuscript'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_manuscript';
  $strongarm->value = 1;
  $export['comment_subject_field_manuscript'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_manuscript';
  $strongarm->value = array();
  $export['menu_options_manuscript'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_manuscript';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_manuscript'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_manuscript';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );
  $export['node_options_manuscript'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_manuscript';
  $strongarm->value = '1';
  $export['node_preview_manuscript'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_manuscript';
  $strongarm->value = 0;
  $export['node_submitted_manuscript'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'save_continue_manuscript';
  $strongarm->value = 'Save and add fields';
  $export['save_continue_manuscript'] = $strongarm;

  return $export;
}
