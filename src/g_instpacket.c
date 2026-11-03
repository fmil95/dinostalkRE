#include "common.h"

INCLUDE_ASM("asm/nonmatchings/g_instpacket", GFSetpkt_MakeInstance);

int GFSetpkt_SetPacket0(void* a, int b)
{
    STRUCT_OFFSET(a, 0x100, int) = b;
    return b;
}

int GFSetpkt_SetPacket1(void* a, int b)
{
    STRUCT_OFFSET(a, 0x104, int) = b;
    return b;
}

INCLUDE_ASM("asm/nonmatchings/g_instpacket", GFSetpkt_SetPacket);

void GFSetpkt_SetRefInst(void* p, int v)
{
    STRUCT_OFFSET(p, 0x108, int) = v;
}

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
