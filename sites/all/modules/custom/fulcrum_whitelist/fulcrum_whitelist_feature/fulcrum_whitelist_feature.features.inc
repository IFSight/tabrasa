<?php
/**
 * @file
 * fulcrum_whitelist_feature.features.inc
 */

/**
 * Implements hook_views_api().
 */
function fulcrum_whitelist_feature_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_eck_bundle_info().
 */
function fulcrum_whitelist_feature_eck_bundle_info() {
  $items = array(
    'fulcrum_whitelist_fulcrum_whitelist' => array(
      'machine_name' => 'fulcrum_whitelist_fulcrum_whitelist',
      'entity_type' => 'fulcrum_whitelist',
      'name' => 'fulcrum_whitelist',
      'label' => 'Fulcrum Whitelist',
      'config' => array(),
    ),
  );
  return $items;
}

/**
 * Implements hook_eck_entity_type_info().
 */
function fulcrum_whitelist_feature_eck_entity_type_info() {
  $items = array(
    'fulcrum_whitelist' => array(
      'name' => 'fulcrum_whitelist',
      'label' => 'Fulcrum Whitelist',
      'properties' => array(
        'title' => array(
          'label' => 'Title',
          'type' => 'text',
          'behavior' => 'title',
        ),
        'uid' => array(
          'label' => 'Author',
          'type' => 'integer',
          'behavior' => 'author',
        ),
        'created' => array(
          'label' => 'Created',
          'type' => 'integer',
          'behavior' => 'created',
        ),
        'changed' => array(
          'label' => 'Changed',
          'type' => 'integer',
          'behavior' => 'changed',
        ),
      ),
    ),
  );
  return $items;
}
