<?php
/**
 * @file
 * os2web_meetings_light.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function os2web_meetings_light_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function os2web_meetings_light_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function os2web_meetings_light_node_info() {
  $items = array(
    'os2web_meetings_bullet' => array(
      'name' => t('Meetings: Bullet Point'),
      'base' => 'node_content',
      'description' => t('Bullet point on a meeting or agenda.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'os2web_meetings_bullet_attach' => array(
      'name' => t('Meetings: Bullet Point Attachment'),
      'base' => 'node_content',
      'description' => t('An attachment to a meeting bullet point.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'os2web_meetings_meeting' => array(
      'name' => t('Meetings: Meeting'),
      'base' => 'node_content',
      'description' => t('Meeting or agenda imported from an ESDH system.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
