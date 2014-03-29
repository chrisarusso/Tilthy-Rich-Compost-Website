// initialize foundation
$(document).foundation();

$(document).ready(function() {

	// main navigation menu scrolling
	$('#menu').localScroll({
		'duration': 1000,
		'easing': 'easeInOutCubic'
	});

	// "more about us" link below logo
	$('#more-about-us').on('click', function(e) {
		e.preventDefault();
		$.scrollTo('.about-us', {
			'duration': 600,
			'easing': 'easeInOutCubic',
			'offset': -110
		});
		$('.container.about-us > .row .columns').css('opacity', 0);
		$('.container.about-us > .row').toggle({
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
	});

	$('#see-commercial-services').on('click', function(e) {
		e.preventDefault();

		$('.residential-services').toggle({
			'duration': 400,
			'easing': 'easeInOutCubic'
		});

		$('.commercial-services').toggle({
			'duration': 400,
			'easing': 'easeInOutCubic'
		});

		$.scrollTo('.commercial-services', {
			'duration': 600,
			'easing': 'easeInOutCubic'
		});
	});

	$('#see-residential-services').on('click', function(e) {
		e.preventDefault();

		$('.residential-services').toggle({
			'duration': 400,
			'easing': 'easeInOutCubic'
		});

		$('.commercial-services').toggle({
			'duration': 400,
			'easing': 'easeInOutCubic'
		});

		$.scrollTo('.commercial-services', {
			'duration': 600,
			'easing': 'easeInOutCubic'
		});
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

	$('#subscription-details').on('click', function(e) {
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
	});

	$('#back-to-top').on('click', function(e) {
		e.preventDefault();
		$.scrollTo('0px', {
			'duration': 600,
			'easing': 'easeInOutCubic'
		});
	});

});