<?php

/**
 * @file
 * udoglaer_exercise.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function udoglaer_exercise_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'search_day_care_exercise';
  $page->task = 'page';
  $page->admin_title = 'Search - day care exercise';
  $page->admin_description = '';
  $page->path = 'dagtilbud-opgaver';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'none',
    'title' => 'Dagtilbud',
    'name' => 'main-menu',
    'weight' => '1',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_search_day_care_exercise__panel_context_ed521a5a-118d-4f3a-a0d0-52fb04788b40';
  $handler->task = 'page';
  $handler->subtask = 'search_day_care_exercise';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '628079a0-513c-4ad1-965b-dc9dd22943cc';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_search_day_care_exercise__panel_context_ed521a5a-118d-4f3a-a0d0-52fb04788b40';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-2f9c8413-d805-4d95-abde-3c3c21c0d4ae';
  $pane->panel = 'middle';
  $pane->type = 'search_box';
  $pane->subtype = 'search_box';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'search_node' => array(
      'id' => '1583747664',
      'server' => 'search_node',
      'index' => 'exercises',
      'options' => array(
        'match_type' => 'best_fields',
        'match_operator' => 'or',
        'cache_expire' => '300',
        'size' => '14',
        'initial_query_enable' => 1,
        'initial_query_text' => '',
        'fields' => array(
          'field_activity_select:name' => 'field_activity_select:name',
          'field_duration_select:name' => 'field_duration_select:name',
          'field_educational_goals:name' => 'field_educational_goals:name',
          'field_full_description:value' => 'field_full_description:value',
          'field_period_select:name' => 'field_period_select:name',
          'field_subject:name' => 'field_subject:name',
          'title' => 'title',
          'author' => 0,
          'changed' => 0,
          'created' => 0,
          'field_activity_select' => 0,
          'field_duration_select' => 0,
          'field_educational_goals' => 0,
          'field_educational_material' => 0,
          'field_image:file' => 0,
          'field_period_select' => 0,
          'field_subject' => 0,
          'field_target_group' => 0,
          'field_target_group_sub' => 0,
          'nid' => 0,
          'search_api_language' => 0,
          'type' => 0,
          'url' => 0,
        ),
        'filters' => array(
          'taxonomy' => array(
            'field_activity_select' => 'field_activity_select',
            'field_duration_select' => 'field_duration_select',
            'field_educational_goals' => 'field_educational_goals',
            'field_period_select' => 'field_period_select',
            'field_subject' => 'field_subject',
            'field_target_group_sub' => 'field_target_group_sub',
            'field_target_group' => 0,
          ),
          'boolean' => array(),
        ),
      ),
      'filters' => array(
        'type' => array(
          'field_activity_select' => 'or',
          'field_duration_select' => 'or',
          'field_educational_goals' => 'or',
          'field_period_select' => 'or',
          'field_subject' => 'or',
          'field_target_group' => 'or',
          'field_target_group_sub' => 'or',
        ),
      ),
      'sorting' => array(
        'field' => 'changed',
        'order' => 'desc',
      ),
      'dates' => array(
        'fields' => array(),
      ),
      'intervals' => array(
        'fields' => array(
          'author' => 0,
          'changed' => 0,
          'created' => 0,
          'field_activity_select' => 0,
          'field_activity_select:name' => 0,
          'field_duration_select' => 0,
          'field_duration_select:name' => 0,
          'field_educational_goals' => 0,
          'field_educational_goals:name' => 0,
          'field_educational_material' => 0,
          'field_full_description:value' => 0,
          'field_image:file' => 0,
          'field_period_select' => 0,
          'field_period_select:name' => 0,
          'field_subject' => 0,
          'field_subject:name' => 0,
          'field_target_group' => 0,
          'field_target_group_sub' => 0,
          'nid' => 0,
          'search_api_language' => 0,
          'title' => 0,
          'type' => 0,
          'url' => 0,
        ),
      ),
      'forces' => array(
        'field' => 'field_target_group',
        'selected' => array(
          'Dagtilbud' => 'Dagtilbud',
          'Grundskole' => 0,
          'Ungdomsuddannelse' => 0,
        ),
      ),
      'highlight' => array(
        'fields' => array(
          'author' => 0,
          'changed' => 0,
          'created' => 0,
          'field_activity_select' => 0,
          'field_activity_select:name' => 0,
          'field_duration_select' => 0,
          'field_duration_select:name' => 0,
          'field_educational_goals' => 0,
          'field_educational_goals:name' => 0,
          'field_educational_material' => 0,
          'field_full_description:value' => 0,
          'field_image:file' => 0,
          'field_period_select' => 0,
          'field_period_select:name' => 0,
          'field_subject' => 0,
          'field_subject:name' => 0,
          'field_target_group' => 0,
          'field_target_group_sub' => 0,
          'nid' => 0,
          'search_api_language' => 0,
          'title' => 0,
          'type' => 0,
          'url' => 0,
        ),
      ),
      'templates' => array(
        'box' => '/sites/default/files/templates/search-exercise-daycare.html',
        'result' => '/sites/default/files/templates/results-exercise.html',
        'pager' => '/profiles/ulf/modules/search_node_page/templates/angular/pager.html',
        'popup' => '/profiles/ulf/modules/search_node_page/templates/angular/popup.html',
      ),
      'autocomplete' => array(
        'index' => '_none_',
        'field' => '_none_',
        'minChars' => '3',
        'size' => '1',
      ),
      'map' => array(
        'points' => '50',
        'markers' => '/profiles/ulf/themes/ulf_default/images/leaflet/',
      ),
    ),
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '2f9c8413-d805-4d95-abde-3c3c21c0d4ae';
  $display->content['new-2f9c8413-d805-4d95-abde-3c3c21c0d4ae'] = $pane;
  $display->panels['middle'][0] = 'new-2f9c8413-d805-4d95-abde-3c3c21c0d4ae';
  $pane = new stdClass();
  $pane->pid = 'new-485b89b0-43a3-4592-8e8e-d0f5160a9288';
  $pane->panel = 'middle';
  $pane->type = 'search_result';
  $pane->subtype = 'search_result';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '485b89b0-43a3-4592-8e8e-d0f5160a9288';
  $display->content['new-485b89b0-43a3-4592-8e8e-d0f5160a9288'] = $pane;
  $display->panels['middle'][1] = 'new-485b89b0-43a3-4592-8e8e-d0f5160a9288';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['search_day_care_exercise'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'search_school_exercises';
  $page->task = 'page';
  $page->admin_title = 'Search - school exercises';
  $page->admin_description = '';
  $page->path = 'grundskole-opgaver';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'none',
    'title' => 'Grundskole',
    'name' => 'main-menu',
    'weight' => '2',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_search_school_exercises__panel_context_989e63bd-623c-4c76-83df-b3e0d7f76cdb';
  $handler->task = 'page';
  $handler->subtask = 'search_school_exercises';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '628079a0-513c-4ad1-965b-dc9dd22943cc';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_search_school_exercises__panel_context_989e63bd-623c-4c76-83df-b3e0d7f76cdb';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-2f9c8413-d805-4d95-abde-3c3c21c0d4ae';
  $pane->panel = 'middle';
  $pane->type = 'search_box';
  $pane->subtype = 'search_box';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'search_node' => array(
      'id' => '1583747333',
      'server' => 'search_node',
      'index' => 'exercises',
      'options' => array(
        'match_type' => 'best_fields',
        'match_operator' => 'or',
        'cache_expire' => '300',
        'size' => '14',
        'initial_query_enable' => 1,
        'initial_query_text' => '',
        'fields' => array(
          'field_activity_select:name' => 'field_activity_select:name',
          'field_duration_select:name' => 'field_duration_select:name',
          'field_educational_goals:name' => 'field_educational_goals:name',
          'field_full_description:value' => 'field_full_description:value',
          'field_period_select:name' => 'field_period_select:name',
          'field_subject:name' => 'field_subject:name',
          'title' => 'title',
          'author' => 0,
          'changed' => 0,
          'created' => 0,
          'field_activity_select' => 0,
          'field_duration_select' => 0,
          'field_educational_goals' => 0,
          'field_educational_material' => 0,
          'field_image:file' => 0,
          'field_period_select' => 0,
          'field_subject' => 0,
          'field_target_group' => 0,
          'field_target_group_sub' => 0,
          'nid' => 0,
          'search_api_language' => 0,
          'type' => 0,
          'url' => 0,
        ),
        'filters' => array(
          'taxonomy' => array(
            'field_activity_select' => 'field_activity_select',
            'field_duration_select' => 'field_duration_select',
            'field_educational_goals' => 'field_educational_goals',
            'field_period_select' => 'field_period_select',
            'field_subject' => 'field_subject',
            'field_target_group_sub' => 'field_target_group_sub',
            'field_target_group' => 0,
          ),
          'boolean' => array(),
        ),
      ),
      'filters' => array(
        'type' => array(
          'field_activity_select' => 'or',
          'field_duration_select' => 'or',
          'field_educational_goals' => 'or',
          'field_period_select' => 'or',
          'field_subject' => 'or',
          'field_target_group' => 'or',
          'field_target_group_sub' => 'or',
        ),
      ),
      'sorting' => array(
        'field' => 'changed',
        'order' => 'desc',
      ),
      'dates' => array(
        'fields' => array(),
      ),
      'intervals' => array(
        'fields' => array(
          'author' => 0,
          'changed' => 0,
          'created' => 0,
          'field_activity_select' => 0,
          'field_activity_select:name' => 0,
          'field_duration_select' => 0,
          'field_duration_select:name' => 0,
          'field_educational_goals' => 0,
          'field_educational_goals:name' => 0,
          'field_educational_material' => 0,
          'field_full_description:value' => 0,
          'field_image:file' => 0,
          'field_period_select' => 0,
          'field_period_select:name' => 0,
          'field_subject' => 0,
          'field_subject:name' => 0,
          'field_target_group' => 0,
          'field_target_group_sub' => 0,
          'nid' => 0,
          'search_api_language' => 0,
          'title' => 0,
          'type' => 0,
          'url' => 0,
        ),
      ),
      'forces' => array(
        'field' => 'field_target_group',
        'selected' => array(
          'Grundskole' => 'Grundskole',
          'Dagtilbud' => 0,
          'Ungdomsuddannelse' => 0,
        ),
      ),
      'highlight' => array(
        'fields' => array(
          'author' => 0,
          'changed' => 0,
          'created' => 0,
          'field_activity_select' => 0,
          'field_activity_select:name' => 0,
          'field_duration_select' => 0,
          'field_duration_select:name' => 0,
          'field_educational_goals' => 0,
          'field_educational_goals:name' => 0,
          'field_educational_material' => 0,
          'field_full_description:value' => 0,
          'field_image:file' => 0,
          'field_period_select' => 0,
          'field_period_select:name' => 0,
          'field_subject' => 0,
          'field_subject:name' => 0,
          'field_target_group' => 0,
          'field_target_group_sub' => 0,
          'nid' => 0,
          'search_api_language' => 0,
          'title' => 0,
          'type' => 0,
          'url' => 0,
        ),
      ),
      'templates' => array(
        'box' => '/sites/default/files/templates/search-exercise-school.html',
        'result' => '/sites/default/files/templates/results-exercise.html',
        'pager' => '/profiles/ulf/modules/search_node_page/templates/angular/pager.html',
        'popup' => '/profiles/ulf/modules/search_node_page/templates/angular/popup.html',
      ),
      'autocomplete' => array(
        'index' => '_none_',
        'field' => '_none_',
        'minChars' => '3',
        'size' => '1',
      ),
      'map' => array(
        'points' => '50',
        'markers' => '/profiles/ulf/themes/ulf_default/images/leaflet/',
      ),
    ),
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '2f9c8413-d805-4d95-abde-3c3c21c0d4ae';
  $display->content['new-2f9c8413-d805-4d95-abde-3c3c21c0d4ae'] = $pane;
  $display->panels['middle'][0] = 'new-2f9c8413-d805-4d95-abde-3c3c21c0d4ae';
  $pane = new stdClass();
  $pane->pid = 'new-485b89b0-43a3-4592-8e8e-d0f5160a9288';
  $pane->panel = 'middle';
  $pane->type = 'search_result';
  $pane->subtype = 'search_result';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '485b89b0-43a3-4592-8e8e-d0f5160a9288';
  $display->content['new-485b89b0-43a3-4592-8e8e-d0f5160a9288'] = $pane;
  $display->panels['middle'][1] = 'new-485b89b0-43a3-4592-8e8e-d0f5160a9288';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['search_school_exercises'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'search_youth_exercises';
  $page->task = 'page';
  $page->admin_title = 'Search - youth exercises';
  $page->admin_description = '';
  $page->path = 'ungdomsuddannelse-opgaver';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'none',
    'title' => 'Ungdomsuddannelse',
    'name' => 'main-menu',
    'weight' => '3',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_search_youth_exercises__panel_context_752772f8-a42c-490d-9f4a-9db155ecf48e';
  $handler->task = 'page';
  $handler->subtask = 'search_youth_exercises';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '628079a0-513c-4ad1-965b-dc9dd22943cc';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_search_youth_exercises__panel_context_752772f8-a42c-490d-9f4a-9db155ecf48e';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-2f9c8413-d805-4d95-abde-3c3c21c0d4ae';
  $pane->panel = 'middle';
  $pane->type = 'search_box';
  $pane->subtype = 'search_box';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'search_node' => array(
      'id' => '1583747444',
      'server' => 'search_node',
      'index' => 'exercises',
      'options' => array(
        'match_type' => 'best_fields',
        'match_operator' => 'or',
        'cache_expire' => '300',
        'size' => '14',
        'initial_query_enable' => 1,
        'initial_query_text' => '',
        'fields' => array(
          'field_activity_select:name' => 'field_activity_select:name',
          'field_duration_select:name' => 'field_duration_select:name',
          'field_educational_goals:name' => 'field_educational_goals:name',
          'field_full_description:value' => 'field_full_description:value',
          'field_period_select:name' => 'field_period_select:name',
          'field_subject:name' => 'field_subject:name',
          'title' => 'title',
          'author' => 0,
          'changed' => 0,
          'created' => 0,
          'field_activity_select' => 0,
          'field_duration_select' => 0,
          'field_educational_goals' => 0,
          'field_educational_material' => 0,
          'field_image:file' => 0,
          'field_period_select' => 0,
          'field_subject' => 0,
          'field_target_group' => 0,
          'field_target_group_sub' => 0,
          'nid' => 0,
          'search_api_language' => 0,
          'type' => 0,
          'url' => 0,
        ),
        'filters' => array(
          'taxonomy' => array(
            'field_activity_select' => 'field_activity_select',
            'field_duration_select' => 'field_duration_select',
            'field_educational_goals' => 'field_educational_goals',
            'field_period_select' => 'field_period_select',
            'field_subject' => 'field_subject',
            'field_target_group_sub' => 'field_target_group_sub',
            'field_target_group' => 0,
          ),
          'boolean' => array(),
        ),
      ),
      'filters' => array(
        'type' => array(
          'field_activity_select' => 'or',
          'field_duration_select' => 'or',
          'field_educational_goals' => 'or',
          'field_period_select' => 'or',
          'field_subject' => 'or',
          'field_target_group' => 'or',
          'field_target_group_sub' => 'or',
        ),
      ),
      'sorting' => array(
        'field' => 'changed',
        'order' => 'desc',
      ),
      'dates' => array(
        'fields' => array(),
      ),
      'intervals' => array(
        'fields' => array(
          'author' => 0,
          'changed' => 0,
          'created' => 0,
          'field_activity_select' => 0,
          'field_activity_select:name' => 0,
          'field_duration_select' => 0,
          'field_duration_select:name' => 0,
          'field_educational_goals' => 0,
          'field_educational_goals:name' => 0,
          'field_educational_material' => 0,
          'field_full_description:value' => 0,
          'field_image:file' => 0,
          'field_period_select' => 0,
          'field_period_select:name' => 0,
          'field_subject' => 0,
          'field_subject:name' => 0,
          'field_target_group' => 0,
          'field_target_group_sub' => 0,
          'nid' => 0,
          'search_api_language' => 0,
          'title' => 0,
          'type' => 0,
          'url' => 0,
        ),
      ),
      'forces' => array(
        'field' => 'field_target_group',
        'selected' => array(
          'Ungdomsuddannelse' => 'Ungdomsuddannelse',
          'Dagtilbud' => 0,
          'Grundskole' => 0,
        ),
      ),
      'highlight' => array(
        'fields' => array(
          'author' => 0,
          'changed' => 0,
          'created' => 0,
          'field_activity_select' => 0,
          'field_activity_select:name' => 0,
          'field_duration_select' => 0,
          'field_duration_select:name' => 0,
          'field_educational_goals' => 0,
          'field_educational_goals:name' => 0,
          'field_educational_material' => 0,
          'field_full_description:value' => 0,
          'field_image:file' => 0,
          'field_period_select' => 0,
          'field_period_select:name' => 0,
          'field_subject' => 0,
          'field_subject:name' => 0,
          'field_target_group' => 0,
          'field_target_group_sub' => 0,
          'nid' => 0,
          'search_api_language' => 0,
          'title' => 0,
          'type' => 0,
          'url' => 0,
        ),
      ),
      'templates' => array(
        'box' => '/sites/default/files/templates/search-exercise-youth.html',
        'result' => '/sites/default/files/templates/results-exercise.html',
        'pager' => '/profiles/ulf/modules/search_node_page/templates/angular/pager.html',
        'popup' => '/profiles/ulf/modules/search_node_page/templates/angular/popup.html',
      ),
      'autocomplete' => array(
        'index' => '_none_',
        'field' => '_none_',
        'minChars' => '3',
        'size' => '1',
      ),
      'map' => array(
        'points' => '50',
        'markers' => '/profiles/ulf/themes/ulf_default/images/leaflet/',
      ),
    ),
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '2f9c8413-d805-4d95-abde-3c3c21c0d4ae';
  $display->content['new-2f9c8413-d805-4d95-abde-3c3c21c0d4ae'] = $pane;
  $display->panels['middle'][0] = 'new-2f9c8413-d805-4d95-abde-3c3c21c0d4ae';
  $pane = new stdClass();
  $pane->pid = 'new-485b89b0-43a3-4592-8e8e-d0f5160a9288';
  $pane->panel = 'middle';
  $pane->type = 'search_result';
  $pane->subtype = 'search_result';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '485b89b0-43a3-4592-8e8e-d0f5160a9288';
  $display->content['new-485b89b0-43a3-4592-8e8e-d0f5160a9288'] = $pane;
  $display->panels['middle'][1] = 'new-485b89b0-43a3-4592-8e8e-d0f5160a9288';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['search_youth_exercises'] = $page;

  return $pages;

}
