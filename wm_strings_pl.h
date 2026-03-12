/**
 * wm_strings_pl.h
 * polskie napisy dla
 * WiFiManager, biblioteki dla platformy ESP8266/Arduino
 * do konfiguracji danych WiFi przez Captive Portal
 *
 * @author Creator tzapu
 * @author tablatronix
 * @version 0.0.0
 * @license MIT
 */

#ifndef _WM_STRINGS_PL_H_
#define _WM_STRINGS_PL_H_

#ifndef WIFI_MANAGER_OVERRIDE_STRINGS
// !!! POWYŻSZE NIE ZADZIAŁA, jeśli zdefiniujesz to w szkicu, musi być jako build flag
// jeśli ktoś wie, jak ustawić kolejność include, żeby dało się to zrobić, byłoby super.. widziałem, że da się to ogarnąć..

// pliki z napisami muszą zawierać plik consts!
#include "wm_consts_en.h" // dołącz stałe, tokeny, ścieżki

const char WM_LANGUAGE[] PROGMEM = "pl-PL"; // kod języka i18n

const char HTTP_HEAD_START[]       PROGMEM = "<!DOCTYPE html>"
"<html lang='pl'><head>"
"<meta name='format-detection' content='telephone=no'>"
"<meta charset='UTF-8'>"
"<meta  name='viewport' content='width=device-width,initial-scale=1,user-scalable=no'/>"
"<title>{v}</title>";

const char HTTP_SCRIPT[]           PROGMEM = "<script>function c(l){"
"document.getElementById('s').value=l.getAttribute('data-ssid')||l.innerText||l.textContent;"
"p = l.nextElementSibling.classList.contains('l');"
"document.getElementById('p').disabled = !p;"
"if(p)document.getElementById('p').focus();};"
"function f() {var x = document.getElementById('p');x.type==='password'?x.type='text':x.type='password';}"
"</script>"; // @todo dodać stany przycisków, blokadę po kliknięciu, potwierdzenie, spinner itd.

const char HTTP_HEAD_END[]         PROGMEM = "</head><body class='{c}'><div class='wrap'>"; // {c} = _bodyclass
// przykład osadzonego logo, zakodowanego w base64 inline, bez stylowania tutaj
const char HTTP_ROOT_MAIN[]        PROGMEM = "<h1>{t}</h1><h3>{v}</h3>";

const char * const HTTP_PORTAL_MENU[] PROGMEM = {
"<form action='/wifi'    method='get'><button>Konfiguracja WiFi</button></form><br/>\n", // MENU_WIFI
"<form action='/0wifi'   method='get'><button>Konfiguracja WiFi (bez skanowania)</button></form><br/>\n", // MENU_WIFINOSCAN
"<form action='/info'    method='get'><button>Informacje</button></form><br/>\n", // MENU_INFO
"<form action='/param'   method='get'><button>Ustawienia</button></form><br/>\n", // MENU_PARAM
"<form action='/close'   method='get'><button>Zamknij</button></form><br/>\n", // MENU_CLOSE
"<form action='/restart' method='get'><button>Restart</button></form><br/>\n", // MENU_RESTART
"<form action='/exit'    method='get'><button>Wyjdź</button></form><br/>\n", // MENU_EXIT
"<form action='/erase'   method='get'><button class='D'>Wyczyść</button></form><br/>\n", // MENU_ERASE
"<form action='/update'  method='get'><button>Aktualizacja</button></form><br/>\n", // MENU_UPDATE
"<hr><br/>" // MENU_SEP
};

const char HTTP_PORTAL_OPTIONS[]   PROGMEM = "";
const char HTTP_ITEM_QI[]          PROGMEM = "<div role='img' aria-label='{r}%' title='{r}%' class='q q-{q} {i} {h}'></div>"; // ikony RSSI
const char HTTP_ITEM_QP[]          PROGMEM = "<div class='q {h}'>{r}%</div>"; // procent siły sygnału {h} = hidden showperc pref
const char HTTP_ITEM[]             PROGMEM = "<div><a href='#p' onclick='c(this)' data-ssid='{V}'>{v}</a>{qi}{qp}</div>";

