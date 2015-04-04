<? 
#    Installfest Webpage - a php3/postgresql/apache instant Linux
#                          installfest web page and database.
#    Copyright (C) 2000 michaeld@seneet.com.au
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
  function transmeta() {
?>
<!-- There are no hidden messages in this web page, who do you -->
<!-- think we are, Transmeta??? :-) -->
<?
  }
?>
<? function title($title) {
     echo ($title);
     echo "\n";
   }
?> 

<? 
  function displayDigit($dig) {
    if ($dig == 0)
      echo "<img src=img/zero.gif alt=0>\n";
    if ($dig == 1)
      echo "<img src=img/one.gif alt=1>\n";
    if ($dig == 2)
      echo "<img src=img/two.gif alt=2>\n";
    if ($dig == 3)
      echo "<img src=img/three.gif alt=3>\n";
    if ($dig == 4)
      echo "<img src=img/four.gif alt=4>\n";
    if ($dig == 5)
      echo "<img src=img/five.gif alt=5>\n";
    if ($dig == 6)
      echo "<img src=img/six.gif alt=6>\n";
    if ($dig == 7)
      echo "<img src=img/seven.gif alt=7>\n";
    if ($dig == 8)
      echo "<img src=img/eight.gif alt=8>\n";
    if ($dig == 9)
      echo "<img src=img/nine.gif alt=9>\n";
}
?>


<?
  function howManyHundreds($num) {
    $res = $num/100;
    return floor($res);
  }

  function howManyTens($num) {
    $res = $num/10;
    return floor($res);
  }
?>



 

