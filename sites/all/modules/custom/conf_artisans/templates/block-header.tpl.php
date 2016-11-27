<div class="b-steps-wrapper">
  <div class="container">
    <div class="row">
      <?php
          if(isset($body) && !empty($body)){
              print check_markup($body, 'full_html', '', FALSE);
          }
      ?>
      <h2>
       <?php
        if (drupal_is_front_page()):
          print t('Home page');
        else:
            print drupal_get_title();
        endif;?>
    </div>
  </div>
</div>
