<!-- Page -->
<div class="container dark">
	<div class="row">
		<nav class="small-12 columns" role="navigation">
			<ul id="menu">
				<li><a href="#how">How</a></li>
				<li><a href="#where">Where</a></li>
				<li><a href="#partners">Partners</a></li>
				<li><a href="#subscribe">Subscribe</a></li>
				<li><a href="#contact">Contact</a></li>
			</ul>
		</div>
	</div>
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
		<p>Our mission is to empower Durham to sustainably reduce its waste by diverting food scraps from the landfill to a local composting facility in order to produce healthy, vibrant, living soil for local use.</p>

		<p>We service households, apartments, condos and more. Sign up now to join our weekly collection service of residential food scraps by bicycle. </p>

		<p>If you are a restaurant, cafe, or other kind of business we also service you! Please contact us for a free consultation.</p>
		</div>
		<div class="large-2 hide-for-small-only columns"></div>
		<div class="small-12 large-5 columns">
		<h2>Our Story</h2>
		<p>Tilthy Rich Compost was born out of necessity. With Durham’s urban agriculture movement and resulting zoning changes taking hold in early 2013 we observed there was a crucial component lacking. Chris and Jodi were actively involved in their own composting endeavors when they first met. After realizing their shared passion they decided to join forces and create Tilthy Rich Compost.</p>
		<p>It is our goal to affect norms around what is and what is not considered waste and to expand the meaning of “local food”  and recycling to encompass composting. We hope to make composting a common practice in the city of Durham and show that it is a crucial step toward creating a more sustainable city.</p>
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

<div class="container services residential-services">
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
			<img src="<?php echo base_path() . path_to_theme();?>/images/icon-bike-right.png" />
			<h3>You</h3>
			<p>You sign up here. We deliver a bucket with instructions to your house (a picture of a bucket or house with our logo?)</p>
		</div>
		<div class="small-12 large-2 large-offset-1 columns">
			<img src="<?php echo base_path() . path_to_theme();?>/images/icon-shovel.png" />
			<h3>We</h3>
			<p>We collect the contents of your bucket weekly, leaving you a shiny clean one (this should have the picture of the bike above it)</p>
		</div>
		<div class="small-12 large-2 large-offset-2 columns">
			<img src="<?php echo base_path() . path_to_theme();?>/images/icon-bike-left.png" />
			<h3>You</h3>
			<p>You receive nutrient dense vermi-compost twice annually.</p>
		</div>
		<div class="small-12 large-2 large-offset-1 columns">
			<img src="<?php echo base_path() . path_to_theme();?>/images/icon-face.png" />
			<h3>You</h3>
			<p>Maecenas non erat feugiat, porta felis quis, egestas est. Quisque id libero id quam interdum dapibus a at risus.</p>
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
      <img src="<?php echo base_path() . path_to_theme();?>/images/icon-bike-right.png" />
      <h3>We</h3>
      <p>After contacting us we visit your business/restaurant to assess your wants and needs for a composting system.</p>
    </div>
    <div class="small-12 large-2 large-offset-1 columns">
      <img src="<?php echo base_path() . path_to_theme();?>/images/icon-shovel.png" />
      <h3>We</h3>
      <p>We collect the contents of your tote(s), leaving you shiny clean ones.</p>
    </div>
    <div class="small-12 large-2 large-offset-2 columns">
      <img src="<?php echo base_path() . path_to_theme();?>/images/icon-bike-left.png" />
      <h3>You</h3>
      <p>If there’s a need we return compost bi-annually. We also feature you on our as a partner, and blow you up on social media</p>
    </div>
    <div class="small-12 large-2 large-offset-1 columns">
      <img src="<?php echo base_path() . path_to_theme();?>/images/icon-face.png" />
      <h3>You</h3>
      <p>Maecenas non erat feugiat, porta felis quis, egestas est. Quisque id libero id quam interdum dapibus a at risus.</p>
    </div>
  </div>
</div>

<div class="container why-us">
	<div class="row">
		<div class="small-12 large-5 columns">
			<h2>Why compost?</h2>
			<p><strong>To tighten the nutrient loop:</strong> Compost recycles vital food nutrients back into soil to be used again, and again.</p>
			<p><strong>To divert landfill waste:</strong> Saves precious landfill space and reduces destructive methane production (22 times more potent greenhouse gas than CO2) </p>
			<p><strong>To conserve transportation resources:</strong> Your food scraps are no longer shipped to a far away landfill</p>
			<p><strong>To rejuvenate local soils:</strong> Tightens the local food movement one more step by creating a “table to farm” loop.</p>
		</div>
		<div class="small-12 large-5 large-offset-2 columns">
			<h2>Why compost with us?</h2>
			<p>We bike, that’s awesome.</p>
			<p>We manage the process so that you don’t have to and make sure your food scraps are responsibly turned into nutrient dense compost.</p>
			<p>We keep the loop local.</p>
			<p>We work with the city and businesses towards developing a municipal composting system here in Durham.</p>
			<p>We create Durham jobs.</p>
</p>
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

