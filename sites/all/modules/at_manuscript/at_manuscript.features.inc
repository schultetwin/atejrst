<?php
/**
 * @file
 * at_manuscript.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function at_manuscript_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function at_manuscript_node_info() {
  $items = array(
    'manuscript' => array(
      'name' => t('Manuscript'),
      'base' => 'node_content',
      'description' => t('A manuscript from manucript central'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
