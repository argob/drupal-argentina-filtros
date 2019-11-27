
<div class="alert <?php print "alert-".$tipo ?>">
  <?php if(isset($icono) && !empty($icono)) { ?>
  <div class="media">
    <div class="media-left">
      <i class="fa <?php print $icono ?> fa-fw fa-4x"></i>
    </div>
    <div class="media-body">
      <?php if(isset($titulo) && !empty($titulo)) { ?>
      <h5><?php print $titulo; ?></h5>
      <?php } ?>
      <p class="margin-0"><?php print $texto ?></p>
    </div>
  </div>
  <?php } else { ?>
  <?php if(isset($titulo) && !empty($titulo)) { ?>
  <h5><?php print $titulo; ?></h5>
  <?php } ?>
  <p class="margin-0"><?php print $texto ?></p>
  <?php } ?>
</div>







