/*
 * D4V2 TI Colorful Series with single channel Nichia 219b.
 * Blue Swirl with cyan switch.
 * Channel 1: Nichia 219BT-V1, 3500K, R9080
 */

#undef DEFAULT_JUMP_START_LEVEL
#define DEFAULT_JUMP_START_LEVEL 15  // TODO: tune better.

// Enable RGB AUX channels.
#undef CHANNEL_MODES_ENABLED
#define CHANNEL_MODES_ENABLED 0b0000000011111111
