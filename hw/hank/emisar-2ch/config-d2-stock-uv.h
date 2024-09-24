/*
 * D2 dual channel.
 * Stone White with blue switch
 * Channel 1: Nichia 519A 4500K
 * Channel 2: 365nm UV with ZWB2 filter
 */

// Only enable one channel at a time by default because other modes don't make
// sense for the UV light.
#undef CHANNEL_MODES_ENABLED
#define CHANNEL_MODES_ENABLED 0b0000000000000011