const char HTTP_FORM_START[]       PROGMEM = "<form method='POST' action='{v}'>";
const char HTTP_FORM_WIFI[]        PROGMEM = "<label for='s'>SSID</label><input id='s' name='s' maxlength='32' autocorrect='off' autocapitalize='none' placeholder='{v}'><br/><label for='p'>Hasło</label><input id='p' name='p' maxlength='64' type='password' placeholder='{p}'><input type='checkbox' id='showpass' onclick='f()'> <label for='showpass'>Pokaż hasło</label><br/>";
const char HTTP_FORM_WIFI_END[]    PROGMEM = "";
const char HTTP_FORM_STATIC_HEAD[] PROGMEM = "<hr><br/>";
const char HTTP_FORM_END[]         PROGMEM = "<br/><br/><button type='submit'>Zapisz</button></form>";
const char HTTP_FORM_LABEL[]       PROGMEM = "<label for='{i}'>{t}</label>";
const char HTTP_FORM_PARAM_HEAD[]  PROGMEM = "<hr><br/>";
const char HTTP_FORM_PARAM[]       PROGMEM = "<br/><input id='{i}' name='{n}' maxlength='{l}' value='{v}' {c}>\n"; // nie usuwaj nowej linii!

const char HTTP_SCAN_LINK[]        PROGMEM = "<br/><form action='/wifi?refresh=1' method='POST'><button name='refresh' value='1'>Odśwież</button></form>";
const char HTTP_SAVED[]            PROGMEM = "<div class='msg'>Zapisywanie danych logowania<br/>Trwa próba połączenia ESP z siecią.<br />Jeśli się nie uda, połącz się ponownie z AP i spróbuj jeszcze raz</div>";
const char HTTP_PARAMSAVED[]       PROGMEM = "<div class='msg S'>Zapisano<br/></div>";
const char HTTP_END[]              PROGMEM = "</div></body></html>";
const char HTTP_ERASEBTN[]         PROGMEM = "<br/><form action='/erase' method='get'><button class='D'>Usuń konfigurację WiFi</button></form>";
const char HTTP_UPDATEBTN[]        PROGMEM = "<br/><form action='/update' method='get'><button>Aktualizacja</button></form>";
const char HTTP_BACKBTN[]          PROGMEM = "<hr><br/><form action='/' method='get'><button>Wstecz</button></form>";

const char HTTP_STATUS_ON[]        PROGMEM = "<div class='msg S'><strong>Połączono</strong> z {v}<br/><em><small>adres IP: {i}</small></em></div>";
const char HTTP_STATUS_OFF[]       PROGMEM = "<div class='msg {c}'><strong>Brak połączenia</strong> z {v}{r}</div>"; // {c=class} {v=ssid} {r=status_off}
const char HTTP_STATUS_OFFPW[]     PROGMEM = "<br/>Błąd uwierzytelniania";
const char HTTP_STATUS_OFFNOAP[]   PROGMEM = "<br/>Nie znaleziono punktu dostępowego";
const char HTTP_STATUS_OFFFAIL[]   PROGMEM = "<br/>Nie udało się połączyć";
const char HTTP_STATUS_NONE[]      PROGMEM = "<div class='msg'>Nie ustawiono AP</div>";
const char HTTP_BR[]               PROGMEM = "<br/>";

