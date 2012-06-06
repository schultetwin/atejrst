<?php
/**
 * @file
 * at_eb_reviewer.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function at_eb_reviewer_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'reviewers_for_manuscript';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'reviewers_for_manuscript';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'delete' => 'delete',
    'edit' => 'edit',
    'status_form' => 'status_form',
    'mail' => 'mail',
    'name' => 'name',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'delete' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'status_form' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'mail' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  /* Relationship: Content: Relation: EB Reviewer (node -> relation) */
  $handler->display->display_options['relationships']['relation_base_left_eb_reviewers']['id'] = 'relation_base_left_eb_reviewers';
  $handler->display->display_options['relationships']['relation_base_left_eb_reviewers']['table'] = 'node';
  $handler->display->display_options['relationships']['relation_base_left_eb_reviewers']['field'] = 'relation_base_left_eb_reviewers';
  $handler->display->display_options['relationships']['relation_base_left_eb_reviewers']['required'] = 1;
  $handler->display->display_options['relationships']['relation_base_left_eb_reviewers']['r_index'] = '0';
  $handler->display->display_options['relationships']['relation_base_left_eb_reviewers']['entity_deduplication_left'] = 0;
  /* Relationship: Relation: Relation: EB Reviewer (relation -> user) */
  $handler->display->display_options['relationships']['relation_base_eb_reviewers_user']['id'] = 'relation_base_eb_reviewers_user';
  $handler->display->display_options['relationships']['relation_base_eb_reviewers_user']['table'] = 'relation';
  $handler->display->display_options['relationships']['relation_base_eb_reviewers_user']['field'] = 'relation_base_eb_reviewers_user';
  $handler->display->display_options['relationships']['relation_base_eb_reviewers_user']['relationship'] = 'relation_base_left_eb_reviewers';
  $handler->display->display_options['relationships']['relation_base_eb_reviewers_user']['required'] = 0;
  $handler->display->display_options['relationships']['relation_base_eb_reviewers_user']['r_index'] = '1';
  $handler->display->display_options['relationships']['relation_base_eb_reviewers_user']['entity_deduplication_right'] = 0;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'relation_base_eb_reviewers_user';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['name']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['name']['link_to_user'] = 1;
  $handler->display->display_options['fields']['name']['overwrite_anonymous'] = 0;
  $handler->display->display_options['fields']['name']['format_username'] = 1;
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['relationship'] = 'relation_base_eb_reviewers_user';
  $handler->display->display_options['fields']['mail']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['external'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['mail']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['mail']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['html'] = 0;
  $handler->display->display_options['fields']['mail']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['mail']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['mail']['hide_empty'] = 0;
  $handler->display->display_options['fields']['mail']['empty_zero'] = 0;
  $handler->display->display_options['fields']['mail']['hide_alter_empty'] = 1;
  /* Field: Relation: Status Selector (Form) */
  $handler->display->display_options['fields']['status_form']['id'] = 'status_form';
  $handler->display->display_options['fields']['status_form']['table'] = 'relation';
  $handler->display->display_options['fields']['status_form']['field'] = 'status_form';
  $handler->display->display_options['fields']['status_form']['relationship'] = 'relation_base_left_eb_reviewers';
  $handler->display->display_options['fields']['status_form']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['status_form']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['status_form']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['status_form']['alter']['external'] = 0;
  $handler->display->display_options['fields']['status_form']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['status_form']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['status_form']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['status_form']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['status_form']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['status_form']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['status_form']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['status_form']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['status_form']['alter']['html'] = 0;
  $handler->display->display_options['fields']['status_form']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['status_form']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['status_form']['hide_empty'] = 0;
  $handler->display->display_options['fields']['status_form']['empty_zero'] = 0;
  $handler->display->display_options['fields']['status_form']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['status_form']['status_field'] = 'field_eb_reviewers_status';
  /* Field: Relation: Edit Relation */
  $handler->display->display_options['fields']['edit']['id'] = 'edit';
  $handler->display->display_options['fields']['edit']['table'] = 'relation';
  $handler->display->display_options['fields']['edit']['field'] = 'edit';
  $handler->display->display_options['fields']['edit']['relationship'] = 'relation_base_left_eb_reviewers';
  $handler->display->display_options['fields']['edit']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['edit']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['edit']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['edit']['alter']['external'] = 0;
  $handler->display->display_options['fields']['edit']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['edit']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['edit']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['edit']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['edit']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['edit']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['edit']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['edit']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['edit']['alter']['html'] = 0;
  $handler->display->display_options['fields']['edit']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['edit']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['edit']['hide_empty'] = 0;
  $handler->display->display_options['fields']['edit']['empty_zero'] = 0;
  $handler->display->display_options['fields']['edit']['hide_alter_empty'] = 1;
  /* Field: Relation: Delete Relation */
  $handler->display->display_options['fields']['delete']['id'] = 'delete';
  $handler->display->display_options['fields']['delete']['table'] = 'relation';
  $handler->display->display_options['fields']['delete']['field'] = 'delete';
  $handler->display->display_options['fields']['delete']['relationship'] = 'relation_base_left_eb_reviewers';
  $handler->display->display_options['fields']['delete']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['delete']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['delete']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['delete']['alter']['external'] = 0;
  $handler->display->display_options['fields']['delete']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['delete']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['delete']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['delete']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['delete']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['delete']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['delete']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['delete']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['delete']['alter']['html'] = 0;
  $handler->display->display_options['fields']['delete']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['delete']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['delete']['hide_empty'] = 0;
  $handler->display->display_options['fields']['delete']['empty_zero'] = 0;
  $handler->display->display_options['fields']['delete']['hide_alter_empty'] = 1;
  /* Sort criterion: Relation: Status (field_eb_reviewers_status) */
  $handler->display->display_options['sorts']['field_eb_reviewers_status_value']['id'] = 'field_eb_reviewers_status_value';
  $handler->display->display_options['sorts']['field_eb_reviewers_status_value']['table'] = 'field_data_field_eb_reviewers_status';
  $handler->display->display_options['sorts']['field_eb_reviewers_status_value']['field'] = 'field_eb_reviewers_status_value';
  $handler->display->display_options['sorts']['field_eb_reviewers_status_value']['relationship'] = 'relation_base_left_eb_reviewers';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = 1;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'manuscript' => 'manuscript',
  );
  $handler->display->display_options['arguments']['nid']['validate_options']['access'] = 0;
  $handler->display->display_options['arguments']['nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['nid']['not'] = 0;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'manuscript' => 'manuscript',
  );
  /* Filter criterion: Relation: Relation type */
  $handler->display->display_options['filters']['relation_type']['id'] = 'relation_type';
  $handler->display->display_options['filters']['relation_type']['table'] = 'relation';
  $handler->display->display_options['filters']['relation_type']['field'] = 'relation_type';
  $handler->display->display_options['filters']['relation_type']['relationship'] = 'relation_base_left_eb_reviewers';
  $handler->display->display_options['filters']['relation_type']['value'] = array(
    'eb_reviewers' => 'eb_reviewers',
  );
  $export['reviewers_for_manuscript'] = $view;

  return $export;
}
