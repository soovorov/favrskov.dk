<?php
/**
 * @file
 * panel_term_page.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function panel_term_page_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view_panel_context_2';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'Default term page',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'nodepage';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'header' => NULL,
      'node-content' => NULL,
      'node-sidebar' => NULL,
      'footer' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'e08374f2-d009-4d12-a2ea-b88f434e902d';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-97aaaed0-625e-4d2f-8eaa-a15ab10fc9fa';
    $pane->panel = 'footer';
    $pane->type = 'panels_mini';
    $pane->subtype = 'footer_mini_panel';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '97aaaed0-625e-4d2f-8eaa-a15ab10fc9fa';
    $display->content['new-97aaaed0-625e-4d2f-8eaa-a15ab10fc9fa'] = $pane;
    $display->panels['footer'][0] = 'new-97aaaed0-625e-4d2f-8eaa-a15ab10fc9fa';
    $pane = new stdClass();
    $pane->pid = 'new-65cd25cf-ca40-406d-a470-9288f51cbb68';
    $pane->panel = 'header';
    $pane->type = 'panels_mini';
    $pane->subtype = 'header_mini_panel';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '65cd25cf-ca40-406d-a470-9288f51cbb68';
    $display->content['new-65cd25cf-ca40-406d-a470-9288f51cbb68'] = $pane;
    $display->panels['header'][0] = 'new-65cd25cf-ca40-406d-a470-9288f51cbb68';
    $pane = new stdClass();
    $pane->pid = 'new-ab87c515-b797-4d59-b543-472431f5e02c';
    $pane->panel = 'node-content';
    $pane->type = 'views';
    $pane->subtype = 'taxonomy_term';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 1,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'page',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'ab87c515-b797-4d59-b543-472431f5e02c';
    $display->content['new-ab87c515-b797-4d59-b543-472431f5e02c'] = $pane;
    $display->panels['node-content'][0] = 'new-ab87c515-b797-4d59-b543-472431f5e02c';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-65cd25cf-ca40-406d-a470-9288f51cbb68';
  $handler->conf['display'] = $display;
  $export['term_view_panel_context_2'] = $handler;

  return $export;
}
