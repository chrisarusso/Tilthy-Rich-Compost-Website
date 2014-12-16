<!-- Page -->
<div class="container dark">
  <div class="row">
    <nav class="small-12 columns" role="navigation">
      <?php if ($page['header']): ?>
        <?php render($page['content']['metatags']); ?>
        <?php print render($page['header']); ?>
      <?php endif; ?>
    </nav>
  </div>
</div>

<div id="mailchimp_signup_wrapper" >
  <!-- Begin MailChimp Signup Form -->
  <link href="//cdn-images.mailchimp.com/embedcode/classic-081711.css" rel="stylesheet" type="text/css">

  <div id="mc_embed_signup">
    <form action="//tilthyrichcompost.us9.list-manage.com/subscribe/post?u=e4a477d88677adfa5199d6534&amp;id=1694802ec2" method="post" id="mc-embedded-subscribe-form" name="mc-embedded-subscribe-form" class="validate" target="_blank" novalidate>
      <div class="mc-title">Please sign up to show your support of our work. We will reach out in regards to public campaigns to advance the compost movement
      and will never share your information without your consent.</div>
      <div class="mc-field-group">
        <input type="email" placeholder="Email Address" value="" name="EMAIL" class="required email" id="mce-EMAIL">
      </div>
      <div class="mc-field-group">
        <input type="text" placeholder="First Name" value="" name="FNAME" class="required" id="mce-FNAME">
      </div>
      <div class="mc-field-group">
        <input type="text" placeholder="Last Name" value="" name="LNAME" class="required" id="mce-LNAME">
      </div>
      <div id="mce-responses" class="clear">
        <div class="response" id="mce-error-response" style="display:none"></div>
        <div class="response" id="mce-success-response" style="display:none"></div>
      </div>    <!-- real people should not fill this in and expect good things - do not remove this or risk form bot signups-->
      <div style="position: absolute; left: -5000px;"><input type="text" name="b_e4a477d88677adfa5199d6534_1694802ec2" tabindex="-1" value=""></div>
      <div class="clear"><input type="submit" value="Endorse Us!" name="subscribe" id="mc-embedded-subscribe" class="button"></div>
    </form>
  </div>
  <script type='text/javascript' src='//s3.amazonaws.com/downloads.mailchimp.com/js/mc-validate.js'></script><script type='text/javascript'>(function($) {window.fnames = new Array(); window.ftypes = new Array();fnames[0]='EMAIL';ftypes[0]='email';fnames[1]='FNAME';ftypes[1]='text';fnames[2]='LNAME';ftypes[2]='text';}(jQuery));var $mcj = jQuery.noConflict(true);</script>
  <!--End mc_embed_signup -->
</div>

<div class="container banner">
  <div class="row logo">
		<div class="small-12 columns">
          <a href="<?php print check_url($front_page); ?>"><img src="<?php print $logo ?>" alt="<?php print $site_name; ?>" /></a>
          <br />
			<a id="about-us" href="#"><img id="about-us-img" src="<?php echo base_path() . path_to_theme();?>/images/less-about-us.png" />
              <span class="about-us-text toggle-text less"><?php echo t('Less about us'); ?></span>
            </a>
        </div>
	</div>
</div>

<div class="container green about-us">
	<div class="row">
		<div class="small-12 large-5 columns">
		<h2>What We Do</h2>

          <p>Our mission is to empower Durham to sustainably reduce its waste by
            diverting food scraps from the landfill to a local composting
            facility in order to produce healthy, vibrant, living soil for local
            use.
          </p>

          <p>We affordably service households, apartments, condos and more.
            <a href="#subscribe">Sign up now</a> to join our weekly collection
            service of residential food scraps by bicycle.
          </p>

          <p>If you are a restaurant, cafe, or other kind of business we also
            service you! Please contact us for a free consultation. We will work
            together to develop a compost plan that fits your needs.
          </p>

		</div>
		<div class="large-2 hide-for-small-only columns"></div>
		<div class="small-12 large-5 columns">
		<h2>Our Story</h2>
          <p>
            Tilthy Rich Compost was born out of necessity. Durham’s urban
            agriculture movement and resulting zone changes were taking hold in early
            2013. Many people, including top-level city governing officials, worked
            together  to bring urban agriculture to Durham. However, the crucial
            component of resource recycling through composting was largely
            lacking in the conversation. "Farm-to-table" is now commonplace, but
            what about "table-to-farm"? Chris Russo, with great support and effort
            of many others, sought to change this.
          </p>

          <p>
            Our goal is to change norms around what is considered waste. Through
            composting we expand the meaning of “local food” and recycling. We aim
            to make composting accessible to everyone, and a common practice in
            the city of Durham. It is a crucial step toward creating a more
            sustainable city.
          </p>

		</div>
	</div>
