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
function contentIntro() {
?>
    <a name="Welcome"></a>
    <h1> Welcome to <a href="http://www.linuxsa.org.au">LinuxSA</a>'s 
      and <a href="http://www.auug.org.au">AUUG</a>'s installfest! </h1>
    <p> What is an installfest? Well, an installfest is where members 
      of the local Linux and FreeBSD community come together and offer 
      their time and expertise to help you install and configure these 
      operating systems on your computer. </p>
    <p> In addition to helping you install Linux or FreeBSD (or both!)
      we'll also be helping those of you who have already made the leap
      to free operating systems but need help configuring something - 
      networking, dialup internet access, Linux-to-Windows connectivity,
      or just getting Quake III running well! </p>
    <p> In addition to the helpful and knowledgable LinuxSA users, 
      we are fortunate to have secured the presence of a number of 
      expert software developers and network designers who work on a 
      daily basis with the innermost details of Linux, FreeBSD, Apache,
      PHP, proprietry Unix, Cisco networking gear and so on.&nbsp;&nbsp; 
      So if you are qualified to help but also could do with some 
      education, <a href="register.php3">register</a> to help and turn 
      up and ask those hard questions you've been saving up. </p>
    <p> Perhaps you don't know what the fuss about Linux or FreeBSD is 
      all about.&nbsp; &nbsp;Feel free to come along and have a look 
      (why not bring your machine - you might change your mind and 
      want Linux or FreeBSD yourself! :-)  &nbsp; &nbsp; You can 
      check out some of the following on-line resources to find out 
      what Linux 
      <a href="http://www.li.org/li/whatislinux.shtml">actually is</a>
      and to 
      <a href="http://www.linux.com/firststep/">learn more</a>
      about what makes it great!</p>
    <p> So come along, bring your computer, join us for a slice of pizza and
      get Linux installed and running smoothly on your computer.
      &nbsp; &nbsp; Join the growing crowd of people who won't accept 
      software that sucks. </p> 
<?
}
?>

<?
function contentWhere() {
?>
    <a name="Where"></a>
    <h1> When, Where and What? </h1>
    <center>
    <h3> F&nbsp;&nbsp;R&nbsp;&nbsp;E&nbsp;&nbsp;E&nbsp;&nbsp;
         &nbsp;&nbsp&nbsp;&nbsp&nbsp;&nbsp;
         C&nbsp;&nbsp;D&nbsp;&nbsp;-
         &nbsp;&nbsp;R&nbsp;&nbsp;O&nbsp;&nbsp;M&nbsp;&nbsp;S</h3>
    Read about that a little further below :-)
    </center>
    <p> The installfest will be held on <b>Saturday July 15th</b> at 
      31 York Street, Adelaide. &nbsp; &nbsp; We'll be opening the 
      doors to the public at 10am and we won't start any new 
      installations after 4pm. </p>
    <p> Where is 31 York Street? &nbsp; &nbsp; Well, going down Rundle 
      Street, you'll find Bent Street (just between Ngapartji and the 
      Austral Hotel).  &nbsp; &nbsp; Half-way down Bent Street you'll 
      find a laneway called York Street. &nbsp; &nbsp; There is an 
      <i>Anima Gallery</i> sign clearly visible, under which is a door
      into a room which contains a lift. &nbsp; &nbsp; Taking the lift 
      to the second floor, you'll find us there on the left! &nbsp; 
      &nbsp; Think you'll get lost? &nbsp; &nbsp; Then have a look at 
      some <a href="http://slash.dotat.org/~newton/installfest/">
      photos with directions</a> showing you how to get there.</p>
    <p> There's plenty of parking available in either the Hungry Jacks 
      Car Park or the Target carpark across the road, and there will
      be volunteers in York Street directing traffic and helping 
      people unload their machines. &nbsp; &nbsp; 
      <b><i>There may be an announcement concerning parking - so watch 
      this space for further details. </i></b></p> 
    <p> What will we be installing?  As our very generous sponsors
      <a href="http://www.redhat.com">Red Hat</a>, 
      <a href="http://www.turbolinux.com">TurboLinux</a> and
      <a href="http://www.bsdi.com">BSDi</a> are 
      <b>donating</b> CDs, we will preferably be installing these Linux 
      and FreeBSD distributions.
      If you want something else, we certainly will have other Linux 
      distributions available, but if you are new to all this, we 
      recommend these free operating systems since they are easy to use,
      stable and able to be supported by the local LinuxSA 
      community. </p> 
