#include "common.h"

extern char gf_default_instdrawenv_drawfunc[];
extern char gf_default_instdrawenv_evalfunc[];
extern void GFInstance_InitHead();
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

int GFSetpkt_SetPacket(int a, int b, int c)
{
    if (!(((unsigned int)a < 2) == 0))
    {
        ((int*)((char*)b + 0x100))[a] = c;
    }

    return c;
}

void GFSetpkt_SetRefInst(void* p, int v)
{
    STRUCT_OFFSET(p, 0x108, int) = v;
}

INCLUDE_ASM("asm/nonmatchings/g_instpacket", GFSetpkt_Eval);

INCLUDE_ASM("asm/nonmatchings/g_instpacket", GFSetpkt_Draw);

char* GFDrawenv_MakeInstance(char* a)
{
    GFInstance_InitHead(a);
    STRUCT_OFFSET(a, 0xDC, char*) = gf_default_instdrawenv_drawfunc;
    STRUCT_OFFSET(a, 0xD8, char*) = gf_default_instdrawenv_evalfunc;
    STRUCT_OFFSET(a, 0xCC, int) = 6;
    STRUCT_OFFSET(a, 0xD0, int) = 0x40;
    STRUCT_OFFSET(a, 0x100, int) = 0;
    STRUCT_OFFSET(a, 0x104, short) = 0;
    STRUCT_OFFSET(a, 0x106, short) = 0;
    return a;
}

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
