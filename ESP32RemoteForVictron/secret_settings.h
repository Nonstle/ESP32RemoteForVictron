
#define SECRET_SETTINGS_WIFI_SSID               "xxxxx"                     // Your Wi-Fi Station ID which is on the same network as your Victron Venus device
#define SECRET_SETTINGS_WIFI_PASSWORD           "yyyyy"                     // Your Wi-Fi Password

#define SECRET_SETTING_VICTRON_INSTALLATION_ID  "+"                         // your unique Victron Installation/Portal ID. If you don't know it you can use a "+" in this field - but it will be more efficient to use the actual ID.
#define SECRET_SETTING_VICTRON_MULTIPLUS_ID     "+"                         // your unique Victron Multiplus (vebus) three digit ID; if you don't know it you can use a "+" in this field but it will be more efficient to use the actual ID.
                                                                            // note: in either or both case above if you use a '+' you can look in the Serial Monitor output to see what the discovered IDs are, and then come back and change the setting(s) above


#define MQTTBroker                              "venus.local"              // may also be an IP address such as 192.168.1.195
#define MQTTUserID                              "Anonymous"                // if you have MQTT security setup, you can enter your MQQT User ID here, otherwise leave the set to  "Anonymous"
#define MQTTPassword                            "Anonymous"                // if you have MQTT security setup, you can enter your MQQT password here, otherwise leave the set to  "Anonymous"
#define MQTTClientName                          "ESP32RemoteForVictron"
#define MQTTPort                                1883

#define SECRET_SETTINGS_OTA_DEVICE_NAME         "ESP32RemoteForVictron"
#define SECRET_SETTINGS_OTA_PASSWORD            "ESP32RemoteForVictron"
#define SECRET_SETTINGS_OTA_Port                3332
