<? # Password Authentication
    if (!isset($PHP_AUTH_USER) || (isset($Logout))) {
      Header("WWW-Authenticate: Basic realm=\"Installfest2000 Admin Page\"");
      Header("HTTP/1.0 401 Unauthorized");
      echo "<h1>You are unauthorised to enter this site.</h1>\n";
      exit;
    } else {
      if (($PHP_AUTH_USER != "babytux") || ($PHP_AUTH_PW != "fluffy")) {
        Header("HTTP/1.0 401 Unauthorized");
        echo "<h1>You are unauthorised to enter this site.</h1>\n";
        exit;
      }
    }
?>

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

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Strict//EN" "DTD/xhtml1-strict.dtd">

<!-- LinuxSA InstallFest2000 Admin Page -->

<? # Page variable definitions
  $VERSION = "0.7";
  $DATE    = "13/07/2000";
  $TITLE = "LinuxSA Installfest2000 - Admin Page";
  $PAGE = "admin.php3";

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

    <center>
<? headerFront(); ?>

    <!-- All the rest in a table so that we can keep it nicely narrow -->
    <table width="95%" border="0" cellspacing="0" cellpadding="0">
    <tr>
    <td>

    <!-------------------->
    <!-- Navigation Bar -->
    <!-------------------->
    <center>
    <table width="100%" border="0" cellspacing="0" cellpadding="0" cols="2">
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

    <!-- The Main Stuff -->

    <center>
      <img src="img/admin.jpg" alt="This is the admin page.">

      <form action="admin.php3" method="POST">
        <input type="SUBMIT" name="Logout" value="Logout from this page.">
        <input type="SUBMIT" name="dumptext" value="Dump database in text.">
      </form>
    </center>

