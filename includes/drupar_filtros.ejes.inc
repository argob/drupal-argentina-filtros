<?php

function drupar_filtros_ejes_process($text, $filter, $format, $langcode, $cache, $cache_id) {
  $pattern = "/\[\[ejes\-\{(.*)\}\-\{(.+)}\-\{(.*)\}\-\{(.*)\}\]\]/";
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
    $replace[] = theme('drupar_filtros_ejes', array('titulo' => $value[1], 'texto' => $value[2], 'icono' => $value[3], 'color_icono' => $value[4]));
  }
  return str_replace($search, $replace, $text);
}
