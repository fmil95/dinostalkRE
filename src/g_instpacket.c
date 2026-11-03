#include "common.h"

INCLUDE_ASM("asm/nonmatchings/g_instpacket", GFSetpkt_MakeInstance);

INCLUDE_ASM("asm/nonmatchings/g_instpacket", GFSetpkt_SetPacket0);

INCLUDE_ASM("asm/nonmatchings/g_instpacket", GFSetpkt_SetPacket1);

INCLUDE_ASM("asm/nonmatchings/g_instpacket", GFSetpkt_SetPacket);

INCLUDE_ASM("asm/nonmatchings/g_instpacket", GFSetpkt_SetRefInst);

INCLUDE_ASM("asm/nonmatchings/g_instpacket", GFSetpkt_Eval);

INCLUDE_ASM("asm/nonmatchings/g_instpacket", GFSetpkt_Draw);

INCLUDE_ASM("asm/nonmatchings/g_instpacket", GFDrawenv_MakeInstance);

void GFDrawenv_SetDb(void* p, int v)
{
    STRUCT_OFFSET(p, 0x100, int) = v;
}

void GFDrawenv_SetClearZ(void* p, short v)
{
    STRUCT_OFFSET(p, 0x104, short) = v;
}

void GFDrawenv_SetClearRGB(void* p, short v)
{
    STRUCT_OFFSET(p, 0x106, short) = v;
}

INCLUDE_ASM("asm/nonmatchings/g_instpacket", GFDrawenv_Draw);
