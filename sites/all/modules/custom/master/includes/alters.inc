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
  	$form['actions']['submit']['#validate'][] = 'artisan_node_form_validate';
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

    if (!empty($p['rasm'])) {
    	$form['field_artisan_professionnel_rasm']["und"][0]['value']['#default_value'] = $p['rasm'];
    }

    if (!empty($p['id']) && intval($p['id']) != 0 ) {	
	    $form['artisan_id'] = array(
	    		'#type' => 'hidden',
	    		'#value' => $p['id'],
	    	);
    }
  }
}


function artisan_node_form_validate(&$form, &$form_state) {

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

		if (!empty($node->field_artisan_professionnel_rasm['und'][0]['value'])) {
			$query['rasm'] = $node->field_artisan_professionnel_rasm['und'][0]['value'];
			$enterprise_nid = get_enterprise_nid($node->field_artisan_professionnel_rasm['und'][0]['value']);


		}
		
		if (!empty($enterprise_nid)) {
			drupal_goto('node/'.$enterprise_nid.'/edit',array('query'=> $query));
		} else{
			drupal_goto('node/add/enterprise',array('query'=> $query));
		}

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

    if ($node->type == 'artisan') {
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

