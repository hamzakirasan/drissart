<?php

function pdf_artisan() {
    global $user;
    $html2pdf =  variable_get('html2pdf');
    require_once($html2pdf . '/html2pdf.class.php');

    $args = arg();

    if (!empty($args[3])) {

        $node = node_load($args[3]);
        $articles = array();

        $content = theme('pdf_artisan',array('node' => $node));
    }

    $name = t('artisans_') . '_' . $args[3] . '.pdf';

    try {
    ob_start();
        $html2pdf = new HTML2PDF('P', 'A4', 'fr');
        $html2pdf->writeHTML($content);
        $html2pdf->Output($name, 'I');
    } catch (HTML2PDF_exception $e) {
        print_r($e);
    }

    drupal_exit();    
}