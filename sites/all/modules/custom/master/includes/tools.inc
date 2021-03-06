<?php 
function render_value($node, $type='node',$field, $display = array('label'=>'inline', 'settings' => array('view_mode' => 'full')))
	{
		$f = field_view_field($type,$node,$field,$display);
		return render($f);
	}

function get_image_src($field,$style='large')
	{
		if (!empty($field['und'][0]['uri']))
		{
			$uri = image_style_url($style,$field['und'][0]['uri']);
		
		
		return $uri;
		}

		return '';
	}	

function render_term($node, $type='node',$field)
	{
		 $display = array(
		 	'label'=>'inline',
		  'settings' => array('view_mode' => 'full'));
		$f = field_view_field($type,$node,$field,$display);
		return render($f);

    }

function rt($tidArr) {
	$count = count($tidArr);
	if ($count > 0) {
			$names = "";
			foreach ($tidArr as $k => $v) {
				if ($k!=0) $names.=', ';
				$term = taxonomy_term_load($v['tid']);
				$names.=$term->name;
			}
			return $names;
	}
}

function rv($var)
{
    if (!empty($var['und'][0]['value'])) {
		return $var['und'][0]['value'];
	}
	return "";
}

function dumper($var,$die = true){
	if (!empty($var)) {
		print '<pre>';
		var_dump($var);
		print '</pre>';
		if ($die) die;
	}
}
