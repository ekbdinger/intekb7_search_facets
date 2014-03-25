<?php
/**
 * @file
 * search_facets.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function search_facets_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'facet_forum';
  $context->description = '';
  $context->tag = 'Solr';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'search/*' => 'search/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'facetapi-rmLsZFdnrGSVSQd6lAHvMKksosIUhq8y' => array(
          'module' => 'facetapi',
          'delta' => 'rmLsZFdnrGSVSQd6lAHvMKksosIUhq8y',
          'region' => 'sidebar_first',
          'weight' => '-2',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Solr');
  $export['facet_forum'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'facet_version';
  $context->description = '';
  $context->tag = 'Solr';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'search/*' => 'search/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'facetapi-04haqXkFq9BX7f3r1q3184m9OexgMs5p' => array(
          'module' => 'facetapi',
          'delta' => '04haqXkFq9BX7f3r1q3184m9OexgMs5p',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Solr');
  $export['facet_version'] = $context;

  return $export;
}
