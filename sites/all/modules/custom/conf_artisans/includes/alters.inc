<?php
function conf_artisans_preprocess_page(&$vars) {
    if (!path_is_admin(current_path())) {
       drupal_add_css(drupal_get_path('module', 'conf_artisans') . '/assets/css/style_front.css');
    }
}
/**
 * Implements hook_user_login().
 */
function conf_artisans_user_login(&$edit, $account) {
  // Don't redirect on password reset.
  $current_menu_item = menu_get_item();
  if ($current_menu_item['path'] == 'user/reset/%/%/%') {
    return;
  }
  // Redirect user to profile page after the login.
  $_GET['destination'] = 'save/check';
}

/**
 * Implement hook_form_alter
 */
function conf_artisans_form_alter(&$form, &$form_state, $form_id) {
  switch($form_id) {
    case 'artisan_node_form':
        $path = current_path();
        $path_alias = drupal_lookup_path('alias',$path);
        if (0 === strpos($path, 'add/artisans/')) {
            $form['field_artisan_cin']['und'][0]['value']['#value'] = filter_xss(arg(2));
        }
        
    break;
  }
}

/*
 * Implement hook_menu_alter
 */
function conf_artisans_menu_alter(&$items) {
  $items['user/register']['type'] = MENU_CALLBACK;
}