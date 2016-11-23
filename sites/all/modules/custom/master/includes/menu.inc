<?php 


function master_menu(){

	$items['admin/artisan/pdf/%'] = array(
	    'title' => t("Fiche artisan"),
	    'page callback' => 'pdf_artisan',
	    'access callback' => 'user_is_logged_in',
	    'expanded' => true,
	    'type' => MENU_NORMAL_ITEM,
	 );
	 
	return $items;
}