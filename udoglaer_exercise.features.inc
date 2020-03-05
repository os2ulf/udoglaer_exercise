<?php

/**
 * @file
 * udoglaer_exercise.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function udoglaer_exercise_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function udoglaer_exercise_node_info() {
  $items = array(
    'exercise' => array(
      'name' => t('Opgave'),
      'base' => 'node_content',
      'description' => t('Opgave til tilknyttet en eller flere brugere'),
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
