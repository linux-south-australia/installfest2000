<? 
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
?>

<?
  function headerFront() {
?>
    <!------------>
    <!-- Header -->
    <!------------>
    <!-- Note that David suggested something narrower and simpler.  Can't -->
    <!-- help myself, so I specified heights/widths where it mattered.    -->
    <!-- Hopefully all graphics are the same size as I'm asking them to   -->
    <!-- displayed.  MRD.                                                 -->
    <table border="0" cols="3" rows="4" cellspacing="0" 
           cellpadding="0" width="700"> 
     <tr>
      <!-- <td rowspan="3" width="200" height="213"> -->
      <td rowspan="3" width="150" height="160">
       <img src="img/babytux.jpg" alt="Cute picture of babytux">
      </td>
      <!-- <td align="left" width="161" height="90"> -->
      <td align="left">
       <a href="http://www.linuxsa.org.au">
         <img src="img/linuxsa.jpg" alt="LinuxSA" border="0">
       </a>
      </td>
      <td align="right" valign="bottom">
       <a href="http://www.auug.org.au">
         <img src="img/AUUG-logo.gif" alt="AUUG" border="0">
       </a>
     </tr>
     <tr>
      <!-- <td width="600" height"70" colspan="2"> -->
      <td colspan="2">
       <img src="img/installfest2000.gif" alt="INSTALLFEST2000">
      </td>
     </tr>
     <tr>
      <!-- <td width="400" height="53" align="right" colspan="2">  -->
      <td align="right" colspan="2"> 
       <a href="http://www.linuxsa.org.au/meetings/installfest2000/">
         <img src="img/installdate.gif" align="right" border="0"
          alt="www.linuxsa.org.au/installfest2000">
       </a>
      </td>
     </tr>
    </table>
    <br>
<?
}
?>
