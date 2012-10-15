(function ($) {

  // Initialize
  Drupal.subscriber_map = Drupal.subscriber_map || {};

  // Map drawing function
  Drupal.subscriber_map.draw_map = function() {

    // Don't do anything if you don't have locations
    if (typeof(Drupal.settings.subscriber_map) != 'undefined') {

      var settings = Drupal.settings.subscriber_map;

      // Put the map canvas below the View.
      var map_canvas = $('<div id="subscriber-map"></div>');
      $('.view-id-map').after(map_canvas);

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
        var icon = new google.maps.MarkerImage('sites/all/modules/custom/subscriber_map/images/green-light-map-icon.png', new google.maps.Size(32, 32));
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
  Drupal.behaviors.subscriber_map = {
    attach: function(context) {
      Drupal.subscriber_map.draw_map();
    }
  }

})(jQuery);