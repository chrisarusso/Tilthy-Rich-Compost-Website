Hi <?php print $first_name . ' ' . $last_name ?>,

A Tilthy Rich Compost rider came by at <?php print $time_of_day; ?> on
<?php print $date; ?> and did not see your bucket out for
collection. Your collection day is
<?php print $day_of_week; ?> and you have opted into the following reminders:
Text: <?php if($text_reminder): ?>
  yes
<?php else: ?>
  no
<?php endif; ?>

Email: <?php if($email_reminder): ?>
  yes
<?php else: ?>
  no
<?php endif; ?>

Your bucket needs to be out the night before to ensure collection as we often
start our collection very early in the morning.

If you intentionally did not have your bucket out, please let us know in the
future by visiting your profile: <?php print $profile_link; ?> and selecting
a skip date for this week's collection. If you had it out, but we missed it,
please ensure that the location that you filled out with your profile is still
applicable: <?php print $bucket_location; ?>

You must log in to the website to update your profile in either scenario,
so if you have forgotten your password you may visit
<?php print $password_link; ?>.
If it was our fault, we'll come by and get it, so please let us know.

In order to maintain an affordable service, we need to be very efficient about
our collection, and unfortunately cannot return the following day for collection
when the bucket is not out the night before (much like city recycling service).

We really appreciate your understanding and compliance with this policy. Please
get back to us with any feedback or questions.

Sincerely,
The TRC team