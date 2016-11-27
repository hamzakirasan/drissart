<?php 
/**
 * Implements function _get_artisants
 */
	function get_enterprise_nid ($rasm) {
  		$query = new EntityFieldQuery();
  			$result = $query->entityCondition('entity_type', 'node')
              ->entityCondition('bundle', 'enterprise')
              ->fieldCondition('field_artisan_professionnel_rasm', 'value', $rasm)
              ->range(0, 1)
              ->execute();
		  if (isset($result['node'])) {
		    $nids = array_keys($result['node']);
		    return $nids[0];
		  }
		  return 0;
	} 

 ?>