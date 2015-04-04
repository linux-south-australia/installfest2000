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

<!-- LinuxSA InstallFest2000 Record Page -->

<?# Page variable definitions
  $VERSION = "0.5";
  $DATE    = "17/07/2000";
  $TITLE   = "LinuxSA Installfest2000 - Record Page";
  $PAGE    = "record.php3";

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
<!-- Link for publicity info here -->
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

    <!-- Record logo -->
    <center>
    <img src="img/record.jpg" alt="Record Logo">
    </center>

    <hr>
    <center>
    Here are some 
    <a href="http://slash.dotat.org/~newton/installpics/">photos</a>
    and even 
    <a href="http://slash.dotat.org/~newton/installpics2/">more photos</a>
    taken by
    <a href="mailto:newton@atdot.dotat.org">Mark Newton</a>.

    <br><br>

    Here's a few 
    <a href="http://members.iweb.net.au/~vwodecki/installfest/index.html">
    photos</a> taken by 
    <a href="mailto:vwodecki@iweb.net.au">Victor Wodecki</a>.

    <br><br>

    And finally some
    <a href="http://slash.dotat.org/~michaeld/">awful shots</a>
    taken by 
    <a href="mailto:michaeld@senet.com.au">Michael Davies</a> and a
    few other miscellaneous people.

    </center>

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

