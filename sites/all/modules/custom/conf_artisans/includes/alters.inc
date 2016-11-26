<?php

function conf_artisans_preprocess_page(&$vars) {
    if (!path_is_admin(current_path())) {
       drupal_add_css(drupal_get_path('module', 'conf_artisans') . '/assets/css/style_front.css');
    }
}

/**
 * Implements hook_user_login
 */
function conf_artisans_user_login(&$edit, $account) {
    drupal_goto('save/check');
}