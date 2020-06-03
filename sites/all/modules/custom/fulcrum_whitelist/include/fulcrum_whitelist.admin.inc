<?php

function fulcrum_whitelist_admin_form($form, &$form_state) {
  $config = _fulcrum_whitelist_config();

  _fulcrum_whitelist_create_tokens();

  $form['fulcrum_whitelist_host'] = [
    '#type' => 'textfield',
    '#title' => t('Whitelist Host'),
    '#maxlength' => 256,
    '#size' => 64,
    '#default_value' => $config->host
  ];
  $form['fulcrum_whitelist_port'] = [
    '#type' => 'textfield',
    '#title' => t('Port'),
    '#default_value' => $config->port
  ];
  $form['fulcrum_whitelist_token_process_limit'] = [
    '#type' => 'textfield',
    '#title' => t('Token Process Limit'),
    '#default_value' => $config->token_process_limit
  ];
  $form['fulcrum_whitelist_delay'] = [
    '#type' => 'textfield',
    '#title' => t('Delay seconds for servers to all whitelist'),
    '#default_value' => $config->delay
  ];
  $form['fulcrum_whitelist_redirect'] = [
    '#type' => 'textfield',
    '#title' => t('The URI to redirect to after whitelisting'),
    '#default_value' => $config->redirect
  ];
  $form['fulcrum_whitelist_abbr'] = [
    '#type' => 'textfield',
    '#title' => t('Whitelist Abbreviation'),
    '#maxlength' => 8,
    '#size' => 10,
    '#default_value' => $config->abbr
  ];
  $form['fulcrum_whitelist_wait_text'] = [
    '#type' => 'textfield',
    '#title' => t('Wait Text'),
    '#maxlength' => 256,
    '#size' => 64,
    '#default_value' => $config->wait_text
  ];
  $form['fulcrum_whitelist_fail_text'] = [
    '#type' => 'textfield',
    '#title' => t('Failure Text'),
    '#maxlength' => 256,
    '#size' => 64,
    '#default_value' => $config->fail_text
  ];
  $form['fulcrum_whitelist_misconf_text'] = [
    '#type' => 'textfield',
    '#title' => t('Misconfiguration Text'),
    '#maxlength' => 256,
    '#size' => 64,
    '#default_value' => $config->misconf_text
  ];
  $form['fulcrum_whitelist_docs_intro'] = [
    '#type' => 'textarea',
    '#title' => t('Usage Introduction'),
    '#default_value' => $config->docs_intro
  ];
  $form['fulcrum_whitelist_docs_user'] = [
    '#type' => 'textarea',
    '#title' => t('Usage User Section'),
    '#default_value' => $config->docs_user
  ];
  $form['fulcrum_whitelist_docs_admin'] = [
    '#type' => 'textarea',
    '#title' => t('Usage Admin Section'),
    '#default_value' => $config->docs_admin,
  ];

  return system_settings_form($form);
}

