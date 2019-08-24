71a72,78
> //===========================================================================
> //============================= HANGPRINTER =================================
> //===========================================================================
> // For a Hangprinter start with the configuration file in the
> // example_configurations/hangprinter directory and customize for your machine.
> //
> 
77c84
< #define STRING_CONFIG_H_AUTHOR "(thisiskeithb, Ender-3)" // Who made the changes.
---
> #define STRING_CONFIG_H_AUTHOR "(none, default config)" // Who made the changes.
94c101
< #define SHOW_CUSTOM_BOOTSCREEN
---
> //#define SHOW_CUSTOM_BOOTSCREEN
97c104
< #define CUSTOM_STATUS_SCREEN_IMAGE
---
> //#define CUSTOM_STATUS_SCREEN_IMAGE
119c126
< #define BAUDRATE 115200
---
> #define BAUDRATE 250000
127c134
<   #define MOTHERBOARD BOARD_MELZI_CREALITY
---
>   #define MOTHERBOARD BOARD_RAMPS_14_EFB
132c139
< #define CUSTOM_MACHINE_NAME "Ender-3"
---
> //#define CUSTOM_MACHINE_NAME "3D Printer"
145c152
< #define DEFAULT_NOMINAL_FILAMENT_DIA 1.75
---
> #define DEFAULT_NOMINAL_FILAMENT_DIA 3.0
311c318
< #define TEMP_SENSOR_BED 1
---
> #define TEMP_SENSOR_BED 0
351c358
< #define BED_MAXTEMP 125
---
> #define BED_MAXTEMP 150
364c371
<   #define PID_AUTOTUNE_MENU // Add PID Autotune to the LCD "Temperature" menu to run M303 and apply the result.
---
>   //#define PID_AUTOTUNE_MENU // Add PID Autotune to the LCD "Temperature" menu to run M303 and apply the result.
374,377d380
<   // Creality Ender-3
<   #define DEFAULT_Kp 21.73
<   #define DEFAULT_Ki 1.54
<   #define DEFAULT_Kd 76.55
380,382c383,385
<   //#define DEFAULT_Kp 22.2
<   //#define DEFAULT_Ki 1.08
<   //#define DEFAULT_Kd 114
---
>   #define DEFAULT_Kp 22.2
>   #define DEFAULT_Ki 1.08
>   #define DEFAULT_Kd 114
608c611
< #define DEFAULT_AXIS_STEPS_PER_UNIT   { 80, 80, 400, 93 }
---
> #define DEFAULT_AXIS_STEPS_PER_UNIT   { 80, 80, 4000, 500 }
615c618
< #define DEFAULT_MAX_FEEDRATE          { 500, 500, 5, 25 }
---
> #define DEFAULT_MAX_FEEDRATE          { 300, 300, 5, 25 }
623c626
< #define DEFAULT_MAX_ACCELERATION      { 500, 500, 100, 5000 }
---
> #define DEFAULT_MAX_ACCELERATION      { 3000, 3000, 100, 10000 }
633,635c636,638
< #define DEFAULT_ACCELERATION          500    // X, Y, Z and E acceleration for printing moves
< #define DEFAULT_RETRACT_ACCELERATION  500    // E acceleration for retracts
< #define DEFAULT_TRAVEL_ACCELERATION   500    // X, Y, Z acceleration for travel (non printing) moves
---
> #define DEFAULT_ACCELERATION          3000    // X, Y, Z and E acceleration for printing moves
> #define DEFAULT_RETRACT_ACCELERATION  3000    // E acceleration for retracts
> #define DEFAULT_TRAVEL_ACCELERATION   3000    // X, Y, Z acceleration for travel (non printing) moves
727c730
< #define BLTOUCH
---
> //#define BLTOUCH
729c732
<   #define BLTOUCH_DELAY 100   // (ms) Enable and increase if needed
---
>   //#define BLTOUCH_DELAY 375   // (ms) Enable and increase if needed
776,777c779,780
< #define X_PROBE_OFFSET_FROM_EXTRUDER -40  // X offset: -left  +right  [of the nozzle]
< #define Y_PROBE_OFFSET_FROM_EXTRUDER -10  // Y offset: -front +behind [the nozzle]
---
> #define X_PROBE_OFFSET_FROM_EXTRUDER 10  // X offset: -left  +right  [of the nozzle]
> #define Y_PROBE_OFFSET_FROM_EXTRUDER 10  // Y offset: -front +behind [the nozzle]
843c846
< #define DISABLE_INACTIVE_EXTRUDER false // Keep only the active extruder enabled.
---
> #define DISABLE_INACTIVE_EXTRUDER true // Keep only the active extruder enabled.
848c851
< #define INVERT_X_DIR true
---
> #define INVERT_X_DIR false
855c858
< #define INVERT_E0_DIR true
---
> #define INVERT_E0_DIR false
879,880c882,883
< #define X_BED_SIZE 220
< #define Y_BED_SIZE 220
---
> #define X_BED_SIZE 200
> #define Y_BED_SIZE 200
888c891
< #define Z_MAX_POS 250
---
> #define Z_MAX_POS 200
975c978
< #define AUTO_BED_LEVELING_BILINEAR
---
> //#define AUTO_BED_LEVELING_BILINEAR
1141c1144
< #define Z_SAFE_HOMING
---
> //#define Z_SAFE_HOMING
1223c1226
< #define EEPROM_SETTINGS // Enable for M500 and M501 commands
---
> //#define EEPROM_SETTINGS // Enable for M500 and M501 commands
1255,1257c1258,1260
< #define PREHEAT_1_TEMP_HOTEND 185
< #define PREHEAT_1_TEMP_BED     45
< #define PREHEAT_1_FAN_SPEED   255 // Value from 0 to 255
---
> #define PREHEAT_1_TEMP_HOTEND 180
> #define PREHEAT_1_TEMP_BED     70
> #define PREHEAT_1_FAN_SPEED     0 // Value from 0 to 255
1260,1261c1263,1264
< #define PREHEAT_2_TEMP_BED      0
< #define PREHEAT_2_FAN_SPEED   255 // Value from 0 to 255
---
> #define PREHEAT_2_TEMP_BED    110
> #define PREHEAT_2_FAN_SPEED     0 // Value from 0 to 255
1417c1420
< #define DISPLAY_CHARSET_HD44780 WESTERN
---
> #define DISPLAY_CHARSET_HD44780 JAPANESE
1506c1509
< #define SPEAKER
---
> //#define SPEAKER
1745c1748
< #define CR10_STOCKDISPLAY
---
> //#define CR10_STOCKDISPLAY
1914,1917c1917
< #define NUM_SERVOS 1 // Servo index starts with 0 for M280 command
< #ifdef NUM_SERVOS
<   #define SERVO0_PIN 29 //BLTouch orange wire
< #endif
---
> //#define NUM_SERVOS 3 // Servo index starts with 0 for M280 command
