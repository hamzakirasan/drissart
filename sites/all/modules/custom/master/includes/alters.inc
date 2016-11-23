<?php 

function master_init() {
	global $user;

	// if (!$user->uid && arg(0) != "user") {
	// 	drupal_set_message("Access Denied: Please Login");
	// 	$dest = drupal_get_destination();
	// 	drupal_goto('user', array('query' => $dest));
	// }
}

function master_menu_alter(&$items){
	unset($items['user/password']['access callback']);
}

function master_form_alter(&$form, &$form_state, $form_id) {
 if($form_id == 'artisan_node_form') {
    unset($form['title']);
  }
}