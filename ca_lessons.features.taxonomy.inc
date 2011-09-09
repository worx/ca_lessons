<?php

/**
 * Implementation of hook_taxonomy_default_vocabularies().
 */
function ca_lessons_taxonomy_default_vocabularies() {
  return array(
    'ca_lessons_category' => array(
      'name' => 'Category',
      'description' => '',
      'help' => '',
      'relations' => '1',
      'hierarchy' => '0',
      'multiple' => '0',
      'required' => '0',
      'tags' => '1',
      'module' => 'features_ca_lessons_category',
      'weight' => '0',
      'nodes' => array(
        'ca_lessons' => 'ca_lessons',
      ),
    ),
  );
}
