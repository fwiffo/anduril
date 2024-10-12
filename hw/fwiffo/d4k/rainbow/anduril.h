/*
 * D4K in three-channel, XP-E in purple, cyan and yellow.
 * All copper with RGB switch.
 * Channel 1: XP-E Violet 390~395nm (2 LEDs)
 * Channel 2: XP-E Cyan   490~500nm
 * Channel 3: XP-E Yellow 585~595nm
 */

#include "hank/config-fwiffo.h"

// Default to violet.
#undef DEFAULT_CHANNEL_MODE
#define DEFAULT_CHANNEL_MODE CM_MAIN2
#undef CHANNEL_MODE_ARGS
#define CHANNEL_MODE_ARGS 0,0,0,0,0,0,0,245,0,RGB_AUX_CM_ARGS             // Hue
#undef SECONDARY_CHANNEL_MODE_ARGS
#define SECONDARY_CHANNEL_MODE_ARGS 0,0,0,0,0,0,0,255,0,RGB_AUX_SCM_ARGS  // Saturation

// This is doing weird with the dimness of the violet LEDs, turn up the
// brightness for using it.
#undef USE_AUX_RGB_LEDS_WHILE_ON
#define USE_AUX_RGB_LEDS_WHILE_ON 100

// Channels:
// Violet: enable
// Violet + Cyan: enable
// Cyan: enable
// Cyan + Yellow: enable
// Yellow: enable
// Yellow + Violet: enable
// All three: enable
// HSV: enable
// Auto-tint: disable
// AUX Red: enable
// AUX Blue: enable
// Remaining AUX: disable
#undef CHANNEL_MODES_ENABLED
#define CHANNEL_MODES_ENABLED 0b0010001011111111
