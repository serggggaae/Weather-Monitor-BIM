#include <pgmspace.h>

unsigned int nowifi[0x100] PROGMEM ={
0xE8E4, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xE8E4,   // 0x0010 (16)
0x0000, 0xE8E4, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xE8E4, 0x0000,   // 0x0020 (32)
0x0000, 0x0000, 0xE8E4, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xE8E4, 0x0000, 0x0000,   // 0x0030 (48)
0x0000, 0x0000, 0x0000, 0xE8E4, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xE8E4, 0x7BEF, 0x7BEF, 0x0000,   // 0x0040 (64)
0x0000, 0x0000, 0x0000, 0x0000, 0xE8E4, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xE8E4, 0x0000, 0x7BEF, 0x7BEF, 0x0000,   // 0x0050 (80)
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xE8E4, 0x0000, 0x0000, 0x0000, 0x0000, 0xE8E4, 0x7BEF, 0x0000, 0x7BEF, 0x7BEF, 0x0000,   // 0x0060 (96)
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xE8E4, 0x0000, 0x0000, 0xE8E4, 0x7BEF, 0x7BEF, 0x0000, 0x7BEF, 0x7BEF, 0x0000,   // 0x0070 (112)
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xE8E4, 0xE8E4, 0x0000, 0x7BEF, 0x7BEF, 0x0000, 0x7BEF, 0x7BEF, 0x0000,   // 0x0080 (128)
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xE8E4, 0xE8E4, 0x0000, 0x7BEF, 0x7BEF, 0x0000, 0x7BEF, 0x7BEF, 0x0000,   // 0x0090 (144)
0x0000, 0x0000, 0x0000, 0x0000, 0x7BEF, 0x7BEF, 0xE8E4, 0x7BEF, 0x7BEF, 0xE8E4, 0x7BEF, 0x7BEF, 0x0000, 0x7BEF, 0x7BEF, 0x0000,   // 0x00A0 (160)
0x0000, 0x0000, 0x0000, 0x0000, 0x7BEF, 0xE8E4, 0x0000, 0x7BEF, 0x7BEF, 0x0000, 0xE8E4, 0x7BEF, 0x0000, 0x7BEF, 0x7BEF, 0x0000,   // 0x00B0 (176)
0x0000, 0x7BEF, 0x7BEF, 0x0000, 0xE8E4, 0x7BEF, 0x0000, 0x7BEF, 0x7BEF, 0x0000, 0x7BEF, 0xE8E4, 0x0000, 0x7BEF, 0x7BEF, 0x0000,   // 0x00C0 (192)
0x0000, 0x7BEF, 0x7BEF, 0xE8E4, 0x7BEF, 0x7BEF, 0x0000, 0x7BEF, 0x7BEF, 0x0000, 0x7BEF, 0x7BEF, 0xE8E4, 0x7BEF, 0x7BEF, 0x0000,   // 0x00D0 (208)
0x0000, 0x0000, 0xE8E4, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xE8E4, 0x0000, 0x0000,   // 0x00E0 (224)
0x0000, 0xE8E4, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xE8E4, 0x0000,   // 0x00F0 (240)
0xE8E4, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xE8E4,   // 0x0100 (256)
};