<?
}
?>

<?
function contentRequirements() {
?>
    <a name="Requirements"></a>
    <h1> Requirements. </h1>
    <h3> Before the day you'll need to do the following: </h3>
    <li> Make sure you have at least 400Mb of disk space free for 
      your new operating system.  &nbsp; &nbsp;If you want to keep 
      your pre-existing Windows installation, that's ok, we can 
      set up your computer so you can <i>dual-boot</i> between the 
      two OSes, but you should defragment your hard drive under 
      Windows before you come to save some time. </li>
    <li> Backup your data - particularly if you can't afford to 
      lose it. </li>
    <li> <a href="register.php3">Register</a>.&nbsp; &nbsp;  
      You should let us know that you're coming. </li>
    <li> Label everything that you're going to bring with you - 
      that way there's no confusion about what belongs to who. </li>

    <h3> You need to bring the following with you: </h3>
    <li> Your PC - only 486s and later please :-) We can install on 
      Sun SPARCstations, DEC Alphas, SGI Indys and Apple Macintoshes 
      as well - but you'll need to forewarn us if you intend bringing 
      any of these. </li>
    <li> Your monitor & modem - afterall, if you want everything to work at 
        home, let's make sure it works here before you leave.</li>
    <li>Other devices - mice, keyboards, scanners, printers, anything you
        want working under Linux.</li>
    <li>Cables - we can't possibly provide all possible cables and 
        connections, so bring your own. &nbsp; &nbsp; Perhaps put them 
        all in a box with your name on the side and bring that. &nbsp; &nbsp;
        Bringing your own powerboard is a good thing to do.</li>
<?
}
?>


<?
function contentCost() {
?>
    <a name="Cost"></a>
    <h1> Cost </h1>
    <p> Zip.&nbsp; &nbsp;Zero.&nbsp; &nbsp;Squat.&nbsp;&nbsp;Absolutely 
      nothing.&nbsp;&nbsp;We'll be installing only
      <a href="http://opensource.org">open source</a> software that is
      freely re-distributable, so there's no cost to you for the 
      software. </p>
    <p> We'll also have refreshments on offer (including pizza :-) for
      a reasonable cost.  There will also be merchandise such as non-free
      software, books, Linux merchanidise etc. for sale on the day by
      various retailers. </p>
<?
}
?>

