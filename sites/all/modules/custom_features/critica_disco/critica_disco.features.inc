<?php
/**
 * @file
 * critica_disco.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function critica_disco_ctools_plugin_api() {
  return array("version" => "1");
}

/**
 * Implements hook_views_api().
 */
function critica_disco_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function critica_disco_node_info() {
  $items = array(
    'critica_disco' => array(
      'name' => t('Crítica de disco'),
      'base' => 'node_content',
      'description' => t('Críticas de discos, ya sean recientes o antiguos.
'),
      'has_title' => '1',
      'title_label' => t('Título'),
      'help' => '',
    ),
  );
  return $items;
}
