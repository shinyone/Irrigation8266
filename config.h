//#define MY_LANGUAGE fr-FR // define your language

const String program_version = "0.0.1";
const String program_name = "Irrigation";

//Define global variables for files
const PROGMEM char* wifi_conf = "wifi.json";
const PROGMEM char* mqtt_conf = "mqtt.json";
const PROGMEM char* telegram_conf = "telegram.json";
const PROGMEM char* irrigation_conf = "irrigation.json";
const PROGMEM char* others_conf = "others.json";
const PROGMEM char* console_file = "console.log";

// pinouts
const PROGMEM uint8_t blueLedPin = LED_BUILTIN; // Onboard LED = digital pin 2 "D4" (blue LED on WEMOS D1-Mini)
const PROGMEM uint8_t redLedPin = 0;

// current device setting
bool power_status; // true for on

// Define global variables for network
const PROGMEM uint32_t WIFI_RETRY_INTERVAL_MS = 300000;
int wifi_timeout;
bool wifi_config_exists;
String hostname = "";
String ap_ssid;
String ap_pwd;
String ota_pwd;

// Define global variables for MQTT
String mqtt_fn;
String mqtt_server;
String mqtt_port;
String mqtt_username;
String mqtt_password;
String mqtt_topic = "";
String mqtt_client_id;
String mqtt_heartbeat = "heartbeat";
String mqtt_heartbeat_topic;

// Define global variables for Telegram
bool telegram_connected;
String telegram_chat_id;
String telegram_bot_token;

// Define global variables for Irrigation
bool irrigation_connected;
int irrigation_valve1;

//Define global variables for Others settings
bool others_haad;
String others_haa_topic;
bool debugOutput = false;

// Define global variables for HA topics
String ha_command_topic;
String ha_state_topic;
String ha_config_topic;

//login
String login_username = "admin";
String login_password;

// sketch settings
const PROGMEM uint32_t MQTT_RETRY_INTERVAL_MS = 15000; // 15 seconds
const PROGMEM uint32_t HEARTBEAT_SEND_INTERVAL_MS = 3600000; // 1 hour