unsigned int nowifi2[0x100] PROGMEM ={
0xE8E4, 0xCE79, 0xCE79, 0xCE79, 0xCE79, 0xCE79, 0xCE79, 0xCE79, 0xCE79, 0xCE79, 0xCE79, 0xCE79, 0xCE79, 0xCE79, 0xCE79, 0xE8E4,   // 0x0010 (16)
0xCE79, 0xE8E4, 0xCE79, 0xCE79, 0xCE79, 0xCE79, 0xCE79, 0xCE79, 0xCE79, 0xCE79, 0xCE79, 0xCE79, 0xCE79, 0xCE79, 0xE8E4, 0xCE79,   // 0x0020 (32)
0xCE79, 0xCE79, 0xE8E4, 0xCE79, 0xCE79, 0xCE79, 0xCE79, 0xCE79, 0xCE79, 0xCE79, 0xCE79, 0xCE79, 0xCE79, 0xE8E4, 0xCE79, 0xCE79,   // 0x0030 (48)
0xCE79, 0xCE79, 0xCE79, 0xE8E4, 0xCE79, 0xCE79, 0xCE79, 0xCE79, 0xCE79, 0xCE79, 0xCE79, 0xCE79, 0xE8E4, 0x0000, 0x0000, 0xCE79,   // 0x0040 (64)
0xCE79, 0xCE79, 0xCE79, 0xCE79, 0xE8E4, 0xCE79, 0xCE79, 0xCE79, 0xCE79, 0xCE79, 0xCE79, 0xE8E4, 0xCE79, 0x0000, 0x0000, 0xCE79,   // 0x0050 (80)
0xCE79, 0xCE79, 0xCE79, 0xCE79, 0xCE79, 0xE8E4, 0xCE79, 0xCE79, 0xCE79, 0xCE79, 0xE8E4, 0x0000, 0xCE79, 0x0000, 0x0000, 0xCE79,   // 0x0060 (96)
0xCE79, 0xCE79, 0xCE79, 0xCE79, 0xCE79, 0xCE79, 0xE8E4, 0xCE79, 0xCE79, 0xE8E4, 0x0000, 0x0000, 0xCE79, 0x0000, 0x0000, 0xCE79,   // 0x0070 (112)
0xCE79, 0xCE79, 0xCE79, 0xCE79, 0xCE79, 0xCE79, 0xCE79, 0xE8E4, 0xE8E4, 0xCE79, 0x0000, 0x0000, 0xCE79, 0x0000, 0x0000, 0xCE79,   // 0x0080 (128)
0xCE79, 0xCE79, 0xCE79, 0xCE79, 0xCE79, 0xCE79, 0xCE79, 0xE8E4, 0xE8E4, 0xCE79, 0x0000, 0x0000, 0xCE79, 0x0000, 0x0000, 0xCE79,   // 0x0090 (144)
0xCE79, 0xCE79, 0xCE79, 0xCE79, 0x0000, 0x0000, 0xE8E4, 0x0000, 0x0000, 0xE8E4, 0x0000, 0x0000, 0xCE79, 0x0000, 0x0000, 0xCE79,   // 0x00A0 (160)
0xCE79, 0xCE79, 0xCE79, 0xCE79, 0x0000, 0xE8E4, 0xCE79, 0x0000, 0x0000, 0xCE79, 0xE8E4, 0x0000, 0xCE79, 0x0000, 0x0000, 0xCE79,   // 0x00B0 (176)
0xCE79, 0x0000, 0x0000, 0xCE79, 0xE8E4, 0x0000, 0xCE79, 0x0000, 0x0000, 0xCE79, 0x0000, 0xE8E4, 0xCE79, 0x0000, 0x0000, 0xCE79,   // 0x00C0 (192)
0xCE79, 0x0000, 0x0000, 0xE8E4, 0x0000, 0x0000, 0xCE79, 0x0000, 0x0000, 0xCE79, 0x0000, 0x0000, 0xE8E4, 0x0000, 0x0000, 0xCE79,   // 0x00D0 (208)
0xCE79, 0xCE79, 0xE8E4, 0xCE79, 0xCE79, 0xCE79, 0xCE79, 0xCE79, 0xCE79, 0xCE79, 0xCE79, 0xCE79, 0xCE79, 0xE8E4, 0xCE79, 0xCE79,   // 0x00E0 (224)
0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF,
0xCE79, 0xE8E4, 0xCE79, 0xCE79, 0xCE79, 0xCE79, 0xCE79, 0xCE79, 0xCE79, 0xCE79, 0xCE79, 0xCE79, 0xCE79, 0xCE79, 0xE8E4, 0xCE79,
};
