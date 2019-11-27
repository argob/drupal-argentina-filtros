<?php

include_once 'drupar_filtros.youtube.inc';
include_once 'drupar_filtros.vimeo.inc';
include_once 'drupar_filtros.alerta.inc';
include_once 'drupar_filtros.citas.inc';
include_once 'drupar_filtros.numeros.inc';
include_once 'drupar_filtros.ejes.inc';
include_once 'drupar_filtros.columnas.inc';
include_once 'drupar_filtros_indices.inc';
/*
* Implements hook_textfilter_filter_info().
*/
function drupar_filtros_filter_info() {
  $filters = array();
  $filters['drupar_filtros_youtube'] = array(
    'title' => t('Drupar Filtros: Youtube'),
    'process callback' => 'drupar_filtros_youtube_process',
    'default settings' => array(),
  );
  $filters['drupar_filtros_vimeo'] = array(
    'title' => t('Drupar Filtros: Vimeo'),
    'process callback' => 'drupar_filtros_vimeo_process',
    'default settings' => array(),
  );
  $filters['drupar_filtros_alerta'] = array(
    'title' => t('Drupar Filtros: Alerta'),
    'process callback' => 'drupar_filtros_alerta_process',
    'default settings' => array(),
  );
    $filters['drupar_filtros_citas'] = array(
    'title' => t('Drupar Filtros: Citas'),
    'process callback' => 'drupar_filtros_citas_process',
    'default settings' => array(),
  );
  $filters['drupar_filtros_numeros'] = array(
    'title' => t('Drupar Filtros: Números'),
    'process callback' => 'drupar_filtros_numeros_process',
    'default settings' => array(),
  );
  $filters['drupar_filtros_ejes'] = array(
    'title' => t('Drupar Filtros: Ejes'),
    'process callback' => 'drupar_filtros_ejes_process',
    'default settings' => array(),
  );
  $filters['drupar_filtros_columnas'] = array(
    'title' => t('Drupar Filtros: Columnas'),
    'process callback' => 'drupar_filtros_columnas_process',
    'default settings' => array(),
  );
  $filters['drupar_filtros_indices'] = array(
    'title' => t('Drupar Filtros: Indices'),
    'process callback' => 'drupar_filtros_indices_process',
    'default settings' => array(),
  );

  return $filters;
}
