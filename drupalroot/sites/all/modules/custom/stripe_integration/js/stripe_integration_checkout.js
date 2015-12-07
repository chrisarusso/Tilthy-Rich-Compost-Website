(function ($) {

    var subscriptionMinimum = 15;

    // Custom Stripe checkout handler for both the user registration and update
    // payment forms as well as give the gift webform.

    var handler = StripeCheckout.configure({
        key: Drupal.settings.stripeIntegration.publishableKey,
        image: Drupal.settings.basePath + Drupal.settings.stripeIntegration.logoURL,
        token: function(token, args) {
            var form = $('#user-register-form, #stripe-integration-payment-update-form, #webform-client-form-53');
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

            var giftMonths = $("input[type=radio]:checked").val();
            if (giftMonths) {
              var amount = parseInt(giftMonths) *  subscriptionMinimum;
            }
            else {
              var amount = jQuery('#edit-field-monthly-contribution-und-0-value').val();
            }

            // On the update payment form, only open Checkout if update existing credit card is checked.
            if ($('#user-register-form').length || $('#edit-update-existing-credit-card').is(':checked')) {
              // Mail is a hidden field on the update payment form.
              handler.open({
                name: 'Tilthy Rich Compost',
                description: 'Monthly Subscription',
                amount: amount * 100,
                email: jQuery('#edit-mail').val()
              });
              e.preventDefault();
            }
            else if (giftMonths.length) {
                handler.open({
                    name: 'Tilthy Rich Compost',
                    description: 'The Gift of Compost',
                    amount: amount * 100,
                    email: $('#edit-submitted-your-email').val()
                });
                e.preventDefault();
            }
        });
    } else{
        var form = $('#user-register-form, #stripe-integration-payment-update-form');
        var input = $("<input name='stripeToken' value='" + Drupal.settings.stripeIntegration.stripeToken + "' style='display:none;' />");
        form.append(input[0]);
    }
}(jQuery));