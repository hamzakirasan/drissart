<?php 
	function master_page_build(&$page) {
		$path = drupal_get_path('module', 'master');
		drupal_add_js($path . '/assets/js/script.js', array( 'type' => 'file', 'scope' => 'header', 'weight' => 1000 ));
	}
 ?>