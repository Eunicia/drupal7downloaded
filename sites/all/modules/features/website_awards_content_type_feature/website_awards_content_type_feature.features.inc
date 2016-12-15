<?php
/**
 * @file
 * website_awards_content_type_feature.features.inc
 */

/**
 * Implements hook_node_info().
 */
function website_awards_content_type_feature_node_info() {
  $items = array(
    'awards' => array(
      'name' => t('Awards'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
