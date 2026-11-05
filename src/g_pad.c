#include "common.h"

#include <libpad.h>
typedef struct { int w[22]; } PadWork;
extern PadWork D_002F18A4[];

extern int _us_key_exchange();
extern int _us_get_port_g_pad();
extern int _us_key_exchange2();
extern u_char gPadShockData[4];
extern u_char gPadActAlign[6];
extern PadWork D_002F18E0[];
extern int _us_key_tbl[];
extern PadWork gsPadData[];
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

int _us_key_exchange(int k)
{
    int i;
    int bit = 0x10;
    int r = 0;

    for (i = 0; i < 4; i++)
    {
        if (k & bit)
        {
            r |= _us_key_tbl[i];
        }
        bit <<= 1;
    }

    k &= ~0xF0;
    return k | r;
}

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

int gsPad_AGet(int a)
{
    int p = _us_get_port_g_pad(a);
    int k = 0;

    if (!(gsPadData[p].w[5] & 0xF000))
    {
        k = gsPadData[p].w[10];
    }

    return _us_key_exchange2(_us_key_exchange(k));
}

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

void gsPadAlignDataInit()
{
    int i;

    for (i = 0; i < 6; i++)
    {
        gPadActAlign[i] = 0xFF;
    }

    gPadActAlign[0] = 0;
    gPadActAlign[1] = 1;
}

INCLUDE_ASM("asm/nonmatchings/g_pad", gsPadDataInit);

int gsPadGetAnalog2Digital(int n)
{
    u_char* p = (u_char*)&D_002F18E0[n];
    u_char x = p[0xA];
    u_char y = p[0xB];
    int r = (x < 0x20) << 15;

    if (x >= 0xE0)
    {
        r |= 0x2000;
    }
    if (y < 0x20)
    {
        r |= 0x1000;
    }
    if (y >= 0xE0)
    {
        r |= 0x4000;
    }

    return r;
}

INCLUDE_ASM("asm/nonmatchings/g_pad", gsPadSetTrgRepeat);

INCLUDE_ASM("asm/nonmatchings/g_pad", gsPadSetATrgRepeat);
