<?php

/**
 * Implements admin_bankati().
 */
function admin_bankalik() {
  global $language;
  $langcode = $language->language;

  $form = [];

  //Home page configuration
  $form['home_page_console'] = array(
    '#type' => 'fieldset',
    '#title' => t('Home page configuration'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );
  $form['home_page_console']['bottom_configuration'] = array(
    '#type' => 'vertical_tabs',
    '#title' => t('Container'),
  );
  $form['home_page_console']['bottom_configuration'] = array(
    '#type' => 'vertical_tabs',
    '#title' => t('Container'),
  );
  $fields = array(
    'first_bottom_block' => array(
      'title' => t('First block description')
    ),
    'second_bottom_block' => array(
      'title' => t('Second block description')
    ),
    'third_bottom_block' => array(
      'title' => t('Third block description')
    )
  );
  $form['bottom_hp_block']['bottom_block'] = array(
    '#type' => 'fieldset',
    '#title' => t('Bottom block'),
    '#collapsible' => TRUE,
    '#group' => 'bottom_configuration',
  );

  $saved = variable_get('field_title_bottom_block_' . $langcode, '');
  $form['bottom_hp_block']['bottom_block']['field_title_bottom_block_' . $langcode] = array(
    '#type' => 'textfield',
    '#title' => t('Title'),
    '#default_value' => $saved,
    '#maxlength' => 120,
    '#size' => 60,
  );

  foreach ($fields as $key => $value) {
    $saved = variable_get('field_' . $key . '_' . $langcode, array('format' => 'plain_text', 'value' => ''));
    $form['bottom_hp_block']['bottom_block']['field_' . $key . '_' . $langcode] = array(
      '#type' => 'text_format',
      '#title' => $value['title'],
      '#rows' => 4,
      '#default_value' => $saved['value'],
      '#format' => 'full_html'
    );
  }

  if (!empty($form)) {
    $form = system_settings_form($form);
    $form['#submit'][] = 'admin_bankati_submit';

    return $form;
  }
  else {
    return;
  }
}

/**
 * Implements admin_fawatir_submit().
 * @author Ayoub KORKOT
 */
function admin_bankati_submit($form, &$form_state)
{
  drupal_flush_all_caches();
}