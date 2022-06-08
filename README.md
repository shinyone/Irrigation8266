# Irrigation 8266

## For use with ESP8266.   Sends and receives heartbeat messages via MQTT to ensure that services are running.  If a heartbeat is not received then a telegram message is sent as notification of failed service.

## System can be controlled via WebUI or HomeAssistant via MQTT


### Features:
- [MQTT](https://github.com/knolleary/pubsubclient)
- [Telegram](https://github.com/witnessmenow/Universal-Arduino-Telegram-Bot)
- HomeAssistant integration
- Web UI, OTA and Captive portal - Based on Tasmota


Original [Page](https://blog.haschek.at/2019/diy-garden-irrigation-for-less-than-20-bucks.html) and [source](https://gist.github.com/geek-at/346520639924cf391dc4836a8017342e).  Thanks Christian!


### Installation

I use either [VS Code](https://code.visualstudio.com/) or [Arduino IDE](https://www.arduino.cc/en/software)

1. Set the board type
1. Install packages
1. Compile and upload
1. Access Web portal (default address is [192.168.4.1](http://192.168.4.1))
1. Set Wifi (reboot and reconnect to new IP)
1. Set other settings via Web UI

### Single or Double valves

There are two .ino projects.  One to control a single valve (the one I use), and the other to control 2 valves, which was Christian's design, but I don't need it (so it's untested)