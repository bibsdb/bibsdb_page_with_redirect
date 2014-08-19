<?php
/**
 * @file
 * bibsdb_page_with_redirect.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function bibsdb_page_with_redirect_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}
