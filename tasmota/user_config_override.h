/*
  user_config_override.h - user configuration overrides my_user_config.h for Tasmota

  Copyright (C) 2021  Theo Arends

  This program is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
#ifndef _USER_CONFIG_OVERRIDE_H_
#define _USER_CONFIG_OVERRIDE_H_

/*****************************************************************************************************\
 * USAGE:
 *   To modify the stock configuration without changing the my_user_config.h file:
 *   (1) copy this file to "user_config_override.h" (It will be ignored by Git)
 *   (2) define your own settings below
 *
 ******************************************************************************************************
 * ATTENTION:
 *   - Changes to SECTION1 PARAMETER defines will only override flash settings if you change define CFG_HOLDER.
 *   - Expect compiler warnings when no ifdef/undef/endif sequence is used.
 *   - You still need to update my_user_config.h for major define USE_MQTT_TLS.
 *   - All parameters can be persistent changed online using commands via MQTT, WebConsole or Serial.
\*****************************************************************************************************/





/*
Examples :

// -- Master parameter control --------------------
#undef  CFG_HOLDER
#define CFG_HOLDER        4617                   // [Reset 1] Change this value to load SECTION1 configuration parameters to flash

// -- Setup your own Wifi settings  ---------------
#undef  STA_SSID1
#define STA_SSID1         "YourSSID"             // [Ssid1] Wifi SSID

#undef  STA_PASS1
#define STA_PASS1         "YourWifiPassword"     // [Password1] Wifi password

// -- Setup your own MQTT settings  ---------------
#undef  MQTT_HOST
#define MQTT_HOST         "your-mqtt-server.com" // [MqttHost]

#undef  MQTT_PORT
#define MQTT_PORT         1883                   // [MqttPort] MQTT port (10123 on CloudMQTT)

#undef  MQTT_USER
#define MQTT_USER         "YourMqttUser"         // [MqttUser] Optional user

#undef  MQTT_PASS
#define MQTT_PASS         "YourMqttPass"         // [MqttPassword] Optional password

// You might even pass some parameters from the command line ----------------------------
// Ie:  export PLATFORMIO_BUILD_FLAGS='-DUSE_CONFIG_OVERRIDE -DMY_IP="192.168.1.99" -DMY_GW="192.168.1.1" -DMY_DNS="192.168.1.1"'

#ifdef MY_IP
#undef  WIFI_IP_ADDRESS
#define WIFI_IP_ADDRESS     MY_IP                // Set to 0.0.0.0 for using DHCP or enter a static IP address
#endif

#ifdef MY_GW
#undef  WIFI_GATEWAY
#define WIFI_GATEWAY        MY_GW                // if not using DHCP set Gateway IP address
#endif

#ifdef MY_DNS
#undef  WIFI_DNS
#define WIFI_DNS            MY_DNS               // If not using DHCP set DNS IP address (might be equal to WIFI_GATEWAY)
#endif

#ifdef MY_DNS2
#undef  WIFI_DNS2
#define WIFI_DNS2           MY_DNS2              // If not using DHCP set DNS IP address (might be equal to WIFI_GATEWAY)
#endif

// !!! Remember that your changes GOES AT THE BOTTOM OF THIS FILE right before the last #endif !!!
*/

// -- Master parameter control --------------------
#undef  CFG_HOLDER
#define CFG_HOLDER        4689                   // [Reset 1] Change this value to load SECTION1 configuration parameters to flash

// -- Setup your own Wifi settings  ---------------
#undef  STA_SSID1
#define STA_SSID1         "PrettyFly4WiFi"             // [Ssid1] Wifi SSID

#undef  STA_PASS1
#define STA_PASS1         "Fuckthat2121@!"     // [Password1] Wifi password

// -- Setup your own MQTT settings  ---------------
#undef  MQTT_HOST
#define MQTT_HOST         "192.168.1.106" // [MqttHost]

#undef  MQTT_PORT
#define MQTT_PORT         1883                   // [MqttPort] MQTT port (10123 on CloudMQTT)

#undef  MQTT_USER
#define MQTT_USER         "MQTT"         // [MqttUser] Optional user

#undef  MQTT_PASS
#define MQTT_PASS         "Fuckoff2121@!"         // [MqttPassword] Optional password

