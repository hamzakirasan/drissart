<?php
/**
 * @file
 * vues.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function vues_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'artisan';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Artisan';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'شركة';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    2 => '2',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_artisan_firstname_ar' => 'field_artisan_firstname_ar',
    'field_artisan_lastname_ar' => 'field_artisan_lastname_ar',
    'field_artisan_birth_date' => 'field_artisan_birth_date',
    'field_artisan_address' => 'field_artisan_address',
    'field_artisan_email_address' => 'field_artisan_email_address',
    'field_artisan_type_activity' => 'field_artisan_type_activity',
    'nid' => 'nid',
    'delete_node' => 'delete_node',
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_artisan_firstname_ar' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_artisan_lastname_ar' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_artisan_birth_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_artisan_address' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_artisan_email_address' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_artisan_type_activity' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'delete_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No result fond.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Field: Content: First name */
  $handler->display->display_options['fields']['field_artisan_firstname_ar']['id'] = 'field_artisan_firstname_ar';
  $handler->display->display_options['fields']['field_artisan_firstname_ar']['table'] = 'field_data_field_artisan_firstname_ar';
  $handler->display->display_options['fields']['field_artisan_firstname_ar']['field'] = 'field_artisan_firstname_ar';
  /* Field: Content: Last name */
  $handler->display->display_options['fields']['field_artisan_lastname_ar']['id'] = 'field_artisan_lastname_ar';
  $handler->display->display_options['fields']['field_artisan_lastname_ar']['table'] = 'field_data_field_artisan_lastname_ar';
  $handler->display->display_options['fields']['field_artisan_lastname_ar']['field'] = 'field_artisan_lastname_ar';
  /* Field: Content: Birth date */
  $handler->display->display_options['fields']['field_artisan_birth_date']['id'] = 'field_artisan_birth_date';
  $handler->display->display_options['fields']['field_artisan_birth_date']['table'] = 'field_data_field_artisan_birth_date';
  $handler->display->display_options['fields']['field_artisan_birth_date']['field'] = 'field_artisan_birth_date';
  $handler->display->display_options['fields']['field_artisan_birth_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Address */
  $handler->display->display_options['fields']['field_artisan_address']['id'] = 'field_artisan_address';
  $handler->display->display_options['fields']['field_artisan_address']['table'] = 'field_data_field_artisan_address';
  $handler->display->display_options['fields']['field_artisan_address']['field'] = 'field_artisan_address';
  /* Field: Content: Email Address */
  $handler->display->display_options['fields']['field_artisan_email_address']['id'] = 'field_artisan_email_address';
  $handler->display->display_options['fields']['field_artisan_email_address']['table'] = 'field_data_field_artisan_email_address';
  $handler->display->display_options['fields']['field_artisan_email_address']['field'] = 'field_artisan_email_address';
  $handler->display->display_options['fields']['field_artisan_email_address']['type'] = 'email_plain';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'Imprimer';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = 'Imprimer';
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['path'] = 'admin/artisan/pdf/[nid]';
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = 'View';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Edit';
  $handler->display->display_options['fields']['edit_node']['alter']['text'] = 'artisan/edit/[nid]';
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = 'Delete';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'artisan' => 'artisan',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: First name (field_artisan_firstname_ar) */
  $handler->display->display_options['filters']['field_artisan_firstname_ar_value']['id'] = 'field_artisan_firstname_ar_value';
  $handler->display->display_options['filters']['field_artisan_firstname_ar_value']['table'] = 'field_data_field_artisan_firstname_ar';
  $handler->display->display_options['filters']['field_artisan_firstname_ar_value']['field'] = 'field_artisan_firstname_ar_value';
  $handler->display->display_options['filters']['field_artisan_firstname_ar_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_artisan_firstname_ar_value']['group'] = 1;
  $handler->display->display_options['filters']['field_artisan_firstname_ar_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_artisan_firstname_ar_value']['expose']['operator_id'] = 'field_artisan_firstname_ar_value_op';
  $handler->display->display_options['filters']['field_artisan_firstname_ar_value']['expose']['label'] = 'First name';
  $handler->display->display_options['filters']['field_artisan_firstname_ar_value']['expose']['operator'] = 'field_artisan_firstname_ar_value_op';
  $handler->display->display_options['filters']['field_artisan_firstname_ar_value']['expose']['identifier'] = 'field_artisan_firstname_ar_value';
  $handler->display->display_options['filters']['field_artisan_firstname_ar_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Last name (field_artisan_lastname_ar) */
  $handler->display->display_options['filters']['field_artisan_lastname_ar_value']['id'] = 'field_artisan_lastname_ar_value';
  $handler->display->display_options['filters']['field_artisan_lastname_ar_value']['table'] = 'field_data_field_artisan_lastname_ar';
  $handler->display->display_options['filters']['field_artisan_lastname_ar_value']['field'] = 'field_artisan_lastname_ar_value';
  $handler->display->display_options['filters']['field_artisan_lastname_ar_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_artisan_lastname_ar_value']['group'] = 1;
  $handler->display->display_options['filters']['field_artisan_lastname_ar_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_artisan_lastname_ar_value']['expose']['operator_id'] = 'field_artisan_lastname_ar_value_op';
  $handler->display->display_options['filters']['field_artisan_lastname_ar_value']['expose']['label'] = 'Last name';
  $handler->display->display_options['filters']['field_artisan_lastname_ar_value']['expose']['operator'] = 'field_artisan_lastname_ar_value_op';
  $handler->display->display_options['filters']['field_artisan_lastname_ar_value']['expose']['identifier'] = 'field_artisan_lastname_ar_value';
  $handler->display->display_options['filters']['field_artisan_lastname_ar_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: CIN (field_artisan_cin) */
  $handler->display->display_options['filters']['field_artisan_cin_value']['id'] = 'field_artisan_cin_value';
  $handler->display->display_options['filters']['field_artisan_cin_value']['table'] = 'field_data_field_artisan_cin';
  $handler->display->display_options['filters']['field_artisan_cin_value']['field'] = 'field_artisan_cin_value';
  $handler->display->display_options['filters']['field_artisan_cin_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_artisan_cin_value']['group'] = 1;
  $handler->display->display_options['filters']['field_artisan_cin_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_artisan_cin_value']['expose']['operator_id'] = 'field_artisan_cin_value_op';
  $handler->display->display_options['filters']['field_artisan_cin_value']['expose']['label'] = 'CIN';
  $handler->display->display_options['filters']['field_artisan_cin_value']['expose']['operator'] = 'field_artisan_cin_value_op';
  $handler->display->display_options['filters']['field_artisan_cin_value']['expose']['identifier'] = 'field_artisan_cin_value';
  $handler->display->display_options['filters']['field_artisan_cin_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Type of activity (field_artisan_type_activity) */
  $handler->display->display_options['filters']['field_artisan_type_activity_tid_1']['id'] = 'field_artisan_type_activity_tid_1';
  $handler->display->display_options['filters']['field_artisan_type_activity_tid_1']['table'] = 'field_data_field_artisan_type_activity';
  $handler->display->display_options['filters']['field_artisan_type_activity_tid_1']['field'] = 'field_artisan_type_activity_tid';
  $handler->display->display_options['filters']['field_artisan_type_activity_tid_1']['value'] = array(
    9 => '9',
  );
  $handler->display->display_options['filters']['field_artisan_type_activity_tid_1']['type'] = 'select';
  $handler->display->display_options['filters']['field_artisan_type_activity_tid_1']['vocabulary'] = 'type_of_activity';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'عمل فردي';
  $handler->display->display_options['path'] = 'artisans/mono-artisan';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'artisan' => 'artisan',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: First name (field_artisan_firstname_ar) */
  $handler->display->display_options['filters']['field_artisan_firstname_ar_value']['id'] = 'field_artisan_firstname_ar_value';
  $handler->display->display_options['filters']['field_artisan_firstname_ar_value']['table'] = 'field_data_field_artisan_firstname_ar';
  $handler->display->display_options['filters']['field_artisan_firstname_ar_value']['field'] = 'field_artisan_firstname_ar_value';
  $handler->display->display_options['filters']['field_artisan_firstname_ar_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_artisan_firstname_ar_value']['group'] = 1;
  $handler->display->display_options['filters']['field_artisan_firstname_ar_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_artisan_firstname_ar_value']['expose']['operator_id'] = 'field_artisan_firstname_ar_value_op';
  $handler->display->display_options['filters']['field_artisan_firstname_ar_value']['expose']['label'] = 'First name';
  $handler->display->display_options['filters']['field_artisan_firstname_ar_value']['expose']['operator'] = 'field_artisan_firstname_ar_value_op';
  $handler->display->display_options['filters']['field_artisan_firstname_ar_value']['expose']['identifier'] = 'field_artisan_firstname_ar_value';
  $handler->display->display_options['filters']['field_artisan_firstname_ar_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Last name (field_artisan_lastname_ar) */
  $handler->display->display_options['filters']['field_artisan_lastname_ar_value']['id'] = 'field_artisan_lastname_ar_value';
  $handler->display->display_options['filters']['field_artisan_lastname_ar_value']['table'] = 'field_data_field_artisan_lastname_ar';
  $handler->display->display_options['filters']['field_artisan_lastname_ar_value']['field'] = 'field_artisan_lastname_ar_value';
  $handler->display->display_options['filters']['field_artisan_lastname_ar_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_artisan_lastname_ar_value']['group'] = 1;
  $handler->display->display_options['filters']['field_artisan_lastname_ar_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_artisan_lastname_ar_value']['expose']['operator_id'] = 'field_artisan_lastname_ar_value_op';
  $handler->display->display_options['filters']['field_artisan_lastname_ar_value']['expose']['label'] = 'Last name';
  $handler->display->display_options['filters']['field_artisan_lastname_ar_value']['expose']['operator'] = 'field_artisan_lastname_ar_value_op';
  $handler->display->display_options['filters']['field_artisan_lastname_ar_value']['expose']['identifier'] = 'field_artisan_lastname_ar_value';
  $handler->display->display_options['filters']['field_artisan_lastname_ar_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: CIN (field_artisan_cin) */
  $handler->display->display_options['filters']['field_artisan_cin_value']['id'] = 'field_artisan_cin_value';
  $handler->display->display_options['filters']['field_artisan_cin_value']['table'] = 'field_data_field_artisan_cin';
  $handler->display->display_options['filters']['field_artisan_cin_value']['field'] = 'field_artisan_cin_value';
  $handler->display->display_options['filters']['field_artisan_cin_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_artisan_cin_value']['group'] = 1;
  $handler->display->display_options['filters']['field_artisan_cin_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_artisan_cin_value']['expose']['operator_id'] = 'field_artisan_cin_value_op';
  $handler->display->display_options['filters']['field_artisan_cin_value']['expose']['label'] = 'CIN';
  $handler->display->display_options['filters']['field_artisan_cin_value']['expose']['operator'] = 'field_artisan_cin_value_op';
  $handler->display->display_options['filters']['field_artisan_cin_value']['expose']['identifier'] = 'field_artisan_cin_value';
  $handler->display->display_options['filters']['field_artisan_cin_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Type of activity (field_artisan_type_activity) */
  $handler->display->display_options['filters']['field_artisan_type_activity_tid']['id'] = 'field_artisan_type_activity_tid';
  $handler->display->display_options['filters']['field_artisan_type_activity_tid']['table'] = 'field_data_field_artisan_type_activity';
  $handler->display->display_options['filters']['field_artisan_type_activity_tid']['field'] = 'field_artisan_type_activity_tid';
  $handler->display->display_options['filters']['field_artisan_type_activity_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_artisan_type_activity_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_artisan_type_activity_tid']['expose']['operator_id'] = 'field_artisan_type_activity_tid_op';
  $handler->display->display_options['filters']['field_artisan_type_activity_tid']['expose']['label'] = 'Type of activity';
  $handler->display->display_options['filters']['field_artisan_type_activity_tid']['expose']['operator'] = 'field_artisan_type_activity_tid_op';
  $handler->display->display_options['filters']['field_artisan_type_activity_tid']['expose']['identifier'] = 'field_artisan_type_activity_tid';
  $handler->display->display_options['filters']['field_artisan_type_activity_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_artisan_type_activity_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_artisan_type_activity_tid']['vocabulary'] = 'type_of_activity';
  /* Filter criterion: Content: Type of activity (field_artisan_type_activity) */
  $handler->display->display_options['filters']['field_artisan_type_activity_tid_1']['id'] = 'field_artisan_type_activity_tid_1';
  $handler->display->display_options['filters']['field_artisan_type_activity_tid_1']['table'] = 'field_data_field_artisan_type_activity';
  $handler->display->display_options['filters']['field_artisan_type_activity_tid_1']['field'] = 'field_artisan_type_activity_tid';
  $handler->display->display_options['filters']['field_artisan_type_activity_tid_1']['value'] = array(
    12 => '12',
  );
  $handler->display->display_options['filters']['field_artisan_type_activity_tid_1']['type'] = 'select';
  $handler->display->display_options['filters']['field_artisan_type_activity_tid_1']['vocabulary'] = 'type_of_activity';
  $handler->display->display_options['path'] = 'artisans/enterprise';

  /* Display: Page 2 */
  $handler = $view->new_display('page', 'Page 2', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'عمل عائلي';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'artisan' => 'artisan',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: First name (field_artisan_firstname_ar) */
  $handler->display->display_options['filters']['field_artisan_firstname_ar_value']['id'] = 'field_artisan_firstname_ar_value';
  $handler->display->display_options['filters']['field_artisan_firstname_ar_value']['table'] = 'field_data_field_artisan_firstname_ar';
  $handler->display->display_options['filters']['field_artisan_firstname_ar_value']['field'] = 'field_artisan_firstname_ar_value';
  $handler->display->display_options['filters']['field_artisan_firstname_ar_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_artisan_firstname_ar_value']['group'] = 1;
  $handler->display->display_options['filters']['field_artisan_firstname_ar_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_artisan_firstname_ar_value']['expose']['operator_id'] = 'field_artisan_firstname_ar_value_op';
  $handler->display->display_options['filters']['field_artisan_firstname_ar_value']['expose']['label'] = 'First name';
  $handler->display->display_options['filters']['field_artisan_firstname_ar_value']['expose']['operator'] = 'field_artisan_firstname_ar_value_op';
  $handler->display->display_options['filters']['field_artisan_firstname_ar_value']['expose']['identifier'] = 'field_artisan_firstname_ar_value';
  $handler->display->display_options['filters']['field_artisan_firstname_ar_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Last name (field_artisan_lastname_ar) */
  $handler->display->display_options['filters']['field_artisan_lastname_ar_value']['id'] = 'field_artisan_lastname_ar_value';
  $handler->display->display_options['filters']['field_artisan_lastname_ar_value']['table'] = 'field_data_field_artisan_lastname_ar';
  $handler->display->display_options['filters']['field_artisan_lastname_ar_value']['field'] = 'field_artisan_lastname_ar_value';
  $handler->display->display_options['filters']['field_artisan_lastname_ar_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_artisan_lastname_ar_value']['group'] = 1;
  $handler->display->display_options['filters']['field_artisan_lastname_ar_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_artisan_lastname_ar_value']['expose']['operator_id'] = 'field_artisan_lastname_ar_value_op';
  $handler->display->display_options['filters']['field_artisan_lastname_ar_value']['expose']['label'] = 'Last name';
  $handler->display->display_options['filters']['field_artisan_lastname_ar_value']['expose']['operator'] = 'field_artisan_lastname_ar_value_op';
  $handler->display->display_options['filters']['field_artisan_lastname_ar_value']['expose']['identifier'] = 'field_artisan_lastname_ar_value';
  $handler->display->display_options['filters']['field_artisan_lastname_ar_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: CIN (field_artisan_cin) */
  $handler->display->display_options['filters']['field_artisan_cin_value']['id'] = 'field_artisan_cin_value';
  $handler->display->display_options['filters']['field_artisan_cin_value']['table'] = 'field_data_field_artisan_cin';
  $handler->display->display_options['filters']['field_artisan_cin_value']['field'] = 'field_artisan_cin_value';
  $handler->display->display_options['filters']['field_artisan_cin_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_artisan_cin_value']['group'] = 1;
  $handler->display->display_options['filters']['field_artisan_cin_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_artisan_cin_value']['expose']['operator_id'] = 'field_artisan_cin_value_op';
  $handler->display->display_options['filters']['field_artisan_cin_value']['expose']['label'] = 'CIN';
  $handler->display->display_options['filters']['field_artisan_cin_value']['expose']['operator'] = 'field_artisan_cin_value_op';
  $handler->display->display_options['filters']['field_artisan_cin_value']['expose']['identifier'] = 'field_artisan_cin_value';
  $handler->display->display_options['filters']['field_artisan_cin_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Type of activity (field_artisan_type_activity) */
  $handler->display->display_options['filters']['field_artisan_type_activity_tid']['id'] = 'field_artisan_type_activity_tid';
  $handler->display->display_options['filters']['field_artisan_type_activity_tid']['table'] = 'field_data_field_artisan_type_activity';
  $handler->display->display_options['filters']['field_artisan_type_activity_tid']['field'] = 'field_artisan_type_activity_tid';
  $handler->display->display_options['filters']['field_artisan_type_activity_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_artisan_type_activity_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_artisan_type_activity_tid']['expose']['operator_id'] = 'field_artisan_type_activity_tid_op';
  $handler->display->display_options['filters']['field_artisan_type_activity_tid']['expose']['label'] = 'Type of activity';
  $handler->display->display_options['filters']['field_artisan_type_activity_tid']['expose']['operator'] = 'field_artisan_type_activity_tid_op';
  $handler->display->display_options['filters']['field_artisan_type_activity_tid']['expose']['identifier'] = 'field_artisan_type_activity_tid';
  $handler->display->display_options['filters']['field_artisan_type_activity_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_artisan_type_activity_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_artisan_type_activity_tid']['vocabulary'] = 'type_of_activity';
  /* Filter criterion: Content: Type of activity (field_artisan_type_activity) */
  $handler->display->display_options['filters']['field_artisan_type_activity_tid_1']['id'] = 'field_artisan_type_activity_tid_1';
  $handler->display->display_options['filters']['field_artisan_type_activity_tid_1']['table'] = 'field_data_field_artisan_type_activity';
  $handler->display->display_options['filters']['field_artisan_type_activity_tid_1']['field'] = 'field_artisan_type_activity_tid';
  $handler->display->display_options['filters']['field_artisan_type_activity_tid_1']['value'] = array(
    10 => '10',
  );
  $handler->display->display_options['filters']['field_artisan_type_activity_tid_1']['type'] = 'select';
  $handler->display->display_options['filters']['field_artisan_type_activity_tid_1']['vocabulary'] = 'type_of_activity';
  $handler->display->display_options['path'] = 'artisans/family-business';

  /* Display: Page 3 */
  $handler = $view->new_display('page', 'Page 3', 'page_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'تعاونية';
  $handler->display->display_options['path'] = 'artisans/collaborative';
  $translatables['artisan'] = array(
    t('Master'),
    t('شركة'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('No result fond.'),
    t('First name'),
    t('Last name'),
    t('Birth date'),
    t('Address'),
    t('Email Address'),
    t('Imprimer'),
    t('View'),
    t('Edit'),
    t('artisan/edit/[nid]'),
    t('Delete'),
    t('CIN'),
    t('Page'),
    t('عمل فردي'),
    t('Type of activity'),
    t('Page 2'),
    t('عمل عائلي'),
    t('Page 3'),
    t('تعاونية'),
  );
  $export['artisan'] = $view;

  return $export;
}
