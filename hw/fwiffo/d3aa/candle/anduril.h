/*
 * D3AA with single channel FFL351A.
 * Stonewashed titanium with amber switch.
 * Channel 1: FFL351A 1800K
 */

#pragma once

#include "hank/emisar-d3aa/anduril.h"
#include "fwiffo/anduril.h"

#undef DEFAULT_JUMP_START_LEVEL
#define DEFAULT_JUMP_START_LEVEL 10  // TODO: tune better.

// Enable RGB AUX channels.
#undef CHANNEL_MODES_ENABLED
#define CHANNEL_MODES_ENABLED 0b0000000011111111
