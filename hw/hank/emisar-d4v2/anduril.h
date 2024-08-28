// Emisar D4v2 config options for Anduril
// Copyright (C) 2018-2023 Selene ToyKeeper
// SPDX-License-Identifier: GPL-3.0-or-later
#pragma once

#include "hank/emisar-d4v2/hwdef.h"
#include "hank/anduril.h"

#define RAMP_SIZE 150

// 7135 at 75/150
// level_calc.py 5.7895 2 150 7135 1 0.1 130 FET 1 10 3000 --pwm dyn:74:4096:255:3
// (with some manual tweaks)
// non-zero part of FET channel calculated with:
//   level_calc.py 3 1 75 7135 2 500 3000
#define PWM1_LEVELS  1,1,2,3,3,4,5,6,7,8,9,11,12,13,15,16,18,19,21,23,26,27,28,30,32,34,36,38,40,42,44,46,48,50,52,54,56,58,60,62,64,66,68,70,71,74,76,78,80,82,85,87,90,93,96,100,103,107,112,116,122,127,133,140,147,154,163,171,182,192,203,215,228,241,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,0
#define PWM2_LEVELS  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,4,5,7,9,11,13,15,17,19,21,23,25,27,29,32,34,36,39,41,43,46,49,51,54,57,59,62,65,68,71,74,77,80,83,86,90,93,96,100,103,107,110,114,117,121,125,129,133,137,141,145,149,153,157,162,166,170,175,179,184,189,193,198,203,208,213,218,223,228,233,239,244,249,255
#define PWM_TOPS     4095,2701,3200,3586,2518,2778,2834,2795,2705,2587,2455,2582,2412,2247,2256,2091,2062,1907,1860,1802,1737,1605,1542,1477,1412,1347,1284,1222,1162,1105,1050,997,946,898,853,810,768,730,693,658,625,594,564,536,503,485,462,439,418,398,384,366,353,340,327,319,307,298,292,284,280,273,269,266,263,260,258,256,256,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255

#define MAX_1x7135 75
#define DEFAULT_LEVEL 50
#define MIN_THERM_STEPDOWN 70  // should be above highest dyn_pwm level
#define HALFSPEED_LEVEL 20
#define QUARTERSPEED_LEVEL 5

#define RAMP_SMOOTH_FLOOR 1
#define RAMP_SMOOTH_CEIL  130
// 20, 38, 56, [75], 93, 111, 130
#define RAMP_DISCRETE_FLOOR 20
#define RAMP_DISCRETE_CEIL  RAMP_SMOOTH_CEIL
#define RAMP_DISCRETE_STEPS 7

// 20, 40, 60, 80, 100
#define SIMPLE_UI_FLOOR 20
#define SIMPLE_UI_CEIL 100
#define SIMPLE_UI_STEPS 5

// stop panicking at ~25% power or ~1000 lm
#define THERM_FASTER_LEVEL 110

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
