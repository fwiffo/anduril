/*
 * D4WK with single channel Nichia 519A.
 *
 * Red with red switch.
 * Channel 1: Nichia 519A, 5700K, dedomed
 *
 */

#pragma once

#include "hank/lume-x1/anduril.h"
#include "fwiffo/anduril.h"

// Enable RGB AUX channels.
#undef CHANNEL_MODES_ENABLED
#define CHANNEL_MODES_ENABLED 0b0000000011111111
