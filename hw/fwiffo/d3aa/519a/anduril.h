/*
 * D3AA with single channel Nichia 519A.
 *
 * Red with red switch.
 * Channel 1: Nichia 519A, 5700K, dedomed
 *
 * Cyan with cyan switch.
 * Channel 1: Nichia 519A, 5000K, with dome
 *
 * "Oil Slick" Titanium colorful series with cool white switch.
 * Channel 1: Nichia 519A, 5700K, dedomed
 */

#pragma once

#include "hank/emisar-d3aa/anduril.h"
#include "fwiffo/anduril.h"

#undef DEFAULT_JUMP_START_LEVEL
#define DEFAULT_JUMP_START_LEVEL 10  // TODO: tune better.

// Enable RGB AUX channels.
#undef CHANNEL_MODES_ENABLED
#define CHANNEL_MODES_ENABLED 0b0000000011111111
