<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Strict//EN" "DTD/xhtml1-strict.dtd">

<!--
#    Installfest Webpage - a php3/postgresql/apache instant Linux
#                          installfest web page and database.
#    Copyright (C) 2000 michaeld@senet.com.au
#
#    This program is free software; you can redistribute it and/or modify
#    it under the terms of the GNU General Public License as published by
#    the Free Software Foundation; either version 2 of the License, or
#    (at your option) any later version.
#
#    This program is distributed in the hope that it will be useful,
#    but WITHOUT ANY WARRANTY; without even the implied warranty of
#    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
#    GNU General Public License for more details.
#
#    You should have received a copy of the GNU General Public License
#    along with this program; if not, write to the Free Software
#    Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
-->

<!-- LinuxSA InstallFest2000 Registration Page -->

<?# Page variable definitions
  $VERSION = "0.8";
  $DATE    = "13/07/2000";
  $TITLE   = "LinuxSA Installfest2000 - Registration Page";
  $PAGE    = "registration.php3";

  # Includes
  include "inc/common.inc";
  include "inc/header.inc";
  include "inc/footer.inc";
  include "inc/navigation.inc";
  include "inc/content.inc";

  # include <std_joke>
  transmeta();
?>

<html>
  <head>
    <title>
      <? title($TITLE); ?>
    </title>
    <link rel="stylesheet" href="style.css" type="text/css" />
  </head>

  <body bgcolor="#fff5ba">
    <font face="arial,helvetica" size="3">

    <!-- All the rest in a table so that we can keep it nicely narrow -->
    <center>
    <table width="700" border="0" cellspacing="0" cellpadding="0">
    <tr>
    <td>

<? headerFront(); ?>

    <!-------------------->
    <!-- Navigation Bar -->
    <!-------------------->
    <center>
    <table width="100%" border="0" cellspacing="0" cellpadding="0" cols="2">
    <tr>
      <td width="20%" align="right">
        <b>Page Navigation:&nbsp;&nbsp;</b>
      </td>
      <td width="80%">
      [ &nbsp;
<? navRegister(); ?>
      &nbsp; ]
      </td>
    </tr>
    <tr>
      <td width="20%" align="right">
        <b>Site Navigation:&nbsp;&nbsp;</b>
      </td>
      <td width="80%">
      [ &nbsp;
<? navSite(); ?>
      &nbsp; ]
      </td>
    </tr>
    <tr>
      <td width="20%" align="right">
        <b>Related Sites:&nbsp;&nbsp;</b>
      </td>
      <td width="80%">
      [ &nbsp;
<? navRelated(); ?>
      &nbsp; ]
      </td>
    </tr>
    </table>
    </center>

    <br>

    <!-- Register logo -->
    <center>
    <img src="img/register.gif" alt="Registration Logo">
    <h4> Note:  If you enter information into multiple forms on this
      web page, the only information that will be entered into our 
      database is the information associated with the button you 
      click. &nbsp; &nbsp;
      Please register for each category one at a time.</h4>
    </center>

