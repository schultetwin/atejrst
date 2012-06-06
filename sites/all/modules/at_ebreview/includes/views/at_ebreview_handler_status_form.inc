<?php
/**
 * Delete link for relations
 */
class at_ebreview_handler_status_form extends views_handler_field {

  var $status_name = 'eb_data_field_status';

  function init(&$view, &$options) {
    parent::init($view, $options);
    $field = field_info_field($options['status_field']);
    if (is_array($field)) {
      $this->additional_fields[$this->status_name] = array('table' => _field_sql_storage_tablename($field), 'field' => _field_sql_storage_columnname($field['field_name'], 'value'));
      $this->additional_fields['rid'] = 'rid';
    }
  }

  function option_definition() {
    $options = parent::option_definition();
    $options['status_field'] = array('default' => '');
    return $options;
  }

  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);

    $instances = field_info_instances('relation', 'eb_reviewers');
    foreach ($instances as $instance) {
      $field = field_info_field($instance['field_name']);
      if ($field['module'] == 'list') $fields[$instance['field_name']] = $instance['label'];
    }
    $form['status_field'] = array(
      '#title' => t('Field to edit'),
      '#type' => 'select',
      '#options' => $fields,
      '#default_value' => isset($this->options['field']) ? $this->options['field'] : '',
      '#required' => TRUE,
    );
  }
  function render($values) {
    return '<!--form-item-' . $this->options['id'] . '--' . $this->view->row_index . '-->';
  }

  function form_element_name() {
    // Make sure this value is unique for all the view fields
    return $this->options['id'];
  }

  function form_element_row_id($row_id) {
    // You could use values from $this->view->result[$row_id]
    // to provide complex row ids.
    return $row_id;
  }

  function views_form(&$form, &$form_state) {
    // The view is empty, abort.
    if (empty($this->view->result)) {
      return;
    }

    $form['#action'] = $this->view->get_url();
    $form['#prefix'] = '<div id="at-ebreview-ajax-change">';
    $form['#suffix'] = '</div>';

    $field = field_info_field($this->options['status_field']);
    $options = list_allowed_values($field);

    $field_name = $this->form_element_name();
    $form[$field_name] = array(
      '#tree' => TRUE,
    );
    // At this point, the query has already been run, so we can access the results
    foreach ($this->view->result as $row_id => $row) {
      $form_element_row_id = $this->form_element_row_id($row_id);
      $form[$field_name][$form_element_row_id]['status'] = array(
        '#type' => 'select',
        '#default_value' => $row->{$this->aliases[$this->status_name]},
        '#options' => $options,
        '#ajax' => array(
          'callback' => 'at_ebreview_ajax_change_status',
          'wrapper' => 'at-ebreview-ajax-change',
          'custom' => array(
            'rid' => $row->{$this->aliases['rid']},
            'field' => $this->options['status_field'],
          ),
        ),
      );
      $form[$field_name][$form_element_row_id]['rid'] = array('#type' => 'value', '#value' => $row->{$this->aliases['rid']});
      $form[$field_name][$form_element_row_id]['field_name'] = array('#type' => 'value', '#value' => $this->options['status_field']);
    }
  }

  function views_form_submit($form, &$form_state) {
    at_ebreview_ajax_change_status($form, $form_state);
  }
}
