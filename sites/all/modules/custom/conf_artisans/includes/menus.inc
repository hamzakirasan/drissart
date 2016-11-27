<?php

/**
 * Implements hook_menu().
 */
function conf_artisans_menu()
{
  $items = array();
  
  $items['save/check'] = array(
    'title' => t('save artisans'),
    'page callback' => 'drupal_get_form',
    'page arguments' => array('check_user'),
    'access arguments' => array('registre des artisans'),
    'expanded' => true,
    'access callback' => TRUE,
   );
    $items['add/artisans/%'] = array(
	'title' => t('Add artisans'),
	'page callback' => 'add_artisans',
	'page arguments'   => array(2),
        'access arguments' => array('registre des artisans'),
	'access callback' => TRUE,
    );
    $items['edit/artisans/%'] = array(
	'title' => t('Edit artisans'),
	'page callback' => 'edit_artisans',
	'page arguments'   => array(2),
        'access arguments' => array('registre des artisans'),
	'access callback' => TRUE,
    );
  return $items;
}

/**
 * Implements hook_permission().
*/
function conf_artisans_permission() {
    $perms = array(
	'registre des artisans ' => array(
            'title' => t('Registre des artisans'),
	),
    );
    return $perms;
}

function add_artisans($cin) {
    $content_type = 'artisan';
    module_load_include('inc', 'node', 'node.pages');
    $form = node_add($content_type);
    return theme('add_artisans', array('form' => $form));
    
}

function edit_artisans($nid) {
    $node= node_load($nid);
    require_once(drupal_get_path('module', 'node') . '/node.pages.inc');     
    $form = node_page_edit($node);   
    
    return theme('add_artisans', array('form' => $form));
}