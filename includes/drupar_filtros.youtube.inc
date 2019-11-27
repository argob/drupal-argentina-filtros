<?php

function drupar_filtros_youtube_process($text, $filter, $format, $langcode, $cache, $cache_id) {
  $pattern = "/\[\[youtube\-\{([0-9]{1,2}by[0-9]{1,2})\}-\{(.+)\}\]\]/";
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
    $replace[] = theme(
      'drupar_filtros_youtube',
       array('ratio' => isset($value[1]) ? $value[1] : NULL,
       'video_id' => isset($value[2]) ? $value[2] : NULL,
       'width' => isset($value[3]) ? $value[3] : NULL,
       'height' => isset($value[4]) ? $value[4] : NULL
     )
   );
  }
  return str_replace($search, $replace, $text);
}
