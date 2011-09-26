<?php

/**
 * Implementation of hook_strongarm().
 */
function ca_lessons_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_ca_lessons';
  $strongarm->value = array(
    'title' => '-5',
    'body_field' => '-1',
    'revision_information' => '4',
    'author' => '3',
    'options' => '5',
    'menu' => '2',
    'taxonomy' => '-2',
    'path' => '6',
  );
  $export['content_extra_weights_ca_lessons'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_ca_lessons';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_ca_lessons'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_webform';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_webform'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ca_lessons_pattern';
  $strongarm->value = 'lessons/[title-raw]';
  $export['pathauto_node_ca_lessons_pattern'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_webform_pattern';
  $strongarm->value = '[title-raw]';
  $export['pathauto_node_webform_pattern'] = $strongarm;

  return $export;
}
