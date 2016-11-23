<?php 
 
function master_theme() {
    return array(
        'pdf_artisan' => array(
            'template' => 'pdf-artisan',
            'path' => drupal_get_path('module', 'master') . '/templates',
        ),
    );
}