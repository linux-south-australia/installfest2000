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
  function footerStd() {
    global $VERSION;
    global $PAGE;
    global $DATE;
?>
    <!------------>
    <!-- Footer -->
    <!------------>
    <center>

<?
  echo "<table height=25 width=600 cellspacing=0 border=0>\n";
  echo "<tr>\n";
  echo "  <td>\n";
  echo "    <img src=img/thereare.jpg alt=There are>\n";
  echo "  </td>\n";
$connection = pg_connect("dbname=linuxsa");
$sql = "select * from installees";
@$result = pg_exec ($connection, $sql);
@$rows = pg_NumRows($result);
#echo $rows;
$hundreds = howManyHundreds($rows);
$rows = $rows - 100 * $hundreds;
$tens = howManyTens($rows);
$rows = $rows - 10 * $tens;
#echo "Number of Hundreds= ";
#echo $hundreds;
#echo "\nNumber of Tens= ";
#echo $tens;
#echo "\nNumber of Ones= ";
#echo $rows;
#echo "\n";
  echo "  <td>\n";
  echo displayDigit($hundreds);
  echo "  </td>\n";
  echo "  <td>\n";
  echo displayDigit($tens);
  echo "  </td>\n";
  echo "  <td>\n";
  echo displayDigit($rows);
  echo "  </td>\n";
  echo "  <td>\n";
  echo "    <img src=img/installees.jpg alt=installees registered, and>\n"; 
  echo "  </td>\n";
$connection = pg_connect("dbname=linuxsa");
$sql = "select * from installers";
@$result = pg_exec ($connection, $sql);
@$rows = pg_NumRows($result);
#echo $ro;
$hundreds = howManyHundreds($rows);
$rows = $rows - 100 * $hundreds;
$tens = howManyTens($rows);
$rows = $rows - 10 * $tens;
#echo "Number of Hundreds= ";
#echo $hundreds;
#echo "\nNumber of Tens= ";
#echo $tens;
#echo "\nNumber of Ones= ";
#echo $rows;
#echo "\n";
  echo "  <td>\n";
  echo displayDigit($hundreds);
  echo "  </td>\n";
  echo "  <td>\n";
  echo displayDigit($tens);
  echo "  </td>\n";
  echo "  <td>\n";
  echo displayDigit($rows);
  echo "  </td>\n";
  echo "  <td>\n";
  echo "    <img src=img/installers.jpg alt=installers registered.>\n";
  echo "  </td>\n";
  echo "</tr>\n";
  echo "</table>\n";
?>

      <table>
        <tr>
          <td width=250>
            <a href="http://www.linuxsa.org.au/installfest/">
              <img src="img/advert.gif" border=0 alt="advert">
            </a>
          </td>
          <td>
            This is version 
            <? 
              echo $VERSION; 
              echo "&nbsp;(";
              echo $DATE;
              echo ")&nbsp;";
            ?> 
            of this web page.  
            Comments on this page are <i>very</i> welcome.</p> 
            Please email comments to the
            <? 
               echo "<a href=mailto:michaeld@senet.com.au?";
               echo "subject=Installfest_";
               echo $PAGE;
               echo "_version_";
               echo $VERSION;
               echo ">\n";
            ?>
            webmaster</a>.
          </td>
        </tr>
        <tr>
          <td align="center" nowrap colspan="2">
            <font size="1">
              Copyright &copy; 2000 michaeld@senet.com.au.&nbsp;
              See <a href="LICENCE">this file</a> for licence information.
          </td>
        </tr>
      </table>
      </center>
<?
}
?>
