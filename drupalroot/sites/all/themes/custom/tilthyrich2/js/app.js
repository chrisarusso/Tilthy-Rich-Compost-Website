(function ($) {

// initialize foundation
$(document).foundation();

$(document).ready(function() {

	// main navigation menu scrolling
	$('#menu').localScroll({
		'duration': 1000,
		'easing': 'easeInOutCubic'
	});

	// "more about us" link below logo
	$('#about-us').on('click', function(e) {
		e.preventDefault();

		$('.container.about-us > .row .columns').css('opacity', 0);
		$('.container.about-us > .row').toggle({
			'duration': 400,
			'easing': 'easeInOutCubic',
			'complete': function() {
                if ($('.about-us-text').html() == 'More about us') {
                    $('.about-us-text').html('Less about us')
                    $('#about-us-img').attr('src', Drupal.settings.basePath + 'sites/all/themes/custom/tilthyrich2/images/less-about-us.png')
                    $.scrollTo('.about-us', {
                        'duration': 600,
                        'easing': 'easeInOutCubic',
                        'offset': -110
                    });
                }
                else {
                    $('.about-us-text').html('More about us')
                    $('#about-us-img').attr('src', Drupal.settings.basePath + 'sites/all/themes/custom/tilthyrich2/images/more-about-us.png')

                }
				$(this).find('.columns').animate({
					'opacity': 1
				}, {
					'duration': 400,
					'easing': 'easeInOutCubic'
				});
			}
		});
	});

	$('#see-commercial-services').on('click', function(e) {
		e.preventDefault();


		$('.residential-services').toggle({});

		$('.commercial-services').toggle({});


	});

	$('#see-residential-services').on('click', function(e) {
		e.preventDefault();

		$('.residential-services').toggle({});

		$('.commercial-services').toggle({});


	});

	/* removed due to reorganization of panels
	$('a.more-about-the-process').on('click', function(e) {
		e.preventDefault();
		$.scrollTo('.accept', {
			'duration': 600,
			'easing': 'easeInOutCubic'
		});
		$('.container.accept > .row .columns').css('opacity', 0);
		$('.container.accept > .row').toggle({
			'duration': 400,
			'easing': 'easeInOutCubic',
			'complete': function() {
				$(this).find('.columns').animate({
					'opacity': 1
				}, {
					'duration': 400,
					'easing': 'easeInOutCubic'
				});
			}
		});
	}); */

	$('#what-goes-in').on('click', function(e) {
		e.preventDefault();
		$.scrollTo('.what-goes-in', {
			'duration': 600,
			'easing': 'easeInOutCubic'
		});
		$('.container.what-goes-in > .row .columns').css('opacity', 0);
		$('.container.what-goes-in > .row').toggle({
			'duration': 400,
			'easing': 'easeInOutCubic',
			'complete': function() {
				$(this).find('.columns').animate({
					'opacity': 1
				}, {
					'duration': 400,
					'easing': 'easeInOutCubic'
				});
                if ($('.container.what-goes-in > .row').css('display') == 'none') {
                    $('#what-goes-in-img').attr('src', Drupal.settings.basePath + 'sites/all/themes/custom/tilthyrich2/images/green-plus.png')
                }
                else {
                    $('#what-goes-in-img').attr('src', Drupal.settings.basePath + 'sites/all/themes/custom/tilthyrich2/images/green-minus.png')
                }
			}
		});
	});

	$('#back-to-top').on('click', function(e) {
		e.preventDefault();
		$.scrollTo('0px', {
			'duration': 600,
			'easing': 'easeInOutCubic'
		});
	});

});

})(jQuery);