</div>

<div id="how" class="container dark">
	<div class="row">
		<div class="small-12 columns">
		<h2>How it Works</h2>
		</div>
	</div>
</div>

<div class="container services residential-services white">
	<div class="row">
		<div class="small-12 large-4 columns">
			<h2>Residential Services</h2>
		</div>
		<div class="small-12 large-4 columns end text-center">
			<a href="#" id="see-commercial-services">
              <img src="<?php echo base_path() . path_to_theme();?>/images/green-plus.png" />
            </a>
            <span class="toggle-text"><?php echo t('See commercial services'); ?></span>
        </div>
	</div>
	<div class="row services-content">
	</div>
	<div class="row services-content">
		<div class="small-12 large-2 columns">
			<img src="<?php echo base_path() . path_to_theme();?>/images/icon-house.png" />
			<h3>You</h3>
			<p> sign up <a href="#subscribe">here</a>. We deliver a bucket to
              your front door in a jiffy.
            </p>
		</div>
		<div class="small-12 large-2 large-offset-1 columns">
			<img src="<?php echo base_path() . path_to_theme();?>/images/icon-bike-right.png" />
			<h3>We</h3>
			<p> collect the contents of your bucket weekly, clean your bucket
              and leave you with a clean liner
            </p>
		</div>
		<div class="small-12 large-2 large-offset-2 columns">
			<img src="<?php echo base_path() . path_to_theme();?>/images/icon-shovel.png" />
			<h3>You</h3>
			<p> receive nutrient dense vermi-compost twice annually.</p>
		</div>
		<div class="small-12 large-2 large-offset-1 columns">
			<img src="<?php echo base_path() . path_to_theme();?>/images/icon-face.png" />
			<h3>You</h3>
			<p>
              feel good about your choice to responsibly deal with your
              food scraps and encourage your friends and neighbors to do the
              same
            </p>
		</div>
	</div>
</div>

<div class="container green commercial-services">
  <div class="row">
    <div class="small-12 large-4 columns">
      <h2>Commercial Services</h2>
    </div>
    <div class="small-12 large-4 columns end text-center">
      <a href="#" id="see-residential-services"><img src="<?php echo base_path() . path_to_theme();?>/images/white-plus.png" /></a>
      <span class="toggle-text"><?php echo t('See residential services'); ?></span>
    </div>
  </div>
  <div class="row services-content">
    <div class="small-12 large-2 columns">
      <img src="<?php echo base_path() . path_to_theme();?>/images/icon-restaurant.png" />
      <h3>We</h3>
      <p>visit your business/restaurant to assess your wants and needs for a
        composting system, propose a monthly cost for collection to which you
        indubitably oblige, and we provide you receptacles for your organics.
      </p>
    </div>
    <div class="small-12 large-2 large-offset-1 columns">
      <img src="<?php echo base_path() . path_to_theme();?>/images/icon-truck.png" />
      <h3>We</h3>
      <p>
        collect the contents of your tote(s), and leave you shiny clean ones.
      </p>
    </div>
    <div class="small-12 large-2 large-offset-2 columns">
      <img src="<?php echo base_path() . path_to_theme();?>/images/icon-shovel.png" />
      <h3>You</h3>
      <p>
        have the option to receive a bi-annual return of compost. We also
        feature you on our website as a partner, and blow you up on social media
      </p>
    </div>
    <div class="small-12 large-2 large-offset-1 columns">
      <img src="<?php echo base_path() . path_to_theme();?>/images/icon-face.png" />
      <h3>You</h3>
      <p>
        support a growing trend in Durham of waste reduction, diversion, and
        accountability and your people love you for it.
      </p>
    </div>
  </div>
