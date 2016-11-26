<?php

/**
 * Implements hook_theme().
*/
function conf_artisans_theme() {
 return array(
    'block_header' => array(
      'template' => 'block-header',
      'path' => drupal_get_path('module', 'conf_artisans') . '/templates',
    ),
    'add_artisans' => array(
       'template' => 'add-artisans',
       'path' => drupal_get_path('module', 'conf_artisans') . '/templates',
       'type' => 'theme',
    ),
  );
}
