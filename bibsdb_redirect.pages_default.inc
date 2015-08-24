<?php
/**
 * @file
 * bibsdb_redirect.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function bibsdb_redirect_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_http_response';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'http_response';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'Bibsdb Redirect',
    'contexts' => array(),
    'relationships' => array(),
    'code' => '301',
    'destination' => '%node:field-bibsdb-redirect-link:url',
    'access' => array(
      'logic' => 'and',
      'plugins' => array(
        0 => array(
          'name' => 'php',
          'settings' => array(
            'description' => 'Has value in redirect link field',
            'php' => 'return !empty($contexts[\'argument_entity_id:node_1\']->data->field_bibsdb_redirect_link[\'und\'][0][\'url\']);
',
          ),
          'not' => FALSE,
        ),
      ),
    ),
  );
  $export['node_view_http_response'] = $handler;

  return $export;
}
