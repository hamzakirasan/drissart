<?php

  /**
   * Implements hook_form_alter().
   */
  function check_user($form, &$form_state) {
    $form = array();
    $form['container'] = array(
      '#type' => 'container',
      '#attributes' => array('class' => array('formulaire-demande columns small-12 medium-7')),
      '#prefix' => '<div class="expanded row row-no-flex clearfix">',
      '#suffix' => '<div class="hide-for-small-only medium-5 columns visuel-form text-center"><i class="icon-attestation"></i></div></div>',
    );
    $form['container']['cin'] = array(
      '#type' => 'textfield',
      '#title' => t("National card number"),
      '#required' => TRUE,
      '#maxlength' => '60'
    );
    $form['container']['submit'] = array(
      '#prefix' => '<div class="link"><div class="submit">',
      '#suffix' => '</div></div>',
      '#type' => 'submit',
      '#value' => t('Envoyer'),
      '#attributes' => array('class' => array('button'))
    );
     return $form;
  }
  /**
   * @param type $form
   * @param type $form_state
   */
  function check_user_submit($form, & $form_state) {
    $data = $form_state['values'];
    if(isset($data) && !empty($data)){
        $artisan = _get_artisants($data['cin']);
        if(!empty($artisan)){
            die('NOT EMPTY');
        }else{
            die('EMPTY');
        }
    }
  }