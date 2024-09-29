/*
 * D4K in three-channel, "pink" W1 and 519a
 * Cyan with cyan switch.
 * Channel 1 (2 LEDs): Osram W1, 6000K
 * Channel 2: Osram W1, Amber
 * Channel 3: Nichia 519a, 4500K
 */

#include "hank/config-fwiffo.h"

// Default to main 2 LEDs (W1 6000K).
#undef DEFAULT_CHANNEL_MODE
#define DEFAULT_CHANNEL_MODE CM_MAIN2

// Channels:
// W1 6000K only: enable
// W1 6000K + 519A: disable
// 519A only: enable
// W1 amber + 519A: disable
// W1 amber only: enable
// W1 6000K + W1 amber: enable
// All three: disable
// HSV: enable
// Auto-tint: disable
// AUX Red: enable
// Remaining AUX: disable
// doesn't make sense for this set of LEDs. Keep each W1 by itself, or together,
// and keep HSV mode. Also enable RGB AUX red as extra-low red mode.
#undef CHANNEL_MODES_ENABLED
#define CHANNEL_MODES_ENABLED 0b0000001010110101
