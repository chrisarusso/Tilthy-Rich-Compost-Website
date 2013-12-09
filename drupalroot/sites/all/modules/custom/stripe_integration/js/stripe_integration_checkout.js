(function ($) {

    var handler = StripeCheckout.configure({
        key: Drupal.settings.stripeIntegration.publishableKey,
        image: Drupal.settings.basePath + Drupal.settings.stripeIntegration.logoURL,
        token: function(token, args) {
            var form = $('#user-register-form, #stripe-integration-payment-update-form');
            var input = $("<input name='stripeToken' value='" + token.id + "' style='display:none;' />");
            form.append(input[0]);
            form.find('#edit-submit').attr('disabled','disabled');
            form.submit();
        }
    });

    if (typeof Drupal.settings.stripeIntegration.stripeToken === 'undefined') {
        // variable is undefined

        document.getElementById('edit-submit').addEventListener('click', function(e) {
            // Open Checkout with further options
            handler.open({
                name: 'Tilthy Rich Compost',
                description: 'Monthly Subscription',
                amount: jQuery('#edit-field-monthly-contribution-und-0-value').val() * 100,
                email: jQuery('#edit-mail').val()
            });
        e.preventDefault();
        });
    } else{
        var form = $('#user-register-form, #stripe-integration-payment-update-form');
        var input = $("<input name='stripeToken' value='" + Drupal.settings.stripeIntegration.stripeToken + "' style='display:none;' />");
        form.append(input[0]);
    }
}(jQuery));