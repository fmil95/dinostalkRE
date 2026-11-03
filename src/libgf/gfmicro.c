#include "gunsuv_usa/libgf/gfmicro.h"

GF_MICRO* GFMicro_Init(GF_MICRO* micro)
{
    micro->micro  = NULL;
    micro->packet = NULL;

    return micro;
}

INCLUDE_ASM("asm/nonmatchings/libgf/gfmicro", GFMicro_MakePacket);

INCLUDE_ASM("asm/nonmatchings/libgf/gfmicro", GFMicro_Draw);
