<?php

/**
 * Define the function ca_lessons_admin_settings_form().
 *
 * This function will create the admin settings page.
 */
function ca_lessons_admin_settings_form() {
  $form = array();

  $form['ca_lessons_list'] = array(
    '#type' => 'select',
    '#title' => t('Lesson\'s List Template'),
    '#options' => array(
      'ca_lessons_list_template_one' => t('Template One'),
      'ca_lessons_list_template_two' => t('Template Two'),
      'ca_lessons_list_template_three' => t('Template Three'),
    ),
    '#default_value' => variable_get('ca_lessons_list_template', 'ca_lessons_list_template_one'),
    '#required' => TRUE,
  );
  $form['ca_lessons_node'] = array(
    '#type' => 'select',
    '#title' => t('Lesson\'s Node Template'),
    '#options' => array(
      'ca_lessons_node_template_one' => t('Template One'),
      'ca_lessons_node_template_two' => t('Template Two'),
      'ca_lessons_node_template_three' => t('Template Three'),
    ),
    '#default_value' => variable_get('ca_lessons_node_template', 'ca_lessons_node_template_one'),
    '#required' => TRUE,
  );
  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save'),
    '#submit' => array('ca_lessons_admin_settings_form_submit'),
  );

  return $form;
}

/*
 * Define the function ca_lessons_admin_settings_form_submit().
 *
 * This function will save the admin settings page.
 */
function ca_lessons_admin_settings_form_submit($form, &$form_state) {
  variable_set('ca_lessons_list_template', $form_state['values']['ca_lessons_list']);
  variable_set('ca_lessons_node_template', $form_state['values']['ca_lessons_node']);
  drupal_set_message('Configuration has been saved.');
}
