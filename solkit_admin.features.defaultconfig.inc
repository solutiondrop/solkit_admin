<?php
/**
 * @file
 * solkit_admin.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function solkit_admin_defaultconfig_features() {
  return array(
    'solkit_admin' => array(
      'strongarm' => 'strongarm',
    ),
  );
}

/**
 * Implements hook_defaultconfig_strongarm().
 */
function solkit_admin_defaultconfig_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;

  return $export;
}
