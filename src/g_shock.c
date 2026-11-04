#include "common.h"

extern int gsShockIsOn;
extern void gsShockReset();

extern char gsShockInfo[];
extern int gsPadSetAct();
void gsShockInit()
{
    gsShockReset();
}

INCLUDE_ASM("asm/nonmatchings/g_shock", gsShockManagement);

int _us_get_port_g_shock(int a)
{
    return a;
}

INCLUDE_ASM("asm/nonmatchings/g_shock", gsShockSetSeqVel);

INCLUDE_ASM("asm/nonmatchings/g_shock", gsShockSetSeq);

INCLUDE_ASM("asm/nonmatchings/g_shock", gsShockSetSeqNo);

INCLUDE_ASM("asm/nonmatchings/g_shock", gsShockSetSeqNoVel);

void gsShockSetEnable(int v)
{
    gsShockIsOn = v;
}

void gsShockReset()
{
    int i;
    int off = 0;

    for (i = 0; i < 2; i++, off += 7)
    {
        char* p = gsShockInfo + off * 4;
        int j;

        for (j = 1; j >= 0; j--, p += 0xC)
        {
            STRUCT_OFFSET(p, 0, int) = 0;
            STRUCT_OFFSET(p, 4, int) = 0;
            STRUCT_OFFSET(p, 8, char) = 0;
            STRUCT_OFFSET(p, 0xA, short) = 0;
        }
        gsPadSetAct(i, 0, 0);
    }
}
