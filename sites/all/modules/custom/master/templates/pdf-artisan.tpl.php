
<style type="text/css">
		.artisan-infos {padding: 5px;width: 450px;}
		legend {position: relative;top : -30px;left: -80px;padding: 5px;}
		h1 {margin-bottom: 60px;}
</style>
<fieldset class="artisan-infos-content" >
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
			<?php if (!empty($node->field_artisan_handicraft_items['und'])): ?>
		<div class="artisan-infos" align="right">
			<?php print t('Handicraft items').' : '.rt($node->field_artisan_handicraft_items['und']); ?>
		</div>
	<?php endif ?>
	<?php if (!empty($node->field_artisan_domain['und'])): ?>
		<div class="artisan-infos" align="right">
			<?php print t('Domain').' : '.rt($node->field_artisan_domain['und']); ?>
		</div>
	<?php endif ?>
	<?php if (!empty($node->field_artisan_profession['und'])): ?>
		<div class="artisan-infos" align="right">
			<?php print t('Profession').' : '.rt($node->field_artisan_profession['und']); ?>
		</div>
	<?php endif ?>
	<?php if (!empty($node->field_artisan_description['und'])): ?>
		<div class="artisan-infos" align="right">
			<?php print t('Description').' : '.$node->field_artisan_description['und'][0]['value']; ?>
		</div>
	<?php endif ?>
	<?php if (!empty($node->field_artisan_commercial_record['und'])): ?>
		<div class="artisan-infos" align="right">
			<?php print t('Commercial record').' : '.$node->field_artisan_commercial_record['und'][0]['value']; ?>
		</div>
	<?php endif ?>
	<?php if (!empty($node->field_artisan_commercial_name['und'])): ?>
		<div class="artisan-infos" align="right">
			<?php print t('Commercial name').' : '.$node->field_artisan_commercial_name['und'][0]['value']; ?>
		</div>
	<?php endif ?>
	<?php if (!empty($node->field_artisan_professionnel_rasm['und'])): ?>
		<div class="artisan-infos" align="right">
			<?php print t('Professionnel rasm').' : '.$node->field_artisan_professionnel_rasm['und'][0]['value']; ?>
		</div>
	<?php endif ?>
	<?php if (!empty($node->field_artisan_license_profession['und'])): ?>
		<div class="artisan-infos" align="right">
			<?php print t('License to practice the profession').' : '.rt($node->field_artisan_license_profession['und']); ?>
		</div>
	<?php endif ?>
	<?php if (!empty($node->field_artisan_workplace_address['und'])): ?>
		<div class="artisan-infos" align="right">
			<?php print t('Workplace address').' : '.$node->field_artisan_workplace_address['und'][0]['value']; ?>
		</div>
	<?php endif ?>
	<?php if (!empty($node->field_workplace_address_fr['und'])): ?>
		<div class="artisan-infos" align="right">
			<?php print t('Workplace Address in french').' : '.$node->field_workplace_address_fr['und'][0]['value']; ?>
		</div>
	<?php endif ?>
	<?php if (!empty($node->field_artisan_sector['und'])): ?>
		<div class="artisan-infos" align="right">
			<?php print t('Sector').' : '.rt($node->field_artisan_sector['und']); ?>
		</div>
	<?php endif ?>
	<?php if (!empty($node->field_artisan_code_postal_2['und'])): ?>
		<div class="artisan-infos" align="right">
			<?php print t('Workplace Address in french').' : '.$node->field_artisan_code_postal_2['und'][0]['value']; ?>
		</div>
	<?php endif ?>
	<?php if (!empty($node->field_artisan_professional_phone['und'])): ?>
		<div class="artisan-infos" align="right">
			<?php print t('Professional phone').' : '.$node->field_artisan_professional_phone['und'][0]['value']; ?>
		</div>
	<?php endif ?>
	<?php if (!empty($node->field_artisan_fax['und'])): ?>
		<div class="artisan-infos" align="right">
			<?php print t('Fax').' : '.$node->field_artisan_fax['und'][0]['value']; ?>
		</div>	
	<?php endif ?>
	<?php if (!empty($node->field_artisan_activity_place['und'])): ?>
		<div class="artisan-infos" align="right">
			<?php print t('Activity place').' : '.rt($node->field_artisan_activity_place['und']); ?>
		</div>
	<?php endif ?>
	<?php if (!empty($node->field_artisan_creation_date['und'])): ?>
		<div class="artisan-infos" align="right">
			<?php print t('Creation date').' : '.date('d-m-Y',strtotime($node->field_artisan_creation_date['und'][0]['value'])) ; ?>
		</div>
	<?php endif ?>
	<?php if (!empty($node->field_artisan_total_area_ws['und'])): ?>
		<div class="artisan-infos" align="right">
			<?php print t('Total area of the workshop').' : '.$node->field_artisan_total_area_ws['und'][0]['value']; ?>
		</div>	
	<?php endif ?>
	<?php if (!empty($node->field_artisa_type_workshop_use['und'])): ?>
		<div class="artisan-infos" align="right">
			<?php print t('Type of workshop use').' : '.rt($node->field_artisa_type_workshop_use['und']); ?>
		</div>
	<?php endif ?>
	<?php if (!empty($node->field_artisan_equipments['und'])): ?>
		<div class="artisan-infos" align="right">
			<?php print t('Equipments').' : '.rt($node->field_artisan_equipments['und']); ?>
		</div>
	<?php endif ?>
	<?php if (!empty($node->field_artisan_techniques['und'])): ?>
		<div class="artisan-infos" align="right">
			<?php print t('Techniques').' : '.rt($node->field_artisan_techniques['und']); ?>
		</div>
	<?php endif ?>
	<?php if (!empty($node->field_artisan_participation_ex['und'])): ?>
		<div class="artisan-infos" align="right">
			<?php print t('Participation in exhibitions').' : '.rt($node->field_artisan_participation_ex['und']); ?>
		</div>
	<?php endif ?>

	<?php if (!empty($node->field_artisan_promotion['und'])): ?>
		<div class="artisan-infos" align="right">
			<?php print t('Promotion').' : '.rt($node->field_artisan_promotion['und']); ?>
		</div>
	<?php endif ?>
</fieldset>