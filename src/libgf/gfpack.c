#include "gunsuv_usa/libgf/gfpack.h"

void GFPack_InitBuf(GF_PACKET* pm, qword* p, Sint32 size)
{
    pm->top  = p;
    pm->cur  = p;
    pm->size = size;
}

INCLUDE_ASM("asm/nonmatchings/libgf/gfpack", GFPack_ResetBuf);

INCLUDE_ASM("asm/nonmatchings/libgf/gfpack", GFPacket_Add);

INCLUDE_ASM("asm/nonmatchings/libgf/gfpack", GFPacket_KickDma);
