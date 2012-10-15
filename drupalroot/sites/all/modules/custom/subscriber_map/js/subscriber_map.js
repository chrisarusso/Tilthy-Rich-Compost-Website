(function ($) {

  // Initialize
  Drupal.tasupply_storefinder = Drupal.tasupply_storefinder || {};

  // Map drawing function
  Drupal.tasupply_storefinder.draw_map = function() {

    // Don't do anything if you don't have locations
    if (typeof(Drupal.settings.tasupply_storefinder) != 'undefined') {

      var settings = Drupal.settings.tasupply_storefinder;

      // Put the map canvas below the View.
      var map_canvas = $('<div id="storefinder-map"></div>');
      $('.view-id-store_locations').after(map_canvas);

      var center = [];
      var markers = [];
      var bubbles = [];
      var i = 0;
      var bounds = new google.maps.LatLngBounds();

      // Iterate over the locations
      $.each(settings, function(nid){

        // Create LatLong object
        var latlng = new google.maps.LatLng(this.lat, this.lon);

        // The first location should be the map center.
        if (center.length == 0) {
          center[0] = latlng;
        }

        // Set up our marker opts.
        var opts = {
          position: latlng,
          title: this.title,
          type: i.toString()
        };
        markers[i] = new google.maps.Marker(opts);

        // Set up the clickable windows with the address
        // TODO: add title.
        bubbles[i] = new google.maps.InfoWindow({
          content: '<strong>' + this.title + '</strong><br/>' + this.address
        });

        // If we have more than one location in our result set create some
        // a boundary.
        bounds.extend(latlng);
        i++;
      });

      if (center.length == 0) {
        center[0] = new google.maps.LatLng(39.8333333, -98.5833333);
      }

      // Initialize map options.
      var myOptions = {
        zoom: 12,
        center: center[0],
        mapTypeId: google.maps.MapTypeId.ROADMAP
      };


      // Create the map and attach to the faux-canvas element.
      var map = new google.maps.Map(map_canvas[0],
          myOptions);

      // If we have more than one marker, auto-zoom the map to fit all of them.
      if(markers.length > 1) {
        map.fitBounds(bounds);
      }

      // Add the markers to the map.
      $.each(markers, function(i){
        //var spriteSize = new google.maps.Size(50, 50);
        var icon = new google.maps.MarkerImage('sites/tasupply.com/modules/custom/tasupply_storefinder/images/star-32.png', new google.maps.Size(32, 32));
        this.setIcon(icon);
        this.setZIndex(i * -1);
        this.setMap(map);

        // Add click event listener for the bubble window.
        google.maps.event.addListener(this, 'click', function() {
          bubbles[i].open(map, this);
        });

      })
    }
  }

  // Attach our behaviors.
  Drupal.behaviors.tasupply_storefinder = {
    attach: function(context) {
      Drupal.tasupply_storefinder.draw_map();
    }
  }

})(jQuery);