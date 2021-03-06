<?php
/**
 * @file
 * search_facets.facetapi_defaults.inc
 */

/**
 * Implements hook_facetapi_default_facet_settings().
 */
function search_facets_facetapi_default_facet_settings() {
  $export = array();

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_1::im_taxonomy_forums';
  $facet->searcher = 'apachesolr@acquia_search_server_1';
  $facet->realm = '';
  $facet->facet = 'im_taxonomy_forums';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'and',
    'hard_limit' => '50',
    'dependencies' => array(
      'bundle' => 'selected',
      'bundle_selected' => array(
        'forum' => 'forum',
        'addit_content' => 0,
        'ba_doc' => 0,
        'ba_news' => 0,
        'csc' => 0,
        'csc_how_to' => 0,
        'csc_meeting_notes' => 0,
        'csc_service_alerts' => 0,
        'priv_documentation' => 0,
        'documentation_team' => 0,
        'file' => 0,
        'interface_files' => 0,
        'internal' => 0,
        'item_key' => 0,
        'multichoice' => 0,
        'story' => 0,
        'pm_doc' => 0,
        'pm_news' => 0,
        'ppic_program' => 0,
        'page' => 0,
        'panel' => 0,
        'primary_page_content' => 0,
        'quiz' => 0,
        'support_news' => 0,
        'train_supp_issue' => 0,
        'truefalse' => 0,
        'video_embed' => 0,
        'webform' => 0,
      ),
      'roles' => array(
        3 => '3',
        48 => '48',
        1 => 0,
        23 => 0,
        2 => 0,
        21 => 0,
        36 => 0,
        43 => 0,
        39 => 0,
        25 => 0,
        46 => 0,
        9 => 0,
        31 => 0,
        19 => 0,
        14 => 0,
        15 => 0,
        13 => 0,
        5 => 0,
        22 => 0,
        12 => 0,
        30 => 0,
        38 => 0,
        11 => 0,
        42 => 0,
        40 => 0,
        29 => 0,
        32 => 0,
        35 => 0,
        41 => 0,
        28 => 0,
        16 => 0,
        45 => 0,
        27 => 0,
        24 => 0,
        37 => 0,
        26 => 0,
        34 => 0,
        18 => 0,
        17 => 0,
        33 => 0,
        44 => 0,
        20 => 0,
        7 => 0,
        8 => 0,
        47 => 0,
        49 => 0,
        50 => 0,
        51 => 0,
        52 => 0,
        53 => 0,
        54 => 0,
        55 => 0,
        56 => 0,
      ),
    ),
    'facet_mincount' => '1',
    'facet_missing' => 0,
    'flatten' => '0',
    'query_type' => 'term',
  );
  $export['apachesolr@acquia_search_server_1::im_taxonomy_forums'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@acquia_search_server_1:block:dm_field_doc_date';
  $facet->searcher = 'apachesolr@acquia_search_server_1';
  $facet->realm = 'block';
  $facet->facet = 'dm_field_doc_date';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['apachesolr@acquia_search_server_1:block:dm_field_doc_date'] = $facet;

  return $export;
}