const char HTTP_STYLE[]            PROGMEM = "<style>"
".c,body,h1,h3{text-align:center;font-family:verdana}div,input,select{padding:5px;font-size:1em;margin:5px 0;box-sizing:border-box}"
"input,button,select,.msg{border-radius:.3rem;width: 100%}input[type=radio],input[type=checkbox]{width:auto}"
"button,input[type='button'],input[type='submit']{cursor:pointer;border:0;background-color:#1fa3ec;color:#fff;line-height:2.4rem;font-size:1.2rem;width:100%}"
"input[type='file']{border:1px solid #1fa3ec}"
".wrap {text-align:left;display:inline-block;min-width:260px;max-width:500px}"
".footer {position: fixed; text-align: center; bottom: 0; width: 100%}"
"a{color:#000;font-weight:700;text-decoration:none}a:hover{color:#1fa3ec;text-decoration:underline}"
".q{height:16px;margin:0;padding:0 5px;text-align:right;min-width:38px;float:right}.q.q-0:after{background-position-x:0}.q.q-1:after{background-position-x:-16px}.q.q-2:after{background-position-x:-32px}.q.q-3:after{background-position-x:-48px}.q.q-4:after{background-position-x:-64px}.q.l:before{background-position-x:-80px;padding-right:5px}.ql .q{float:left}.q:after,.q:before{content:'';width:16px;height:16px;display:inline-block;background-repeat:no-repeat;background-position: 16px 0;"
"background-image:url('data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAGAAAAAQCAMAAADeZIrLAAAAJFBMVEX///8AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAADHJj5lAAAAC3RSTlMAIjN3iJmqu8zd7vF8pzcAAABsSURBVHja7Y1BCsAwCASNSVo3/v+/BUEiXnIoXkoX5jAQMxTHzK9cVSnvDxwD8bFx8PhZ9q8FmghXBhqA1faxk92PsxvRc2CCCFdhQCbRkLoAQ3q/wWUBqG35ZxtVzW4Ed6LngPyBU2CobdIDQ5oPWI5nCUwAAAAASUVORK5CYII=');}"
"@media (-webkit-min-device-pixel-ratio: 2),(min-resolution: 192dpi){.q:before,.q:after {"
"background-image:url('data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAALwAAAAgCAMAAACfM+KhAAAALVBMVEX///8AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAADAOrOgAAAADnRSTlMAESIzRGZ3iJmqu8zd7gKjCLQAAACmSURBVHgB7dDBCoMwEEXRmKlVY3L//3NLhyzqIqSUggy8uxnhCR5Mo8xLt+14aZ7wwgsvvPA/ofv9+44334UXXngvb6XsFhO/VoC2RsSv9J7x8BnYLW+AjT56ud/uePMdb7IP8Bsc/e7h8Cfk912ghsNXWPpDC4hvN+D1560A1QPORyh84VKLjjdvfPFm++i9EWq0348XXnjhhT+4dIbCW+WjZim9AKk4UZMnnCEuAAAAAElFTkSuQmCC');"
"background-size: 95px 16px;}}"
".msg{padding:20px;margin:20px 0;border:1px solid #eee;border-left-width:5px;border-left-color:#777}.msg h4{margin-top:0;margin-bottom:5px}.msg.P{border-left-color:#1fa3ec}.msg.P h4{color:#1fa3ec}.msg.D{border-left-color:#dc3630}.msg.D h4{color:#dc3630}.msg.S{border-left-color: #5cb85c}.msg.S h4{color: #5cb85c}"
"dt{font-weight:bold}dd{margin:0;padding:0 0 0.5em 0;min-height:12px}"
"td{vertical-align: top;}"
".h{display:none}"
"button{transition: 0s opacity;transition-delay: 3s;transition-duration: 0s;cursor: pointer}"
"button.D{background-color:#dc3630}"
"button:active{opacity:50% !important;cursor:wait;transition-delay: 0s}"
"body.invert{background-color:#060606;}"
"body.invert,body.invert a,body.invert h1 {color:#fff;}"
"body.invert .msg{color:#fff;background-color:#282828;border-top:1px solid #555;border-right:1px solid #555;border-bottom:1px solid #555;}"
"body.invert .q[role=img]{-webkit-filter:invert(1);filter:invert(1);}"
":disabled {opacity: 0.5;}"
"</style>";

