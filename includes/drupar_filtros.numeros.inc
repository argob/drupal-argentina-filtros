<?php

function drupar_filtros_numeros_process($text, $filter, $format, $langcode, $cache, $cache_id) {
  $pattern = "/\[\[(números|numeros)\-\{(.*)-(.*)\}\-\{(.*)}\-\{(.*)\}\-\{(.*)\}\]\]/";
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
    $replace[] = theme('drupar_filtros_numeros', array('acento' => $value[1],'numero' => $value[2],'numero_chico' => $value[3], 'titulo' => $value[4],'texto' => $value[5],'color' => $value[6] ));
  }
  return str_replace($search, $replace, $text);
}
