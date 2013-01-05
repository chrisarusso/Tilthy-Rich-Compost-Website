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
      // Create empty infoWindow to be filled out for each marker
      var infoWindow = new google.maps.InfoWindow({});

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
          type: i.toString(),
          access: this.access,
          active: this.status,
          next_day_off: this.next_day_off,
          bucket_location: this.bucket_location,
          uid: this.uid,
          content: '<strong><a href="' + Drupal.settings.basePath + 'user/' + this.uid + '/edit">' + this.title + '</a></strong><br/>' + this.address + '<br />' + this.bucket_location
        };

        markers[i] = new google.maps.Marker(opts);

        // Set up the clickable windows with the address


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

        // Set map icon to red for subscribers who haven't paid or logged in
        // Set map icon to yellow for subscribers who are taking this week off
        // Set map icon to green for subscribers who should get a pick up this week
        if (this.access == 0 || this.status == 0) {
            var color = 'red';
        }
        else if (this.next_day_off == true) {
            var color = 'yellow';
        }
        else {
            var color = 'green';
        }

        var icon = new google.maps.MarkerImage('sites/all/modules/custom/subscriber_map/images/' + color + '-light-map-icon.png', new google.maps.Size(32, 32));

        this.setIcon(icon);
        this.setZIndex(i * -1);
        this.setMap(map);

        // Add click event listener for the bubble window.
        google.maps.event.addListener(this, 'click', function() {
          infoWindow.setContent(this.content);
          infoWindow.open(map, this);
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