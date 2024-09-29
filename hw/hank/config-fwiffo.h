/*
 * config-fwiffo.h: Fwiffo's customizations for various Hank lights.
 */

// Factory reset to Advanced mode, not Simple, I hate you Simple.
#undef USE_SIMPLE_UI
#undef SIMPLE_UI_ACTIVE
#define SIMPLE_UI_ACTIVE 0

// Disable annoying momentary mode that can't be turned off without taking
// apart the stupid light.
#undef USE_MOMENTARY_MODE

// Temp in front of my computer where I'm usually flashing my flashlights...
#undef THERM_AUTOCALIBRATE_TEMP
#define THERM_AUTOCALIBRATE_TEMP 26

// Disable nasty strobes.
#undef USE_PARTY_STROBE_MODE
#undef USE_TACTICAL_STROBE_MODE
#undef USE_TACTICAL_MODE
#undef STROBE_BRIGHTNESS
#define STROBE_BRIGHTNESS RAMP_DISCRETE_CEIL / 3
#define DEFAULT_BIKING_LEVEL RAMP_DISCRETE_CEIL / 3

// Use aux red + aux blue for police strobe.
#define USE_POLICE_COLOR_STROBE_MODE
#define POLICE_STROBE_USES_AUX
#undef POLICE_COLOR_STROBE_CH1
#undef POLICE_COLOR_STROBE_CH2
#define POLICE_COLOR_STROBE_CH1 CM_AUXRED
#define POLICE_COLOR_STROBE_CH2 CM_AUXBLU

// Dimmest possible moonlight, and 5 ramp steps, actually turbo turbo.
#undef RAMP_STYLE
#undef RAMP_DISCRETE_FLOOR
#undef RAMP_SMOOTH_FLOOR
#undef RAMP_DISCRETE_STEPS
#define RAMP_STYLE 0  // 0 = smooth, 1 = stepped.
#define RAMP_DISCRETE_FLOOR 1
#define RAMP_SMOOTH_FLOOR 1
#define RAMP_DISCRETE_STEPS 5
#undef USE_SMOOTH_STEPS
#undef USE_2C_STYLE_CONFIG
#define USE_2C_MAX_TURBO
#define TURBO_IGNORES_TINT_RAMP

// Use manual memory by default, without timer, default to middle brightness.
#define USE_MANUAL_MEMORY
#undef USE_MANUAL_MEMORY_TIMER
#define DEFAULT_MANUAL_MEMORY (RAMP_DISCRETE_FLOOR + RAMP_DISCRETE_CEIL) / 2

// Don't ramp after moonlight by default.
#define DEFAULT_DONT_RAMP_AFTER_MOON 1

// AUX LEDs set to low brightness, display voltage.
#undef RGB_LED_OFF_DEFAULT
#undef RGB_LED_LOCKOUT_DEFAULT
#define RGB_LED_OFF_DEFAULT     0x19
#define RGB_LED_LOCKOUT_DEFAULT 0x19
#define DEFAULT_POST_OFF_VOLTAGE_SECONDS 0
