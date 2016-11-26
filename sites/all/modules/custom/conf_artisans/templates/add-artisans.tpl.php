<?php
  $content_type = 'artisan';
module_load_include('inc', 'node', 'node.pages');
$form = node_add($content_type);
print drupal_render($form);
    
?>
