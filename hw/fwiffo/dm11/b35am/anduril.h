/*
 * DM11 with a B35AM
 *
 * White with blue switch.
 * Channel 1: Nichia B35AM R9080 4500K
 *
 */

#pragma once

#include "hank/lume-x1/anduril.h"
#include "fwiffo/anduril.h"

// Enable RGB AUX channels.
#undef CHANNEL_MODES_ENABLED
#define CHANNEL_MODES_ENABLED 0b0000000011111111

// The lowest level for the Lume X1 driver is too low for moonlight.
#undef RAMP_DISCRETE_FLOOR
#undef RAMP_SMOOTH_FLOOR
#define RAMP_DISCRETE_FLOOR 5
#define RAMP_SMOOTH_FLOOR 5
