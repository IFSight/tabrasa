<?php

function fulcrum_whitelist_admin_form($form, &$form_state) {
  $form['fulcrum_whitelist_whitelist_host'] = [
    '#type' => 'textfield',
    '#title' => t('Whitelist Host'),
    '#maxlength' => 256,
    '#size' => 64,
    '#default_value' => variable_get('fulcrum_whitelist_whitelist_host', 'whitelist'),
  ];
  $form['fulcrum_whitelist_port'] = [
    '#type' => 'textfield',
    '#title' => t('Port'),
    '#default_value' => variable_get('fulcrum_whitelist_port', 18888),
  ];
  $form['fulcrum_whitelist_token_process_limit'] = [
    '#type' => 'textfield',
    '#title' => t('Token Process Limit'),
    '#default_value' => variable_get('fulcrum_whitelist_token_process_limit', 50),
  ];
  $form['fulcrum_whitelist_delay'] = [
    '#type' => 'textfield',
    '#title' => t('Delay seconds for servers to all whitelist'),
    '#default_value' => variable_get('fulcrum_whitelist_delay', 3),
  ];
  $form['fulcrum_whitelist_whitelist_abbr'] = [
    '#type' => 'textfield',
    '#title' => t('Whitelist Abbreviation'),
    '#maxlength' => 4,
    '#size' => 6,
    '#default_value' => variable_get('fulcrum_whitelist_whitelist_abbr', 'unkn'),
  ];
  $form['fulcrum_whitelist_wait_text'] = [
    '#type' => 'textfield',
    '#title' => t('Wait Text'),
    '#maxlength' => 256,
    '#size' => 64,
    '#default_value' => variable_get('fulcrum_whitelist_wait_text', 'Please wait while we authorize this whitelisting'),
  ];
  $form['fulcrum_whitelist_fail_text'] = [
    '#type' => 'textfield',
    '#title' => t('Failure Text'),
    '#maxlength' => 256,
    '#size' => 64,
    '#default_value' => variable_get('fulcrum_whitelist_fail_text', 'Your whitelist authorization failed, this has been logged. Please reach out to the sites technical contact'),
  ];
  $form['fulcrum_whitelist_misconf_text'] = [
    '#type' => 'textfield',
    '#title' => t('Misconfiguration Text'),
    '#maxlength' => 256,
    '#size' => 64,
    '#default_value' => variable_get('fulcrum_whitelist_misconf_text', 'Your whitelist configuration is not properly setup, please reach out to the sites technical contact'),
  ];
  $form['fulcrum_whitelist_docs_intro'] = [
    '#type' => 'textarea',
    '#title' => t('Usage Introduction'),
    '#default_value' => variable_get('fulcrum_whitelist_docs_intro', _fulcrum_whitelist_docs_intro_default())
  ];
  $form['fulcrum_whitelist_docs_user'] = [
    '#type' => 'textarea',
    '#title' => t('Usage User Section'),
    '#default_value' => variable_get('fulcrum_whitelist_docs_user', _fulcrum_whitelist_docs_user_default())
  ];
  $form['fulcrum_whitelist_docs_admin'] = [
    '#type' => 'textarea',
    '#title' => t('Usage Admin Section'),
    '#default_value' => variable_get('fulcrum_whitelist_docs_admin', _fulcrum_whitelist_docs_admin_default()),
  ];

  return system_settings_form($form);
}

function _fulcrum_whitelist_docs_intro_default() {
  return <<<HTML
    <p>This document is intended for current clients using Interpersonal Frequency (I.F.) Fulcrum Drupal-as-a-Service websites and provides an overview for use and administration of controlled access to restricted areas of client sites.</p>

    <p>For security reasons, more sensitive areas of I.F.’s Fulcrum system are inaccessible to the general public including the development, testing and training environments, and production access screens such as <a href="/user">/user</a> and <a href="/admin">/admin</a>. Preventing general public access to these locations reduces security threats such as (distributed) denial of service issues, whether malicious (e.g., botnet attack) or mistakes (e.g., misconfigured search crawlers).</p>

    <p>Our Fulcrum Streamlined Whitelist (FSW) feature allows controlled access to these areas. The FSW URL contains a token that will whitelist your location and redirect you to the correct login page, such as <a href="/user">/user</a>.</p>

    <p>Your organization’s designated site administrator(s) will provide you with an individual FSW URL for your site. </p>
HTML;
}

function _fulcrum_whitelist_docs_user_default() {
  return <<<HTML
  <h2>For FSW Users:</h2>
  <ul>
    <li>
      Do not share the FSW URL with others. It is specific to your account and will only work for one account. Any activity with the FSW URL is recorded along with your I.P. for security purposes.
    </li>

    <li>
      If for any reason you inadvertently share your FSW URL via email or other methods with anyone besides your site administrator(s), please contact your site administrator(s) to reset your FSW URL.
    </li>

    <li>
      The FSW URL will not automatically log you in. It will authorize your Internet Address (I.P.) and redirects you to the correct login screen, where you must supply appropriate credentials.
    </li>

    <li>
      The redirect page will not look like your website.
    </li>

    <li>
      If you were previously logged in you will be redirected to your user page, otherwise you will redirected to the login page.
    </li>

    <li>
      If you are an existing Zuul user, it will continue to work. However, we recommend you switch to FSW. While “zuul” will continue to work it will be deprecated in the future.
    </li>
  </ul>
HTML;
}

function _fulcrum_whitelist_docs_admin_default() {
  return <<<HTML
  <h2>For FSW Site Administrators:</h2>
  <ul>
    <li>
      I.F. must grant permission to view the FSW URLs.
    </li>

    <li>
      FSW URLs are on your site at the path: <a href="/admin/config/fulcrum_whitelist">/admin/config/fulcrum_whitelist</a>
    </li>

    <li>
      FSW URLs should be exposed only to the particular user associated with the particular URL.
    </li>

    <li>
      Rescinding access requires disabling the user or disabling the FSW URL (both are not required).
    </li>

    <li>
      To create a new FSW URL, delete the existing URL; a replacement URL will be generated automatically within an hour.
    </li>
  </ul>
HTML;
}