<!-- Auth stuff here -->
<? contentDatabaseActions(); ?>

    <?

        echo "<h1>Installees Database</h1>\n";

        $connection = pg_connect("dbname=linuxsa");

        if (!$connection) {
          echo "Whoops! an error occured.  Sorry.\n";
        }

        $sql = "select * from installees";

        @$result = pg_exec ($connection, $sql);

        @$rows = pg_NumRows($result);

        if ((!$result) || ($rows < 1)) {
          echo "<H1>Error - no installees registered!?!</H1><p>\n";
          echo "<!-- Table for centering and squeezing body text -->\n";
          echo "</td>\n";
          echo "</tr>\n";
          echo "</table>\n";
          echo "</center>\n";
          echo "<br>\n";
          echo "<hr width=65%>\n";
          echo "<? footerStd(); ?>\n";
          echo "</body>\n";
          echo "</html>\n";
          exit;
        }

        if (!isset($dumptext)) {
          echo "<form action=admin.php3 method=POST>\n";
          echo "<center>\n";
          echo "<table border=1 cols=10 width = 100%>";
          echo "<tr>\n";
          echo "<td width=10>Delete?</td>\n";
          echo "<td width=10>Id</td>\n";
          echo "<td width=70>First Name</td>\n";
          echo "<td width=70>Last Name</td>\n";
          echo "<td width=100>Email</td>\n";
          echo "<td width=10>E-Waiver</td>\n";
          echo "<td width=10>Paper Waiver</td>\n";
          echo "<td width=300>Description</td>\n";
          echo "<td width=10>Confirmed</td>\n";
          echo "<td width=10>Completed?</td>\n";
          echo "</tr>\n";
        } else {
          echo "Id\n";
          echo "&nbsp;";
          echo "First Name\n";
          echo "&nbsp;";
          echo "Last Name\n";
          echo "&nbsp;";
          echo "Email\n";
          echo "&nbsp;";
          echo "E-Waiver\n";
          echo "&nbsp;";
          echo "Paper Waiver\n";
          echo "&nbsp;";
          echo "Confirmed\n";
          echo "&nbsp;";
          echo "Completed?\n<br>";
        }

        for ($i=0; $i < $rows; $i++) {
        
          if (!isset($dumptext)) {

            echo "<tr>\n";
            $id = pg_result($result, $i, "id");
            echo "<td>\n";
            echo "<input type=SUBMIT name=delete_installee value=$id>\n";
            echo "</td>\n";
            echo "<td>\n";
            echo $id;
            echo "</td>\n";
            echo "<td>\n";
            echo pg_result($result, $i, "firstname");
            echo "</td>\n";
            echo "<td>\n";
            echo pg_result($result, $i, "lastname");
            echo "</td>\n";
            echo "<td>\n";
            echo "<a href=mailto:";
            echo pg_result($result, $i, "email");
            echo ">";
            echo pg_result($result, $i, "email");
            echo "</a>\n";
            echo "</td>\n";
            echo "<td>\n";
            echo pg_result($result, $i, "ewaiver");
            echo "</td>\n";
            echo "<td>\n";
            echo pg_result($result, $i, "paperwaiver");
            echo "</td>\n";
            echo "<td>\n";
            echo pg_result($result, $i, "description");
            echo "</td>\n";
            echo "<td>\n";
            $resultstr = pg_result($result, $i, "confirmed");
            if ($resultstr == "f") {
             echo "<input type=SUBMIT 
                     name=confirm_installee value=$id>\n";
            } else {
              echo "<b>T</b>\n";
            }
            echo "</td>\n";
            echo "<td>\n";
            $resultstr = pg_result($result, $i, "completed");
            if ($resultstr == "f") {
             echo "<input type=SUBMIT
                     name=completed_installee value=$id>\n";
            } else {
              echo "<b>T</b>\n";
            }
            echo "</td>\n";

            echo "</tr>\n";

          } else {

            echo pg_result($result, $i, "id");
            echo "&nbsp;";
            echo pg_result($result, $i, "firstname");
            echo "&nbsp;";
            echo pg_result($result, $i, "lastname");
            echo "&nbsp;";
            echo pg_result($result, $i, "email");
            echo "&nbsp;";
            echo pg_result($result, $i, "ewaiver");
            echo "&nbsp;";
            echo pg_result($result, $i, "paperwaiver");
            echo "&nbsp;";
            echo pg_result($result, $i, "confirmed");
            echo "&nbsp;";
            echo pg_result($result, $i, "completed");
            echo "<br>\n";

          }

        }

        echo "</table>\n";
        echo "</center>\n";


        echo " <br><br> <hr width=65%> <h1>Installers Database</h1>\n";

        $connection = pg_connect("dbname=linuxsa");

        if (!$connection) {
          echo "Whoops! an error occured.  Sorry.\n";
        }

        $sql = "select * from installers";

        @$result = pg_exec ($connection, $sql);

        @$rows = pg_NumRows($result);

        if ((!$result) || ($rows < 1)) {
          echo "<H1>Error - no installers registered!?!</H1><p>\n";
          echo "<!-- Table for centering and squeezing body text -->\n";
          echo "</td>\n";
          echo "</tr>\n";
          echo "</table>\n";
          echo "</center>\n";
          echo "<br>\n";
          echo "<hr width=65%>\n";
          echo "<? footerStd(); ?>\n";
          echo "</body>\n";
          echo "</html>\n";
          exit;
        }

        if (!isset($dumptext)) {
          echo "<center>\n";
          echo "<table border=1 cols=8 width = 100%>";
          echo "<tr>\n";
          echo "<td>Delete?</td>\n";
          echo "<td width=50>Id</td>\n";
          echo "<td>First Name</td>\n";
          echo "<td>Last Name</td>\n";
          echo "<td>Email</td></td>\n";
          echo "<td>Offering</td>\n";
          echo "<td>Install</td>\n";
          echo "<td>Configure</td>\n";
          echo "<td>Confirmed</td>\n";
          echo "<td>Here Today?</td>\n";
          echo "</tr>\n";
        } else {
          echo "Id</td>\n";
          echo "&nbsp;";
          echo "First Name\n";
          echo "&nbsp;";
          echo "Last Name\n";
          echo "&nbsp;";
          echo "Email\n";
          echo "&nbsp;";
          echo "Offering\n";
          echo "&nbsp;";
          echo "Confirmed\n";
          echo "&nbsp;";
          echo "Here Today?\n";
          echo "<br>\n";
        }

        for ($i=0; $i < $rows; $i++) {
          if (!isset($dumptext)) {
            echo "<tr>\n";
            $id = pg_result($result, $i, "id");
            echo "<td>\n";
            echo "<input type=SUBMIT name=delete_installer value=$id>\n";
            echo "</td>\n";
            echo "<td>\n";
            echo $id;
            echo "</td>\n";
            echo "<td>\n";
            echo pg_result($result, $i, "firstname");
            echo "</td>\n";
            echo "<td>\n";
            echo pg_result($result, $i, "lastname");
            echo "</td>\n";
            echo "<td>\n";
            echo "<a href=mailto:";
            echo pg_result($result, $i, "email");
            echo ">";
            echo pg_result($result, $i, "email");
            echo "</a>\n";
            echo "</td>\n";
            echo "<td>\n";
            echo pg_result($result, $i, "offering");
            echo "</td>\n";
            echo "<td>\n";
            $temp = pg_result($result, $i, "install");
            if ($temp == "") {
              echo "none\n";
            } else {
              echo $temp;
            }
            echo "</td>\n";
            echo "<td>\n";
            $temp = pg_result($result, $i, "configure");
            if ($temp == "") {
              echo "none\n";
            } else {
              echo $temp;
            }
            echo "</td>\n";
            echo "<td>\n";
            $resultstr = pg_result($result, $i, "confirmed");
            if ($resultstr == "f") {
             echo "<input type=SUBMIT 
                     name=confirm_installer value=$id>\n";
            } else {
              echo "<b>T</b>\n";
            }
            echo "</td>\n";
            echo "<td>\n";
            $resultstr = pg_result($result, $i, "installer_here");
            if ($resultstr == "f") {
             echo "<input type=SUBMIT
                     name=installer_here value=$id>\n";
            } else {
              echo "<b>T</b>\n";
            }
            echo "</td>\n";
  
            echo "</tr>\n";

          } else {

            echo pg_result($result, $i, "id");
            echo "&nbsp;";
            echo pg_result($result, $i, "firstname");
            echo "&nbsp;";
            echo pg_result($result, $i, "lastname");
            echo "&nbsp;";
            echo pg_result($result, $i, "email");
            echo "&nbsp;";
            echo pg_result($result, $i, "offering");
            echo "&nbsp;";
            echo pg_result($result, $i, "confirmed");
            echo "&nbsp;";
            echo pg_result($result, $i, "installer_here");
            echo "<br>";

          }

        }

        echo "</table>\n";
        echo "</center>\n";

        if (!isset($dumptext)) {
          echo "</form>\n";
        }

        echo " <br><br> <hr width=65%> <h1>T-Shirt Orders Database</h1>\n";

        $connection = pg_connect("dbname=linuxsa");

        if (!$connection) {
          echo "Whoops! an error occured.  Sorry.\n";
        }

        $sql = "select * from tshirt_orders";

        @$result = pg_exec ($connection, $sql);

        @$rows = pg_NumRows($result);

        if ((!$result) || ($rows < 1)) {
          echo "<H1>Error - no T-Shirts ordered!?!</H1><p>\n";
          echo "<!-- Table for centering and squeezing body text -->\n";
          echo "</td>\n";
          echo "</tr>\n";
          echo "</table>\n";
          echo "</center>\n";
          echo "<br>\n";
          echo "<hr width=65%>\n";
          echo "<? footerStd(); ?>\n";
          echo "</body>\n";
          echo "</html>\n";
          exit;
        }

        if (!isset($dumptext)) {
          echo "<form action=admin.php3 method=POST>\n";
          echo "<center>\n";
          echo "<table border=1 cols=8 width = 100%>";
          echo "<tr>\n";
          echo "<td>Delete?</td>\n";
          echo "<td width=50>Id</td>\n";
          echo "<td>First Name</td>\n";
          echo "<td>Last Name</td>\n";
          echo "<td>Email</td></td>\n";
          echo "<td>Size</td>\n";
          echo "<td>Paid</td>\n";
          echo "<td>Received</td>\n";
        } else {
          echo "Id\n";
          echo "&nbsp;";
          echo "First Name\n";
          echo "&nbsp;";
          echo "Last Name\n";
          echo "&nbsp;";
          echo "Email\n";
          echo "&nbsp;";
          echo "Size\n";
          echo "&nbsp;";
          echo "Paid\n";
          echo "&nbsp;";
          echo "Received\n";
          echo "<br>";
        }

        for ($i=0; $i < $rows; $i++) {
          if (!isset($dumptext)) {
            echo "<tr>\n";
            $id = pg_result($result, $i, "id");
            echo "<td>\n";
            echo "<input type=SUBMIT name=delete_tshirt value=$id>\n";
            echo "</td>\n";
            echo "<td>\n";
            echo $id;
            echo "</td>\n";
            echo "<td>\n";
            echo pg_result($result, $i, "firstname");
            echo "</td>\n";
            echo "<td>\n";
            echo pg_result($result, $i, "lastname");
            echo "</td>\n";
            echo "<td>\n";
            echo "<a href=mailto:";
            echo pg_result($result, $i, "email");
            echo ">";
            echo pg_result($result, $i, "email");
            echo "</a>\n";
            echo "</td>\n";
            echo "<td>\n";
            echo pg_result($result, $i, "size");
            echo "</td>\n";
            echo "<td>\n";
            $resultstr = pg_result($result, $i, "paid");
            if ($resultstr == "f") {
             echo "<input type=SUBMIT 
                     name=paid_tshirt value=$id>\n";
            } else {
              echo "<b>T</b>\n";
            }
            echo "</td>\n";

            echo "<td>\n";
            $resultstr = pg_result($result, $i, "received");
            if ($resultstr == "f") {
             echo "<input type=SUBMIT 
                     name=received_tshirt value=$id>\n";
            } else {
              echo "<b>T</b>\n";
            }
            echo "</td>\n";

            echo "</tr>\n";

          } else {
            echo pg_result($result, $i, "id");
            echo "&nbsp;";
            echo pg_result($result, $i, "firstname");
            echo "&nbsp;";
            echo pg_result($result, $i, "lastname");
            echo "&nbsp;";
            echo pg_result($result, $i, "email");
            echo "&nbsp;";
            echo pg_result($result, $i, "size");
            echo "&nbsp;";
            echo pg_result($result, $i, "paid");
            echo "&nbsp;";
            echo pg_result($result, $i, "received");
            echo "<br>\n";
          }

        }

        echo "</table>\n";

        echo "</center>\n";

        if (!isset($dumptext)) {
          echo "</form>\n";
        }

    ?>

    </table>
    </center>

    <br>
    <hr width=65%>

<? footerStd(); ?>

  </body>
</html>


