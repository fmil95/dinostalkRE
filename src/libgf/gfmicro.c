#include "common.h"

int GFMicro_Init(void* a)
{
    STRUCT_OFFSET(a, 0x0, int) = 0;
    STRUCT_OFFSET(a, 0x4, int) = 0;
    return a;
}

INCLUDE_ASM("asm/nonmatchings/libgf/gfmicro", GFMicro_MakePacket);

INCLUDE_ASM("asm/nonmatchings/libgf/gfmicro", GFMicro_Draw);
