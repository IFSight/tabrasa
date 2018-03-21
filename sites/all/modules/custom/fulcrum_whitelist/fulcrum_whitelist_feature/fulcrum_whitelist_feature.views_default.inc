<?php
/**
 * @file
 * fulcrum_whitelist_feature.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function fulcrum_whitelist_feature_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'fulcrum_whitelist_tokens';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'eck_fulcrum_whitelist';
  $view->human_name = 'Fulcrum Whitelist Tokens';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Fulcrum Whitelist Tokens';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'eck view fulcrum_whitelist fulcrum_whitelist entities';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '30';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_fulcrum_whitelist_user_target_id']['id'] = 'field_fulcrum_whitelist_user_target_id';
  $handler->display->display_options['relationships']['field_fulcrum_whitelist_user_target_id']['table'] = 'field_data_field_fulcrum_whitelist_user';
  $handler->display->display_options['relationships']['field_fulcrum_whitelist_user_target_id']['field'] = 'field_fulcrum_whitelist_user_target_id';
  $handler->display->display_options['relationships']['field_fulcrum_whitelist_user_target_id']['label'] = 'User';
  $handler->display->display_options['relationships']['field_fulcrum_whitelist_user_target_id']['required'] = TRUE;
  /* Field: Fulcrum Whitelist: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'eck_fulcrum_whitelist';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'field_fulcrum_whitelist_user_target_id';
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['relationship'] = 'field_fulcrum_whitelist_user_target_id';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Whitelist Link';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="/fulcrum/whitelist/[title]">[title]</a>';
  /* Field: Fulcrum Whitelist: Status */
  $handler->display->display_options['fields']['field_fulcrum_whitelist_status']['id'] = 'field_fulcrum_whitelist_status';
  $handler->display->display_options['fields']['field_fulcrum_whitelist_status']['table'] = 'field_data_field_fulcrum_whitelist_status';
  $handler->display->display_options['fields']['field_fulcrum_whitelist_status']['field'] = 'field_fulcrum_whitelist_status';
  /* Field: Fulcrum Whitelist: Delete link */
  $handler->display->display_options['fields']['delete_link']['id'] = 'delete_link';
  $handler->display->display_options['fields']['delete_link']['table'] = 'eck_fulcrum_whitelist';
  $handler->display->display_options['fields']['delete_link']['field'] = 'delete_link';
  $handler->display->display_options['fields']['delete_link']['label'] = 'Delete';
  /* Filter criterion: Fulcrum Whitelist: fulcrum_whitelist type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'eck_fulcrum_whitelist';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'fulcrum_whitelist' => 'fulcrum_whitelist',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'fulcrum/whitelist-tokens';
  $export['fulcrum_whitelist_tokens'] = $view;

  return $export;
}
