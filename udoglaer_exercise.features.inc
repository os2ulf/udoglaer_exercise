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
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function udoglaer_exercise_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
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

/**
 * Implements hook_default_search_api_index().
 */
function udoglaer_exercise_default_search_api_index() {
  $items = array();
  $items['exercises'] = entity_import('search_api_index', '{
    "name" : "Exercises",
    "machine_name" : "exercises",
    "description" : null,
    "server" : "search_node",
    "item_type" : "node",
    "options" : {
      "datasource" : { "bundles" : [ "exercise" ] },
      "index_directly" : 0,
      "cron_limit" : "50",
      "search_node_indexes" : "ba97aaba3a3e5fbc844bbb49335397af",
      "fields" : {
        "author" : { "type" : "integer", "entity_type" : "user" },
        "changed" : { "type" : "date" },
        "created" : { "type" : "date" },
        "field_activity_select" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_duration_select" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_educational_goals" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_educational_goals:name" : { "type" : "list\\u003Ctext\\u003E" },
        "field_educational_material" : {
          "type" : "list\\u003Cinteger\\u003E",
          "entity_type" : "field_collection_item"
        },
        "field_full_description:value" : { "type" : "text" },
        "field_image:file" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "file" },
        "field_period_select" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_subject" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_subject:name" : { "type" : "list\\u003Ctext\\u003E" },
        "field_target_group" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_target_group_sub" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "nid" : { "type" : "integer" },
        "search_api_language" : { "type" : "string" },
        "title" : { "type" : "text" },
        "type" : { "type" : "string" },
        "url" : { "type" : "uri" }
      },
      "data_alter_callbacks" : {
        "exclude" : {
          "status" : 0,
          "weight" : "-50",
          "settings" : { "fields" : { "name" : "", "values" : "" } }
        },
        "location" : { "status" : 0, "weight" : "-50", "settings" : { "field_name" : "" } },
        "search_api_alter_bundle_filter" : {
          "status" : 0,
          "weight" : "-10",
          "settings" : { "default" : "1", "bundles" : [] }
        },
        "search_api_alter_add_url" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_aggregation" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_viewed_entity" : { "status" : 0, "weight" : "0", "settings" : { "mode" : "full" } },
        "search_api_alter_add_hierarchy" : { "status" : 0, "weight" : "0", "settings" : { "fields" : [] } },
        "search_api_alter_language_control" : {
          "status" : 0,
          "weight" : "0",
          "settings" : { "lang_field" : "", "languages" : [] }
        },
        "search_api_alter_node_access" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_node_status" : { "status" : 1, "weight" : "0", "settings" : [] }
      },
      "processors" : {
        "search_api_case_ignore" : {
          "status" : 0,
          "weight" : "0",
          "settings" : { "fields" : {
              "field_subject:name" : true,
              "field_activity_select:name" : true,
              "field_duration_select:name" : true,
              "field_period_select:name" : true
            }
          }
        },
        "search_api_html_filter" : {
          "status" : 0,
          "weight" : "10",
          "settings" : {
            "fields" : {
              "field_subject:name" : true,
              "field_activity_select:name" : true,
              "field_duration_select:name" : true,
              "field_period_select:name" : true
            },
            "title" : 0,
            "alt" : 1,
            "tags" : "h1 = 5\\r\\nh2 = 3\\r\\nh3 = 2\\r\\nstrong = 2\\r\\nb = 2\\r\\nem = 1.5\\r\\nu = 1.5"
          }
        },
        "search_api_transliteration" : {
          "status" : 0,
          "weight" : "15",
          "settings" : { "fields" : {
              "field_subject:name" : true,
              "field_activity_select:name" : true,
              "field_duration_select:name" : true,
              "field_period_select:name" : true
            }
          }
        },
        "search_api_tokenizer" : {
          "status" : 0,
          "weight" : "20",
          "settings" : {
            "fields" : {
              "field_subject:name" : true,
              "field_activity_select:name" : true,
              "field_duration_select:name" : true,
              "field_period_select:name" : true
            },
            "spaces" : "[^[:alnum:]]",
            "ignorable" : "[\\u0027]"
          }
        },
        "search_api_stopwords" : {
          "status" : 0,
          "weight" : "30",
          "settings" : {
            "fields" : {
              "field_subject:name" : true,
              "field_activity_select:name" : true,
              "field_duration_select:name" : true,
              "field_period_select:name" : true
            },
            "file" : "",
            "stopwords" : "but\\r\\ndid\\r\\nthe this that those\\r\\netc"
          }
        },
        "search_api_porter_stemmer" : {
          "status" : 0,
          "weight" : "35",
          "settings" : {
            "fields" : {
              "field_subject:name" : true,
              "field_activity_select:name" : true,
              "field_duration_select:name" : true,
              "field_period_select:name" : true
            },
            "exceptions" : "texan=texa"
          }
        },
        "search_api_highlighting" : {
          "status" : 0,
          "weight" : "40",
          "settings" : {
            "prefix" : "\\u003Cstrong\\u003E",
            "suffix" : "\\u003C\\/strong\\u003E",
            "excerpt" : 1,
            "excerpt_length" : "256",
            "exclude_fields" : [],
            "highlight" : "always",
            "highlight_partial" : 0
          }
        }
      }
    },
    "enabled" : "1",
    "read_only" : "0"
  }');
  return $items;
}
