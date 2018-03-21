<?php
/**
 * @file
 * fulcrum_whitelist_feature.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function fulcrum_whitelist_feature_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance:
  // 'fulcrum_whitelist-fulcrum_whitelist-field_fulcrum_whitelist_status'.
  $field_instances['fulcrum_whitelist-fulcrum_whitelist-field_fulcrum_whitelist_status'] = array(
    'bundle' => 'fulcrum_whitelist',
    'default_value' => array(
      0 => array(
        'value' => 1,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'fulcrum_whitelist',
    'field_name' => 'field_fulcrum_whitelist_status',
    'label' => 'Status',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'fulcrum_whitelist-fulcrum_whitelist-field_fulcrum_whitelist_user'.
  $field_instances['fulcrum_whitelist-fulcrum_whitelist-field_fulcrum_whitelist_user'] = array(
    'bundle' => 'fulcrum_whitelist',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'fulcrum_whitelist',
    'field_name' => 'field_fulcrum_whitelist_user',
    'label' => 'User',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 4,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Status');
  t('User');

  return $field_instances;
}
