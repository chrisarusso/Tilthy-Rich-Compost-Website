<?php

/**
 * @file
 * Default theme implementation to present all user profile data.
 *
 * This template is used when viewing a registered member's profile page,
 * e.g., example.com/user/123. 123 being the users ID.
 *
 * Use render($user_profile) to print all profile items, or print a subset
 * such as render($user_profile['user_picture']). Always call
 * render($user_profile) at the end in order to print all remaining items. If
 * the item is a category, it will contain all its profile items. By default,
 * $user_profile['summary'] is provided, which contains data on the user's
 * history. Other data can be included by modules. $user_profile['user_picture']
 * is available for showing the account picture.
 *
 * Available variables:
 *   - $user_profile: An array of profile items. Use render() to print them.
 *   - Field variables: for each field instance attached to the user a
 *     corresponding variable is defined; e.g., $account->field_example has a
 *     variable $field_example defined. When needing to access a field's raw
 *     values, developers/themers are strongly encouraged to use these
 *     variables. Otherwise they will have to explicitly specify the desired
 *     field language, e.g. $account->field_example['en'], thus overriding any
 *     language negotiation rule that was previously applied.
 *
 * @see user-profile-category.tpl.php
 *   Where the html is handled for the group.
 * @see user-profile-item.tpl.php
 *   Where the html is handled for each item in the group.
 * @see template_preprocess_user_profile()
 *
 * @ingroup themeable
 */
// Take care of necessary items
echo render($form['form_build_id']);
echo render($form['form_token']);
echo render($form['form_id']);

?>
<div>
  <div class="small-12 large-5 columns">
    <br /><br /><br />
    <div class="row">
      <div class="small-9 columns">
        <?php $form['field_first_name'][LANGUAGE_NONE][0]['value']['#theme_wrappers'] = array(); ?>
        <?php echo render($form['field_first_name'][LANGUAGE_NONE][0]['value']); ?>
      </div>
      <div class="small-3 columns">
        <label for="form-name">First Name</label>
      </div>
    </div>
    <div class="row">
      <div class="small-9 columns">
        <?php $form['field_last_name'][LANGUAGE_NONE][0]['value']['#theme_wrappers'] = array(); ?>
        <?php echo render($form['field_last_name'][LANGUAGE_NONE][0]['value']); ?>
      </div>
      <div class="small-3 columns">
        <label for="form-name">Last Name</label>
      </div>
    </div>
    <div class="row">
      <div class="small-9 columns">
        <?php $form['account']['mail']['#theme_wrappers'] = array(); ?>
        <?php echo render($form['account']['mail']); ?>
      </div>
      <div class="small-3 columns">
        <label for="form-email">Email</label>
      </div>
    </div>
    <div class="row">
      <div class="small-9 columns">
        <?php $form['field_phone_number'][LANGUAGE_NONE][0]['value']['#theme_wrappers'] = array(); ?>
        <?php echo render($form['field_phone_number'][LANGUAGE_NONE][0]['value']); ?>
      </div>
      <div class="small-3 columns">
        <label for="form-phone">Phone</label>
      </div>
    </div>
    <div class="row">
      <div class="small-9 columns">
        <?php $form['field_location'][LANGUAGE_NONE][0]['street']['#theme_wrappers'] = array(); ?>
        <?php echo render($form['field_location'][LANGUAGE_NONE][0]['street']); ?>
      </div>
      <div class="small-3 columns">
        <label for="form-address">Street</label>
      </div>
    </div>
    <div class="row">
      <div class="small-9 columns">
        <?php $form['field_location'][LANGUAGE_NONE][0]['postal_code']['#theme_wrappers'] = array(); ?>
        <?php echo render($form['field_location'][LANGUAGE_NONE][0]['postal_code']); ?>
      </div>
      <div class="small-3 columns">
        <label for="form-zip">Zip Code</label>
      </div>
    </div>
  </div>

  <div class="small-12 large-5 large-offset-2 columns form-right">
    <label for="form-where">Where will you put your bucket?</label>
    <?php $form['field_bucket_location'][LANGUAGE_NONE][0]['value']['#theme_wrappers'] = array(); ?>
    <?php echo render($form['field_bucket_location'][LANGUAGE_NONE][0]['value']); ?>


    <div class="row">
      <div class="small-3 columns">
        <label for="form-service-type">Bucket Size</label>
      </div>
      <div class="small-9 columns">
        <?php $form['field_bucket_size'][LANGUAGE_NONE]['#theme_wrappers'] = array(); ?>
        <?php echo render($form['field_bucket_size'][LANGUAGE_NONE]); ?>
      </div>
    </div>

    <?php echo render($form['field_reminders']); ?>
    <?php echo render($form['field_mobile_carrier_provider']); ?>

    <label for="form-service-type">Service Type</label>
    <?php $form['field_service_type'][LANGUAGE_NONE]['#theme_wrappers'] = array(); ?>
    <?php echo render($form['field_service_type'][LANGUAGE_NONE]); ?>

    <label for="form-service-type">Monthly Contribution ($/month)</label>
    <?php $form['field_monthly_contribution'][LANGUAGE_NONE][0]['value']['#theme_wrappers'] = array(); ?>
    <?php echo render($form['field_monthly_contribution'][LANGUAGE_NONE][0]['value']); ?>

    <label for="form-service-type">How Did You Hear About Us?</label>
    <?php $form['field_how_did_you_hear_about_us_'][LANGUAGE_NONE][0]['value']['#theme_wrappers'] = array(); ?>
    <?php echo render($form['field_how_did_you_hear_about_us_'][LANGUAGE_NONE][0]['value']); ?>

    <?php $form['actions']['submit']['#value'] = t('Subscribe'); ?>
    <?php echo render($form['actions']['submit']); ?>

  </div>
</div>
