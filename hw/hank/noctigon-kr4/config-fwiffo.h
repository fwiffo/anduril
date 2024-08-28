/*
 * Noctigon KR4 with single channel Luminous SST-20.
 * Titanium and copper with trit slot in tail switch.
 * Channel 1: Luminus SST-20, 4000k, 95 CRI
 */

#undef DEFAULT_JUMP_START_LEVEL
#define DEFAULT_JUMP_START_LEVEL 10  // TODO: tune better.

// Enable RGB AUX channels.
#undef CHANNEL_MODES_ENABLED
#define CHANNEL_MODES_ENABLED 0b0000000011111111