<?
function contentSponsors() {
?>
    <a name="Sponsors"></a>
    <h1> Sponsors </h1>
    <p> Even though the software we'll be installing is itself free, 
        there are costs associated with running an event like this. </p>
    <p> LinuxSA and AUUG gratefully acknowledges the generous assistance 
      given by the following organisations, without which this event 
      could not take place:</p>
    <center>
    <table border="0" width="100%">
       <tr>
         <td width="33%" align="center">
           <a href="http://www.redhat.com">
             <img src="img/rh-logo.gif" border="0" alt="Red Hat logo">
           </a>
         </td>
         <td width="33%" align="center">
           <a href="http://www.supremeprinters.com.au">
             <img src="img/supreme-logo.gif" border="0"
              alt="Supreme Printers logo">
           </a>
         </td>
         <td width="33%" align="center">
           <a href="http://www.internode.on.net">
             <img src="img/internode-logo.gif" border="0" alt="Internode logo">
           </a>
         </td>
       </tr>
       <tr>
         <td width="33%" align="center">
           <a href="http://www.redhat.com"><b>Red Hat</b></a>
         </td>
         <td width="33%" align="center">
           <a href="http://www.supremeprinters.com.au">
             <b>Supreme Printers</b>
           </a>
         </td>
         <td width="33%" align="center">
           <a href="http://www.internode.on.net">
             <b>Internode Professional Access</b>
           </a>
         </td>
       </tr>
    </table>

    <br>

    <table border="0" width="100%">
       <tr>
         <td width="33%" align="center">
           <a href="http://www.netcraft.com.au">
             <img src="img/netcraft-logo.gif" border="0"
              alt="NetCraft Australia logo">
           </a>
         </td>
         <td width="50%" align="center">
           <a href="http://www.linuxcare.com">
             <img src="img/RevLux.gif" border="0"
              alt="Linuxcare logo">
           </a>
         </td>
         <td width="33%" align="center">
           <a href="http://www.tellurian.com.au">
             <img src="img/tellurian-logo.gif" border="0" alt="Tellurian logo">
           </a>
         </td>
       </tr>
       <tr>
         <td width="33%" align="center">
           <a href="http://www.netcraft.com.au"><b>NetCraft Australia</b></a>
         </td>
         <td width="33%" align="center">
           <a href="http://www.linuxcare.com"><b>Linuxcare</b></a>
         </td>
         <td width="33%" align="center">
           <a href="http://www.tellurian.com.au"><b>Tellurian</b></a>
         </td>
       </tr>
    </table>

    <br>

    <table border="0" width="100%">
       <tr>
         <td width="33%" align="center">
           <a href="http://www.turbolinux.com.au">
             <img src="img/turbolinux-logo.gif" border="0"
                  alt="TurboLinux logo">
           </a>
         </td>
         <td width="33%" align="center">
           <a href="http://www.iit-training.com.au">
             <img src="img/iit-logo.jpg" border="0"
              alt="IIT logo">
           </a>
         </td>
         <td width="33%" align="center">
           <a href="http://www.bsdi.com">
             <img src="img/bsdi-logo.jpg" border="0" alt="BSDi logo">
           </a>
         </td>
       </tr>
       <tr>
         <td width="33%" align="center">
           <a href="http://www.turbolinux.com.au"><b>TurboLinux</b></a>
         </td>
         <td width="33%" align="center">
           <a href="http://www.iit-training.com.au">
             <b>IIT Training</b>
           </a>
         </td>
         <td width="33%" align="center">
           <a href="http://www.bsdi.com">
             <b>BSDi</b>
           </a>
         </td>
       </tr>
     </table>

     <br>

     <table border="0" width="100%">
       <tr>
         <td width="50%" align="center">
           <a href="http://www.calderasystems.com.au">
             <img src="img/caldera-logo.jpg" border="0"
              alt="Caldera logo">
           </a>
         </td>
         <td width="50%" align="center">
           <a href="http://www.agile.com.au">
             <img src="img/agile-logo.gif" border="0"
              alt="Agile Commuications logo">
           </a>
         </td>
       </tr>
       <tr>
         <td width="50%" align="center">
           <a href="http://www.calderasystems.com.au"><b>Caldera Systems</b></a>
         </td>
         <td width="50%" align="center">
           <a href="http://www.agile.com.au"><b>Agile Communications</b></a>
         </td>
       </tr>
     </table>

     <br>

     <h4> For enquiries about sponsorship opportunities, please contact 
       the Event Manager, 
       <a href="mailto:davidn@rebel.net.au">David Newall</a></h4>
     </center>
<?
  }
?>


<?
function contentTshirt() {
?>
    <a name="Tshirt"></a>
    <h1> T-Shirt </h1>
    <p> We will commemerate this event with a T-shirt.&nbsp; &nbsp;
      There was a competition open to all to design the T-Shirt,
      which has now been decided.&nbsp; &nbsp; You can have a look
      at the
      <a href="http://www.rebel.net.au/~tuxshirt">winning design</a>
      here.&nbsp;&nbsp; 
      <a href="http://www.tellurian.com.au">Tellurian</a> are
      underwriting the T-Shirt production and awarded 3 T-Shirts as
      prizes in the competition. </p>
    <p> T-Shirts will cost $15 (GST inclusive).
      You can pre-order a T-Shirt on our
      <a href="register.php3">registration page.</a> </p>
    <p> You can pick up your T-shirt prior to the event
      Tellurian during business hours (at 272 Prospect Road, Prospect) 
      or at the installfest. </p>
    <p> A limited number of T-Shirts will also be available for sale 
      on the day. </p>
<?
}
?>

<?
function contentWho() {
?>
    <a name="Who"></a>
    <h1> Who We Are </h1>
    <p> LinuxSA is non-profit, non-incorporated group of Linux and 
      open-source enthusiasts who meet together on the third Tuesday 
      of every month.&nbsp; &nbsp; We welcome everyone, no matter 
      their level of knowledge or expertise. </p>
 
    <p> AUUG Incorporated is the Australian UNIX(*) and Open Systems 
      Users Group.&nbsp; &nbsp;AUUG is a national body offering its 
      members access to information on current and future UNIX and 
      Open Systems technologies. </p>

    <p> * UNIX is a registered trademark of The Open Group. </p>

<?
}
?>