#ifndef WM_NOHELP
const char HTTP_HELP[]             PROGMEM =
 "<br/><h3>Dostępne strony</h3><hr>"
 "<table class='table'>"
 "<thead><tr><th>Strona</th><th>Funkcja</th></tr></thead><tbody>"
 "<tr><td><a href='/'>/</a></td>"
 "<td>Strona menu.</td></tr>"
 "<tr><td><a href='/wifi'>/wifi</a></td>"
 "<td>Pokazuje wyniki skanowania WiFi i umożliwia wpisanie konfiguracji WiFi. (/0wifi bez skanowania)</td></tr>"
 "<tr><td><a href='/wifisave'>/wifisave</a></td>"
 "<td>Zapisuje dane konfiguracji WiFi i konfiguruje urządzenie. Wymaga przekazanych zmiennych.</td></tr>"
 "<tr><td><a href='/param'>/param</a></td>"
 "<td>Strona parametrów</td></tr>"
 "<tr><td><a href='/info'>/info</a></td>"
 "<td>Strona informacyjna</td></tr>"
 "<tr><td><a href='/u'>/u</a></td>"
 "<td>Aktualizacja OTA</td></tr>"
 "<tr><td><a href='/close'>/close</a></td>"
 "<td>Zamyka okno captive portal, ale portal konfiguracyjny pozostaje aktywny</td></tr>"
 "<tr><td>/exit</td>"
 "<td>Zamknięcie portalu konfiguracyjnego</td></tr>"
 "<tr><td>/restart</td>"
 "<td>Restart urządzenia</td></tr>"
 "<tr><td>/erase</td>"
 "<td>Usuwa konfigurację WiFi i restartuje urządzenie. Urządzenie nie połączy się ponownie z siecią, dopóki nie zostaną wpisane nowe dane WiFi.</td></tr>"
 "</table>"
 "<p/>Github <a href='https://github.com/tzapu/WiFiManager'>https://github.com/tzapu/WiFiManager</a>.";
#else
const char HTTP_HELP[]             PROGMEM = "";
#endif

const char HTTP_UPDATE[] PROGMEM = "Wgraj nowe oprogramowanie<br/><form method='POST' action='u' enctype='multipart/form-data' onchange=\"(function(el){document.getElementById('uploadbin').style.display = el.value=='' ? 'none' : 'initial';})(this)\"><input type='file' name='update' accept='.bin,application/octet-stream'><button id='uploadbin' type='submit' class='h D'>Aktualizuj</button></form><small><a href='http://192.168.4.1/update' target='_blank'>* Może nie działać wewnątrz captive portal, otwórz w przeglądarce: http://192.168.4.1</a></small>";
const char HTTP_UPDATE_FAIL[] PROGMEM = "<div class='msg D'><strong>Aktualizacja nie powiodła się!</strong><Br/>Uruchom urządzenie ponownie i spróbuj jeszcze raz</div>";
const char HTTP_UPDATE_SUCCESS[] PROGMEM = "<div class='msg S'><strong>Aktualizacja zakończona powodzeniem.</strong> <br/> Urządzenie uruchamia się ponownie...</div>";

#ifdef WM_JSTEST
const char HTTP_JS[] PROGMEM =
"<script>function postAjax(url, data, success) {"
"    var params = typeof data == 'string' ? data : Object.keys(data).map("
"            function(k){ return encodeURIComponent(k) + '=' + encodeURIComponent(data[k]) }"
"        ).join('&');"
"    var xhr = window.XMLHttpRequest ? new XMLHttpRequest() : new ActiveXObject(\"Microsoft.XMLHTTP\");"
"    xhr.open('POST', url);"
"    xhr.onreadystatechange = function() {"
"        if (xhr.readyState>3 && xhr.status==200) { success(xhr.responseText); }"
"    };"
"    xhr.setRequestHeader('X-Requested-With', 'XMLHttpRequest');"
"    xhr.setRequestHeader('Content-Type', 'application/x-www-form-urlencoded');"
"    xhr.send(params);"
"    return xhr;}"
"postAjax('/status', 'p1=1&p2=Hello+World', function(data){ console.log(data); });"
"postAjax('/status', { p1: 1, p2: 'Hello World' }, function(data){ console.log(data); });"
"</script>";
#endif