</div>

<div class="container why-us">
	<div class="row">
		<div class="small-12 large-5 columns">
          <h2>Why compost?</h2>
          <ul>
            <li><strong>To tighten the nutrient loop:</strong> Compost
              recycles vital food nutrients back into soil to be used again,
              and again.
            </li>
            <li>To divert landfill waste: Compost saves precious landfill space and
              reduces destructive methane production (22 times more potent
              greenhouse gas than CO2)
            </li>
            <li>To conserve transportation resources: Your food scraps are no
              longer shipped to a far away landfill
            </li>
            <li>To rejuvenate local soils: Tightens the local food movement
              one more step by creating a “table to farm” loop.
            </li>
          </ul>
		</div>
		<div class="small-12 large-5 large-offset-2 columns">
	      <h2>Why compost with us?</h2>
          <ul>
            <li>
              We bike: That’s awesome!
            </li>
            <li>
              We manage the process: Monthly recurring payments are hassle free.
              All you have to do is put your food scraps into your bucket!
            </li>
            <li>
              We keep the loop local: We make sure your food scraps are
              responsibly turned into nutrient dense compost. Table to compost
              garden. These nutrients are precious!
            </li>
            <li>
              We advocate: We work with the city and local businesses
              towards developing a municipal composting system here in Durham.
            </li>
            <li>
              We create Durham jobs: As more households and restaurants
              sign up, we hire more people.
            </li>
          </ul>
		</div>
	</div>
</div>

<div id="where" class="container dark">
	<div class="row">
		<div class="small-12 columns">
		<h2>Where We Operate</h2>
		</div>
	</div>
</div>

<div class="container map white">
	<div class="row">
		<div class="small-12 large-6 columns" id="map-container">
          <img src="<?php echo base_path() . path_to_theme();?>/images/map.jpg" />
        </div>
		<div class="small-12 large-5 large-offset-1 columns">
          <h2>Where we are <i>today</i></h2>
          <p>
            We are growing! Currently we service roughly the area outlined in
            the map, in and around downtown Durham, but if you are currently
            outside of our range don’t hesitate to <a href="#contact">contact us</a>.
            If you can corral some neighborly support, we're happy to extend our
            coverage. Please reach out to see if we can access
            your neighborhood safely by bicycle!
          </p>
        </div>
	</div>
</div>

<div id="partners" class="container dark">
	<div class="row">
		<div class="small-12 columns">
			<h2>Partners</h2>
		</div>
	</div>
</div>

<div class="container partner-logos">
	<div class="row">
		<div class="small-12 columns text-center">
			<ul class="small-block-grid-2 large-block-grid-4">
              <?php foreach($partners as $partner): ?>
				<li>
                  <a target="_blank" href="<?php echo $partner['url']; ?>">
                    <img src="<?php echo $partner['img']; ?>" title="<?php echo $partner['title']; ?>" alt="<?php echo $partner['title']; ?>" />
                  </a>
                </li>
              <?php endforeach; ?>
			</ul>
		</div>
	</div>
