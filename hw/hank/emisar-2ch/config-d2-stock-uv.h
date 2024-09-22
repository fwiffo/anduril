/*
 * D2 dual channel.
 * Stone White with blue switch
 * Channel 1: Nichia 519A 4500K
 * Channel 2: 365nm UV with ZWB2 filter
 */

// Default to first channel (white).
#undef DEFAULT_CHANNEL_MODE
#define DEFAULT_CHANNEL_MODE CM_CH1

// Multi-channel jump-start.
#undef JUMP_START_LEVEL
#define JUMP_START_LEVEL 10

// Enable RGB AUX red as extra-low red mode, AUX blue because blue, and disable
// both channel and blend modes which are silly with the white/uv configuration.
#undef CHANNEL_MODES_ENABLED
#define CHANNEL_MODES_ENABLED 0b0000000000000011