//#define TASMOTA32S3_ARDUINO_CORES3

  #ifdef TASMOTA32S3_ARDUINO_CORES3

    //\*** I@S ITEMS **///
    #define USE_I2S_AUDIO
    #define USE_I2S_SAY
    // #define USE_I2S_SAY_TIME
    #define USE_I2S_RTTTL
    // #define USE_I2S_WEBRADIO
    #define USE_I2S_MP3
    // #define USE_I2S_DEBUG       // remove before flight
    // #define USE_SHINE
    // #define USE_I2S_AUDIO_BERRY

    #define USE_UNIVERSAL_DISPLAY                   // New universal display driver for both I2C and SPI
    #define MAX_TOUCH_BUTTONS 16                 // Virtual touch buttons


    // #define USE_SPI      
    #define USE_BERRY_DEBUG                        // Compile Berry bytecode with line number information, makes exceptions easier to debug. Adds +8% of memory consumption for compiled code
      // #define UBE_BERRY_DEBUG_GC                   // Print low-level GC metrics
    #define USE_BERRY_INT64                        // Add 64 bits integer support (+1.7KB Flash)
    #define USE_WEBCLIENT_HTTPS                  // Enable HTTPS outgoing requests based on BearSSL (much ligher then mbedTLS, 42KB vs 150KB) in insecure mode (no verification of server's certificate)
                                                  

    // #define USE_BERRY_PARTITION_WIZARD           // Add a button to dynamically load the Partion Wizard from a bec file online (+1.3KB Flash)

    // #define USE_BERRY_ULP                          // Enable ULP (Ultra Low Power) support (+4.9k)
    // Berry crypto extensions below:
    // #define USE_BERRY_CRYPTO_AES_CCM               // enable AES CCM 128 bits
    // #define USE_BERRY_CRYPTO_AES_CTR               // enable AES CTR 256 bits
    // #define USE_BERRY_CRYPTO_EC_P256               // enable EC P256r1
    // #define USE_BERRY_CRYPTO_EC_C25519             // enable Elliptic Curve C C25519
    #define USE_BERRY_CRYPTO_PBKDF2_HMAC_SHA256    // PBKDF2 with HMAC SHA256, used in Matter protocol
    #define USE_BERRY_CRYPTO_HKDF_SHA256      // HKDF with HMAC SHA256, used in Matter protocol
    #define USE_BERRY_CRYPTO_SPAKE2P_MATTER   // SPAKE2+ used in Matter 1.0, complete name is SPAKE2+-P256-SHA256-HKDF-SHA256-HMAC-SHA256
    #define USE_BERRY_CRYPTO_RSA              // RSA primitives including JWT RS256 (3.9KB flash)


    #define USE_LVGL                                 // LVGL Engine, requires Berry (+382KB)
    #define USE_LVGL_HASPMOTA                      // Enable OpenHASP compatiblity and Robotocondensed fonts (+90KB flash)
    #define USE_LVGL_TOUCHSCREEN                   // Use virtual touch screen with Berry driver
    #define USE_LVGL_FREETYPE                      // Use the FreeType renderer to display fonts using native TTF files in file system (+77KB flash)
  #endif

  #ifdef TASMOTA32S3_CORES3

    //\*** I@S ITEMS **///
    #define USE_I2S_AUDIO
    #define USE_I2S_SAY
    // #define USE_I2S_SAY_TIME
    #define USE_I2S_RTTTL
    // #define USE_I2S_WEBRADIO
    #define USE_I2S_MP3
    // #define USE_I2S_DEBUG       // remove before flight
    // #define USE_SHINE
    // #define USE_I2S_AUDIO_BERRY

    #define USE_UNIVERSAL_DISPLAY                   // New universal display driver for both I2C and SPI
    #define MAX_TOUCH_BUTTONS 16                 // Virtual touch buttons


    // #define USE_SPI      
    #define USE_BERRY_DEBUG                        // Compile Berry bytecode with line number information, makes exceptions easier to debug. Adds +8% of memory consumption for compiled code
      // #define UBE_BERRY_DEBUG_GC                   // Print low-level GC metrics
    #define USE_BERRY_INT64                        // Add 64 bits integer support (+1.7KB Flash)
    #define USE_WEBCLIENT_HTTPS                  // Enable HTTPS outgoing requests based on BearSSL (much ligher then mbedTLS, 42KB vs 150KB) in insecure mode (no verification of server's certificate)
                                                  

    // #define USE_BERRY_PARTITION_WIZARD           // Add a button to dynamically load the Partion Wizard from a bec file online (+1.3KB Flash)

    // #define USE_BERRY_ULP                          // Enable ULP (Ultra Low Power) support (+4.9k)
    // Berry crypto extensions below:
    // #define USE_BERRY_CRYPTO_AES_CCM               // enable AES CCM 128 bits
    // #define USE_BERRY_CRYPTO_AES_CTR               // enable AES CTR 256 bits
    // #define USE_BERRY_CRYPTO_EC_P256               // enable EC P256r1
    // #define USE_BERRY_CRYPTO_EC_C25519             // enable Elliptic Curve C C25519
    #define USE_BERRY_CRYPTO_PBKDF2_HMAC_SHA256    // PBKDF2 with HMAC SHA256, used in Matter protocol
    #define USE_BERRY_CRYPTO_HKDF_SHA256      // HKDF with HMAC SHA256, used in Matter protocol
    #define USE_BERRY_CRYPTO_SPAKE2P_MATTER   // SPAKE2+ used in Matter 1.0, complete name is SPAKE2+-P256-SHA256-HKDF-SHA256-HMAC-SHA256
    #define USE_BERRY_CRYPTO_RSA              // RSA primitives including JWT RS256 (3.9KB flash)


    #define USE_LVGL                                 // LVGL Engine, requires Berry (+382KB)
    #define USE_LVGL_HASPMOTA                      // Enable OpenHASP compatiblity and Robotocondensed fonts (+90KB flash)
    #define USE_LVGL_TOUCHSCREEN                   // Use virtual touch screen with Berry driver
    #define USE_LVGL_FREETYPE                      // Use the FreeType renderer to display fonts using native TTF files in file system (+77KB flash)
  #endif

  #ifdef TASMOTA32_CORE2_CUSTOM
    #define USE_GPIO_VIEWER
    #define ESP32S3_BOX
    #ifdef BERRY_AUDIO
      #define USE_I2S_AUDIO_BERRY
    // #elif defined(USE_I2S_AUDIO)

    // //\*** I@S ITEMS **///
    //   // #define USE_I2S_AUDIO
    //   #define USE_I2S_SAY
    //   #define USE_I2S_SAY_TIME
    //   #define USE_I2S_RTTTL
    //   #define USE_I2S_WEBRADIO
    //   #define USE_I2S_MP3
    //   #define USE_I2S_DEBUG       // remove before flight
    //   #define USE_SHINE
    //   // #define USE_I2S_AUDIO_BERRY
    #else
      #ifdef ESP32S3_BOX
      #define USE_I2S_DEBUG
      #endif
    #endif
    // #define USE_SPI      
    #define USE_BERRY_DEBUG                        // Compile Berry bytecode with line number information, makes exceptions easier to debug. Adds +8% of memory consumption for compiled code
      #define UBE_BERRY_DEBUG_GC                   // Print low-level GC metrics
    #define USE_BERRY_INT64                        // Add 64 bits integer support (+1.7KB Flash)
    #define USE_WEBCLIENT_HTTPS                  // Enable HTTPS outgoing requests based on BearSSL (much ligher then mbedTLS, 42KB vs 150KB) in insecure mode (no verification of server's certificate)
    #define USE_BERRY_PSRAM                                                  
    #define  USE_ESP32_SENSORS
    #define  USE_UFILESYS
    #define  GUI_TRASH_FILE
    #define  GUI_EDIT_FILE
    #define  USE_PING
    #define  USE_AUTOCONF
    #define  USE_BERRY
    // #define USE_BERRY_PARTITION_WIZARD           // Add a button to dynamically load the Partion Wizard from a bec file online (+1.3KB Flash)

    #define USE_BERRY_ULP                          // Enable ULP (Ultra Low Power) support (+4.9k)
    #define USE_SENDMAIL                             // USE_ESP32MAIL is replaced by USE_SENDMAIL
    // #define USE_I2S
    #define USE_SPI
    #define USE_LVGL
    // #define USE_LVGL_HASPMOTA
    #define USE_LVGL_TOUCHSCREEN                   // Use virtual touch screen with Berry driver
    #define USE_LVGL_FREETYPE
      #undef SET_ESP32_STACK_SIZE
      #define SET_ESP32_STACK_SIZE (24 * 1024)
    #define USE_LVGL_PNG_DECODER
    #define USE_DISPLAY
    #define SHOW_SPLASH
    #define USE_XPT2046
    #define USE_FT5206
    #define USE_GT911
    #define USE_CST816S
    #define USE_MPU_ACCEL
    #define USE_RTC_CHIPS                            // Enable RTC chip support and NTP server - Select only one
      #define USE_BM8563
    #define USE_MLX90614
    #define USE_UNIVERSAL_DISPLAY
    #define USE_DISPLAY_LVGL_ONLY
    #define MAX_TOUCH_BUTTONS 16                 // Virtual touch buttons

    #define USE_MATTER_DEVICE
    #undef USE_DOMOTICZ
    #undef USE_HOME_ASSISTANT
    #define USE_TASMOTA_DISCOVERY                    // Enable Tasmota Discovery support (+2k code)

    #define USE_WEBCLIENT_HTTPS

    #undef USE_DISPLAY_LCD
    #undef USE_DISPLAY_SSD1306
    #undef USE_DISPLAY_MATRIX
    #undef USE_DISPLAY_SEVENSEG

    #define USE_ENHANCED_GUI_WIFI_SCAN

    #define USE_SDCARD

    #define ROTARY_V1                                // Add support for Rotary Encoder as used in MI Desk Lamp

    #define USE_TUYA_MCU                             // Add support for Tuya Serial MCU
    #ifndef TUYA_DIMMER_ID
      #define TUYA_DIMMER_ID       0                 // Default dimmer Id
    #endif
    #undef USE_ARMTRONIX_DIMMERS                    // Disable support for Armtronix Dimmers (+1k4 code)
    //#undef USE_PS_16_DZ                             // Disable support for PS-16-DZ Dimmer (+2k code)
    #undef USE_SONOFF_IFAN                          // Disable support for Sonoff iFan02 and iFan03 (+2k code)
    #define USE_BUZZER                               // Add support for a buzzer (+0k6 code)
    //#undef USE_ARILUX_RF                            // Disable support for Arilux RF remote controller (+0k8 code, 252 iram (non 2.3.0))
    //#define USE_DEEPSLEEP                            // Add support for deepsleep (+1k code)
    #undef USE_EXS_DIMMER                           // Disable support for EX-Store WiFi Dimmer
    //#define USE_HOTPLUG                              // Add support for sensor HotPlug
    //#undef USE_DEVICE_GROUPS                        // Disable support for device groups (+5k6 code)
    #undef USE_PWM_DIMMER                           // Disable support for MJ-SD01/acenx/NTONPOWER PWM dimmers (+4k5 code)
    #undef USE_KEELOQ                               // Disable support for Jarolift rollers by Keeloq algorithm (+4k5 code)
    #undef USE_SONOFF_D1                            // Disable support for Sonoff D1 Dimmer (+0k7 code)
    #undef USE_SHELLY_DIMMER                        // Disable support for Shelly Dimmer (+3k code)

    #define USE_LIGHT_PALETTE                        // Add support for color palette (+0k9 code)
    #undef USE_EMULATION_WEMO
    //#undef USE_EMULATION_HUE

    #define USE_WS2812

    #define USE_DS18x20                              // Add support for DS18x20 sensors with id sort, single scan and read retry (+1k3 code)

    #define USE_ENERGY_SENSOR                      // Add energy to support Shelly Pro 4PM display (+38k code)
    #define USE_SHELLY_PRO

    #define USE_I2C                                  // I2C using library wire (+10k code, 0k2 mem, 124 iram)
    #undef USE_MLX90614

    #define USE_SHT                                // [I2cDriver8] Enable SHT1X sensor (+1k4 code)
    #define USE_HTU                                // [I2cDriver9] Enable HTU21/SI7013/SI7020/SI7021 sensor (I2C address 0x40) (+1k5 code)
    #define USE_BMP                                // [I2cDriver10] Enable BMP085/BMP180/BMP280/BME280 sensors (I2C addresses 0x76 and 0x77) (+4k4 code)
    //  #define USE_BME68X                           // Enable support for BME680/BME688 sensor using Bosch BME68x library (+6k9 code)
    //#define USE_BH1750                             // [I2cDriver11] Enable BH1750 sensor (I2C address 0x23 or 0x5C) (+0k5 code)
    //#define USE_VEML6070                           // [I2cDriver12] Enable VEML6070 sensor (I2C addresses 0x38 and 0x39) (+1k5 code)
    //#define USE_VEML6075                           // [I2cDriver49] Enable VEML6075 UVA/UVB/UVINDEX Sensor (I2C address 0x10) (+2k1 code)
    //#define USE_VEML7700                           // [I2cDriver50] Enable VEML7700 Ambient Light sensor (I2C addresses 0x10) (+4k5 code)
    //#define USE_ADS1115                            // [I2cDriver13] Enable ADS1115 16 bit A/D converter (I2C address 0x48, 0x49, 0x4A or 0x4B) based on Adafruit ADS1x15 library (no library needed) (+0k7 code)
    //#define USE_INA219                             // [I2cDriver14] Enable INA219 (I2C address 0x40, 0x41 0x44 or 0x45) Low voltage and current sensor (+1k code)
    //#define USE_INA226                             // [I2cDriver35] Enable INA226 (I2C address 0x40, 0x41 0x44 or 0x45) Low voltage and current sensor (+2k3 code)
    //#define USE_SHT3X                              // [I2cDriver15] Enable SHT3x (I2C address 0x44 or 0x45) or SHTC3 (I2C address 0x70) sensor (+0k7 code)
    //#define USE_TSL2561                            // [I2cDriver16] Enable TSL2561 sensor (I2C address 0x29, 0x39 or 0x49) using library Joba_Tsl2561 (+2k3 code)
    //#define USE_TSL2591                            // [I2cDriver40] Enable TSL2591 sensor (I2C address 0x29) using library Adafruit_TSL2591 (+1k6 code)
    //#define USE_MGS                                // [I2cDriver17] Enable Xadow and Grove Mutichannel Gas sensor using library Multichannel_Gas_Sensor (+10k code)
    //#define USE_SGP30                              // [I2cDriver18] Enable SGP30 sensor (I2C address 0x58) (+1k1 code)
    //#define USE_SGP40                              // [I2cDriver69] Enable SGP40 sensor (I2C address 0x59) (+1k4 code)
    //#define USE_SGP4X                              // [I2cDriver82] Enable SGP41 sensor (I2C address 0x59) (+7k2 code)
    //#define USE_SEN5X                              // [I2cDriver76] Enable SEN5X sensor (I2C address 0x69) (+3k code)
    //#define USE_SI1145                             // [I2cDriver19] Enable SI1145/46/47 sensor (I2C address 0x60) (+1k code)
    //#define USE_LM75AD                             // [I2cDriver20] Enable LM75AD sensor (I2C addresses 0x48 - 0x4F) (+0k5 code)
    //#define USE_APDS9960                           // [I2cDriver21] Enable APDS9960 Proximity Sensor (I2C address 0x39). Disables SHT and VEML6070 (+4k7 code)
    //#define USE_MCP230xx                           // [I2cDriver22] Enable MCP23008/MCP23017 - Must define I2C Address in #define USE_MCP230xx_ADDR below - range 0x20 - 0x27 (+4k7 code)
    // #define USE_MCP23XXX_DRV                       // [I2cDriver77] Enable MCP23xxx support as virtual switch/button/relay (+3k(I2C)/+5k(SPI) code)
    //#define USE_PCA9685                            // [I2cDriver1] Enable PCA9685 I2C HW PWM Driver - Must define I2C Address in #define USE_PCA9685_ADDR below - range 0x40 - 0x47 (+1k4 code)
    //#define USE_PCA9685_V2                         // [I2cDriver1] Enable PCA9685 I2C HW PWM Driver - Must define I2C Address in #define USE_PCA9685_ADDR below - range 0x40 - 0x47 (+3k4 code)
    //#define USE_MPR121                             // [I2cDriver23] Enable MPR121 controller (I2C addresses 0x5A, 0x5B, 0x5C and 0x5D) in input mode for touch buttons (+1k3 code)
    //#define USE_CCS811                             // [I2cDriver24] Enable CCS811 sensor (I2C address 0x5A) (+2k2 code)
    //#define USE_CCS811_V2                          // [I2cDriver24] Enable CCS811 sensor (I2C addresses 0x5A and 0x5B) (+2k8 code)
    //#define USE_ENS16x                             // [I2cDriver85] Enable ENS160 and ENS161 sensor (I2C addresses 0x52 and 0x53) (+3k1 of code and 524 of RAM)
    //#define USE_ENS210                             // [I2cDriver86] Enable ENS210 sensor (I2C addresses 0x43 and 0x44) (+4k0 of code and 944 of RAM)
    //#define USE_MPU6050                            // [I2cDriver25] Enable MPU6050 sensor (I2C address 0x68 AD0 low or 0x69 AD0 high) (+3K3 of code and 188 Bytes of RAM)
    //#define USE_MGC3130                            // [I2cDriver27] Enable MGC3130 Electric Field Effect Sensor (I2C address 0x42) (+2k7 code, 0k3 mem)
    //#define USE_MAX44009                           // [I2cDriver28] Enable MAX44009 Ambient Light sensor (I2C addresses 0x4A and 0x4B) (+0k8 code)
    //#define USE_SCD30                              // [I2cDriver29] Enable Sensiron SCd30 CO2 sensor (I2C address 0x61) (+3k3 code)
    //#define USE_SCD40                              // [I2cDriver62] Enable Sensiron SCd40 CO2 sensor (I2C address 0x62) (+3k3 code)
    //#define USE_SPS30                              // [I2cDriver30] Enable Sensiron SPS30 particle sensor (I2C address 0x69) (+1.7 code)
    // #define USE_ADE7953                            // [I2cDriver7] Enable ADE7953 Energy monitor as used on Shelly 2.5 (I2C address 0x38) (+1k5)
    //#define USE_VL53L0X                            // [I2cDriver31] Enable VL53L0x time of flight sensor (I2C address 0x29) (+4k code)
    //#define USE_VL53L1X                            // [I2cDriver54] Enable VL53L1X time of flight sensor (I2C address 0x29) using Pololu VL53L1X library (+2k9 code)
    //#define USE_TOF10120                           // [I2cDriver57] Enable TOF10120 time of flight sensor (I2C address 0x52) (+0k6 code)
    //#define USE_MLX90614                           // [I2cDriver32] Enable MLX90614 ir temp sensor (I2C address 0x5a) (+0.6k code)
    //#define USE_CHIRP                              // [I2cDriver33] Enable CHIRP soil moisture sensor (variable I2C address, default 0x20)
    //#define USE_PAJ7620                            // [I2cDriver34] Enable PAJ7620 gesture sensor (I2C address 0x73) (+2.5k code)
    //#define USE_PCF8574                            // [I2cDriver2] Enable PCF8574 I/O Expander (I2C addresses 0x20 - 0x26 and 0x39 - 0x3F) (+2k1 code)
    //  #define USE_PCF8574_MODE2                    // Enable Mode2 virtual relays/buttons/switches (+2k3 code)
    //  #define USE_PCF8574_SENSOR                   // Enable Mode1 inputs and outputs in SENSOR message (+0k2 code)
    //  #define USE_PCF8574_DISPLAYINPUT             // Enable Mode1 inputs display in Web page (+0k2 code)
    //  #define USE_PCF8574_MQTTINPUT                // Enable Mode1 MQTT message & rule process on input change detection : stat/%topic%/PCF8574_INP = {"Time":"2021-03-07T16:19:23+01:00","PCF8574-1_INP":{"D1":1}} (+0k5 code)
    //#define USE_HIH6                               // [I2cDriver36] Enable Honeywell HIH Humidity and Temperature sensor (I2C address 0x27) (+0k6)
    //#define USE_DHT12                              // [I2cDriver41] Enable DHT12 humidity and temperature sensor (I2C address 0x5C) (+0k7 code)
    //#define USE_DS1624                             // [I2cDriver42] Enable DS1624, DS1621 temperature sensor (I2C addresses 0x48 - 0x4F) (+1k2 code)
    //#define USE_AHT1x                              // [I2cDriver43] Enable AHT10/15 humidity and temperature sensor (I2C address 0x38, 0x39) (+0k8 code)
    //#define USE_AHT2x                              // [I2cDriver43] Enable AHT20 instead of AHT1x humidity and temperature sensor (I2C address 0x38) (+0k8 code)
    //#define USE_WEMOS_MOTOR_V1                     // [I2cDriver44] Enable Wemos motor driver V1 (I2C addresses 0x2D - 0x30) (+0k7 code)
      #define WEMOS_MOTOR_V1_ADDR  0x30              // Default I2C address 0x30
      #define WEMOS_MOTOR_V1_FREQ  1000              // Default frequency
    //#define USE_HDC1080                            // [I2cDriver45] Enable HDC1080 temperature/humidity sensor (I2C address 0x40) (+1k5 code)
    //#define USE_IAQ                                // [I2cDriver46] Enable iAQ-core air quality sensor (I2C address 0x5a) (+0k6 code)
    //#define USE_AS3935                             // [I2cDriver48] Enable AS3935 Franklin Lightning Sensor (I2C address 0x03) (+5k4 code)
    //#define USE_MCP9808                            // [I2cDriver51] Enable MCP9808 temperature sensor (I2C addresses 0x18 - 0x1F) (+0k9 code)
    //#define USE_HP303B                             // [I2cDriver52] Enable HP303B temperature and pressure sensor (I2C address 0x76 or 0x77) (+6k2 code)
    //#define USE_MLX90640                           // [I2cDriver53] Enable MLX90640 IR array temperature sensor (I2C address 0x33) (+20k code)
    //#define USE_EZOPH                              // [I2cDriver55] Enable support for EZO's pH sensor (+0k3 code) - Shared EZO code required for any EZO device (+1k2 code)
    //#define USE_EZOORP                             // [I2cDriver55] Enable support for EZO's ORP sensor (+0k3 code) - Shared EZO code required for any EZO device (+1k2 code)
    //#define USE_EZORTD                             // [I2cDriver55] Enable support for EZO's RTD sensor (+0k2 code) - Shared EZO code required for any EZO device (+1k2 code)
    //#define USE_EZOHUM                             // [I2cDriver55] Enable support for EZO's HUM sensor (+0k3 code) - Shared EZO code required for any EZO device (+1k2 code)
    //#define USE_EZOEC                              // [I2cDriver55] Enable support for EZO's EC sensor (+0k3 code) - Shared EZO code required for any EZO device (+1k2 code)
    //#define USE_EZOCO2                             // [I2cDriver55] Enable support for EZO's CO2 sensor (+0k2 code) - Shared EZO code required for any EZO device (+1k2 code)
    //#define USE_EZOO2                              // [I2cDriver55] Enable support for EZO's O2 sensor (+0k3 code) - Shared EZO code required for any EZO device (+1k2 code)
    //#define USE_EZOPRS                             // [I2cDriver55] Enable support for EZO's PRS sensor (+0k7 code) - Shared EZO code required for any EZO device (+1k2 code)
    //#define USE_EZOFLO                             // [I2cDriver55] Enable support for EZO's FLO sensor (+0k4 code) - Shared EZO code required for any EZO device (+1k2 code)
    //#define USE_EZODO                              // [I2cDriver55] Enable support for EZO's DO sensor (+0k3 code) - Shared EZO code required for any EZO device (+1k2 code)
    //#define USE_EZORGB                             // [I2cDriver55] Enable support for EZO's RGB sensor (+0k5 code) - Shared EZO code required for any EZO device (+1k2 code)
    //#define USE_EZOPMP                             // [I2cDriver55] Enable support for EZO's PMP sensor (+0k3 code) - Shared EZO code required for any EZO device (+1k2 code)
    //#define USE_SEESAW_SOIL                        // [I2cDriver56] Enable Capacitice Soil Moisture & Temperature Sensor (I2C addresses 0x36 - 0x39) (+1k3 code)
    //#define USE_MPU_ACCEL                          // [I2cDriver58] Enable MPU6886/MPU9250 - found in M5Stack - support both I2C buses on ESP32 (I2C address 0x68) (+2k code)
    //#define USE_AM2320                             // [I2cDriver60] Enable AM2320 temperature and humidity Sensor (I2C address 0x5C) (+1k code)
    //#define USE_T67XX                              // [I2cDriver61] Enable Telaire T67XX CO2 sensor (I2C address 0x15) (+1k3 code)
    //#define USE_DS3502                             // [I2CDriver67] Enable DS3502 digital potentiometer (I2C address 0x28 - 0x2B) (+0k4 code)
    //#define USE_HYT                                // [I2CDriver68] Enable HYTxxx temperature and humidity sensor (I2C address 0x28) (+0k5 code)
    //#define USE_LUXV30B                            // [I2CDriver70] Enable RFRobot SEN0390 LuxV30b ambient light sensor (I2C address 0x4A) (+0k5 code)
    //#define USE_PMSA003I                           // [I2cDriver78] Enable PMSA003I Air Quality Sensor (I2C address 0x12) (+1k8 code)
    //#define USE_GDK101                             // [I2cDriver79] Enable GDK101 sensor (I2C addresses 0x18 - 0x1B) (+1k2 code)

    //#define USE_RTC_CHIPS                          // Enable RTC chip support and NTP server - Select only one
    //  #define USE_DS3231                           // [I2cDriver26] Enable DS3231 RTC (I2C address 0x68) (+1k2 code)
    //  #define USE_BM8563                           // [I2cDriver59] Enable BM8563 RTC - found in M5Stack - support both I2C buses on ESP32 (I2C address 0x51) (+2.5k code)
    //  #define USE_PCF85363                         // [I2cDriver66] Enable PCF85363 RTC - found Shelly 3EM (I2C address 0x51) (+0k7 code)

    //#define USE_MHZ19                                // Add support for MH-Z19 CO2 sensor (+2k code)
    //#define USE_SENSEAIR                             // Add support for SenseAir K30, K70 and S8 CO2 sensor (+2k3 code)
    //#define USE_CM110x                               // Add support for CM110x CO2 sensors (+2k7 code)
    #ifndef CO2_LOW
      #define CO2_LOW              800               // Below this CO2 value show green light (needs PWM or WS2812 RG(B) led and enable with SetOption18 1)
    #endif
    #ifndef CO2_HIGH
      #define CO2_HIGH             1200              // Above this CO2 value show red light (needs PWM or WS2812 RG(B) led and enable with SetOption18 1)
    #endif
    //#define USE_PMS5003                              // Add support for PMS5003 and PMS7003 particle concentration sensor (+1k3 code)
      //#define PMS_MODEL_PMS3003                      // Enable support of PMS3003 instead of PMS5003/PMS7003 (needs the USE_PMS5003 above)
      //#define PMS_MODEL_PMS5003T                     // Enable support for PMSx003T models that report temperature and humidity (needs the USE_PMS5003 above)
    //#define USE_NOVA_SDS                             // Add support for SDS011 and SDS021 particle concentration sensor (+0k7 code)
    //#define USE_HPMA                                 // Add support for Honeywell HPMA115S0 particle concentration sensor
    //#define USE_SR04                                 // Add support for HC-SR04 ultrasonic devices (+1k code)
    //#define USE_ME007                                // Add support for ME007 ultrasonic devices (+1k5 code)
    //#define USE_DYP                                  // Add support for DYP ME-007 ultrasonic distance sensor, serial port version (+0k5 code)
    #define USE_SERIAL_BRIDGE                        // Add support for software Serial Bridge (+2k code)
    #define USE_MODBUS_BRIDGE                        // Add support for software Modbus Bridge (+3k code)
    // #define USE_MP3_PLAYER                           // Use of the DFPlayer Mini MP3 Player RB-DFR-562 commands: play, volume and stop
    //#define USE_AZ7798                               // Add support for AZ-Instrument 7798 CO2 datalogger
    //#define USE_PN532_HSU                            // Add support for PN532 using HSU (Serial) interface (+1k8 code, 140 bytes mem)
    //#define USE_ZIGBEE                               // Enable serial communication with Zigbee CC2530 flashed with ZNP
    //#define USE_RDM6300                              // Add support for RDM6300 125kHz RFID Reader (+0k8)

    #define USE_IR_REMOTE

    #define USE_ETHERNET    
  #endif

    #ifdef FIRMWARE_ATOMS3
