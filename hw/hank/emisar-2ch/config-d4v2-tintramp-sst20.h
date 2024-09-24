/*
 * D4V2 TI Colorful Series with SST-20s in tintramp config.
 * Raw Ore with amber switch
 * Channel 1: Luminus SST-20, 4000K, 95 CRI
 * Channel 2: Luminus SST-20, 2700K, 95 CRI
 */

#include "hank/config-fwiffo.h"

// Default to auto-blend mode.
#undef DEFAULT_CHANNEL_MODE
#define DEFAULT_CHANNEL_MODE CM_AUTO

// Multi-channel jump-start.
#undef JUMP_START_LEVEL
#define JUMP_START_LEVEL 10

// Enable RGB AUX channels.
#undef CHANNEL_MODES_ENABLED
#define CHANNEL_MODES_ENABLED 0b0000111111111111

// With a 5 step ramp and, and SST-20 emitters at 2700K and 4000K, produces CCTs
// of about 2780K, 3230K, 3500K, 3700K, 3880K. Also about 3300K on turbo and
// 3260 with a 50/50 blend.
// 0.50 gamma, 1.05 alpha
#undef CUSTOM_AUTORAMP_CURVE
#define CUSTOM_AUTORAMP_CURVE 0,17,24,29,34,37,41,44,47,50,53,56,58,60,63,65,67,69,71,73,75,77,79,80,82,84,85,87,89,90,92,93,95,96,98,99,101,102,103,105,106,107,109,110,111,112,114,115,116,117,119,120,121,122,123,124,125,127,128,129,130,131,132,133,134,135,136,137,138,139,140,141,142,143,144,145,146,147,148,149,150,151,152,153,154,155,155,156,157,158,159,160,161,162,163,163,164,165,166,167,168,169,169,170,171,172,173,173,174,175,176,177,177,178,179,180,181,181,182,183,184,184,185,186,187,187,188,189,190,190,191,192,193,193,194,195,196,196,197,198,198,199,200,201,201,202,203,203,204,205,205,206,207,207,208,209,209,210,211,211,212,213,213,214,215,215,216,217,217,218,219,219,220,221,221,222,222,223,224,224,225,226,226,227,227,228,229,229,230,231,231,232,232,233,234,234,235,235,236,237,237,238,238,239,239,240,241,241,242,242,243,244,244,245,245,246,246,247,248,248,249,249,250,250,251,252,252,253,253,254,254,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255