<?
function contentSupport() {
?>
    <a name="Support"></a>
    <h1> Support </h1>
    <p> Ok, you go home and XYZ doesn't work.&nbsp; &nbsp;Worse still, you 
      can't remember what we told you about getting help. </p> 
    <p> Don't fear - LinuxSA is here!!! &nbsp; &nbsp; We're your friendly 
      user community! &nbsp; &nbsp;
      We have a <a href="http://www.linuxsa.org.au">Web Site</a> and a
      <a href="http://www.linuxsa.org.au/mailing-list/">Mailing List</a>
      here to help.&nbsp; &nbsp; If we can't help you, we can point you to
      someone who can. </p>
    <p> There is also currently an effort being made to provide hints, 
      tips, and cheatsheets available to those who come along to the 
      Installfest.  If you think you are able to support this effort, 
      have a look 
      <a href="http://www.rebel.net.au/~lloy0076/linux/ifest/index.html">
      here</a> for details on how you can contribute. </p>
<?
}
?>


<?
function contentContact() {
?>
    <a name="Contact"></a>
    <h1> Contact </h1>
    <p> If there are any questions that this web page doesn't answer, feel
      free to contact any of the following people who are most willing to
      help:<br>
      <center>
        <table width="50%">
          <tr>
            <td>
              <li>Richard Russell -
                  <a href="mailto:richardrussell@mail.com">email</a>&nbsp;
                  (coordinator).</li>
              <li>David Newall -
                  <a href="mailto:davidn@rebel.net.au">email</a>&nbsp;
                  (event manager).</li>
              <li>David Lloyd -
                  <a href="mailto:lloy0076@rebel.net.au">email</a>&nbsp;
                  (documentation manager).</li>
              <li>Robyn Manning -
                  <a href="mailto:robynman@dove.net.au">email</a>&nbsp;
                  (short-talk organiser).</li>
              <li><a href="mailto:michaeld@senet.com.au">Webmaster</a>
                  .</li>
            </td>
          </tr>
        </table>
      </center> </p>
<?
}
?>