// #define USE_I2S_AUDIO_BERRY
      // #define ESP32S3_BOX
      // #define USE_BERRY_PARTITION_WIZARD           // Add a button to dynamically load the Partion Wizard from a bec file online (+1.3KB Flash)
      #undef USE_GPIO_VIEWER 
      #define USE_I2S_AUDIO
      #define USE_I2S_BRIDGE
      #define USE_I2S_SAY
      #define USE_I2S_SAY_TIME
      #define USE_I2S_RTTTL
      #define USE_I2S_WEBRADIO
      #define USE_I2S_MP3
      #define USE_I2S_DEBUG
      #define USE_SPI                                  // Hardware SPI using GPIO12(MISO), GPIO13(MOSI) and GPIO14(CLK) in addition to two user selectable GPIOs(CS and DC)

        #ifdef USE_SPI
        //  #define USE_NRF24                              // Add SPI support for NRF24L01(+) (+2k6 code)
            #define USE_MIBLE                            // BLE-bridge for some Mijia-BLE-sensors (+4k7 code)
         #define USE_DISPLAY                            // Add SPI Display support for 320x240 and 480x320 TFT

        //    #define USE_DISPLAY_EPAPER_29                // [DisplayModel 5] Enable e-paper 2.9 inch display (+19k code)
        //    #define USE_DISPLAY_EPAPER_42                // [DisplayModel 6] Enable e-paper 4.2 inch display

        //    #define USE_DISPLAY_RA8876                   // [DisplayModel 10] [I2cDriver39] (Touch)
        //    #define USE_DISPLAY_ST7789                   // [DisplayModel 12] Enable ST7789 module

        //  #define USE_RC522                              // Add support for MFRC522 13.56Mhz Rfid reader (+6k code)
        //    #define USE_RC522_DATA_FUNCTION              // Add support for reading data block content (+0k4 code)
        //    #define USE_RC522_TYPE_INFORMATION           // Add support for showing card type (+0k4 code)
        //  #define USE_MCP2515                            // Add support for can bus using MCP2515 (+7k code)
        //  #define USE_CANSNIFFER                         // Add support for can bus sniffer using MCP2515 (+5k code)
        //  #define USE_SPI_LORA                           // Add support for LoRaSend and LoRaCommand (+4k code)
        //    #define USE_LORA_SX126X                      // Add driver support for LoRa on SX126x based devices like LiliGo T3S3 Lora32 (+16k code)
        //    #define USE_LORA_SX127X                      // Add driver support for LoRa on SX127x based devices like M5Stack LoRa868, RFM95W (+5k code)
        //    #define USE_LORAWAN_BRIDGE                   // Add support for LoRaWan bridge (+8k code)

        #endif  // USE_SPI
      #undef MODULE
      #define MODULE                 WEMOS             // [Module] Select default module from tasmota_template.h
      #undef FALLBACK_MODULE
      #define FALLBACK_MODULE        WEMOS             // [Module2] Select default module on fast reboot where USER_MODULE is user template

      #define USE_MATTER_DEVICE
      // #undef USE_DOMOTICZ
      // #undef USE_HOME_ASSISTANT
      // #define USE_TASMOTA_DISCOVERY                    // Enable Tasmota Discovery support (+2k code)
      // #define USE_MODBUS_BRIDGE                        // Add support for software Modbus Bridge (+4.5k code)
      // #define USE_MODBUS_BRIDGE_TCP                    // Add support for software Modbus TCP Bridge (also enable Modbus TCP Bridge) (+2k code)
      // #define MODBUS_BRIDGE_TCP_DEFAULT_PORT 502       // Add support for software Modbus TCP Bridge (start the TCP bridge automatically at PORT 502)
      // #define USE_TCP_BRIDGE                           //  Add support for Serial to TCP bridge (+1.3k code)
      // #define USE_MP3_PLAYER                           // Use of the DFPlayer Mini MP3 Player RB-DFR-562 commands: play, pause, stop, track, volume and reset
      #define USE_WEBCLIENT_HTTPS

      #define USE_I2S
      #define USE_SPI
      #define USE_LVGL
        #undef SET_ESP32_STACK_SIZE
        #define SET_ESP32_STACK_SIZE (24 * 1024)
      #define USE_DISPLAY
      #define USE_MPU_ACCEL
      #define USE_RTC_CHIPS                            // Enable RTC chip support and NTP server - Select only one
        #define USE_BM8563
      // #define USE_MLX90614
      #define USE_UNIVERSAL_DISPLAY
      #define USE_UNIVERSAL_TOUCH
      #define USE_XPT2046
      #define USE_FT5206
      #define USE_GT911
      #define USE_CST816S
      #define USE_DISPLAY_LVGL_ONLY

      //#undef USE_DISPLAY_MODES1TO5
      #undef USE_DISPLAY_LCD
      #undef USE_DISPLAY_MATRIX
      #undef USE_DISPLAY_SEVENSEG



      #define USE_INFLUXDB                             // Enable influxdb support (+5k code)

      #define USE_ENHANCED_GUI_WIFI_SCAN

      #define USE_SDCARD

      #define ROTARY_V1                                // Add support for Rotary Encoder as used in MI Desk Lamp

      #define USE_TUYA_MCU                             // Add support for Tuya Serial MCU
      #ifndef TUYA_DIMMER_ID
        #define TUYA_DIMMER_ID       0                 // Default dimmer Id
      #endif
      
      #undef USE_ARMTRONIX_DIMMERS                    // Disable support for Armtronix Dimmers (+1k4 code)
      //#undef USE_PS_16_DZ                             // Disable support for PS-16-DZ Dimmer (+2k code)
      #undef USE_SONOFF_IFAN                          // Disable support for Sonoff iFan02 and iFan03 (+2k code)
      #define USE_BUZZER                               // Add support for a buzzer (+0k6 code)
      //#undef USE_ARILUX_RF                            // Disable support for Arilux RF remote controller (+0k8 code, 252 iram (non 2.3.0))
      #define USE_DEEPSLEEP                            // Add support for deepsleep (+1k code)
      #undef USE_EXS_DIMMER                           // Disable support for EX-Store WiFi Dimmer
      //#define USE_HOTPLUG                              // Add support for sensor HotPlug
      //#undef USE_DEVICE_GROUPS                        // Disable support for device groups (+5k6 code)
      //#undef USE_PWM_DIMMER                           // Disable support for MJ-SD01/acenx/NTONPOWER PWM dimmers (+4k5 code)
      #undef USE_KEELOQ                               // Disable support for Jarolift rollers by Keeloq algorithm (+4k5 code)
      #undef USE_SONOFF_D1                            // Disable support for Sonoff D1 Dimmer (+0k7 code)
      #undef USE_SHELLY_DIMMER                        // Disable support for Shelly Dimmer (+3k code)

      #define USE_LIGHT_PALETTE                        // Add support for color palette (+0k9 code)
      #define USE_LIGHT_ARTNET                         // Add support for DMX/ArtNet via UDP on port 6454 (+3.5k code)


      #define USE_DS18x20                              // Add support for DS18x20 sensors with id sort, single scan and read retry (+1k3 code)

      #define USE_I2C                                  // I2C using library wire (+10k code, 0k2 mem, 124 iram)
      // #define USE_SHT                                // [I2cDriver8] Enable SHT1X sensor (+1k4 code)
      // #define USE_HTU                                // [I2cDriver9] Enable HTU21/SI7013/SI7020/SI7021 sensor (I2C address 0x40) (+1k5 code)
      // #define USE_BMP                                // [I2cDriver10] Enable BMP085/BMP180/BMP280/BME280 sensors (I2C addresses 0x76 and 0x77) (+4k4 code)
      //   #define USE_BME68X                           // Enable support for BME680/BME688 sensor using Bosch BME68x library (+6k9 code)
      // #define USE_BH1750                             // [I2cDriver11] Enable BH1750 sensor (I2C address 0x23 or 0x5C) (+0k5 code)
      // #define USE_VEML6070                           // [I2cDriver12] Enable VEML6070 sensor (I2C addresses 0x38 and 0x39) (+1k5 code)
      //#define USE_VEML6075                           // [I2cDriver49] Enable VEML6075 UVA/UVB/UVINDEX Sensor (I2C address 0x10) (+2k1 code)
      //#define USE_VEML7700                           // [I2cDriver50] Enable VEML7700 Ambient Light sensor (I2C addresses 0x10) (+4k5 code)
      // #define USE_ADS1115                            // [I2cDriver13] Enable ADS1115 16 bit A/D converter (I2C address 0x48, 0x49, 0x4A or 0x4B) based on Adafruit ADS1x15 library (no library needed) (+0k7 code)
      // #define USE_INA219                             // [I2cDriver14] Enable INA219 (I2C address 0x40, 0x41 0x44 or 0x45) Low voltage and current sensor (+1k code)
      //#define USE_INA226                             // [I2cDriver35] Enable INA226 (I2C address 0x40, 0x41 0x44 or 0x45) Low voltage and current sensor (+2k3 code)
      // #define USE_SHT3X                              // [I2cDriver15] Enable SHT3x (I2C address 0x44 or 0x45) or SHTC3 (I2C address 0x70) sensor (+0k7 code)
      //#define USE_TSL2561                            // [I2cDriver16] Enable TSL2561 sensor (I2C address 0x29, 0x39 or 0x49) using library Joba_Tsl2561 (+2k3 code)
      //#define USE_TSL2591                            // [I2cDriver40] Enable TSL2591 sensor (I2C address 0x29) using library Adafruit_TSL2591 (+1k6 code)
      // #define USE_MGS                                // [I2cDriver17] Enable Xadow and Grove Mutichannel Gas sensor using library Multichannel_Gas_Sensor (+10k code)
      // #define USE_SGP30                              // [I2cDriver18] Enable SGP30 sensor (I2C address 0x58) (+1k1 code)
      // #define USE_SGP40                              // [I2cDriver69] Enable SGP40 sensor (I2C address 0x59) (+1k4 code)
      // #define USE_SGP4X                              // [I2cDriver82] Enable SGP41 sensor (I2C address 0x59) (+7k2 code)
      // #define USE_SEN5X                              // [I2cDriver76] Enable SEN5X sensor (I2C address 0x69) (+3k code)
      //#define USE_SI1145                             // [I2cDriver19] Enable SI1145/46/47 sensor (I2C address 0x60) (+1k code)
      // #define USE_LM75AD                             // [I2cDriver20] Enable LM75AD sensor (I2C addresses 0x48 - 0x4F) (+0k5 code)
      //#define USE_APDS9960                           // [I2cDriver21] Enable APDS9960 Proximity Sensor (I2C address 0x39). Disables SHT and VEML6070 (+4k7 code)
      //#define USE_MCP230xx                           // [I2cDriver22] Enable MCP23008/MCP23017 - Must define I2C Address in #define USE_MCP230xx_ADDR below - range 0x20 - 0x27 (+4k7 code)
      // #define USE_MCP23XXX_DRV                       // [I2cDriver77] Enable MCP23xxx support as virtual switch/button/relay (+3k(I2C)/+5k(SPI) code)
      //#define USE_PCA9685                            // [I2cDriver1] Enable PCA9685 I2C HW PWM Driver - Must define I2C Address in #define USE_PCA9685_ADDR below - range 0x40 - 0x47 (+1k4 code)
      //#define USE_PCA9685_V2                         // [I2cDriver1] Enable PCA9685 I2C HW PWM Driver - Must define I2C Address in #define USE_PCA9685_ADDR below - range 0x40 - 0x47 (+3k4 code)
      //#define USE_MPR121                             // [I2cDriver23] Enable MPR121 controller (I2C addresses 0x5A, 0x5B, 0x5C and 0x5D) in input mode for touch buttons (+1k3 code)
      //#define USE_CCS811                             // [I2cDriver24] Enable CCS811 sensor (I2C address 0x5A) (+2k2 code)
      // #define USE_CCS811_V2                          // [I2cDriver24] Enable CCS811 sensor (I2C addresses 0x5A and 0x5B) (+2k8 code)
      //#define USE_ENS16x                             // [I2cDriver85] Enable ENS160 and ENS161 sensor (I2C addresses 0x52 and 0x53) (+3k1 of code and 524 of RAM)
      //#define USE_ENS210                             // [I2cDriver86] Enable ENS210 sensor (I2C addresses 0x43 and 0x44) (+4k0 of code and 944 of RAM)
      #define USE_MPU_ACCEL                          // [I2cDriver58] Enable MPU6886, MPU9250 6-axis MotionTracking sensor (I2C address 0x68)
      //#define USE_MPU6050                            // [I2cDriver25] Enable MPU6050 sensor (I2C address 0x68 AD0 low or 0x69 AD0 high) (+3K3 of code and 188 Bytes of RAM)
      //#define USE_MGC3130                            // [I2cDriver27] Enable MGC3130 Electric Field Effect Sensor (I2C address 0x42) (+2k7 code, 0k3 mem)
      #define USE_MAX44009                           // [I2cDriver28] Enable MAX44009 Ambient Light sensor (I2C addresses 0x4A and 0x4B) (+0k8 code)
      // #define USE_SCD30                              // [I2cDriver29] Enable Sensiron SCd30 CO2 sensor (I2C address 0x61) (+3k3 code)
      // #define USE_SCD40                              // [I2cDriver62] Enable Sensiron SCd40 CO2 sensor (I2C address 0x62) (+3k5 code)
      //#define USE_SPS30                              // [I2cDriver30] Enable Sensiron SPS30 particle sensor (I2C address 0x69) (+1.7 code)
      // #define USE_ADE7880                            // [I2cDriver65] Enable ADE7880 Energy monitor as used on Shelly 3EM (I2C address 0x38) (+3k8)
      // #define USE_ADE7953                            // [I2cDriver7] Enable ADE7953 Energy monitor as used on Shelly 2.5 (I2C address 0x38) (+1k5)
      // #define USE_VL53L0X                            // [I2cDriver31] Enable VL53L0x time of flight sensor (I2C address 0x29) (+4k code)
      //#define USE_VL53L1X                            // [I2cDriver54] Enable VL53L1X time of flight sensor (I2C address 0x29) using Pololu VL53L1X library (+2k9 code)
      //#define USE_TOF10120                           // [I2cDriver57] Enable TOF10120 time of flight sensor (I2C address 0x52) (+0k6 code)
      //#define USE_MLX90614                           // [I2cDriver32] Enable MLX90614 ir temp sensor (I2C address 0x5a) (+0.6k code)
      //#define USE_CHIRP                              // [I2cDriver33] Enable CHIRP soil moisture sensor (variable I2C address, default 0x20)
      //#define USE_PAJ7620                            // [I2cDriver34] Enable PAJ7620 gesture sensor (I2C address 0x73) (+2.5k code)
      //#define USE_PCF8574                            // [I2cDriver2] Enable PCF8574 I/O Expander (I2C addresses 0x20 - 0x26 and 0x39 - 0x3F) (+2k1 code)
      //  #define USE_PCF8574_MODE2                    // Enable Mode2 virtual relays/buttons/switches (+2k3 code)
      //  #define USE_PCF8574_SENSOR                   // Enable Mode1 inputs and outputs in SENSOR message (+0k2 code)
      //  #define USE_PCF8574_DISPLAYINPUT             // Enable Mode1 inputs display in Web page (+0k2 code)
      //  #define USE_PCF8574_MQTTINPUT                // Enable Mode1 MQTT message & rule process on input change detection : stat/%topic%/PCF8574_INP = {"Time":"2021-03-07T16:19:23+01:00","PCF8574-1_INP":{"D1":1}} (+0k5 code)
      // #define USE_HIH6                               // [I2cDriver36] Enable Honeywell HIH Humidity and Temperature sensor (I2C address 0x27) (+0k6)
      // #define USE_DHT12                              // [I2cDriver41] Enable DHT12 humidity and temperature sensor (I2C address 0x5C) (+0k7 code)
      // #define USE_DS1624                             // [I2cDriver42] Enable DS1624, DS1621 temperature sensor (I2C addresses 0x48 - 0x4F) (+1k2 code)
      //#define USE_AHT1x                              // [I2cDriver43] Enable AHT10/15 humidity and temperature sensor (I2C address 0x38, 0x39) (+0k8 code)
      //#define USE_AHT2x                              // [I2cDriver43] Enable AHT20 instead of AHT1x humidity and temperature sensor (I2C address 0x38) (+0k8 code)
      // #define USE_WEMOS_MOTOR_V1                     // [I2cDriver44] Enable Wemos motor driver V1 (I2C addresses 0x2D - 0x30) (+0k7 code)
      //   #define WEMOS_MOTOR_V1_ADDR  0x30              // Default I2C address 0x30
      //   #define WEMOS_MOTOR_V1_FREQ  1000              // Default frequency
      //#define USE_HDC1080                            // [I2cDriver45] Enable HDC1080 temperature/humidity sensor (I2C address 0x40) (+1k5 code)
      // #define USE_IAQ                                // [I2cDriver46] Enable iAQ-core air quality sensor (I2C address 0x5a) (+0k6 code)
      // #define USE_AS3935                             // [I2cDriver48] Enable AS3935 Franklin Lightning Sensor (I2C address 0x03) (+5k4 code)
      //#define USE_MCP9808                            // [I2cDriver51] Enable MCP9808 temperature sensor (I2C addresses 0x18 - 0x1F) (+0k9 code)
      //#define USE_HP303B                             // [I2cDriver52] Enable HP303B temperature and pressure sensor (I2C address 0x76 or 0x77) (+6k2 code)
      //#define USE_MLX90640                           // [I2cDriver53] Enable MLX90640 IR array temperature sensor (I2C address 0x33) (+20k code)
      //#define USE_EZOPH                              // [I2cDriver55] Enable support for EZO's pH sensor (+0k3 code) - Shared EZO code required for any EZO device (+1k2 code)
      //#define USE_EZOORP                             // [I2cDriver55] Enable support for EZO's ORP sensor (+0k3 code) - Shared EZO code required for any EZO device (+1k2 code)
      //#define USE_EZORTD                             // [I2cDriver55] Enable support for EZO's RTD sensor (+0k2 code) - Shared EZO code required for any EZO device (+1k2 code)
      //#define USE_EZOHUM                             // [I2cDriver55] Enable support for EZO's HUM sensor (+0k3 code) - Shared EZO code required for any EZO device (+1k2 code)
      //#define USE_EZOEC                              // [I2cDriver55] Enable support for EZO's EC sensor (+0k3 code) - Shared EZO code required for any EZO device (+1k2 code)
      //#define USE_EZOCO2                             // [I2cDriver55] Enable support for EZO's CO2 sensor (+0k2 code) - Shared EZO code required for any EZO device (+1k2 code)
      //#define USE_EZOO2                              // [I2cDriver55] Enable support for EZO's O2 sensor (+0k3 code) - Shared EZO code required for any EZO device (+1k2 code)
      //#define USE_EZOPRS                             // [I2cDriver55] Enable support for EZO's PRS sensor (+0k7 code) - Shared EZO code required for any EZO device (+1k2 code)
      //#define USE_EZOFLO                             // [I2cDriver55] Enable support for EZO's FLO sensor (+0k4 code) - Shared EZO code required for any EZO device (+1k2 code)
      //#define USE_EZODO                              // [I2cDriver55] Enable support for EZO's DO sensor (+0k3 code) - Shared EZO code required for any EZO device (+1k2 code)
      //#define USE_EZORGB                             // [I2cDriver55] Enable support for EZO's RGB sensor (+0k5 code) - Shared EZO code required for any EZO device (+1k2 code)
      //#define USE_EZOPMP                             // [I2cDriver55] Enable support for EZO's PMP sensor (+0k3 code) - Shared EZO code required for any EZO device (+1k2 code)
      //#define USE_SEESAW_SOIL                        // [I2cDriver56] Enable Capacitice Soil Moisture & Temperature Sensor (I2C addresses 0x36 - 0x39) (+1k3 code)
      //#define USE_DS3502                             // [I2CDriver67] Enable DS3502 digital potentiometer (I2C address 0x28 - 0x2B) (+0k4 code)
      //#define USE_HYT                                // [I2CDriver68] Enable HYTxxx temperature and humidity sensor (I2C address 0x28) (+0k5 code)
      //#define USE_LUXV30B                            // [I2CDriver70] Enable RFRobot SEN0390 LuxV30b ambient light sensor (I2C address 0x4A) (+0k5 code)
      //#define USE_PMSA003I                           // [I2cDriver78] Enable PMSA003I Air Quality Sensor (I2C address 0x12) (+1k8 code)
      //#define USE_GDK101                             // [I2cDriver79] Enable GDK101 sensor (I2C addresses 0x18 - 0x1B) (+1k2 code)

      //#define USE_RTC_CHIPS                          // Enable RTC chip support and NTP server - Select only one
      //  #define USE_DS3231                           // [I2cDriver26] Enable DS3231 RTC (I2C address 0x68) (+1k2 code)
      //  #define USE_BM8563                           // [I2cDriver59] Enable BM8563 RTC - found in M5Stack - support both I2C buses on ESP32 (I2C address 0x51) (+2.5k code)
      //  #define USE_PCF85363                         // [I2cDriver66] Enable PCF85363 RTC - found Shelly 3EM (I2C address 0x51) (+0k7 code)

      #define USE_SPI                                // Hardware SPI using GPIO12(MISO), GPIO13(MOSI) and GPIO14(CLK) in addition to two user selectable GPIOs(CS and DC)
      //#define USE_RC522                              // Add support for MFRC522 13.56Mhz Rfid reader (+6k code)
      //#define USE_MCP2515                            // Add support for can bus using MCP2515 (+7k code)
      //#define USE_CANSNIFFER                         // Add support for can bus sniffer using MCP2515 (+5k code)
      // #define USE_MCP23XXX_DRV                         // [I2cDriver77] Enable MCP23xxx support as virtual switch/button/relay (+3k(I2C)/+5k(SPI) code)
      // #define USE_SHELLY_PRO                           // Add support for Shelly Pro
      // #define USE_SPI_LORA                           // Add support for LoRaSend and LoRaCommand (+4k code)
      //   #define USE_LORA_SX126X                      // Add driver support for LoRa on SX126x based devices like LiliGo T3S3 Lora32 (+16k code)
      //   #define USE_LORA_SX127X                      // Add driver support for LoRa on SX127x based devices like M5Stack LoRa868, RFM95W (+5k code)
      //   #define USE_LORAWAN_BRIDGE                   // Add support for LoRaWan bridge (+8k code)

      // #define USE_MHZ19                                // Add support for MH-Z19 CO2 sensor (+2k code)
      // #define USE_SENSEAIR                             // Add support for SenseAir K30, K70 and S8 CO2 sensor (+2k3 code)
      // #define USE_CM110x                               // Add support for CM110x CO2 sensors (+2k7 code)
      #ifndef CO2_LOW
        #define CO2_LOW              800               // Below this CO2 value show green light (needs PWM or WS2812 RG(B) led and enable with SetOption18 1)
      #endif
      #ifndef CO2_HIGH
        #define CO2_HIGH             1200              // Above this CO2 value show red light (needs PWM or WS2812 RG(B) led and enable with SetOption18 1)
      #endif
      #define USE_PMS5003                              // Add support for PMS5003 and PMS7003 particle concentration sensor (+1k3 code)
        //#define PMS_MODEL_PMS3003                      // Enable support of PMS3003 instead of PMS5003/PMS7003 (needs the USE_PMS5003 above)
        //#define PMS_MODEL_PMS5003T                     // Enable support for PMSx003T models that report temperature and humidity (needs the USE_PMS5003 above)
      #define USE_NOVA_SDS                             // Add support for SDS011 and SDS021 particle concentration sensor (+0k7 code)
      #define USE_HPMA                                 // Add support for Honeywell HPMA115S0 particle concentration sensor
      #define USE_SR04                                 // Add support for HC-SR04 ultrasonic devices (+1k code)
      //#define USE_ME007                                // Add support for ME007 ultrasonic devices (+1k5 code)
      //#define USE_DYP                                  // Add support for DYP ME-007 ultrasonic distance sensor, serial port version (+0k5 code)
      #define USE_SERIAL_BRIDGE                        // Add support for software Serial Bridge (+2k code)
      #define USE_MODBUS_BRIDGE                        // Add support for software Modbus Bridge (+3k code)
      #define USE_MP3_PLAYER                           // Use of the DFPlayer Mini MP3 Player RB-DFR-562 commands: play, volume and stop
      //#define USE_AZ7798                               // Add support for AZ-Instrument 7798 CO2 datalogger
      #define USE_PN532_HSU                            // Add support for PN532 using HSU (Serial) interface (+1k8 code, 140 bytes mem)
      //#define USE_ZIGBEE                               // Enable serial communication with Zigbee CC2530 flashed with ZNP
      #define USE_RDM6300                              // Add support for RDM6300 125kHz RFID Reader (+0k8)
      // #define USE_IBEACON                              // Add support for bluetooth LE passive scan of ibeacon devices (uses HM17 module)
      //#define USE_GPS                                  // Add support for GPS and NTP Server for becoming Stratus 1 Time Source (+ 3.1kb flash, +132 bytes RAM)

      //#define USE_BLE_ESP32                            // (ESP32 only) Add support for native BLE on ESP32 - use new driver
      //#define USE_MI_ESP32                             // (ESP32 only) Add support for ESP32 as a BLE-bridge (+9k2 mem, +292k flash)

      #define USE_HRXL                                 // Add support for MaxBotix HRXL-MaxSonar ultrasonic range finders (+0k7)
      //#define USE_TASMOTA_CLIENT                       // Add support for Arduino Uno/Pro Mini via serial interface including flashing (+2k3 code, 44 mem)
      //#define USE_OPENTHERM                            // Add support for OpenTherm (+15k code)
      //#define USE_MIEL_HVAC                            // Add support for Mitsubishi Electric HVAC serial interface (+5k code)
      //#define USE_PROJECTOR_CTRL                       // Add support for LCD/DLP Projector serial control interface (+2k code)
      //  #define USE_PROJECTOR_CTRL_NEC                 // Use codes for NEC
      //  #define USE_PROJECTOR_CTRL_OPTOMA              // Use codes for OPTOMA
      //#define USE_AS608                                // Add support for AS608 optical and R503 capacitive fingerprint sensor (+3k4 code)
      //#define USE_TFMINIPLUS                           // Add support for TFmini Plus (TFmini, TFmini-S) LiDAR modules via UART interface
      //#define USE_HRG15                                // Add support for Hydreon RG-15 Solid State Rain sensor (+1k5 code)

      // #define USE_ENERGY_SENSOR                        // Add energy sensors (-14k code)
      // #define USE_PZEM004T                             // Add support for PZEM004T Energy monitor (+2k code)
      // #define USE_PZEM_AC                              // Add support for PZEM014,016 Energy monitor (+1k1 code)
      // #define USE_PZEM_DC                              // Add support for PZEM003,017 Energy monitor (+1k1 code)
      // #define USE_MCP39F501                            // Add support for MCP39F501 Energy monitor as used in Shelly 2 (+3k1 code)
      // #define USE_SDM72                                // Add support for Eastron SDM72-Modbus energy monitor (+0k3 code)
      // #define USE_SDM120                               // Add support for Eastron SDM120-Modbus energy monitor (+1k1 code)
      // #define USE_SDM230                               // Add support for Eastron SDM230-Modbus energy monitor (+?? code)
      // #define USE_SDM630                               // Add support for Eastron SDM630-Modbus energy monitor (+0k6 code)
      // #define USE_DDS2382                              // Add support for Hiking DDS2382 Modbus energy monitor (+0k6 code)
      // #define USE_DDSU666                              // Add support for Chint DDSU666 Modbus energy monitor (+0k6 code)
      // //#define USE_SOLAX_X1                             // Add support for Solax X1 series Modbus log info (+3k1 code)
      // //#define USE_LE01MR                               // Add support for F&F LE-01MR modbus energy meter (+2k code)
      // //#define USE_TELEINFO                             // Add support for French Energy Provider metering telemetry (+5k2 code, +168 RAM + SmartMeter LinkedList Values RAM)
      // #define USE_WE517                                // Add support for Orno WE517-Modbus energy monitor (+1k code)
      // #define USE_SONOFF_SPM                           // Add support for ESP32 based Sonoff Smart Stackable Power Meter (+11k code)
      // #define USE_MODBUS_ENERGY                        // Add support for generic modbus energy monitor using a user file in rule space (+5k code)
      //#define USE_BIOPDU                               // Add support for BioPDU 625x12 6-channel energy monitor

      // #define USE_DHT                                  // Add support for DHT11, AM2301 (DHT21, DHT22, AM2302, AM2321) and SI7021 Temperature and Humidity sensor
      #define USE_MAX31855                             // Add support for MAX31855 K-Type thermocouple sensor using softSPI
      //#define USE_MAX31865                             // Add support for MAX31865 RTD sensors using softSPI
      #define USE_IR_REMOTE
      #define USE_IR_REMOTE_ALL                            // Send IR remote commands using library IRremoteESP8266 and ArduinoJson (+4k code, 0k3 mem, 48 iram)
        #define USE_IR_RECEIVE                         // Support for IR receiver (+5k5 code, 264 iram)
      // #define USE_LMT01                                // Add support for TI LMT01 temperature sensor, count pulses on single GPIO (+0k5 code)
      // //#define USE_WIEGAND                              // Add support for 24/26/32/34 bit RFID Wiegand interface (D0/D1) (+1k7 code)
      // #define USE_SHIFT595                             // Add support for 74xx595 8-bit shift registers (+0k7 code)
      // //  #define SHIFT595_INVERT_OUTPUTS false            // [SetOption133] Don't invert outputs of 74x595 shift register
      // //  #define SHIFT595_DEVICE_COUNT  1                 // [Shift595DeviceCount] Set the number of connected 74x595 shift registers
      // #define USE_TM1638                               // Add support for TM1638 switches copying Switch1 .. Switch8 (+1k code)
      // #define USE_HX711                                // Add support for HX711 load cell (+1k5 code)
      // //#define USE_HX711_GUI                            // Add optional web GUI to HX711 as scale (+1k8 code)
      // //#define USE_TX20_WIND_SENSOR                     // Add support for La Crosse TX20 anemometer (+2k6/0k8 code)
      // //#define USE_TX23_WIND_SENSOR                     // Add support for La Crosse TX23 anemometer (+2k7/1k code)
      // //#define USE_WINDMETER                            // Add support for analog anemometer (+2k2 code)
      // #define USE_RC_SWITCH                            // Add support for RF transceiver using library RcSwitch (+2k7 code, 460 iram)
      // #define USE_RF_SENSOR                            // Add support for RF sensor receiver (434MHz or 868MHz) (+0k8 code)
      //  #define USE_THEO_V2                            // Add support for decoding Theo V2 sensors as documented on https://sidweb.nl using 434MHz RF sensor receiver (+1k4 code)
        #define USE_ALECTO_V2                          // Add support for decoding Alecto V2 sensors like ACH2010, WS3000 and DKW2012 using 868MHz RF sensor receiver (+1k7 code)
      #define USE_HRE                                  // Add support for Badger HR-E Water Meter (+1k4 code)
      //#define USE_A4988_STEPPER                        // Add support for A4988/DRV8825 stepper-motor-driver-circuit (+10k5 code)
      //#define USE_THERMOSTAT                           // Add support for Thermostat
      #define USE_BP1658CJ                             // Add support for BP1658CJ 5 channel led controller as used in Orein OS0100411267 Bulb
      #define USE_ETHERNET                             // Add support for ethernet (+20k code)
      #define USE_DISPLAY_TM1621_SONOFF                // Add support for TM1621 display driver used by Sonoff POWR3xxD and THR3xxD
      #define USE_LOX_O2                               // Add support for LuminOx LOX O2 Sensor (+0k8 code)

      #ifndef USE_KNX
      #define USE_KNX                                  // Enable KNX IP Protocol Support (+23k code, +3k3 mem)
      #endif



      /*********************************************************************************************\
       * Post-process compile options for Matter
      \*********************************************************************************************/

      #ifdef USE_MATTER_DEVICE
        #undef  USE_DISCOVERY
        #define USE_DISCOVERY

      // Enable all the crypto required by Matter
        #undef  USE_BERRY_CRYPTO_EC_P256
        #define USE_BERRY_CRYPTO_EC_P256
        #undef  USE_BERRY_CRYPTO_HMAC_SHA256
        #define USE_BERRY_CRYPTO_HMAC_SHA256
        #undef  USE_BERRY_CRYPTO_HKDF_SHA256
        #define USE_BERRY_CRYPTO_HKDF_SHA256
        #undef  USE_BERRY_CRYPTO_AES_CCM
        #define USE_BERRY_CRYPTO_AES_CCM
        #undef  USE_BERRY_CRYPTO_AES_CTR
        #define USE_BERRY_CRYPTO_AES_CTR
        #undef  USE_BERRY_CRYPTO_PBKDF2_HMAC_SHA256
        #define USE_BERRY_CRYPTO_PBKDF2_HMAC_SHA256
        #undef  USE_BERRY_CRYPTO_SPAKE2P_MATTER
        #define USE_BERRY_CRYPTO_SPAKE2P_MATTER

      #endif // USE_MATTER_DEVICE

    #endif  // FIRMWARE_TASMOTA_LVGL_partition3904k *******************************************************************
#undef USE_MAX17043
#define USE_MAX17043                           // [I2cDriver83] Enable MAX17043 fuel-gauge systems Lipo batteries sensor (I2C address 0x36) (+0k9 code)
#define MAX17043_ALERT_THRESHOLD 32            // [I2cDriver83] Define the alert threshold for low battery level percentage 1-32

#endif  // _USER_CONFIG_OVERRIDE_H_
