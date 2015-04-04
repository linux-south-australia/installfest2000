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

<!-- LinuxSA InstallFest2000 Front Page -->

<!-- 
  0.8 is the "Sleepless in Adelaide" release
  0.9 is the "Mission Installfest II" release
  1.0 is the "Tuxinator" release
  1.1 is the "Fried Green Windows" release
  1.2 is the "PhanTux Menace" release
  1.3 is the "There's Something About Tux" release
  1.4 is the "Tuxfinger" release
  1.5 is the "Tux gets GPL'd" release
  1.6 is the "Weekend at Tux's" release
-->

<?# Page variable definitions
  $VERSION = "1.6";
  $DATE    = "13/07/2000";
  $TITLE = "LinuxSA Installfest2000 - Home Page";
  $PAGE = "index.php3";

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
<? navFront(); ?>
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

    <!-- Standard disclaimer - details not finalised -->
<!--    <p>
      <b> !!!!! &nbsp; &nbsp; MOST DETAILS ON THIS PAGE ARE UNCONFIRMED.  
      PLEASE CHECK BACK OFTEN.  DO NOT RELY ON ANY INFORMATION BEING 
      CORRECT YET! &nbsp; &nbsp; !!!!! </b>
    </p>
-->

<? contentIntro(); ?>

<? contentWhere(); ?>

<? contentRequirements(); ?>

<? contentCost(); ?>

<? contentSponsors(); ?>

<? contentTshirt(); ?>

<? contentSupport(); ?>

<? contentWho(); ?>

<? contentContact(); ?>

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

