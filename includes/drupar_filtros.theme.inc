<?php

/*
* Implements hook_theme().
*/
function drupar_filtros_theme($existing, $type, $theme, $path) {
  return array(
    'drupar_filtros_youtube' => array(
      'path' => drupal_get_path('module', 'drupar_filtros') . '/templates',
      'template' => 'drupar_filtros_youtube'
    ),
    'drupar_filtros_vimeo' => array(
      'path' => drupal_get_path('module', 'drupar_filtros') . '/templates',
      'template' => 'drupar_filtros_vimeo'
    ),
    'drupar_filtros_alerta' => array(
      'path' => drupal_get_path('module', 'drupar_filtros') . '/templates',
      'template' => 'drupar_filtros_alerta'
    ),
    'drupar_filtros_citas_simple' => array(
      'path' => drupal_get_path('module', 'drupar_filtros') . '/templates',
      'template' => 'drupar_filtros_citas_simple'
    ),
    'drupar_filtros_citas_destacada' => array(
      'path' => drupal_get_path('module', 'drupar_filtros') . '/templates',
      'template' => 'drupar_filtros_citas_destacada'
    ),
    'drupar_filtros_numeros' => array(
      'path' => drupal_get_path('module', 'drupar_filtros') . '/templates',
      'template' => 'drupar_filtros_numeros'
    ),
    'drupar_filtros_ejes' => array(
      'path' => drupal_get_path('module', 'drupar_filtros') . '/templates',
      'template' => 'drupar_filtros_ejes'
    ),
    'drupar_filtros_columnas' => array(
      'path' => drupal_get_path('module', 'drupar_filtros') . '/templates',
      'template' => 'drupar_filtros_columnas'
    ),
    'drupar_filtros_indices' => array(
      'path' => drupal_get_path('module', 'drupar_filtros') . '/templates',
      'template' => 'drupar_filtros_indices'
    ),
  );
}
