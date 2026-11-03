#include "common.h"

void GFPack_InitBuf(void* a, int b, int c)
{
    STRUCT_OFFSET(a, 0x0, int) = b;
    STRUCT_OFFSET(a, 0x4, int) = b;
    STRUCT_OFFSET(a, 0x8, int) = c;
}

INCLUDE_ASM("asm/nonmatchings/libgf/gfpack", GFPack_ResetBuf);

INCLUDE_ASM("asm/nonmatchings/libgf/gfpack", GFPacket_Add);

INCLUDE_ASM("asm/nonmatchings/libgf/gfpack", GFPacket_KickDma);
