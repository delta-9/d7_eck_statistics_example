<?php
/**
 * @file
 * statistics.features.inc
 */

/**
 * Implements hook_eck_bundle_info().
 */
function statistics_eck_bundle_info() {
  $items = array(
    'statistics_recipe_view' => array(
      'machine_name' => 'statistics_recipe_view',
      'entity_type' => 'statistics',
      'name' => 'recipe_view',
      'label' => 'Recipe view',
      'config' => array(
        'managed_properties' => array(
          'uid' => 0,
          'created' => 0,
          'changed' => 0,
          'account' => 0,
          'entity' => 0,
          'count' => 0,
        ),
      ),
    ),
  );
  return $items;
}

/**
 * Implements hook_eck_entity_type_info().
 */
function statistics_eck_entity_type_info() {
  $items = array(
    'statistics' => array(
      'name' => 'statistics',
      'label' => 'Statistics',
      'properties' => array(
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
        'entity' => array(
          'label' => 'Entity ID',
          'type' => 'integer',
          'behavior' => 'entity_id',
        ),
        'count' => array(
          'label' => 'View count',
          'type' => 'integer',
          'behavior' => 'integer',
        ),
        'sid' => array(
          'label' => 'Session API ID',
          'type' => 'integer',
          'behavior' => 'integer',
        ),
      ),
    ),
  );
  return $items;
}
