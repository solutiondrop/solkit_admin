<?php
/**
 * @file
 * solkit_admin.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function solkit_admin_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;

  return $export;
}
