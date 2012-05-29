<?php

/**
 * @file
 * Views support.
 */

/**
 * Implements hook_views_data_alter().
 */
function at_ebreview_views_data_alter(&$data) {
  $data['relation']['delete'] = array(
    'title' => t('Delete Relation'),
    'help' => t('Link to delete relation'),
    'real field' => 'rid',
    'field' => array(
      'handler' => 'at_ebreview_handler_field_delete_relation',
      'click sortable' => FALSE,
    ),
  );
  $data['relation']['edit'] = array(
    'title' => t('Edit Relation'),
    'help' => t('Link to edit relation'),
    'real field' => 'rid',
    'field' => array(
      'handler' => 'at_ebreview_handler_field_edit_relation',
      'click sortable' => FALSE,
    ),
  );
  $data['relation']['status_form'] = array(
    'title' => t('Status Selector (Form)'),
    'help' => t('Form to change the status of a relation'),
    'real field' => 'rid',
    'field' => array(
      'handler' => 'at_ebreview_handler_status_form',
      'click sortable' => FALSE,
    ),
  );
}