<div class="container map">
	<div class="row">
		<div class="small-12 large-6 columns" id="map-container">
			<iframe src="https://www.google.com/maps/embed?pb=!1m18!1m12!1m3!1d25823.71884542054!2d-78.89341617564003!3d35.99672531075172!2m3!1f0!2f0!3f0!3m2!1i1024!2i768!4f13.1!3m3!1m2!1s0x89ace471120f66f1%3A0xe17ada898a46f27e!2sDurham%2C+NC!5e0!3m2!1sen!2sus!4v1395857627885" width="800" height="600" frameborder="0" style="border:0"></iframe>
		</div>
		<div class="small-12 large-5 large-offset-1 columns">
			<h2>Map Title Text</h2>
			<p>Yeah, well, right man, there are many facets to this, uh, you know, many interested parties. If I can find your money, man— what's in it for the Dude? Rhoncus ac lorem aliquam placerat posuere neque. I got a nice quiet beach community here, and I aim to keep it nice and quiet. At dignissim magna ullamcorper in aliquam sagittis massa ac tortor ultrices. Who's in pyjamas, Walter? Faucibus curabitur eu mi sapien, ut ultricies ipsum morbi eget risus nulla nullam.</p>
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
              <?php echo views_embed_view('homepage_partners'); ?>
              <?php // @todo: Do this better ?>
				<li><a href="#"><img src="<?php echo base_path() . path_to_theme();?>/images/logo1.png" /></a></li>
				<li><a href="#"><img src="<?php echo base_path() . path_to_theme();?>/images/logo2.png" /></a></li>
				<li><a href="#"><img src="<?php echo base_path() . path_to_theme();?>/images/logo3.png" /></a></li>
				<li><a href="#"><img src="<?php echo base_path() . path_to_theme();?>/images/logo4.png" /></a></li>
			</ul>
		</div>
	</div>
</div>

<div id="subscribe" class="container dark">
	<div class="row">
		<div class="small-12 columns">
			<h2>Subscribe</h2>
		</div>
	</div>
</div>

<div class="container what-goes-in">
	<div class="row">
		<div class="small-12 large-5 columns">
			<h2>What do we accept?</h2>
			<p>Excuse me! Mark it zero. Next frame. Vel felis lacinia placerat vestibulum turpis nulla, viverra nec volutpat ac, ornare id lectus. And I'm talkin' about the Dude here —sometimes there's a man who, wal, he's the man for his time'n place, he fits right in there—and that's the Dude, in Los Angeles. Cras pharetra faucibus tristique nullam non accumsan justo nulla facilisi integer interdum. Stay out of Malibu, deadbeat! Elementum nulla, nec eleifend nisl euismod ac maecenas vitae eros velit.</p>
		</div>
		<div class="small-12 large-5 large-offset-2 columns">
			<h2>What don't we accept?</h2>
			<p>Excuse me! Mark it zero. Next frame. Vel felis lacinia placerat vestibulum turpis nulla, viverra nec volutpat ac, ornare id lectus. And I'm talkin' about the Dude here —sometimes there's a man who, wal, he's the man for his time'n place, he fits right in there—and that's the Dude, in Los Angeles. Cras pharetra faucibus tristique nullam non accumsan justo nulla facilisi integer interdum. Stay out of Malibu, deadbeat! Elementum nulla, nec eleifend nisl euismod ac maecenas vitae eros velit.</p>
		</div>
	</div>
</div>

<div class="container green subscribe">
	<div class="row text-center">
		<div class="small-12 columns">
			<a href="#" id="what-goes-in"><img id="what-goes-in-img" src="<?php echo base_path() . path_to_theme();?>/images/white-plus.png" /></a>
          <span class="toggle-text"><?php echo t('What goes in the bucket?'); ?></span>
		</div>
	  </div>
	<div class="row">
		<div class="small-12 columns">
			<h2><span>Zero-hassle compost<br /> services starting at just</span> $15 a month</h2>
		</div>
	</div>
	<div class="row">
      <?php $form = drupal_get_form('user_register_form');
      $html = drupal_render($form); ?>


	</div>
</div>

<div class="container">
	<div class="row bottom">
		<div class="small-12 large-5 columns">
			<h2>Support the compost revolution!</h2>
			<p>We are dedicated to advancing the process of composting in the Triangle. We work with local partners Brooks Contractor, FoodFWD and CompostNow as well as consult with other operations nationwide.  Every dollar you spend with us will be dedicated to advancing the local food movement generally and composting specifically, whether it be for local advocacy, paying living wages to our employees and creating the most efficient process for our subscribers.</p>
		</div>
		<div class="small-12 large-5 large-offset-2 columns">
			<h2>FAQs</h2>
			<p class="question">How much of that waste is compostable?</p>
			<p class="answer">Over 40%.</p>
			<p class="question">Where does Durham's waste go?</p>
			<p class="answer"></p>
			<p class="question">What can we compost with TRC?</p>
			<p class="answer">Everything edible!  As well as these other items.</p>
		</div>
	</div>
</div>

<div id="contact" class="container">
	<div class="row">
		<div class="small-12 large-6 large-offset-3 columns">
			<a class="social-icon facebook" href="#" target="_blank"></a>
			<a class="social-icon twitter" href="#" target="_blank"></a>
		</div>
	</div>
	<div class="row">
		<div class="small-12 columns text-center">
          <?php //@todo: text-no decoration, white, visited white ?>
			<h2><a href="#subscribe">Start Composting Today</a></h2>
			<div class="footer-text">
				info[at]tilthyrichcompost.com<br />
				<img src="<?php echo base_path() . path_to_theme();?>/images/bullet.png" />
				860.987.9887<br />
			</div>
		</div>
	</div>
	</div>
</div>
<!-- /page -->

<?php // @todo: Put this in the right place! ?>
<script src="http://ajax.googleapis.com/ajax/libs/jqueryui/1.10.4/jquery-ui.min.js"></script>
