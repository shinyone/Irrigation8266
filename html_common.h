const char html_common_header[] PROGMEM = R"====(<!DOCTYPE html>
<html lang="en" class="">

<head>
    <meta charset='utf-8' />
    <meta name="viewport" content="width=device-width,initial-scale=1,user-scalable=no" />
    <title>_PROGRAM_NAME_ - _UNIT_NAME_</title>
    <script>

      function eb(s) {
          return document.getElementById(s);
      }
  
      function wl(f) {
          window.addEventListener('load', f);
      }
  
      var ft, x = null;
      function refresh(p) {
          a = p || '';
          clearTimeout(ft);
          if (x != null) {
              x.abort()
          }
          x = new XMLHttpRequest();
          x.onreadystatechange = function () {
              if (x.readyState == 4 && x.status == 200) {
                  var s = x.responseText;
                  eb('status').innerHTML = s;
                  clearTimeout(ft);
                  ft = setTimeout(refresh, 2345);
              }
          };
          x.open('GET', '.?REFRESH=1' + a, true);
          x.send();
          ft = setTimeout(refresh, 20000);
      }
  
      wl(refresh);

    </script>
    <style>
        div,fieldset,input,select {
            padding: 5px;
            font-size: 1em;
        }

        .main {
            text-align:left;
            display: inline-block;
            min-width:340px;
            color: #eaeaea;
        }
        
        fieldset {
            background-color: #4f4f4f;
        }
        
        p {
            margin: 0.5em 0;
        }
        
        input[type=checkbox],input[type=radio] {
            width: 1em;
            margin-right: 6px;
            vertical-align: -1px;
        }

        input[type=range] {
            width: 99%;
        }

        input:not([type]),input[type=password],input[type=number]  {
            width: 100%;
            box-sizing: border-box;
            -webkit-box-sizing: border-box;
            -moz-box-sizing: border-box;
            background: #dddddd;
            color: #000000;
        }

        select {
            width: 100%;
            background: #dddddd;
            color: #000000;
            block-size: 40px;
        }

        textarea {
            resize: none;
            width: 98%;
            height: 318px;
            padding: 5px;
            overflow: auto;
            background: #1f1f1f;
            color: #65c115;
        }
        
        body {
            text-align: center;
            font-family: verdana,sans-serif;
            background: #252525;
        }
        
        td {
            padding: 0px;
        }
        
        button, a.button {
            display: inline-block;
            text-align: center;
            border: 0;
            border-radius: 0.3rem;
            background: #1fa3ec;
            color: #faffff;
            line-height: 2.4rem;
            font-size: 1.2rem;
            width: 100%;
            -webkit-transition-duration: 0.4s;
            transition-duration: 0.4s;
            cursor: pointer;
        }
        
        button:hover, a.button:hover {
            background: #0e70a4;
        }
        
        .bred {
            background-color: #d43535;
        }
        
        .bred:hover {
            background-color: #931f1f;
        }
        
        .bgrn {
            background-color: #47c266;
        }
        
        .bgrn:hover {
            background-color: #5aaf6f;
        }
        
        a {
            text-decoration: none;
        }
        
        .p {
            float: left;
            text-align: left;
        }
        
        .q {
            float: right;
            text-align: right;
        }

        a {
            color: #1fa3ec;
            text-decoration: none;
        }

        .p {
            float: left;
            text-align: left;
        }

        .q {
            float: right;
            text-align: right;
        }

        .r {
            border-radius: 0.3em;
            padding: 2px;
            margin: 6px 2px;
        }
        
        span {
            display: inline-block;
        }

        h2, h3 {
            text-align: center;
        }
    </style>
</head>
<body>
    <div class="main">
        <div style='text-align:center;'>
            <noscript>To use _PROGRAM_NAME_, you need to activate Javascript<br/></noscript>
            <h3>_UNIT_NAME_</h3>
        </div>
)====";

const char html_common_footer[] PROGMEM = R"====(
        <br/>
        <div style='text-align:right;font-size:10px;color: grey;'>
            <hr/>_PROGRAM_NAME_ _VERSION_
        </div>
    </div>
</body>

</html>
)====";
