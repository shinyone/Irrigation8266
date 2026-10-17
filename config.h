//#define MY_LANGUAGE fr-FR // define your language

const String program_version = "0.0.3";
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
bool power_status1; // true for on
bool power_status2; // true for on

// Define global variables for network
const PROGMEM uint32_t WIFI_RETRY_INTERVAL_MS = 300000;
uint32_t wifi_timeout;
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
bool telegram_verbose = false;

// Define global variables for Irrigation
bool irrigation_connected;
int irrigation_valve1;
int irrigation_valve2;

//Define global variables for Others settings
bool others_haad;
String others_haa_topic;
bool userOutput = false;

// Define global variables for HA topics
String ha_command_topic1;
String ha_state_topic1;
String ha_config_topic1;
String ha_command_topic2;
String ha_state_topic2;
String ha_config_topic2;

//login
String login_username = "admin";
String login_password;

// sketch settings
const PROGMEM uint32_t MQTT_RETRY_INTERVAL_MS = 15000; // 15 seconds
const PROGMEM uint32_t HEARTBEAT_SEND_INTERVAL_MS = 3600000; // 1 hour
