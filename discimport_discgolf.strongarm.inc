<?php
/**
 * @file
 * discimport_discgolf.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function discimport_discgolf_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_discgolf';
  $strongarm->value = 0;
  $export['comment_anonymous_discgolf'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_discgolf';
  $strongarm->value = 1;
  $export['comment_default_mode_discgolf'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_discgolf';
  $strongarm->value = '50';
  $export['comment_default_per_page_discgolf'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_discgolf';
  $strongarm->value = '1';
  $export['comment_discgolf'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_discgolf';
  $strongarm->value = 1;
  $export['comment_form_location_discgolf'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_discgolf';
  $strongarm->value = '1';
  $export['comment_preview_discgolf'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_discgolf';
  $strongarm->value = 1;
  $export['comment_subject_field_discgolf'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__discgolf';
  $strongarm->value = array(
    'view_modes' => array(
      'full' => array(
        'custom_settings' => TRUE,
      ),
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'product_list' => array(
        'custom_settings' => TRUE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '8',
        ),
        'redirect' => array(
          'weight' => '9',
        ),
      ),
      'display' => array(
        'product:sku' => array(
          'default' => array(
            'weight' => '14',
            'visible' => FALSE,
          ),
          'full' => array(
            'weight' => '1',
            'visible' => FALSE,
          ),
          'product_list' => array(
            'weight' => '9',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '8',
            'visible' => FALSE,
          ),
        ),
        'product:title' => array(
          'default' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'full' => array(
            'weight' => '14',
            'visible' => FALSE,
          ),
          'product_list' => array(
            'weight' => '4',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
        ),
        'product:status' => array(
          'default' => array(
            'weight' => '15',
            'visible' => FALSE,
          ),
          'full' => array(
            'weight' => '15',
            'visible' => FALSE,
          ),
          'product_list' => array(
            'weight' => '15',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '15',
            'visible' => FALSE,
          ),
        ),
        'product:commerce_price' => array(
          'default' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
          'full' => array(
            'weight' => '3',
            'visible' => TRUE,
          ),
          'product_list' => array(
            'weight' => '2',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '2',
            'visible' => TRUE,
          ),
        ),
        'product:field_bag_size' => array(
          'default' => array(
            'weight' => '40',
            'visible' => TRUE,
          ),
          'full' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
          'product_list' => array(
            'weight' => '7',
            'visible' => FALSE,
          ),
        ),
        'product:field_color' => array(
          'default' => array(
            'weight' => '11',
            'visible' => TRUE,
          ),
          'full' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
          'product_list' => array(
            'weight' => '6',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '6',
            'visible' => TRUE,
          ),
        ),
        'product:field_images' => array(
          'default' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
          'full' => array(
            'weight' => '6',
            'visible' => TRUE,
          ),
          'product_list' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '3',
            'visible' => TRUE,
          ),
        ),
        'product:field_weight' => array(
          'default' => array(
            'weight' => '12',
            'visible' => TRUE,
          ),
          'full' => array(
            'weight' => '11',
            'visible' => FALSE,
          ),
          'product_list' => array(
            'weight' => '7',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '5',
            'visible' => TRUE,
          ),
        ),
        'product:field_plastic' => array(
          'default' => array(
            'weight' => '13',
            'visible' => TRUE,
          ),
          'full' => array(
            'weight' => '12',
            'visible' => FALSE,
          ),
          'product_list' => array(
            'weight' => '8',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '4',
            'visible' => TRUE,
          ),
        ),
        'product:field_hat_size' => array(
          'default' => array(
            'weight' => '40',
            'visible' => TRUE,
          ),
          'full' => array(
            'weight' => '12',
            'visible' => FALSE,
          ),
          'product_list' => array(
            'weight' => '6',
            'visible' => FALSE,
          ),
        ),
        'product:field_shoe_size' => array(
          'default' => array(
            'weight' => '40',
            'visible' => TRUE,
          ),
          'full' => array(
            'weight' => '11',
            'visible' => FALSE,
          ),
          'product_list' => array(
            'weight' => '4',
            'visible' => FALSE,
          ),
        ),
        'product:field_storage_capacity' => array(
          'default' => array(
            'weight' => '38',
            'visible' => TRUE,
          ),
          'full' => array(
            'weight' => '6',
            'visible' => FALSE,
          ),
          'product_list' => array(
            'weight' => '9',
            'visible' => FALSE,
          ),
        ),
        'product:field_top_size' => array(
          'default' => array(
            'weight' => '39',
            'visible' => TRUE,
          ),
          'full' => array(
            'weight' => '9',
            'visible' => FALSE,
          ),
          'product_list' => array(
            'weight' => '3',
            'visible' => FALSE,
          ),
        ),
        'product:commerce_stock' => array(
          'product_list' => array(
            'weight' => '3',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '7',
            'visible' => FALSE,
          ),
          'full' => array(
            'weight' => '7',
            'visible' => FALSE,
          ),
          'default' => array(
            'weight' => '9',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__discgolf'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_discgolf';
  $strongarm->value = '0';
  $export['language_content_type_discgolf'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_discgolf';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_discgolf'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_discgolf';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_discgolf'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_discgolf';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_discgolf'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_discgolf';
  $strongarm->value = '1';
  $export['node_preview_discgolf'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_discgolf';
  $strongarm->value = 0;
  $export['node_submitted_discgolf'] = $strongarm;

  return $export;
}
