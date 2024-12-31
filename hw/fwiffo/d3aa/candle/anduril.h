/*
 * D3AA with single channel FFL351A.
 * Stonewashed titanium with amber switch.
 * Channel 1: FFL351A 1800K
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