// html informacji
#ifdef ESP32
	const char HTTP_INFO_esphead[]    PROGMEM = "<h3>esp32</h3><hr><dl>";
	const char HTTP_INFO_chiprev[]    PROGMEM = "<dt>Rewizja układu</dt><dd>{1}</dd>";
  	const char HTTP_INFO_lastreset[]  PROGMEM = "<dt>Ostatni powód resetu</dt><dd>CPU0: {1}<br/>CPU1: {2}</dd>";
  	const char HTTP_INFO_aphost[]     PROGMEM = "<dt>Nazwa hosta punktu dostępowego</dt><dd>{1}</dd>";
    const char HTTP_INFO_psrsize[]    PROGMEM = "<dt>Rozmiar PSRAM</dt><dd>{1} bajtów</dd>";
	const char HTTP_INFO_temp[]       PROGMEM = "<dt>Temperatura</dt><dd>{1} C&deg; / {2} F&deg;</dd>";
    const char HTTP_INFO_hall[]       PROGMEM = "<dt>Czujnik Halla</dt><dd>{1}</dd>";
#else
	const char HTTP_INFO_esphead[]    PROGMEM = "<h3>esp8266</h3><hr><dl>";
	const char HTTP_INFO_fchipid[]    PROGMEM = "<dt>ID pamięci Flash</dt><dd>{1}</dd>";
	const char HTTP_INFO_corever[]    PROGMEM = "<dt>Wersja core</dt><dd>{1}</dd>";
	const char HTTP_INFO_bootver[]    PROGMEM = "<dt>Wersja bootloadera</dt><dd>{1}</dd>";
	const char HTTP_INFO_lastreset[]  PROGMEM = "<dt>Ostatni powód resetu</dt><dd>{1}</dd>";
	const char HTTP_INFO_flashsize[]  PROGMEM = "<dt>Rzeczywisty rozmiar Flash</dt><dd>{1} bajtów</dd>";
#endif

const char HTTP_INFO_memsmeter[]  PROGMEM = "<br/><progress value='{1}' max='{2}'></progress></dd>";
const char HTTP_INFO_memsketch[]  PROGMEM = "<dt>Pamięć - rozmiar programu</dt><dd>Użyte / całkowite bajty<br/>{1} / {2}";
const char HTTP_INFO_freeheap[]   PROGMEM = "<dt>Pamięć - wolny heap</dt><dd>{1} bajtów dostępne</dd>";
const char HTTP_INFO_wifihead[]   PROGMEM = "<br/><h3>WiFi</h3><hr>";
const char HTTP_INFO_uptime[]     PROGMEM = "<dt>Czas pracy</dt><dd>{1} min {2} s</dd>";
const char HTTP_INFO_chipid[]     PROGMEM = "<dt>ID układu</dt><dd>{1}</dd>";
const char HTTP_INFO_idesize[]    PROGMEM = "<dt>Rozmiar Flash</dt><dd>{1} bajtów</dd>";
const char HTTP_INFO_sdkver[]     PROGMEM = "<dt>Wersja SDK</dt><dd>{1}</dd>";
const char HTTP_INFO_cpufreq[]    PROGMEM = "<dt>Częstotliwość CPU</dt><dd>{1}MHz</dd>";
const char HTTP_INFO_apip[]       PROGMEM = "<dt>IP punktu dostępowego</dt><dd>{1}</dd>";
const char HTTP_INFO_apmac[]      PROGMEM = "<dt>MAC punktu dostępowego</dt><dd>{1}</dd>";
const char HTTP_INFO_apssid[]     PROGMEM = "<dt>SSID punktu dostępowego</dt><dd>{1}</dd>";
const char HTTP_INFO_apbssid[]    PROGMEM = "<dt>BSSID</dt><dd>{1}</dd>";
const char HTTP_INFO_stassid[]    PROGMEM = "<dt>SSID stacji</dt><dd>{1}</dd>";
const char HTTP_INFO_staip[]      PROGMEM = "<dt>IP stacji</dt><dd>{1}</dd>";
const char HTTP_INFO_stagw[]      PROGMEM = "<dt>Bramka stacji</dt><dd>{1}</dd>";
const char HTTP_INFO_stasub[]     PROGMEM = "<dt>Maska podsieci</dt><dd>{1}</dd>";
const char HTTP_INFO_dnss[]       PROGMEM = "<dt>Serwer DNS</dt><dd>{1}</dd>";
const char HTTP_INFO_host[]       PROGMEM = "<dt>Nazwa hosta</dt><dd>{1}</dd>";
const char HTTP_INFO_stamac[]     PROGMEM = "<dt>MAC stacji</dt><dd>{1}</dd>";
const char HTTP_INFO_conx[]       PROGMEM = "<dt>Połączono</dt><dd>{1}</dd>";
const char HTTP_INFO_autoconx[]   PROGMEM = "<dt>Autopołączenie</dt><dd>{1}</dd>";

