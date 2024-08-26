// Emisar D4S V2 config options for Anduril
// Copyright (C) 2019-2023 Selene ToyKeeper
// SPDX-License-Identifier: GPL-3.0-or-later
#pragma once

#include "hank/emisar-d4sv2/hwdef.h"
#include "hank/anduril.h"

#define RAMP_SIZE 150

// 1x7135 + 3x7135 + FET

// level_calc.py 5.7895 3 150 7135 1 0.1 130 7135 1 1 321.43 FET 2 10 3000 --pwm dyn:74:4096:255:3
#define PWM1_LEVELS  1,1,2,3,3,4,5,6,7,8,9,11,12,13,15,16,18,19,21,23,26,27,28,30,32,34,36,38,40,42,44,46,48,50,52,54,56,58,60,62,64,66,68,70,71,74,76,78,80,82,85,87,90,93,96,100,103,107,112,116,122,127,133,140,147,154,163,171,182,192,203,215,228,241,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,0
#define PWM2_LEVELS  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,12,19,25,32,40,47,55,64,72,81,91,101,111,122,133,144,156,169,182,195,209,224,239,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,0
#define PWM3_LEVELS  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,5,7,10,12,15,17,20,22,25,28,31,34,38,41,44,48,52,56,60,64,68,72,77,81,86,91,96,101,107,112,118,124,130,136,143,149,156,163,170,178,186,193,201,210,218,227,236,245,255
#define PWM_TOPS     4095,2701,3200,3586,2518,2778,2834,2795,2705,2587,2455,2582,2412,2247,2256,2091,2062,1907,1860,1802,1737,1605,1542,1477,1412,1347,1284,1222,1162,1105,1050,997,946,898,853,810,768,730,693,658,625,594,564,536,503,485,462,439,418,398,384,366,353,340,327,319,307,298,292,284,280,273,269,266,263,260,258,256,256,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255

#define MIN_THERM_STEPDOWN 70  // should be above highest dyn_pwm level
#define MAX_1x7135 75
#define MAX_Nx7135 100
#define HALFSPEED_LEVEL 20
#define QUARTERSPEED_LEVEL 5

// old
//// ../../../bin/level_calc.py seventh 3 150 7135 1 2.3 130 7135 11 5 400.1 FET 2 10 4000
//// (and some manual edits to make the clock speed changes smoother)
//#define PWM1_LEVELS 1,1,2,2,3,3,4,5,5,6,7,8,9,10,11,12,13,17,18,19,20,21,22,24,26,28,30,33,35,38,41,44,47,50,54,57,61,65,69,74,79,84,89,94,100,106,113,119,126,134,142,150,158,167,176,186,196,207,218,230,242,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,0
//#define PWM2_LEVELS 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,12,16,21,25,30,35,41,46,52,58,64,71,77,84,92,99,107,115,124,133,142,151,161,172,182,193,205,217,229,242,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,0
//#define PWM3_LEVELS 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,5,6,8,10,12,14,16,18,20,23,25,27,30,32,35,38,41,44,47,50,53,57,60,64,67,71,75,79,83,87,92,96,101,106,111,116,121,127,132,138,144,150,156,163,169,176,183,190,197,205,213,221,229,237,246,255
//#define PWM_TOPS    255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255
//#define MAX_1x7135 62
//#define MAX_Nx7135 93
//#define HALFSPEED_LEVEL 18
//#define QUARTERSPEED_LEVEL 8


#define DEFAULT_LEVEL MAX_Nx7135

#define RAMP_SMOOTH_FLOOR 1
#define RAMP_SMOOTH_CEIL  130
// 20, 38, 56, [75], 93, 111, 130
#define RAMP_DISCRETE_FLOOR 20
#define RAMP_DISCRETE_CEIL  RAMP_SMOOTH_CEIL
#define RAMP_DISCRETE_STEPS 7

// safe limit ~35% power, 150% of sustainable thermal power
// 25 50 [75] [100] 125
#define SIMPLE_UI_FLOOR 25
#define SIMPLE_UI_CEIL 125
#define SIMPLE_UI_STEPS 5

#define STROBE_BRIGHTNESS  MAX_LEVEL

// stop panicking at ~50% power or ~2000 lm
#define THERM_FASTER_LEVEL 130

#define THERM_CAL_OFFSET 5

// show each channel while it scroll by in the menu
#define USE_CONFIG_COLORS

// blink numbers on the main LEDs by default (but allow user to change it)
#define DEFAULT_BLINK_CHANNEL  CM_MAIN

// use aux red + aux blue for police strobe
#define USE_POLICE_COLOR_STROBE_MODE
#define POLICE_STROBE_USES_AUX
#define POLICE_COLOR_STROBE_CH1        CM_AUXRED
#define POLICE_COLOR_STROBE_CH2        CM_AUXBLU

// the default of 26 looks a bit rough, so increase it to make it smoother
#define CANDLE_AMPLITUDE 33

// don't blink while ramping
#ifdef BLINK_AT_RAMP_MIDDLE
#undef BLINK_AT_RAMP_MIDDLE
#endif

// Fwiffo's custom defaults.
#include "hank/config-fwiffo.h"
