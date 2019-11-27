jQuery(document).ready(function(){
	
	jQuery('a[href^="blank:#"]').each(function(){
	
		jQuery(this).attr({target:"_blank"});

		let href_old  = jQuery(this).attr('href');
		let href_new  = href_old.split(":#")[1];
		
		jQuery(this).attr({href:href_new});		
	});
});