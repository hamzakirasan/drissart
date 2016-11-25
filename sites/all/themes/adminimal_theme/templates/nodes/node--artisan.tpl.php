<?php if ($view_mode == "full"): ?>
		<h2>
			<?php print  l(t("List of artisans")."←","artisans"); ?>
		</h2>

		<fieldset>
		<legend> <?php print t('Artisan'); ?> </legend>
		<?php print render_value($node,'node','field_artisan_cin'); ?>

		<?php print render_value($node,'node','field_artisan_firstname_ar'); ?>

		<?php print render_value($node,'node','field_artisan_lastname_ar'); ?>

		<?php print render_value($node,'node','field_artisan_lastname_fr'); ?>

		<?php print render_value($node,'node','field_artisan_firstname_fr'); ?>

		<?php print render_value($node,'node','field_artisan_birthplace'); ?>


		<?php if (!empty($node->field_artisan_birth_date['und'])): ?>
				<?php print '<b>'.t('Birth date').' </b>: '.date('d-m-Y',strtotime($node->field_artisan_birth_date['und'][0]['value'])) ; ?>
		<?php endif ?>

		<?php print render_value($node,'node','field_artisan_postal_code'); ?>

		<?php if (!empty($node->field_artisan_sexe['und'])): ?>
				<div><?php print '<b>'.t('Sexe').' </b>: '.rt($node->field_artisan_sexe['und']); ?></div>
		<?php endif ?>

		<?php if (!empty($node->field_artisan_city['und'])): ?>
				<div><?php print '<b>'.t('City').' </b>: '.rt($node->field_artisan_city['und']); ?></div>
		<?php endif ?>

		<?php if (!empty($node->field_artisan_school_level['und'])): ?>
				<div><?php print '<b>'.t('School level').' </b>: '.rt($node->field_artisan_school_level['und']); ?></div>
		<?php endif ?>

		<?php if (!empty($node->field_artisan_p_qualification['und'])): ?>
				<div><?php print '<b>'.t('Professional qualification').' </b>: '.rt($node->field_artisan_p_qualification['und']); ?></div>
		<?php endif ?>

		<?php if (!empty($node->field_artisan_social_insurance['und'])): ?>
				<div><?php print '<b>'.t('Engage in social insurance').' </b>: '.rt($node->field_artisan_social_insurance['und']); ?></div>
		<?php endif ?>

		<?php print render_value($node,'node','field_artisan_address'); ?>

		<?php print render_value($node,'node','field_artisan_address_fr'); ?>

		<?php print render_value($node,'node','field_artisan_email_address'); ?>

		<?php print render_value($node,'node','field_artisan_phone_number'); ?>

		<?php print render_value($node,'node','field_artisan_diploma'); ?>
		
		<?php if (!empty($node->field_artisan_type_activity['und'])): ?>
				<div><?php print '<b>'.t('Type of activity').' </b>: '.rt($node->field_artisan_type_activity['und']); ?></div>
		<?php endif ?>
		</fieldset>


		<fieldset>
			<legend> <?php print t('Type of activity'); ?> </legend>
				<?php if (!empty($node->field_artisan_handicraft_items['und'])): ?>
					<div><?php print '<b>'.t('Handicraft items').' </b>: '.rt($node->field_artisan_handicraft_items['und']); ?></div>
				<?php endif ?>
				<?php if (!empty($node->field_artisan_domain['und'])): ?>
					<div><?php print '<b>'.t('Domain').' </b>: '.rt($node->field_artisan_domain['und']); ?></div>
				<?php endif ?>
				<?php if (!empty($node->field_artisan_profession['und'])): ?>
					<div><?php print '<b>'.t('Profession').' </b>: '.rt($node->field_artisan_profession['und']); ?></div>
				<?php endif ?>
		
				<?php print render_value($node,'node','field_artisan_description'); ?>
				<?php print render_value($node,'node','field_artisan_commercial_record'); ?>
				<?php print render_value($node,'node','field_artisan_commercial_name'); ?>
				<?php print render_value($node,'node','field_artisan_professionnel_rasm'); ?>

				<?php if (!empty($node->field_artisan_license_profession['und'])): ?>
					<div><?php print '<b>'.t('License to practice the profession').' </b>: '.rt($node->field_artisan_license_profession['und']); ?></div>
				<?php endif ?>

				<?php print render_value($node,'node','field_artisan_workplace_address'); ?>
				<?php print render_value($node,'node','field_workplace_address_fr'); ?>

				<?php if (!empty($node->field_artisan_sector['und'])): ?>
					<div><?php print '<b>'.t('Sector').' </b>: '.rt($node->field_artisan_sector['und']); ?></div>
				<?php endif ?>

				<?php print render_value($node,'node','field_artisan_code_postal_2'); ?>
				<?php print render_value($node,'node','field_artisan_professional_phone'); ?>
				<?php print render_value($node,'node','field_artisan_fax'); ?>

				<?php if (!empty($node->field_artisan_activity_place['und'])): ?>
					<div><?php print '<b>'.t('Activity place').' </b>: '.rt($node->field_artisan_activity_place['und']); ?></div>
				<?php endif ?>

				<?php print render_value($node,'node','field_artisan_creation_date'); ?>


				<?php if (!empty($node->field_artisan_birth_datefield_artisan_creation_date['und'])): ?>
					<?php print '<b>'.t('Creation date').' </b>: '.date('d-m-Y',strtotime($node->field_artisan_creation_date['und'][0]['value'])) ; ?>
				<?php endif ?>


				<?php print render_value($node,'node','field_artisan_total_area_ws'); ?>

				<?php if (!empty($node->field_artisa_type_workshop_use['und'])): ?>
					<div><?php print '<b>'.t('Type of workshop use').' </b>: '.rt($node->field_artisa_type_workshop_use['und']); ?></div>
				<?php endif ?>

				<?php if (!empty($node->field_artisan_equipments['und'])): ?>
					<div><?php print '<b>'.t('Equipments').' </b>: '.rt($node->field_artisan_equipments['und']); ?></div>
				<?php endif ?>

				<?php if (!empty($node->field_artisan_techniques['und'])): ?>
					<div><?php print '<b>'.t('Techniques').' </b>: '.rt($node->field_artisan_techniques['und']); ?></div>
				<?php endif ?>

				<?php print render_value($node,'node','field_artisan_main_product'); ?>


				<?php if (!empty($node->field_artisan_participation_ex['und'])): ?>
					<div><?php print '<b>'.t('Participation in exhibitions').' </b>: '.rt($node->field_artisan_participation_ex['und']); ?></div>
				<?php endif ?>

				<?php if (!empty($node->field_artisan_promotion['und'])): ?>
					<div><?php print '<b>'.t('Promotion').' </b>: '.rt($node->field_artisan_promotion['und']); ?></div>
				<?php endif ?>

		</fieldset>
<?php endif ?>