const char HTTP_INFO_aboutver[]     PROGMEM = "<dt>WiFiManager</dt><dd>{1}</dd>";
const char HTTP_INFO_aboutarduino[] PROGMEM = "<dt>Arduino</dt><dd>{1}</dd>";
const char HTTP_INFO_aboutsdk[]     PROGMEM = "<dt>ESP-SDK/IDF</dt><dd>{1}</dd>";
const char HTTP_INFO_aboutdate[]    PROGMEM = "<dt>Data kompilacji</dt><dd>{1}</dd>";

const char S_brand[]              PROGMEM = "WiFiManager";
const char S_debugPrefix[]        PROGMEM = "*wm:";
const char S_y[]                  PROGMEM = "Tak";
const char S_n[]                  PROGMEM = "Nie";
const char S_enable[]             PROGMEM = "Włączone";
const char S_disable[]            PROGMEM = "Wyłączone";
const char S_GET[]                PROGMEM = "GET";
const char S_POST[]               PROGMEM = "POST";
const char S_NA[]                 PROGMEM = "Nieznane";
const char S_passph[]             PROGMEM = "********";
const char S_titlewifisaved[]     PROGMEM = "Dane logowania zapisane";
const char S_titlewifisettings[]  PROGMEM = "Ustawienia zapisane";
const char S_titlewifi[]          PROGMEM = "Konfiguracja ESP";
const char S_titleinfo[]          PROGMEM = "Informacje";
const char S_titleparam[]         PROGMEM = "Ustawienia";
const char S_titleparamsaved[]    PROGMEM = "Ustawienia zapisane";
const char S_titleexit[]          PROGMEM = "Wyjście";
const char S_titlereset[]         PROGMEM = "Reset";
const char S_titleerase[]         PROGMEM = "Wyczyść";
const char S_titleclose[]         PROGMEM = "Zamknij";
const char S_options[]            PROGMEM = "opcje";
const char S_nonetworks[]         PROGMEM = "Nie znaleziono sieci. Odśwież, aby zeskanować ponownie.";
const char S_staticip[]           PROGMEM = "Statyczny IP";
const char S_staticgw[]           PROGMEM = "Statyczna bramka";
const char S_staticdns[]          PROGMEM = "Statyczny DNS";
const char S_subnet[]             PROGMEM = "Maska podsieci";
const char S_exiting[]            PROGMEM = "Zamykanie";
const char S_resetting[]          PROGMEM = "Moduł zrestartuje się za kilka sekund.";
const char S_closing[]            PROGMEM = "Możesz zamknąć stronę, portal będzie nadal działał";
const char S_error[]              PROGMEM = "Wystąpił błąd";
const char S_notfound[]           PROGMEM = "Nie znaleziono pliku\n\n";
const char S_uri[]                PROGMEM = "URI: ";
const char S_method[]             PROGMEM = "\nMetoda: ";
const char S_args[]               PROGMEM = "\nArgumenty: ";
const char S_parampre[]           PROGMEM = "param_";

// napisy debug
const char D_HR[]                 PROGMEM = "--------------------";

// domyślny prefiks SSID softAP
#ifdef ESP8266
    const char S_ssidpre[]        PROGMEM = "ESP";
#elif defined(ESP32)
    const char S_ssidpre[]        PROGMEM = "ESP32";
#else
    const char S_ssidpre[]        PROGMEM = "WM";
#endif

#endif
#endif
