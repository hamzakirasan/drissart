<?php

/**
 * Implement hook_block_info
 */
function conf_artisans_block_info() {
  $blocks = array();
  $blocks['conf_artisans_header'] = array(
    'info' => t('header'),
    'status' => 1,
    'region' => '-1',
    'cache' => DRUPAL_NO_CACHE
  );
  $blocks['conf_artisans_bottom'] = array(
    'info' => t('Footer'),
    'status' => 1,
    'region' => '-1',
    'cache' => DRUPAL_NO_CACHE
  );
  return $blocks;
}

/**
 * Implement hook_block_view
 */

function conf_artisans_block_view($delta = '') {
  $block = array();
  switch ($delta) {
    case 'conf_artisans_header':
      $block['content'] = _conf_artisans_block_header();
      break;
    case 'conf_artisans_bottom':
      $block['content'] = _conf_artisans_block_footer();
      break;
  }
  return $block;
}

/**
 * Implements hook_block_configure().
 */
function conf_artisans_block_configure($delta='') {
  global $language;
  $langcode = $language->language;
  $form = array();
  switch($delta) {
    case 'conf_artisans_header' :
      $form['text_body'] = array(
        '#type' => 'text_format',
        '#title' => t('Description'),
        '#default_value' => variable_get('block_header_' . $langcode, ''),
        '#format' => 'full_html',
      );

      break;
  }
  return $form;
}
/**
 * Implements hook_block_save().
 */
function conf_artisans_block_save($delta = '', $edit = array()) {
  global $language;
  $langcode = $language->language;
  switch($delta) {
    case 'conf_artisans_header' :
      variable_set('block_header_' . $langcode, $edit['text_body']['value']);;
      break;
  }
}
/**
 * Implement function contact_title_content
 */
function _conf_artisans_block_header()
{
  global $language;
  $langcode = $language->language;
  $block = array();
  // Capture WYSIWYG text from the variable
  $text = variable_get('block_header_' . $langcode, '');

  // Block output in HTML with div wrapper
  return theme('block_header', array('body' => $text));
}
/**
 * Implement function contact_title_content
 */
function _conf_artisans_block_footer()
{
    
}