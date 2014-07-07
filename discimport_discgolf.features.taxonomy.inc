<?php
/**
 * @file
 * discimport_discgolf.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function discimport_discgolf_taxonomy_default_vocabularies() {
  return array(
    'discountgroup' => array(
      'name' => 'Discount group',
      'machine_name' => 'discountgroup',
      'description' => 'Group products together - mainly for discount purposes.',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
    'niveau' => array(
      'name' => 'Niveau',
      'machine_name' => 'niveau',
      'description' => 'Level of expertice',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
    'plastic' => array(
      'name' => 'Plastic',
      'machine_name' => 'plastic',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
    'weight' => array(
      'name' => 'Weight',
      'machine_name' => 'weight',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
  );
}
