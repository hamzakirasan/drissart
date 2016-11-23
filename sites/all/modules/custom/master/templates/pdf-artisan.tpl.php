<style type="text/css">
		.personnel-infos-content .field-label{width: 200px;}
		.personnel-infos {padding: 10px;width: 450px;}
		fieldset {margin-bottom: 20px;}legend {position: relative;top : -30px;left: -8px;padding: 5px;}
		h1 {margin-bottom: 60px;}
</style>
<h1 align="center" width="400" > <?php print t('Artisan') ?> </h1>
<div class="personnel-infos-content" >
	<fieldset>
 	<legend> <?php print t('Personels Informations'); ?> </legend>

	<?php if (!empty($node->field_artisan_cin['und'])): ?>
		<div class="personnel-infos">
			<?php print  t('CIN').' : '.$node->field_artisan_cin['und'][0]['value']; ?>
		</div>
	<?php endif ?>
	<?php if (!empty($node->field_artisan_firstname_ar['und'])): ?>
		<div class="personnel-infos">
			<?php print  t('first name').' : '.$node->field_artisan_firstname_ar['und'][0]['value']; ?>
		</div>
	<?php endif ?>
	<?php if (!empty($node->field_artisan_lastname_ar['und'])): ?>
		<div class="personnel-infos">
			<?php print  t('Last name').' : '.$node->field_artisan_lastname_ar['und'][0]['value']; ?>
		</div>
	<?php endif ?>
	<?php if (!empty($node->field_artisan_firstname_fr['und'])): ?>
		<div class="personnel-infos">
			<?php print  t('first name in frech').' : '.$node->field_artisan_firstname_fr['und'][0]['value']; ?>
		</div>
	<?php endif ?>
	<?php if (!empty($node->field_artisan_lastname_fr['und'])): ?>
		<div class="personnel-infos">
			<?php print  t('Last name in french').' : '.$node->field_artisan_lastname_fr['und'][0]['value']; ?>
		</div>
	<?php endif ?>

	<?php if (!empty($node->field_telephne['und'])): ?>
		<div class="personnel-infos">
			<?php print 'Téléphone : '.$node->field_telephne['und'][0]['value']; ?>
		</div>
	<?php endif ?>


	<?php if (!empty($node->field_cin['und'])): ?>
		<div class="personnel-infos">
			<?php print 'CIN : '.$node->field_cin['und'][0]['value']; ?>
		</div>
	<?php endif ?>
	<?php if (!empty($node->field_date_de_naissance['und'])): ?>
		<div class="personnel-infos">
			<?php print 'Date de naissance : '.date('d-m-Y',strtotime($node->field_date_de_naissance['und'][0]['value'])) ; ?> 
		</div>
	<?php endif ?>
	<?php if (!empty($node->field_adresse['und'])): ?>
		<div class="personnel-infos">
			<?php print 'Adresse : '.$node->field_adresse['und'][0]['value']; ?>
		</div>
	<?php endif ?>
	<?php if (!empty($node->field_date_1['und'])): ?>
		<div class="personnel-infos">
			<?php print 'Date début : '.date('d-m-Y',strtotime($node->field_date_1['und'][0]['value'])) ; ?> 
		</div>
	<?php endif ?>
	<?php if (!empty($node->field_date_2['und'])): ?>
		<div class="personnel-infos">
			<?php print 'Date fin : '.date('d-m-Y',strtotime($node->field_date_2['und'][0]['value'])) ; ?> 
		</div>
	<?php endif ?>
	<?php if (!empty($node->field_statut['und'])): ?>
		<div class="personnel-infos">
			<?php print 'Statut : '.rt($node->field_statut['und'][0]['tid']); ?>
		</div>	
	<?php endif ?>
	<?php if (!empty($node->body['und'])): ?>
		<div class="personnel-infos">
			<?php print 'Appréciation de l\'encadrement : '.$node->body['und'][0]['value']; ?> 
		</div>
	<?php endif ?>
	</fieldset>
	<br><br>
</div>