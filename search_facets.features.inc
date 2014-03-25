<?php
/**
 * @file
 * search_facets.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function search_facets_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  list($module, $api) = func_get_args();
  if ($module == "facetapi" && $api == "facetapi_defaults") {
    return array("version" => "1");
  }
}