<?
function contentRegisterInstallee() {
?>
    <a name="Installee"></a>
    <h1> I Want Linux Installed Or Configured. </h1>
    <p> Please fill in the following information if you wish to have 
      Linux or FreeBSD installed or configured on your PC as part of the 
      installfest.  Your name and email address are compulsory, as is the 
      question at the end.  All information provided will be kept 
      confidential, and email addresses provided will not be given to 
      any third party.  You needn't worry about SPAM, because we hate it 
      more than you! </p> 
    <p> If you have trouble filling in this form, please contact one of the
      people listed <a href="index.php3#Contact">here</a>. </p>

    <form action="register.php3" method="POST">
      <table border="0" cols="2">
        <tr>
          <td width="100" align="right">
            <b>First Name:</b>
          </td>
          <td>
            <input type="text" name="firstname" maxlength="25" size="25">
            <i>(Field Compulsory!)</i>
          </td>
        </tr>

        <tr>
          <td align="right">
            <b>Last Name:</b>
          </td>
          <td>
            <input type="text" name="lastname" maxlength="25" size="25">
            <i>(Field Compulsory!)</i>
          </td>
        </tr>

        <tr>
          <td align="right">
            <b>Email Address:</b>
          </td>
          <td>
            <input type="text" name="emailaddress" maxlength="50" size="50">
            <i>(Field Compulsory!)</i>
          </td>
        </tr>

        <tr>
          <td align="right">
            <b>I want someone to</b>
          </td>
          <td>
            <select NAME=dowhat>
            <option selected>install Linux for me.
            <option>help me configure my Linux box.
            <option>install FreeBSD for me.
            <option>help me configure my FreeBSD box.
            </select>
          </td>
        </tr>

        <tr>
          <td>
            <br>
          </td>
          <td>
            If you selected <i>"I want someone to help me configure my 
            Linux/FreeBSD box"</i>, tell us what you need help in 
            configuring:
          </td>
        </tr>
        <tr>
          <td>
            &nbsp;
          </td>
          <td>
            If you selected <i>"I want someone to install Linux/FreeBSD 
            for me"</i>, and you have any special instructions, write 
            them here:
          </td>
        </tr>

        <tr>
          <td align="right">
            &nbsp;
          </td>
          <td>
            <input type="text" name="whatinfo" maxlength="80" size="80">
          </td>
        </tr>

        <tr>
          <td align="right">
            <b>Computer:</b>
          </td>
          <td>
            <select NAME=computer size=1>
            <option selected>I Do Not Know What My Computer Is
            <option>486 or clone
            <option>Pentium/Pentium Pro/586/686/K6-II/K6-III
            <option>Pentium II/Pentium III/Athlon
            <option>PowerPC Macintosh
            <option>Sun Workstation
            <option>Alpha Workstation
            </select>
          </td>
        </tr>

        <tr>
          <td align="right">
            <b>RAM:</b>
          </td>
          <td>
            <select NAME=ram size=1>
            <option selected>I Do Not Know How Much RAM
            <option>Less than 8MB RAM
            <option>At least 8Mb and less than 64MB RAM
            <option>64MB of RAM or more
            </select>
          </td>
        </tr>

        <tr>
          <td align="right">
            <b>Devices:</b>
          </td>
          <td>
            <input type=checkbox name=floppy value=floppy>
            <i>3.5" Floppy Disk Drive</i>
          </td>
        </tr>

        <tr>
          <td>
            &nbsp;
          </td>
          <td>
            <input type=checkbox name=cdrom value=cdrom>
            <i>CD-ROM Drive</i>
          </td>
        </tr>

        <tr>
          <td>
            &nbsp;
          </td>
          <td>
            <input type=checkbox name=networkcard value=networkcard>
            <i>Network Card</i>
          </td>
        </tr>

        <tr>
          <td>
            &nbsp;
          </td>
          <td>
            <input type=checkbox name=zipdrive value=zipdrive>
            <i>Zip Drive</i>
          </td>
        </tr>

        <tr>
          <td align="right">
            <b>Graphics Card:</b>
          </td>
          <td>
            <input type="text" name="vga" maxlength="25" size="25">
          </td>
        </tr>

        <tr>
          <td align="right">
            <b>Dedicated 3D Graphics Card (if any):</b>
          </td>
          <td>
            <input type="text" name="threedgraphics" maxlength="25" size="25">
          </td>
        </tr>

        <tr>
          <td align="right">
            <b>Printer: (if bringing)</b>
          </td>
          <td>
            <input type="text" name="printer" maxlength="25" size="25">
          </td>
        </tr>

        <tr>
          <td align="right">
            <b>Modem: (if known)</b>
          </td>
          <td>
            <input type="text" name="modem" maxlength="25" size="25">
          </td>
        </tr>

        <tr>
          <td colspan=2>
            <br>
<!--            This is where some legalise goes about people saying they won't
            hold us responsible if anything goes wrong.  <br>
            Note that on the day, before anyone will help you install 
            or configure Linux, you will be required to sign a similar 
            statement indicating that you will not hold LinuxSA, AUUG, or
            anyone involved at the installfest, responsible for any loss
            suffered by you, caused by any means, including negligance.
            Your participation in the installfest is entirely at your own
            risk.  If this isn't acceptable to you, you may decline this
            agreement by not attending the installfest.-->
            On the day you will be required to sign a waiver indicating that
            you will not hold LinuxSA, AUUG, or any individual, responsible for
            any loss you may suffer.  This is a condition for receiving
            assistance from us.  Do you accept this?
          </td>
        </tr>

        <tr>
          <td>
            <input type="radio" name="AcceptRightsWaiver" value="yes">
            <b>Yes</b>
          </td>
          <td>
            <input type="radio" name="AcceptRightsWaiver" value="no" checked>
            <b>No</b><br>
          </td>
        </tr>

        <tr>
          <td align="right">
            <b>I want to register for:</b>
          </td>
          <td>
            <input type="SUBMIT" name="installee" value="Installfest2000">
          </td>
        </tr>

      </table>

    </form>

<?
}
?>


