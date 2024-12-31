/*
 * D3AA with single channel Luminus SFT-25R.
 * Dark gray with copper accents and cool white switch.
 * Channel 1: Luminus SFT-25R 6500K.
 *
 * Turbo:  7601K, Duv -0.0010
 * High:   7264K, Duv  0.0006
 * Medium: 7318K, Duv  0.0014
 * Low:    6532K, Duv  0.0014
 */

#pragma once

#include "hank/emisar-d3aa/anduril.h"
#include "fwiffo/anduril.h"

// Enable RGB AUX channels.
#undef CHANNEL_MODES_ENABLED
#define CHANNEL_MODES_ENABLED 0b0000000011111111

// The lowest level for Thefreeman's boost driver is too low for moonlight.
#undef RAMP_DISCRETE_FLOOR
#undef RAMP_SMOOTH_FLOOR
#define RAMP_DISCRETE_FLOOR 5
#define RAMP_SMOOTH_FLOOR 5
