#include "common.h"

#include <libpad.h>
typedef struct { int w[22]; } PadWork;
extern PadWork D_002F18A4[];

extern int _us_key_exchange();
extern int _us_get_port_g_pad();
extern int _us_key_exchange2();
extern u_char gPadShockData[4];
INCLUDE_ASM("asm/nonmatchings/g_pad", gsPad_Init);

INCLUDE_ASM("asm/nonmatchings/g_pad", gsPad_Reset);

int gsPad_End()
{
    scePadPortClose(1, 0);
    scePadPortClose(0, 0);
    scePadEnd();
    return 0;
}

INCLUDE_ASM("asm/nonmatchings/g_pad", _gsPad_changeByOpton);

INCLUDE_ASM("asm/nonmatchings/g_pad", gsPad_Update);

INCLUDE_ASM("asm/nonmatchings/g_pad", gsPad_Update2);

INCLUDE_ASM("asm/nonmatchings/g_pad", _us_key_exchange);

int _us_get_port_g_pad(int a)
{
    return a;
}

INCLUDE_ASM("asm/nonmatchings/g_pad", _us_key_exchange2);

int gsPad_GetNgc1(int a)
{
    int p = _us_get_port_g_pad(a);

    return _us_key_exchange(D_002F18A4[p].w[4]);
}

int gsPad_Get(int a)
{
    int p = _us_get_port_g_pad(a);

    return _us_key_exchange2(_us_key_exchange(D_002F18A4[p].w[4]));
}

int gsPad_GetTrgNgc1(int a)
{
    int p = _us_get_port_g_pad(a);

    return _us_key_exchange(D_002F18A4[p].w[5]);
}

int gsPad_GetTrg(int a)
{
    int p = _us_get_port_g_pad(a);

    return _us_key_exchange2(_us_key_exchange(D_002F18A4[p].w[5]));
}

int gsPad_GetRTrg(int a)
{
    int p = _us_get_port_g_pad(a);

    return _us_key_exchange2(_us_key_exchange(D_002F18A4[p].w[6]));
}

INCLUDE_ASM("asm/nonmatchings/g_pad", gsPad_AGet);

INCLUDE_ASM("asm/nonmatchings/g_pad", gsPad_AGetTrg);

INCLUDE_ASM("asm/nonmatchings/g_pad", gsPad_AGetRTrg);

int gsPad_Get2(int i)
{
    return D_002F18A4[i].w[14];
}

int gsPad_GetTrg2(int i)
{
    return D_002F18A4[i].w[15];
}

int gsPad_GetRTrg2(int i)
{
    return D_002F18A4[i].w[16];
}

int gsPad_GetState(int i)
{
    return D_002F18A4[i].w[2];
}

int gsPad_GetStep(int i)
{
    return D_002F18A4[i].w[0];
}

INCLUDE_ASM("asm/nonmatchings/g_pad", gsPadAdjustFree);

int gsPadSetAct(int n, u_char a, u_char b)
{
    int r = -1;
    if (n < 2)
    {
        gPadShockData[n * 2] = a;
        r = 0;
        gPadShockData[n * 2 + 1] = b;
    }
    return r;
}

INCLUDE_ASM("asm/nonmatchings/g_pad", gsPadAlignDataInit);

INCLUDE_ASM("asm/nonmatchings/g_pad", gsPadDataInit);

INCLUDE_ASM("asm/nonmatchings/g_pad", gsPadGetAnalog2Digital);

INCLUDE_ASM("asm/nonmatchings/g_pad", gsPadSetTrgRepeat);

INCLUDE_ASM("asm/nonmatchings/g_pad", gsPadSetATrgRepeat);
