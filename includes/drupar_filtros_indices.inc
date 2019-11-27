<?php

  function drupar_filtros_indices_process($text, $filter, $format, $langcode, $cache, $cache_id) {
    $pattern = "/\[\[indice\-\{([A-z0-9áéíóúÁÉÍÓÚñÑ¿?!¡.,\s#\(\)\+-_*:;\/$%&]*)\}\]\]/";
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
      $replace[] = theme('drupar_filtros_indices', array('contenido_markdown' => check_markup($value[1], 'filtered_html')));
    }
    
    return str_replace($search, $replace, $text);
  }
