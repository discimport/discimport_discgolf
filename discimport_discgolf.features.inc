<?php
/**
 * @file
 * discimport_discgolf.features.inc
 */

/**
 * Implements hook_commerce_product_default_types().
 */
function discimport_discgolf_commerce_product_default_types() {
  $items = array(
    'golfdiscs' => array(
      'type' => 'golfdiscs',
      'name' => 'Golfdiscs',
      'description' => '<em>Golfdiscs</em> har både farve, plasttype og vægt.',
      'help' => '',
      'revision' => 1,
    ),
  );
  return $items;
}

/**
 * Implements hook_ctools_plugin_api().
 */
function discimport_discgolf_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "commerce_autosku" && $api == "autosku_pattern") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function discimport_discgolf_node_info() {
  $items = array(
    'discgolf' => array(
      'name' => t('Discgolf'),
      'base' => 'node_content',
      'description' => t('<em>Discgolf</em> indeholder produktvariationer med farve, plasttype og vægt.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
