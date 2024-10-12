/*
 * Emisar D1 with Sofirn SFN60.
 * Cyan with RGB Switch.
 * Channel 1: Sofirn SFN60 5500K
 */

#pragma once

#include "hank/noctigon-k1/sbt90/anduril.h"
#include "fwiffo/anduril.h"

#undef DEFAULT_JUMP_START_LEVEL
#undef JUMP_START_TIME
#define DEFAULT_JUMP_START_LEVEL 10  // TODO: tune better.
#define JUMP_START_TIME 20  // This seems really slow somehow.

// Lower levels are unstable and 3 is already quite low.
#undef RAMP_DISCRETE_FLOOR
#undef RAMP_SMOOTH_FLOOR
#define RAMP_DISCRETE_FLOOR 3
#define RAMP_SMOOTH_FLOOR 3