<?
function contentRegisterInstaller() {
?>
    <a name="Installer"></a>
    <h1> Help Others Installing or Configuring Linux. </h1>
    <p> Please fill in the following information if you wish to help
      out at the installfest either installing or configuring 
      Linux/FreeBSD on other people's PCs. </p>
    <p> Note that we expect you to be just as careful with other people's
      machines as you would be with your own. </p>
    <p> If you have trouble filling in this form, please contact one of the
      people listed <a href="index.php3#Contact">here</a>. </p>

    <form action="register.php3" method="POST">
      <table border="0" cols="2">
        <tr>
          <td width="100" align="right">
            <b>First Name:</b>
          </td>
          <td>
            <input type="text" name="firstname" maxlength="25" size="25">
            <i>(Field Compulsory!)</i>
          </td>
        </tr>

        <tr>
          <td align="right">
            <b>Last Name:</b>
          </td>
          <td>
            <input type="text" name="lastname" maxlength="25" size="25">
            <i>(Field Compulsory!)</i>
          </td>
        </tr>

        <tr>
          <td align="right">
            <b>Email Address:</b>
          </td>
          <td>
            <input type="text" name="emailaddress" maxlength="50" size="50">
            <i>(Field Compulsory!)</i>
          </td>
        </tr>

        <tr>
          <td align="right">
            <b>I can help:</b>
          </td>
          <td>
            <select NAME=offering size=1>
            <option selected>Installing Linux
            <option>Configuring Linux
            <option>Both installing and configuring Linux
            <option>Installing FreeBSD
            <option>Configuring FreeBSD
            <option>Both installing and configuring FreeBSD
            <option>I can Install/Configure Linux/FreeBSD
            </select>
          </td>
        </tr>

        <tr>
          <td align="right">
            <b> If you can help installing, what can you 
              comfortably install? </b>
          </td>
          <td>
            <input type="text" name="install" maxlength="75" size="75">
          </td>
        </tr>

        <tr>
          <td align="right">
            <b> If you can help configure, what can you 
              comfortably configure? </b>
          </td>
          <td>
            <input type="text" name="configure" maxlength="75" size="75">
          </td>
        </tr>

       <tr>
          <td align="right">
            <b>I want to help out at:</b>
          </td>
          <td>
            <input type="SUBMIT" name="installer" value="Installfest2000">
          </td>
        </tr>

      </table>

    </form>

<?
}
?>

<?
function contentDatabaseActions() {

  # Bring in the globals
  global $confirm_installer;
  global $installer_here;
  global $delete_installer;
  global $confirm_installee;
  global $completed_installee;
  global $delete_installee;
  global $paid_tshirt;
  global $received_tshirt;
  global $delete_tshirt;


  # First check to see if we're dealing with the installee database
  if ((isset($confirm_installee)) ||
      (isset($completed_installee)) ||
      (isset($delete_installee))) {

    if (isset($confirm_installee)) {
      $sql = "UPDATE installees SET confirmed = 'TRUE' WHERE id = $confirm_installee;";
    }

    if (isset($completed_installee)) {
      $sql = "UPDATE installees SET completed = 'TRUE' WHERE id = $completed_installee;";
    }

    if (isset($delete_installee)) {
      $sql = "DELETE FROM installees WHERE id = $delete_installee;";
    }

    # Now put this in the database
    @$connection = pg_connect("dbname=linuxsa");

    if (!$connection) {
      echo "Whoops! an error occured connecting to the ";
      echo "LinuxSA database (for table installees).  Sorry.\n";
      exit;
    }

    @$result = pg_exec ($connection, $sql);

    if (!$result) {
      echo "<H1>Error - Problem deleting data in";
      echo " installees table</H1><p>";
      echo "Please click ";
      echo "<a href=admin.php3>here</a>";
      echo " to reload this page.";
    } 

  } 


  # Check to see if we're dealing with the installer database
  if ((isset($confirm_installer)) ||
      (isset($installer_here)) ||
      (isset($delete_installer))) {

    if (isset($confirm_installer)) {
      $sql = "UPDATE installers SET confirmed = 'TRUE' WHERE id = $confirm_installer;";
    }

    if (isset($installer_here)) {
      $sql = "UPDATE installers SET installer_here = 'TRUE' WHERE id = $installer_here;";
    }

    if (isset($delete_installer)) {
      $sql = "DELETE FROM installers WHERE id = $delete_installer;";
    }

    # Now put this in the database
    @$connection = pg_connect("dbname=linuxsa");

    if (!$connection) {
      echo "Whoops! an error occured connecting to the";
      echo "LinuxSA database (for table installer).  Sorry.\n";
      exit;
    }

    @$result = pg_exec ($connection, $sql);

    if (!$result) {
      echo "<H1>Error - Problem deleting data in";
      echo " installers table</H1><p>";
      echo "Please click ";
      echo "<a href=admin.php3>here</a>";
      echo " to reload this page.";
    } 

  } 

  # Check to see if we're dealing with the t-shirt database
  if ((isset($paid_tshirt)) ||
      (isset($received_tshirt)) ||
      (isset($delete_tshirt))) {

    if (isset($paid_tshirt)) {
      $sql = "UPDATE tshirt_orders SET paid = 'TRUE' WHERE id = $paid_tshirt;";
    }

    if (isset($received_tshirt)) {
      $sql = "UPDATE tshirt_orders SET received = 'TRUE' WHERE id = $received_tshirt;";
    }

    if (isset($delete_tshirt)) {
      $sql = "DELETE FROM tshirt_orders WHERE id = $delete_tshirt;";
    }

    # Now put this in the database
    @$connection = pg_connect("dbname=linuxsa");

    if (!$connection) {
      echo "Whoops! an error occured connecting to the";
      echo "LinuxSA database (for table installer).  Sorry.\n";
      exit;
    }

    @$result = pg_exec ($connection, $sql);

    if (!$result) {
      echo "<H1>Error - Problem deleting data in";
      echo " tshirt_orders table</H1><p>";
      echo "Please click ";
      echo "<a href=admin.php3>here</a>";
      echo " to reload this page.";
    }

  }

}
?>

