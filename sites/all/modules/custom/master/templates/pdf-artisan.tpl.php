<style type="text/css">
		.personnel-infos-content .field-label{width: 200px;}
		.personnel-infos {padding: 5px;width: 450px;}
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
			<?php print  t('First name').' : '.$node->field_artisan_firstname_ar['und'][0]['value']; ?>
		</div>
	<?php endif ?>
	<?php if (!empty($node->field_artisan_lastname_ar['und'])): ?>
		<div class="personnel-infos">
			<?php print  t('Last name').' : '.$node->field_artisan_lastname_ar['und'][0]['value']; ?>
		</div>
	<?php endif ?>
	<?php if (!empty($node->field_artisan_firstname_fr['und'])): ?>
		<div class="personnel-infos">
			<?php print  t('First name in frech').' : '.$node->field_artisan_firstname_fr['und'][0]['value']; ?>
		</div>
	<?php endif ?>
	<?php if (!empty($node->field_artisan_lastname_fr['und'])): ?>
		<div class="personnel-infos">
			<?php print  t('Last name in french').' : '.$node->field_artisan_lastname_fr['und'][0]['value']; ?>
		</div>
	<?php endif ?>
	<?php if (!empty($node->field_artisan_birthplace['und'])): ?>
		<div class="personnel-infos">
			<?php print t('Birthplace').' : '.$node->field_artisan_birthplace['und'][0]['value']; ?>
		</div>
	<?php endif ?>
	<?php if (!empty($node->field_artisan_birth_date['und'])): ?>
		<div class="personnel-infos">
			<?php print t('Birth date').' : '.date('d-m-Y',strtotime($node->field_artisan_birth_date['und'][0]['value'])) ; ?>
		</div>
	<?php endif ?>
	<?php if (!empty($node->field_artisan_postal_code['und'])): ?>
		<div class="personnel-infos">
			<?php print t('Postal code').' : '.$node->field_artisan_postal_code['und'][0]['value']; ?>
		</div>
	<?php endif ?>
	<?php if (!empty($node->field_artisan_sexe['und'])): ?>
		<div class="personnel-infos">
			<?php print t('Sexe').' : '.rt($node->field_artisan_sexe['und'][0]['tid']); ?>
		</div>
	<?php endif ?>
	<?php if (!empty($node->field_artisan_city['und'])): ?>
		<div class="personnel-infos">
			<?php print t('City').' : '.rt($node->field_artisan_city['und'][0]['tid']); ?>
		</div>
	<?php endif ?>
	<?php if (!empty($node->field_artisan_school_level['und'])): ?>
		<div class="personnel-infos">
			<?php print t('School level').' : '.rt($node->field_artisan_school_level['und'][0]['tid']); ?>
		</div>
	<?php endif ?>
	<?php if (!empty($node->field_artisan_p_qualification['und'])): ?>
		<div class="personnel-infos">
			<?php print t('Professional qualification').' : '.rt($node->field_artisan_p_qualification['und'][0]['tid']); ?>
		</div>
	<?php endif ?>
	<?php if (!empty($node->field_artisan_social_insurance['und'])): ?>
		<div class="personnel-infos">
			<?php print t('Engage in social insurance').' : '.rt($node->field_artisan_social_insurance['und'][0]['tid']); ?>
		</div>
	<?php endif ?>
	<?php if (!empty($node->field_artisan_address['und'])): ?>
		<div class="personnel-infos">
			<?php print t('Address').' : '.$node->field_artisan_address['und'][0]['value']; ?>
		</div>
	<?php endif ?>
	<?php if (!empty($node->field_artisan_address_fr['und'])): ?>
		<div class="personnel-infos">
			<?php print t('Address in french').' : '.$node->field_artisan_address_fr['und'][0]['value']; ?>
		</div>
	<?php endif ?>
	<?php if (!empty($node->field_artisan_email_address['und'])): ?>
		<div class="personnel-infos">
			<?php print t('Email address').' : '.$node->field_artisan_email_address['und'][0]['email']; ?>
		</div>
	<?php endif ?>
	<?php if (!empty($node->field_artisan_phone_number['und'])): ?>
		<div class="personnel-infos">
			<?php print t('Phone number').' : '.$node->field_artisan_phone_number['und'][0]['value']; ?>
		</div>
	<?php endif ?>
	<?php if (!empty($node->field_artisan_diploma['und'])): ?>
		<div class="personnel-infos">
			<?php print t('Diploma').' : '.$node->field_artisan_diploma['und'][0]['value']; ?>
		</div>
	<?php endif ?>
	<?php if (!empty($node->field_artisan_type_activity['und'])): ?>
		<div class="personnel-infos">
			<?php print t('Type of activity').' : '.rt($node->field_artisan_type_activity['und'][0]['tid']); ?>
		</div>
	<?php endif ?>
	<?php if (!empty($node->field_artisan_handicraft_items['und'])): ?>
		<div class="personnel-infos">
			<?php print t('Handicraft items').' : '.rt($node->field_artisan_handicraft_items['und'][0]['tid']); ?>
		</div>
	<?php endif ?>
		<?php if (!empty($node->field_artisan_domain['und'])): ?>
		<div class="personnel-infos">
			<?php print t('Domain').' : '.rt($node->field_artisan_domain['und'][0]['tid']); ?>
		</div>
	<?php endif ?>
		<?php if (!empty($node->field_artisan_profession['und'])): ?>
		<div class="personnel-infos">
			<?php print t('Profession').' : '.rt($node->field_artisan_profession['und'][0]['tid']); ?>
		</div>
	<?php endif ?>





	</fieldset>
	<br><br>
</div>