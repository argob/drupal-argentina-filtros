
<?php

function drupar_filtros_citas_process($text, $filter, $format, $langcode, $cache, $cache_id) {
  $pattern = "/\[\[(cita|cita-destacada)\-\{(.*)\}\-\{(.+)}\]\]/";
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
      if ($value[1] == "cita"){
        $replace[] = theme(
          'drupar_filtros_citas_simple',
          array(
            'tipo_cita' => $value[1],
            'texto' => check_markup('"' . $value[2] . '"', 'filtered_html'),
            'autor' => $value[3],
          )
       );
      } elseif  ($value[1] == "cita-destacada") {
        $replace[] = theme(
          'drupar_filtros_citas_destacada',
          array(
            'tipo_cita' => $value[1],
            'texto' => check_markup($value[2], 'filtered_html'),
            'autor' => $value[3],
          )
        );
    };
  }
  return str_replace($search, $replace, $text);
}
