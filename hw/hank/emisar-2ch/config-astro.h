/*
 * D4V2 TI Colorful Series in astro config.
 * Blue Wavy Clouds with red switch
 * Channel 1: Luminus SST-20, 4000K, 95 CRI
 * Channel 2: Luminus SST-20, Deep Red, 660nm
 */

// Default to red channel for astro.
#undef DEFAULT_CHANNEL_MODE
#define DEFAULT_CHANNEL_MODE CM_CH1

// Multi-channel jump-start.
#undef JUMP_START_LEVEL
#define JUMP_START_LEVEL 20

// Enable RGB AUX red as extra-low red mode and disable both channel and
// blend modes which are silly with the red/white configuration.
#undef CHANNEL_MODES_ENABLED
#define CHANNEL_MODES_ENABLED 0b0000000000100011

// TODO: Consider an option to reverse CH1 and CH2 so that red is CH1, making
// jumping around modes nicer.
