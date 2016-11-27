<?php
/**
 * @file
 * content_type.features.conditional_fields.inc
 */

/**
 * Implements hook_conditional_fields_default_fields().
 */
function content_type_conditional_fields_default_fields() {
  $items = array();

  $items["node:artisan:0"] = array(
    'entity' => 'node',
    'bundle' => 'artisan',
    'dependent' => 'field_artisan_date_begin_work',
    'dependee' => 'field_artisan_type_activity',
    'options' => array(
      'state' => '!visible',
      'condition' => 'value',
      'grouping' => 'AND',
      'effect' => 'show',
      'effect_options' => array(),
      'element_view' => array(
        1 => 1,
        2 => 2,
        5 => 0,
        3 => 0,
        4 => 0,
      ),
      'element_view_per_role' => 0,
      'element_view_roles' => array(
        1 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        2 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        3 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
      ),
      'element_edit' => array(
        1 => 1,
        3 => 0,
      ),
      'element_edit_per_role' => 0,
      'element_edit_roles' => array(
        1 => array(
          1 => 1,
          3 => 0,
        ),
        2 => array(
          1 => 1,
          3 => 0,
        ),
        3 => array(
          1 => 1,
          3 => 0,
        ),
      ),
      'selector' => '',
      'values_set' => 1,
      'value_form' => 9,
      'value' => array(
        0 => array(
          'tid' => 9,
        ),
      ),
      'values' => array(),
    ),
  );

  $items["node:artisan:1"] = array(
    'entity' => 'node',
    'bundle' => 'artisan',
    'dependent' => 'field_artisan_responsibility',
    'dependee' => 'field_artisan_type_activity',
    'options' => array(
      'state' => '!visible',
      'condition' => 'value',
      'grouping' => 'AND',
      'effect' => 'show',
      'effect_options' => array(),
      'element_view' => array(
        1 => 1,
        2 => 2,
        5 => 0,
        3 => 0,
        4 => 0,
      ),
      'element_view_per_role' => 0,
      'element_view_roles' => array(
        1 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        2 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        3 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
      ),
      'element_edit' => array(
        1 => 1,
        3 => 0,
      ),
      'element_edit_per_role' => 0,
      'element_edit_roles' => array(
        1 => array(
          1 => 1,
          3 => 0,
        ),
        2 => array(
          1 => 1,
          3 => 0,
        ),
        3 => array(
          1 => 1,
          3 => 0,
        ),
      ),
      'selector' => '',
      'values_set' => 1,
      'value_form' => 9,
      'value' => array(
        0 => array(
          'tid' => 9,
        ),
      ),
      'values' => array(),
    ),
  );

  return $items;
}