</div>
<?php // @todo: What do we do for subscribers ?>
<?php // consider doing the below if (!$logged_in): ?>
  <div id="subscribe" class="container dark">
      <div class="row">
          <div class="small-12 columns">
              <h2>Subscribe</h2>
          </div>
      </div>
  </div>

  <div id="what-goes-in" class="container what-goes-in">
      <div class="row">
          <div class="small-12 large-5 columns">
              <h2>What we <i>do</i> accept?</h2>
            <ul>
              <li>Food & Food Prep Scraps</li>
              <li>Fruit, vegetable (trimmings, rotten ones)</li>
              <li>Coffee and tea (including bags and filters if they’re paper)</li>
              <li>Bread, pasta, prepared foods</li>
              <li>Eggshells</li>
              <li>Any food at all, seriously</li>
              <li>Food-soiled Paper</li>
              <li>Paper towels from the kitchen area</li>
              <li>Paper cups, plates and napkins</li>
              <li>Pizza boxes, waxed paper</li>
              <li>Corn-based Cups, Utensils & Bags</li>
              <li>Dead plants, bouquets</li>
            </ul>

          </div>
          <div class="small-12 large-5 large-offset-2 columns">
              <h2>What we <i>don't</i> accept?</h2>
            <ul>
              <li>Bad attitudes</li>
              <li>Plastics of any kind (containers, wraps, bags, takeout coffee lids)</li>
              <li>Metals, including forks and foil</li>
              <li>Rubber bands, latex gloves</li>
              <li>Large amounts of oil</li>
            </ul>
        </div>
      </div>
  </div>

  <div class="container green subscribe">
      <div class="row text-center">
          <div class="small-12 columns">
              <a href="#" id="what-goes-in-plus"><img id="what-goes-in-img" src="<?php echo base_path() . path_to_theme();?>/images/white-plus.png" /></a>
            <span class="toggle-text"><?php echo t('What goes in the bucket?'); ?></span>
          </div>
        </div>
      <div class="row">
          <div class="small-12 columns">
              <h2><span>Zero-hassle compost<br /> services starting at just</h2>
              <h2>$15 a month</h2>
          </div>
      </div>
      <div class="row">
      <?php if ($messages): ?>
        <div id="console" class="clearfix"><?php print $messages; ?></div>
      <?php endif; ?>
        <?php echo $registration_form; ?>
      </div>
  </div>
<?php //consider doing this endif; ?>
<div class="container white">
	<div class="row bottom">
		<div class="small-12 large-5 columns">
			<h2>Food Scraps are not Waste!</h2>
			<p>
              We are dedicated to advancing the process of composting in the
              Triangle. We work with incredible local organizations <a target="_blank" href="http://www.brookscontractor.com/">
              Brooks Contractor</a>, <a target="_blank" href="http://foodfwdnc.com/">FoodFWD</a>
              and <a target="_blank" href="http://compostnow.org/">CompostNow</a> as well as
              consult with other operations nationwide.
              Every dollar you spend with us will be dedicated to advancing the
              local food (recovery) movement and composting specifically, whether
              it be for local advocacy, paying living wages to our employees or
              creating the most efficient process for our subscribers.
            </p>
		</div>
		<div class="small-12 large-5 large-offset-2 columns">
			<h2>FAQs</h2>
			<p class="question">How much waste do Americans create annually?</p>
			<p class="answer">An astounding 250 million tons of waste every year
              heads to landfills nationwide.
            </p>
			<p class="question">How much of that waste is compostable?</p>
			<p class="answer">Over 40%!</p>
			<p class="question">Where does Durham’s waste go?</p>
			<p class="answer">Roseboro, NC.  Well over 100 miles away</p>
			<p class="question">What can we compost with TRC?</p>
			<p class="answer">Everything edible! As well as <a class="open-what-goes-in" href="#what-goes-in">these items</a></p>
		</div>
	</div>
</div>

<div id="contact" class="container">
	<div class="row">
		<div class="small-12 large-6 large-offset-3 columns">
			<a class="social-icon facebook" href="https://www.facebook.com/TilthyRichCompost" target="_blank"></a>
			<a class="social-icon twitter" href="https://twitter.com/TilthyRichCmpst" target="_blank"></a>
		</div>
	</div>
	<div class="row">
		<div class="small-12 columns text-center">
          <?php //@todo: text-no decoration, white, visited white ?>
			<h2><a class="no-hover" href="#subscribe">Start Composting Today</a></h2>
			<div class="footer-text">
				<a href="mailto:info@tilthyrichcompost.com">info@tilthyrichcompost.com</a><br />
				<img src="<?php echo base_path() . path_to_theme();?>/images/bullet.png" />
				919.937.2962
			</div>
		</div>
	</div>
	</div>
</div>
<!-- /page -->
