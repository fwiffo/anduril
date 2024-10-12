/*
 * D4K in three-channel, "pink" W1 and 519a
 * Cyan with cyan switch.
 * Channel 1 (2 LEDs): Osram W1, 6000K
 * Channel 2: Osram W1, Amber
 * Channel 3: Nichia 519a, 4500K
 */

#pragma once

#include "hank/emisar-d4k-3ch/anduril.h"
#include "fwiffo/anduril.h"

// Default to HSV mode with a nice tint balance
#undef DEFAULT_CHANNEL_MODE
#define DEFAULT_CHANNEL_MODE CM_HSV
// 240 = CCT 4840K, DUV -0.0042
// 245 = CCT 5130K, DUV -0.0032
// 250 = CCT 5480K, DUV -0.0006
// 256 = CCT 5970K, DUV +0.0020
#undef CHANNEL_MODE_ARGS
#define CHANNEL_MODE_ARGS 0,0,0,0,0,0,0,245,0,RGB_AUX_CM_ARGS             // Hue (6000K + a touch of amber)
#undef SECONDARY_CHANNEL_MODE_ARGS
#define SECONDARY_CHANNEL_MODE_ARGS 0,0,0,0,0,0,0,255,0,RGB_AUX_SCM_ARGS  // Saturation

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
// Blending the 519A with the other modes doesn't make sense, so those channels
// are disabled.
#undef CHANNEL_MODES_ENABLED
#define CHANNEL_MODES_ENABLED 0b0000001010110101
