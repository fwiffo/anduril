/*
 * DA1K with an XHP70.3 HI
 *
 * Red with red switch.
 * Channel 1: Cree XHP70.3 HI 5000K, 90 CRI
 *
 */

#pragma once

#include "hank/lume-x1/anduril.h"
#include "fwiffo/anduril.h"

// Enable RGB AUX channels.
#undef CHANNEL_MODES_ENABLED
#define CHANNEL_MODES_ENABLED 0b0000000011111111
