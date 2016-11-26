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
    'type' => MENU_NORMAL_ITEM,
   );
    $items['add/artisans/%'] = array(
	'title' => t('Add artisans'),
	'page callback' => 'add_artisans',
	'page arguments'   => array(2),
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
  $cin = '123';
  return theme('add_artisans', array('cin' => $cin));
}