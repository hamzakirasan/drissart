<?php
/**
 * @file
 * content_type.features.inc
 */

/**
 * Implements hook_node_info().
 */
function content_type_node_info() {
  $items = array(
    'artisan' => array(
      'name' => t('Artisan'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'enterprise' => array(
      'name' => t('Enterprise'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Titre'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
