<?php

function drupar_filtros_alerta_process($text, $filter, $format, $langcode, $cache, $cache_id) {
  $pattern = "/\[\[alerta\-\{(.*)\}\-\{(.+)}\-\{(.*)\}\-\{(warning|danger|info|success)\}\]\]/";
  preg_match_all($pattern, $text, $matches);
  $search = array();
  $values = array();
  $replace = array();
  foreach ($matches as $k1 => $match) {
    foreach ($match  as $k2 => $item) {
      $values[$k2][] = $item;
    }
  }
  foreach ($values as $key => $value) {
    $search[] = $value[0];
    $replace[] = theme('drupar_filtros_alerta', array('titulo' => check_markup($value[1], 'filtered_html'), 'texto' => check_markup($value[2], 'filtered_html'), 'icono' => $value[3], 'tipo' => $value[4]));
  }
  return str_replace($search, $replace, $text);
}
