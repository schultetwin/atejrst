<?php
/**
 * @file
 * at_eb_reviewer.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function at_eb_reviewer_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "relation" && $api == "relation_type_default") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function at_eb_reviewer_views_api() {
  return array("version" => "3.0");
}
