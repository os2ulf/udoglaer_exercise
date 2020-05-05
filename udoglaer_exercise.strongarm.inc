<?php

/**
 * @file
 * udoglaer_exercise.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function udoglaer_exercise_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_exercise';
  $strongarm->value = 'edit-location-settings';
  $export['additional_settings__active_tab_exercise'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_enable_revisions_page_node_exercise';
  $strongarm->value = 1;
  $export['diff_enable_revisions_page_node_exercise'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_show_preview_changes_node_exercise';
  $strongarm->value = 0;
  $export['diff_show_preview_changes_node_exercise'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_view_mode_preview_node_exercise';
  $strongarm->value = 'full';
  $export['diff_view_mode_preview_node_exercise'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__exercise';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'print' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'locations' => array(
          'weight' => '11',
        ),
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '9',
        ),
        'redirect' => array(
          'weight' => '10',
        ),
        'metatags' => array(
          'weight' => '12',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__exercise'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_exercise';
  $strongarm->value = '0';
  $export['language_content_type_exercise'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'linkchecker_scan_node_exercise';
  $strongarm->value = 1;
  $export['linkchecker_scan_node_exercise'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_defaultnum_exercise';
  $strongarm->value = '0';
  $export['location_defaultnum_exercise'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_maxnum_exercise';
  $strongarm->value = '0';
  $export['location_maxnum_exercise'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_settings_node_exercise';
  $strongarm->value = array(
    'multiple' => array(
      'min' => '0',
      'max' => '0',
      'add' => '0',
    ),
    'form' => array(
      'weight' => '0',
      'collapsible' => 0,
      'collapsed' => 0,
      'fields' => array(
        'name' => array(
          'collect' => '0',
          'default' => '',
          'weight' => '-100',
        ),
        'street' => array(
          'collect' => '0',
          'default' => '',
          'weight' => '-99',
        ),
        'additional' => array(
          'collect' => '0',
          'default' => '',
          'weight' => '-98',
        ),
        'city' => array(
          'collect' => '0',
          'default' => '',
          'weight' => '-97',
        ),
        'postal_code' => array(
          'collect' => '0',
          'default' => '',
          'weight' => '-96',
        ),
        'province' => array(
          'collect' => '0',
          'widget' => 'autocomplete',
          'default' => '',
          'weight' => '-95',
        ),
        'country' => array(
          'collect' => '4',
          'default' => 'dk',
          'weight' => '-94',
        ),
        'locpick' => array(
          'collect' => '0',
          'weight' => '-93',
        ),
      ),
    ),
    'display' => array(
      'weight' => '0',
      'hide' => array(
        'name' => 'name',
        'street' => 'street',
        'additional' => 'additional',
        'city' => 'city',
        'province' => 'province',
        'postal_code' => 'postal_code',
        'country' => 'country',
        'locpick' => 'locpick',
        'province_name' => 'province_name',
        'country_name' => 'country_name',
        'map_link' => 'map_link',
        'coords' => 'coords',
      ),
      'teaser' => 0,
      'full' => 0,
    ),
    'rss' => array(
      'mode' => 'simple',
    ),
  );
  $export['location_settings_node_exercise'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_exercise';
  $strongarm->value = array();
  $export['menu_options_exercise'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_exercise';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_exercise'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_exercise';
  $strongarm->value = array(
    0 => 'moderation',
    1 => 'revision',
  );
  $export['node_options_exercise'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_exercise';
  $strongarm->value = '0';
  $export['node_preview_exercise'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_exercise';
  $strongarm->value = 0;
  $export['node_submitted_exercise'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_expand_fieldset_exercise';
  $strongarm->value = '0';
  $export['scheduler_expand_fieldset_exercise'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_enable_exercise';
  $strongarm->value = 1;
  $export['scheduler_publish_enable_exercise'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_past_date_exercise';
  $strongarm->value = 'publish';
  $export['scheduler_publish_past_date_exercise'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_required_exercise';
  $strongarm->value = 0;
  $export['scheduler_publish_required_exercise'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_revision_exercise';
  $strongarm->value = 1;
  $export['scheduler_publish_revision_exercise'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_touch_exercise';
  $strongarm->value = 0;
  $export['scheduler_publish_touch_exercise'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_unpublish_enable_exercise';
  $strongarm->value = 1;
  $export['scheduler_unpublish_enable_exercise'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_unpublish_required_exercise';
  $strongarm->value = 0;
  $export['scheduler_unpublish_required_exercise'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_unpublish_revision_exercise';
  $strongarm->value = 1;
  $export['scheduler_unpublish_revision_exercise'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_use_vertical_tabs_exercise';
  $strongarm->value = '1';
  $export['scheduler_use_vertical_tabs_exercise'] = $strongarm;

  return $export;
}
