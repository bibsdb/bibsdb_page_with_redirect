<?php
/**
 * @file
 * bibsdb_page_with_redirect.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function bibsdb_page_with_redirect_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-ding_page-field_bibsdb_redirect_url'
  $field_instances['node-ding_page-field_bibsdb_redirect_url'] = array(
    'bundle' => 'ding_page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'If a valid URL is entered in this field, the page view will be replaced by a redirect to this URL.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser_highlight' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_bibsdb_redirect_url',
    'label' => 'Redirect URL',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 150,
      ),
      'type' => 'text_textfield',
      'weight' => 11,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('If a valid URL is entered in this field, the page view will be replaced by a redirect to this URL.');
  t('Redirect URL');

  return $field_instances;
}
