<?php

/**
 * Default Views
 */
function at_ebreview_views_default_views() {
  $views = array();
  $view = new view;
  $view->name = 'eb_reviewers_for_node';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'relation';
  $view->human_name = 'EB Reviewers for Node';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'rid' => 'rid',
    'field_eb_review_status' => 'field_eb_review_status',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'rid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_eb_review_status' => array(
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
  /* Relationship: Relation: Relation: EB Reviewer (relation -> user) */
  $handler->display->display_options['relationships']['relation_base_eb_reviewer_user']['id'] = 'relation_base_eb_reviewer_user';
  $handler->display->display_options['relationships']['relation_base_eb_reviewer_user']['table'] = 'relation';
  $handler->display->display_options['relationships']['relation_base_eb_reviewer_user']['field'] = 'relation_base_eb_reviewer_user';
  $handler->display->display_options['relationships']['relation_base_eb_reviewer_user']['required'] = 0;
  $handler->display->display_options['relationships']['relation_base_eb_reviewer_user']['r_index'] = '-1';
  $handler->display->display_options['relationships']['relation_base_eb_reviewer_user']['entity_deduplication_right'] = 0;
  /* Relationship: Relation: Relation: EB Reviewer (relation -> user) */
  $handler->display->display_options['relationships']['relation_base_eb_reviewer_user_1']['id'] = 'relation_base_eb_reviewer_user_1';
  $handler->display->display_options['relationships']['relation_base_eb_reviewer_user_1']['table'] = 'relation';
  $handler->display->display_options['relationships']['relation_base_eb_reviewer_user_1']['field'] = 'relation_base_eb_reviewer_user';
  $handler->display->display_options['relationships']['relation_base_eb_reviewer_user_1']['required'] = 0;
  $handler->display->display_options['relationships']['relation_base_eb_reviewer_user_1']['r_index'] = '1';
  $handler->display->display_options['relationships']['relation_base_eb_reviewer_user_1']['entity_deduplication_right'] = 0;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'relation_base_eb_reviewer_user_1';
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
  /* Field: Relation: Status Selector (Form) */
  $handler->display->display_options['fields']['status_form']['id'] = 'status_form';
  $handler->display->display_options['fields']['status_form']['table'] = 'relation';
  $handler->display->display_options['fields']['status_form']['field'] = 'status_form';
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
  $handler->display->display_options['fields']['status_form']['status_field'] = 'field_eb_review_status';
  /* Field: Relation: Edit Relation */
  $handler->display->display_options['fields']['edit']['id'] = 'edit';
  $handler->display->display_options['fields']['edit']['table'] = 'relation';
  $handler->display->display_options['fields']['edit']['field'] = 'edit';
  $handler->display->display_options['fields']['edit']['label'] = '';
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
  $handler->display->display_options['fields']['edit']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['edit']['hide_empty'] = 0;
  $handler->display->display_options['fields']['edit']['empty_zero'] = 0;
  $handler->display->display_options['fields']['edit']['hide_alter_empty'] = 1;
  /* Field: Relation: Delete Relation */
  $handler->display->display_options['fields']['delete']['id'] = 'delete';
  $handler->display->display_options['fields']['delete']['table'] = 'relation';
  $handler->display->display_options['fields']['delete']['field'] = 'delete';
  $handler->display->display_options['fields']['delete']['label'] = '';
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
  $handler->display->display_options['fields']['delete']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['delete']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['delete']['hide_empty'] = 0;
  $handler->display->display_options['fields']['delete']['empty_zero'] = 0;
  $handler->display->display_options['fields']['delete']['hide_alter_empty'] = 1;
  /* Sort criterion: Relation: Status (field_eb_review_status) */
  $handler->display->display_options['sorts']['field_eb_review_status_value']['id'] = 'field_eb_review_status_value';
  $handler->display->display_options['sorts']['field_eb_review_status_value']['table'] = 'field_data_field_eb_review_status';
  $handler->display->display_options['sorts']['field_eb_review_status_value']['field'] = 'field_eb_review_status_value';
  /* Contextual filter: Relation: endpoints (endpoints:entity_id) */
  $handler->display->display_options['arguments']['endpoints_entity_id']['id'] = 'endpoints_entity_id';
  $handler->display->display_options['arguments']['endpoints_entity_id']['table'] = 'field_data_endpoints';
  $handler->display->display_options['arguments']['endpoints_entity_id']['field'] = 'endpoints_entity_id';
  $handler->display->display_options['arguments']['endpoints_entity_id']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['endpoints_entity_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['endpoints_entity_id']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['endpoints_entity_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['endpoints_entity_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['endpoints_entity_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['endpoints_entity_id']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['endpoints_entity_id']['not'] = 0;
  /* Filter criterion: Relation: Relation type */
  $handler->display->display_options['filters']['relation_type']['id'] = 'relation_type';
  $handler->display->display_options['filters']['relation_type']['table'] = 'relation';
  $handler->display->display_options['filters']['relation_type']['field'] = 'relation_type';
  $handler->display->display_options['filters']['relation_type']['value'] = array(
    'eb_reviewer' => 'eb_reviewer',
  );

  $views[$view->name] = $view;

  return $views;
}