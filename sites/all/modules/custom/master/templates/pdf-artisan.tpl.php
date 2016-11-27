


<div style="text-align:center"> <h1> <?php print t('Artisan'); ?>  </h1> </div>
<div class="artisan-infos-content" >
	<?php if (!empty($node->field_artisan_cin['und'])): ?>
		<div class="artisan-infos" align="right">
			<?php print  t('CIN').' : '.$node->field_artisan_cin['und'][0]['value']; ?>
		</div>
	<?php endif ?>
	<?php if (!empty($node->field_artisan_firstname_ar['und'])): ?>
		<div class="artisan-infos" align="right">
			<?php print  t('First name').' : '.$node->field_artisan_firstname_ar['und'][0]['value']; ?>
		</div>
	<?php endif ?>
	<?php if (!empty($node->field_artisan_lastname_ar['und'])): ?>
		<div class="artisan-infos" align="right">
			<?php print  t('Last name').' : '.$node->field_artisan_lastname_ar['und'][0]['value']; ?>
		</div>
	<?php endif ?>
	<?php if (!empty($node->field_artisan_firstname_fr['und'])): ?>
		<div class="artisan-infos" align="right" >
			<?php print  t('First name in frech').' : '.$node->field_artisan_firstname_fr['und'][0]['value']; ?>
		</div>
	<?php endif ?>
	<?php if (!empty($node->field_artisan_lastname_fr['und'])): ?>
		<div class="artisan-infos" align="right">
			<?php print  t('Last name in french').' : '.$node->field_artisan_lastname_fr['und'][0]['value']; ?>
		</div>
	<?php endif ?>
	<?php if (!empty($node->field_artisan_birthplace['und'])): ?>
		<div class="artisan-infos" align="right">
			<?php print t('Birthplace').' : '.$node->field_artisan_birthplace['und'][0]['value']; ?>
		</div>
	<?php endif ?>
	<?php if (!empty($node->field_artisan_birth_date['und'])): ?>
		<div class="artisan-infos" align="right">
			<?php print t('Birth date').' : '.date('d-m-Y',strtotime($node->field_artisan_birth_date['und'][0]['value'])) ; ?>
		</div>
	<?php endif ?>
	<?php if (!empty($node->field_artisan_postal_code['und'])): ?>
		<div class="artisan-infos" align="right">
			<?php print t('Postal code').' : '.$node->field_artisan_postal_code['und'][0]['value']; ?>
		</div>
	<?php endif ?>
	<?php if (!empty($node->field_artisan_sexe['und'])): ?>
		<div class="artisan-infos" align="right">
			<?php print t('Sexe').' : '.rt($node->field_artisan_sexe['und']); ?>
		</div>
	<?php endif ?>
	<?php if (!empty($node->field_artisan_city['und'])): ?>
		<div class="artisan-infos" align="right">
			<?php print t('City').' : '.rt($node->field_artisan_city['und']); ?>
		</div>
	<?php endif ?>
	<?php if (!empty($node->field_artisan_school_level['und'])): ?>
		<div class="artisan-infos" align="right">
			<?php print t('School level').' : '.rt($node->field_artisan_school_level['und']); ?>
		</div>
	<?php endif ?>
	<?php if (!empty($node->field_artisan_p_qualification['und'])): ?>
		<div class="artisan-infos" align="right">
			<?php print t('Professional qualification').' : '.rt($node->field_artisan_p_qualification['und']); ?>
		</div>
	<?php endif ?>
	<?php if (!empty($node->field_artisan_social_insurance['und'])): ?>
		<div class="artisan-infos" align="right">
			<?php print t('Engage in social insurance').' : '.rt($node->field_artisan_social_insurance['und']); ?>
		</div>
	<?php endif ?>
	<?php if (!empty($node->field_artisan_address['und'])): ?>
		<div class="artisan-infos" align="right">
			<?php print t('Address').' : '.$node->field_artisan_address['und'][0]['value']; ?>
		</div>
	<?php endif ?>
	<?php if (!empty($node->field_artisan_address_fr['und'])): ?>
		<div class="artisan-infos" align="right">
			<?php print t('Address in french').' : '.$node->field_artisan_address_fr['und'][0]['value']; ?>
		</div>
	<?php endif ?>
	<?php if (!empty($node->field_artisan_email_address['und'])): ?>
		<div class="artisan-infos" align="right">
			<?php print t('Email address').' : '.$node->field_artisan_email_address['und'][0]['email']; ?>
		</div>
	<?php endif ?>
	<?php if (!empty($node->field_artisan_phone_number['und'])): ?>
		<div class="artisan-infos" align="right">
			<?php print t('Phone number').' : '.$node->field_artisan_phone_number['und'][0]['value']; ?>
		</div>
	<?php endif ?>
	<?php if (!empty($node->field_artisan_diploma['und'])): ?>
		<div class="artisan-infos" align="right">
			<?php print t('Diploma').' : '.$node->field_artisan_diploma['und'][0]['value']; ?>
		</div>
	<?php endif ?>
	<?php if (!empty($node->field_artisan_type_activity['und'])): ?>
		<div class="artisan-infos" align="right">
			<?php print t('Type of activity').' : '.rt($node->field_artisan_type_activity['und']); ?>
		</div>
	<?php endif ?>
</div>