<?php
/**
 * Delete link for relations
 */
class at_ebreview_handler_field_delete_relation extends views_handler_field {
  function construct() {
    parent::construct();
    $this->additional_fields['rid'] = 'rid';
  }

  function option_definition() {
    $options = parent::option_definition();
    $options['text'] = array('default' => 'Delete', 'translatable' => TRUE);
    return $options;
  }

  function options_form(&$form, &$form_state) {
    $form['text'] = array(
      '#type' => 'textfield',
      '#title' => t('Text to display'),
      '#default_value' => $this->options['text'],
    );
    parent::options_form($form, $form_state);
  }

  function query() {
    $this->ensure_my_table();
    $this->add_additional_fields();
  }

  function render($values) {
    $value = $this->get_value($values, 'rid');
    return $this->render_link($this->sanitize_value($value), $values);
  }

  function render_link($data, $values) {
    $text = !empty($this->options['text']) ? $this->options['text'] : t('Delete');

    $this->options['alter']['make_link'] = TRUE;
    $this->options['alter']['path'] = "relation/" . $data . "/delete?destination=" . $_GET['q'];

    return $text;
  }
}
