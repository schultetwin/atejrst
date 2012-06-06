<?php
/**
 * @file
 * at_eb_reviewer.relation_type_default.inc
 */

/**
 * Implements hook_relation_default_relation_types().
 */
function at_eb_reviewer_relation_default_relation_types() {
  $export = array();

  $relation_type = new stdClass();
  $relation_type->disabled = FALSE; /* Edit this to true to make a default relation_type disabled initially */
  $relation_type->api_version = 1;
  $relation_type->relation_type = 'eb_reviewers';
  $relation_type->label = 'EB Reviewer';
  $relation_type->reverse_label = 'Assigned Manuscript';
  $relation_type->directional = 1;
  $relation_type->transitive = 0;
  $relation_type->r_unique = 1;
  $relation_type->min_arity = 2;
  $relation_type->max_arity = 2;
  $relation_type->source_bundles = array(
    0 => 'node:manuscript',
  );
  $relation_type->target_bundles = array(
    0 => 'user:user',
  );
  $export['eb_reviewers'] = $relation_type;

  return $export;
}
