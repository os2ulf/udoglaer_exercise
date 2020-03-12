<?php

/**
 * @file
 * udoglaer_exercise.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function udoglaer_exercise_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_duration|node|exercise|form';
  $field_group->group_name = 'group_duration';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'exercise';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Varighed',
    'weight' => '3',
    'children' => array(
      0 => 'field_duration_description',
      1 => 'field_duration_select',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Varighed',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-duration field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_duration|node|exercise|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_exercise_sub|node|exercise|form';
  $field_group->group_name = 'group_exercise_sub';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'exercise';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Aktiviteter, forberedelse og efterbehandling',
    'weight' => '1',
    'children' => array(
      0 => 'field_activities',
      1 => 'field_background_knowledge',
      2 => 'field_post_work',
      3 => 'field_how_to',
      4 => 'field_related_content',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Aktiviteter, forberedelse og efterbehandling',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'form-layout--epsilon',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_exercise_sub|node|exercise|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_exercise|node|exercise|form';
  $field_group->group_name = 'group_exercise';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'exercise';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Opgaven',
    'weight' => '0',
    'children' => array(
      0 => 'field_full_description',
      1 => 'field_purpose',
      2 => 'field_target_group',
      3 => 'title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Opgaven',
      'instance_settings' => array(
        'required_fields' => 0,
        'id' => 'node_exercise_form_group_exercise',
        'classes' => 'form-layout--alfa',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_exercise|node|exercise|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_materials|node|exercise|form';
  $field_group->group_name = 'group_materials';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'exercise';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Materialer',
    'weight' => '6',
    'children' => array(
      0 => 'field_educational_material',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Materialer',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-materials field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_materials|node|exercise|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_media|node|exercise|form';
  $field_group->group_name = 'group_media';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'exercise';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Billeder/medier',
    'weight' => '5',
    'children' => array(
      0 => 'field_image',
      1 => 'field_video',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Billeder/medier',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-media field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_media|node|exercise|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_period|node|exercise|form';
  $field_group->group_name = 'group_period';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'exercise';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Periode',
    'weight' => '4',
    'children' => array(
      0 => 'field_period_select',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Periode',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-period field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_period|node|exercise|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_practical_information|node|exercise|form';
  $field_group->group_name = 'group_practical_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'exercise';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Praktisk information',
    'weight' => '2',
    'children' => array(
      0 => 'field_educational_goals',
      1 => 'field_subject',
      2 => 'field_target_group_sub',
      3 => 'field_activity_select',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Praktisk information',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'form-layout--beta',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_practical_information|node|exercise|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_related_users|node|exercise|form';
  $field_group->group_name = 'group_related_users';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'exercise';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Besøgssteder',
    'weight' => '7',
    'children' => array(),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Besøgssteder',
      'instance_settings' => array(
        'required_fields' => 0,
        'id' => '',
        'classes' => 'group-related-users field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_related_users|node|exercise|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Aktiviteter, forberedelse og efterbehandling');
  t('Besøgssteder');
  t('Billeder/medier');
  t('Materialer');
  t('Opgaven');
  t('Periode');
  t('Praktisk information');
  t('Varighed');

  return $field_groups;
}
