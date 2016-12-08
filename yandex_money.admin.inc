<?php

/**
 * Implements hook_form()
 */
function yandex_money_config_form($form, &$form_state) {
  $form = array();

  $form['yandex_money_wallet_number'] = array(
    '#type' => 'textfield',
    '#title' => t('Wallet number'),
    '#default_value' => variable_get('yandex_money_wallet_number', '4100'),
    '#required' => TRUE,
    );

  $form['yandex_money_sum'] = array(
    '#type' => 'textfield',
    '#title' => t('Transaction ammount'),
    '#default_value' => variable_get('yandex_money_sum', '120'),
    );

  $form['yandex_money_secret'] = array(
    '#type' => 'textfield',
    '#title' => t('HTTP-request secret code'),
    '#default_value' => variable_get('yandex_money_secret', ''),
    );

  return system_settings_form($form);
}