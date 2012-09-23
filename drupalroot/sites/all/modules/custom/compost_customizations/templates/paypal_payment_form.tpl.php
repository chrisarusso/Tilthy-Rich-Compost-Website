<form action="https://www.paypal.com/cgi-bin/webscr" method="post">
  <input type="hidden" name="cmd" value="_s-xclick">
  <input type="hidden" name="hosted_button_id" value="FPXDMSX4WRN7E">
  <table>
    <tr><td><input type="hidden" name="on0" value="Monthly damage">Monthly damage</td></tr><tr><td>
      <?php print $select_list; ?>
    </td></tr>
  </table>
  <input type="hidden" name="currency_code" value="USD">
  <input type="image" src="https://www.paypalobjects.com/en_US/i/btn/btn_subscribeCC_LG.gif" border="0" name="submit" alt="PayPal - The safer, easier way to pay online!">
  <input type="hidden" name="custom" value="<?php print $uid; ?>">
  <input type="hidden" name="uid" value="<?php print $uid; ?>">
  <img alt="" border="0" src="https://www.paypalobjects.com/en_US/i/scr/pixel.gif" width="1" height="1">
</form>