/*
 * D4SV2 in flood/throw config.
 * Dark gray with amber switch.
 * Channel 1: Nichia 219BT-V1, R9080, 3500K
 * Channel 2: Osram W1, CSLNM1.TG, 6000K
 */

// Default to flood channel.
#define SWAP_SINGLE_CHANNELS_IN_MENU
#undef DEFAULT_CHANNEL_MODE
#define DEFAULT_CHANNEL_MODE CM_CH1

// Multichannel jump-start.
// This seems to be behaving very strangely on the D4SV2. 43 is slow to start,
// but 44 blinks brightly. Other lights work fine. I'm gonna stick with the
// defaults for now, I guess. Slow start is better than blinking.
// #undef JUMP_START_LEVEL
// #define JUMP_START_LEVEL 43

// Enable RGB AUX red as extra-low red mode and disable blend modes which are
// silly with the flood/throw configuration.
#undef CHANNEL_MODES_ENABLED
#define CHANNEL_MODES_ENABLED 0b0000000000100111

// TODO: Consider an option to reverse CH1 and CH2 so that flood is CH1, making
// jumping around modes nicer.
