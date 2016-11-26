<?php
/**
 * Implements function _get_artisants
 */
function _get_artisants($cin) {

  $query = new EntityFieldQuery();
  $result = $query->entityCondition('entity_type', 'node')
              ->entityCondition('bundle', 'artisan')
              ->propertyCondition('status', 1)
              ->fieldCondition('field_artisan_cin', 'value', $cin)
              ->propertyOrderBy('changed', 'DESC')
              ->range(0, 1)
              ->execute();
  if (isset($result['node'])) {
    $news_items_nids = array_keys($result['node']);
    $news_items = node_load($news_items_nids[0]);
    return $news_items;
  }
  return false;
}
