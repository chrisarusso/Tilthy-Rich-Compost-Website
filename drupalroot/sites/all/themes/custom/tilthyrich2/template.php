<?php

/**
 * Implements hook_theme()
 */
function tilthyrich2_theme($existing, $type, $theme, $path){
  return array(
    'user_register_form' => array(
    'render element'=> 'form',
    'template' => 'templates/user-register',
    ),
  );

}