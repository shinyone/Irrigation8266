

const char html_menu_root[] PROGMEM = R"====(
<div style="padding:0;">
  <table style="width:100%">
    <tr>
      <td id="status" name="status" style="width:100%;text-align:center;font-weight:normal;font-size:62px">-</td>
    </tr>
  </table>
</div>
<table style="width:100%">
    <tr>
      <td style="width:100%"><button onclick="refresh('&TOGGLE=1');">_TXT_POWER_TOGGLE_</button></td>
    </tr>
</table>
<div>
    <form action='/status' method='get'>
        <button>_TXT_STATUS_</button>
    </form>
</div>
<div>
    <form action='/setup' method='get'>
        <button>_TXT_SETUP_</button>
    </form>
</div>
<div>
    <form action='/upgrade' method='get'>
        <button>_TXT_FW_UPGRADE_</button>
    </form>
</div>
<div>
    <form>
        <button type='submit' name='REBOOT' class='button bred'>_TXT_REBOOT_</button>
    </form>
</div>
<div id="logout" style="display:none">
    <form action='/login?LOGOUT=YES' method='post'>
        <button type='submit' name='Logout' class='button bred'>_TXT_LOGOUT_</button>
    </form>
</div>
<script>
    if (_SHOW_LOGOUT_) {
        document.getElementById("logout").style.display = "";
    }
</script>
)====";


const char html_menu_setup[] PROGMEM = R"====(
<p>
    <form action='/mqtt' method='get'>
        <button>_TXT_MQTT_</button>
    </form>
</p>
<p>
    <form action='/wifi' method='get'>
        <button>_TXT_WIFI_</button>
    </form>
</p>
<p>
    <form action='/telegram' method='get'>
        <button>_TXT_TELEGRAM_</button>
    </form>
</p>
<p>
    <form action='/irrigation' method='get'>
        <button>_TXT_IRRIGATION_</button>
    </form>
</p>
<p>
    <form action='/others' method='get'>
        <button>_TXT_OTHERS_</button>
    </form>
</p>
<p>
    <form onsubmit="return confirm(' _TXT_RESETCONFIRM_ ');">
        <button type='submit' name='RESET' class='button bred'>_TXT_RESET_</button>
    </form>
</p>
<p>
    <form action='/' method='get'>
        <button>_TXT_BACK_</button>
    </form>
</p>
)====";
