<?php 

function master_init() {
	global $user;

	// if (!$user->uid && arg(0) != "user") {
	// 	drupal_set_message("Access Denied: Please Login");
	// 	$dest = drupal_get_destination();
	// 	drupal_goto('user', array('query' => $dest));
	// }
}


/**
 * Implements menu_alter().
 */
function master_menu_alter(&$items){
	unset($items['user/password']['access callback']);
}

/**
 * Implements form_alter().
 */
function master_form_alter(&$form, &$form_state, $form_id) {
 if($form_id == 'artisan_node_form') {
    unset($form['title']);
  }
  elseif($form_id == 'enterprise_node_form') {
    unset($form['title']);
    $p = drupal_get_query_parameters();

    if (!empty($p['tid']) && intval($p['tid']) != 0 ) {	
    	if ($p['tid'] == 9) {
    		unset($form['field_artisan_license_number']);
    		unset($form['field_artisan_the_licensed']);
    	}
    }

    if (!empty($p['id']) && intval($p['id']) != 0 ) {	
	    $form['artisan_id'] = array(
	    		'#type' => 'hidden',
	    		'#value' => $p['id'],
	    	);
    }
  }
}

/**
 * Implements hook_insert().
 */
function master_node_insert($node) {
    if ($node->type == 'artisan') {
		$path['source'] = 'node/'.$node->nid.'/edit';
		$path['alias'] = 'artisan/edit/'.$node->nid;
		path_save($path);

		if (!empty($node->nid)) {
		 	$query['id'] = $node->nid;
		}

		if (!empty($node->field_artisan_type_activity['und'][0]['tid'])) {
		 	$query['tid'] = $node->field_artisan_type_activity['und'][0]['tid'];
		}
		 
		drupal_goto('node/add/enterprise',array('query'=> $query));
    }
    elseif ($node->type == 'enterprise') {
		$path['source'] = 'node/'.$node->nid.'/edit';
		$path['alias'] = 'enterprise/edit/'.$node->nid;
		path_save($path);
    }
}


/**
 * Implements hook_presave().
 */
function master_node_presave($node) {
    if ($node->type == 'enterprise') {
    	if (!empty($node->artisan_id) && intval($node->artisan_id) != 0) {
	    	$node->field_artisans['und'][] = array('nid'=>$node->artisan_id) ;
    	}
    }

    if ($node->type == 'enterprise') {
    	$title = '';
    	if (!empty($node->field_artisan_firstname_fr['und'][0]['value'])) {
	    	$title .= $node->field_artisan_firstname_fr['und'][0]['value'].' ';
    	}
    	if (!empty($node->field_artisan_lastname_fr['und'][0]['value'])) {
	    	$title .= $node->field_artisan_lastname_fr['und'][0]['value'];
    	}
    	$title = trim($title);
    	$node->title = $title;
    }
}