<?
function contentBuyTShirt() {
?>
    <a name="BuyTShirt"></a>
    <h1> I Want To Buy A T-Shirt. </h1>
    <p> Please fill in the following information if you wish to order 
      a T-Shirt.  Please note that clicking on the "BUY a T-Shirt" button 
      indicates an obligation on your behalf to purchase a T-Shirt. </p> 
    <p> Note that your order may be confirmed via email before a T-Shirt is 
      printed on your behalf. </p>
    <p> If you have trouble purchasing a T-Shirt, please contact the T-Shirt
      organiser - &nbsp; 
      <a href="mailto:davidn@rebel.net.au">David Newall</a>. </p>

    <form action="register.php3" method="POST">
      <table border="0">
        <tr>
          <td width="100" align="right">
            <b>First Name:</b>
          </td>
          <td>
            <input type="text" name="firstname" maxlength="25" size="25">
            <i>(Field Compulsory!)</i>
          </td>
        </tr>

        <tr>
          <td align="right">
            <b>Last Name:</b>
          </td>
          <td>
            <input type="text" name="lastname" maxlength="25" size="25">
            <i>(Field Compulsory!)</i>
          </td>
        </tr>

        <tr>
          <td align="right">
            <b>Email Address:</b>
          </td>
          <td>
            <input type="text" name="emailaddress" maxlength="50" size="50">
            <i>(Field Compulsory!)</i>
          </td>
        </tr>

        <tr>
          <td align="right">
            <b>I want to buy a </b>
          </td>
          <td>
            <select NAME=size>
            <option>S
            <option>M
            <option>L
            <option selected>XL
            <option>XXL
            </select>
            T-Shirt.
          </td>
        </tr>

        <tr>
          <td align="right">
            <b>I hereby promise to</b>
          </td>
          <td>
            <input type="SUBMIT" name="tshirt" value="BUY a T-Shirt.">
          </td> 
        </tr>

      </table>

    </form>

<?
}
?>



<?
function contentAdvertisement() {
?>
    <a name="Advert"></a>
    <h1> ASCII Advertisement. </h1>
    <p> Here is an ASCII advertisement, suitable to be emailed to 
      individuals, or to a suitable mailing list to which you may
      be subscribed.  Please <b>DO NOT</b> bulk mail this.  That
      would be spamming, and that's not the image we want for the
      installfest. </p>

    <a href="installfest_advert.txt">Installfest Advert (Text File)</a>
<?
}
?>


<?
function contentLogo() {
?>
    <a name="Logo"></a>
    <h1> Click thru Logo </h1>
    <p> Find below an animated GIF for use on web pages that you create.
      Please link the image to 
      <code>'http://www.linuxsa.org.au/installfest/' </code></p>
    <img src="img/advert.gif">
    </center>
<?
}
?>

<?
function contentPressRelease() {
?>
    <a name="PressRelease"></a>
    <h1> Press Release </h1>
    <p> Please find below a press release, suitable for release to
      the general press. </p>

    <a href="PressRelease.txt">Installfest Press Release (Text File)</a>. 

<?
}
?>




