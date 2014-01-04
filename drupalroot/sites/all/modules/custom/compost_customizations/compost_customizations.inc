<?php

/**
 * @file
 * Menu builder functions for compost_customizations.
 */

/**
 * Form builder function for module settings.
 */
function compost_customizations_settings() {

  $form['skip_reminders'] = array(
    '#type' => 'checkbox',
    '#title' => t('Skip reminders this week.'),
    '#default_value' => variable_get('skip_reminders', 0),
    '#description' => t('Reminders will not be sent out when this box is checked.'),
  );

  return system_settings_form($form);
}
