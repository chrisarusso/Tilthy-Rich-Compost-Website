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
?>
<div>
  <div class="small-12 large-5 columns">
    <br /><br /><br />
    <div class="row">
      <div class="small-9 columns">
        <input type="text" name="form-name" id="form-name">
      </div>
      <div class="small-3 columns">
        <label for="form-name">First Name</label>
      </div>
    </div>
    <div class="row">
      <div class="small-9 columns">
        <input type="text" name="form-name" id="form-name">
      </div>
      <div class="small-3 columns">
        <label for="form-name">Last Name</label>
      </div>
    </div>
    <div class="row">
      <div class="small-9 columns">
        <input type="email" name="form-email" id="form-email">
      </div>
      <div class="small-3 columns">
        <label for="form-email">Email</label>
      </div>
    </div>
    <div class="row">
      <div class="small-9 columns">
        <input type="text" name="form-phone" id="form-phone">
      </div>
      <div class="small-3 columns">
        <label for="form-phone">Phone</label>
      </div>
    </div>
    <div class="row">
      <div class="small-9 columns">
        <input type="text" name="form-address" id="form-address"  placeholder="824 Burch Ave.">
      </div>
      <div class="small-3 columns">
        <label for="form-address">Street</label>
      </div>
    </div>
    <div class="row">
      <div class="small-9 columns">
        <input type="text" name="form-zip" id="form-zip">
      </div>
      <div class="small-3 columns">
        <label for="form-zip">Zip Code</label>
      </div>
    </div>
  </div>

  <div class="small-12 large-5 large-offset-2 columns form-right">
    <label for="form-where">Where will you put your bucket?</label>
    <input type="text" name="form-where" id="form-where" placeholder="ex. front porch, left of the door">

    <label for="form-service-type">Bucket Size</label>
    <select id="form-service-type" name="form-service-type">
      <option value="1">Option 1</option>
      <option value="2">Option 2</option>
      <option value="3">Option 3</option>
      <option value="4">Option 4</option>
    </select>

    <label>Collection day reminders</label>
    <div class="row">
      <div class="small-4 columns">
        <label class="checkbox"><input type="checkbox" name="form-reminders">Email</label>
      </div>
      <div class="small-8 columns">
        <label class="checkbox"><input type="checkbox" name="form-reminders">Text Message</label>
      </div>
    </div>

    <label for="form-service-type">Service Type</label>
    <select id="form-service-type" name="form-service-type">
      <option value="1">Option 1</option>
      <option value="2">Option 2</option>
      <option value="3">Option 3</option>
      <option value="4">Option 4</option>
    </select>
    <!-- dropdown -->

    <input type="submit" value="Subscribe" id="form-submit">
  </div>
</div>
