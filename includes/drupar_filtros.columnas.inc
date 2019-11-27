<?php

function drupar_filtros_columnas_process($text, $filter, $format, $langcode, $cache, $cache_id) {
  $pattern = "/col([0-9]+)\<\<\n(.*)\n\>\>/";
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
    $replace[] = theme('drupar_filtros_columnas', array('numero_de_columnas' => $value[1], 'texto1' => $value[2]));
  }
  return str_replace($search, $replace, $text);
}