<? # PHP heaven - dealing with multiple-personality web pages!
  if ($installee) {

    # Now check the compulsory fields
    if ((!$firstname) || (!$lastname) || (!$emailaddress) || 
        ($AcceptRightsWaiver != "yes")) {
      echo "<h1>Sorry Unacceptable - </h1>\n";
      echo "<br>\n";
      if (!$firstname) 
        echo "You need to supply your first name<br>\n";      
      if (!$lastname) 
        echo "You need to supply your last name<br>\n";      
      if (!$emailaddress) 
        echo "You need to supply your email address<br>\n";
      if ($AcceptRightsWaiver != "yes") 
        echo "You need to accept the waiver to be part of installfest.<br>\n";

      echo "If this isn't acceptable, sorry, we can't help you.<br>\n"; 
      echo "<br>\n";
      echo "Hit back on your browser window to re-enter data.\n";

    } else {

      #echo "We're handling an installee<br>\n";
      #echo "&nbsp;&nbsp;&nbsp;&nbsp;firstname : $firstname<br>\n";
      #echo "&nbsp;&nbsp;&nbsp;&nbsp;lastname : $lastname<br>\n";
      #echo "&nbsp;&nbsp;&nbsp;&nbsp;emailaddress : $emailaddress<br>\n";
      #echo "&nbsp;&nbsp;&nbsp;&nbsp;dowhat : $dowhat<br>\n";
      #echo "&nbsp;&nbsp;&nbsp;&nbsp;whatinfo : $whatinfo<br>\n";
      #echo "&nbsp;&nbsp;&nbsp;&nbsp;computer : $computer<br>\n";
      #echo "&nbsp;&nbsp;&nbsp;&nbsp;ram : $ram<br>\n";
      #echo "&nbsp;&nbsp;&nbsp;&nbsp;floppy : $floppy<br>\n";
      #echo "&nbsp;&nbsp;&nbsp;&nbsp;cdrom : $cdrom<br>\n";
      #echo "&nbsp;&nbsp;&nbsp;&nbsp;networkcard : $networkcard<br>\n";
      #echo "&nbsp;&nbsp;&nbsp;&nbsp;zipdrive : $zipdrive<br>\n";
      #echo "&nbsp;&nbsp;&nbsp;&nbsp;vga : $vga<br>\n";
      #echo "&nbsp;&nbsp;&nbsp;&nbsp;threedgraphics : $threedgraphics<br>\n";
      #echo "&nbsp;&nbsp;&nbsp;&nbsp;printer : $printer<br>\n";
      #echo "&nbsp;&nbsp;&nbsp;&nbsp;modem : $modem<br>\n";
      #echo "&nbsp;&nbsp;&nbsp;&nbsp;AcceptRightsWaiver : $AcceptRightsWaiver<br>\n";
      #echo "&nbsp;&nbsp;&nbsp;&nbsp;installee : $installee<br>\n";

      # Now put this in the database
      @$connection = pg_connect("dbname=linuxsa");

      if (!$connection) {
        echo "Whoops! an error occured.  Sorry.\n";
        exit;
      }

      $firstname = addslashes($firstname);
      $lastname = addslashes($lastname);
      $emailaddress = addslashes($emailaddress);
      $AcceptRightsWaiver = addslashes($AcceptRightsWaiver);
      $dowhat = addslashes($dowhat);
      $whatinfo = addslashes($whatinfo);
      $computer = addslashes($computer);
      $$ram = addslashes($$ram);
      $floppy = addslashes($floppy);
      $cdrom = addslashes($cdrom);
      $networkcard = addslashes($networkcard);
      $zipdrive = addslashes($zipdrive);
      $vga = addslashes($vga);
      $threedgraphics = addslashes($threedgraphics);
      $printer = addslashes($printer);
      $modem = addslashes($modem);
      $sql = "INSERT INTO installees (firstname, lastname, email, ewaiver, paperwaiver, description, confirmed, completed) VALUES ('$firstname', '$lastname', '$emailaddress', '$AcceptRightsWaiver', 'FALSE', '$dowhat ( $whatinfo ) $computer $ram $floppy $cdrom $networkcard $zipdrive $vga $threedgraphics $printer $modem', 'FALSE', 'FALSE');";

      @$result = pg_exec ($connection, $sql);

      if (!$result) {
        echo "<H1>Error - Problem inserting data into";
        echo " installees table</H1><p>";
        echo "Please click ";
        echo "<a href=register.php3>here</a>";
        echo " to reload this page.";
      } else {
        echo "<h1>You are now registered as an installee</h1>";
        echo "You may be emailed to confirm your registration<br>\n";
        echo "Please click ";
        echo "<a href=index.php3>here</a>";
        echo " to return to the installfest web page.";
      }

    }

  } else {
    if ($installer) {

      # Now check the compulsory fields
      if ((!$firstname) || (!$lastname) || (!$emailaddress)) {
        echo "<h1>Sorry Unacceptable - </h1>\n";
        echo "<br>\n";
        if (!$firstname) 
          echo "You need to supply your first name<br>\n";      
        if (!$lastname) 
          echo "You need to supply your last name<br>\n";      
        if (!$emailaddress) 
          echo "You need to supply your email address<br>\n";

        echo "If this isn't acceptable, sorry, you can't help us :-(<br>\n"; 
        echo "<br>\n";
        echo "Hit back on your browser window to re-enter data.\n";
      } else {

        #echo "We're handling an installer<br>\n";
        #echo "&nbsp;&nbsp;&nbsp;&nbsp;firstname : $firstname<br>\n";
        #echo "&nbsp;&nbsp;&nbsp;&nbsp;lastname : $lastname<br>\n";
        #echo "&nbsp;&nbsp;&nbsp;&nbsp;emailaddress : $emailaddress<br>\n";
        #echo "&nbsp;&nbsp;&nbsp;&nbsp;offering : $offering<br>\n";
        #echo "&nbsp;&nbsp;&nbsp;&nbsp;install : $install<br>\n";
        #echo "&nbsp;&nbsp;&nbsp;&nbsp;configure : $configure<br>\n";
        #echo "&nbsp;&nbsp;&nbsp;&nbsp;installer : $installer<br>\n";

        # Now put this in the database
        @$connection = pg_connect("dbname=linuxsa");

        if (!$connection) {
          echo "Whoops! an error occured.  Sorry.\n";
          exit;
        }

        $firstname = addslashes($firstname);
        $lastname = addslashes($lastname);
        $emailaddress = addslashes($emailaddress);
        $offering = addslashes($offering);
        $install = addslashes($install);
        $configure = addslashes($configure);
        $sql = "insert into installers (firstname, lastname, email, offering, install, configure, confirmed, installer_here) VALUES ('$firstname', '$lastname', '$emailaddress', '$offering', '$install', '$configure', 'FALSE', 'FALSE');";

        @$result = pg_exec ($connection, $sql);

        if (!$result) {
          echo "<H1>Error - Problem inserting data into";
          echo " installers table</H1><p>";
          echo "Please click ";
          echo "<a href=register.php3>here</a>";
          echo " to reload this page.";
        } else {
          echo "<h1>You are now registered as an installer</h1>";
          echo "You may be emailed to confirm your registration<br>\n";
          echo "Please click ";
          echo "<a href=index.php3>here</a>";
          echo " to reload the installfest web page.";
        }

      }

    } else {

      if ($tshirt) {

        # Now check the compulsory fields
        if ((!$firstname) || (!$lastname) || (!$emailaddress)) {
          echo "<h1>Sorry Unacceptable - </h1>\n";
          echo "<br>\n";
          if (!$firstname)
            echo "You need to supply your first name<br>\n";
          if (!$lastname)
            echo "You need to supply your last name<br>\n";
          if (!$emailaddress)
            echo "You need to supply your email address<br>\n";
  
          echo "If this isn't acceptable, sorry, you can't help us :-(<br>\n";
          echo "<br>\n";
          echo "Hit back on your browser window to re-enter data.\n";

        } else {

          #echo "We're handling a t-shirt purchase<br>\n";
          #echo "&nbsp;&nbsp;&nbsp;&nbsp;firstname : $firstname<br>\n";
          #echo "&nbsp;&nbsp;&nbsp;&nbsp;lastname : $lastname<br>\n";
          #echo "&nbsp;&nbsp;&nbsp;&nbsp;emailaddress : $emailaddress<br>\n";
          #echo "&nbsp;&nbsp;&nbsp;&nbsp;size : $size<br>\n";
          #echo "&nbsp;&nbsp;&nbsp;&nbsp;tshirt : $tshirt<br>\n";

          # Now put this in the database
          @$connection = pg_connect("dbname=linuxsa");

          if (!$connection) {
            echo "Whoops! an error occured.  Sorry.\n";
            exit;
          }

          $firstname = addslashes($firstname);
          $lastname = addslashes($lastname);
          $emailaddress = addslashes($emailaddress);
          $size = addslashes($size);
          $sql = "insert into tshirt_orders (firstname, lastname, email, size, paid, received) VALUES ('$firstname', '$lastname', '$emailaddress', '$size', 'FALSE', 'FALSE');";

          @$result = pg_exec ($connection, $sql);
  
          if (!$result) {
            echo "<H1>Error - Problem inserting data into";
            echo " tshirt_orders table</H1><p>";
            echo "Please click ";
            echo "<a href=register.php3>here</a>";
            echo " to reload this page.";
          } else {
            echo "<h1>You have now ordered a T-shirt</h1>";
            echo "You may be emailed to confirm your purchase,<br>\n";
            echo "remember you now are obliged to purchase a T-shirt<br>\n";
            echo "<br>If you wish to cancel your order,<br>\n";
            echo "please email <a href=mailto:davidn@rebel.net.au>\n";
            echo "davidn@rebel.net.au</a><br><br>\n";
            echo "Please click ";
            echo "<a href=index.php3>here</a>";
            echo " to reload the installfest web page.";
          }

        }

      } else {

        # echo  "Normal web page\n";
        contentRegisterInstallee(); 

        # echo "<hr width="65%">\n";

        contentRegisterInstaller(); 

        contentBuyTShirt(); 

      }

    }

  }
?>

    <!-- Table for centering and squeezing body text -->
    </td>
    </tr>
    </table>
    </center>

    <br>
    <hr width=65%>

<? footerStd(); ?>

  </body>

</html>

