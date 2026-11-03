#include "common.h"

extern int gsShockIsOn;

INCLUDE_ASM("asm/nonmatchings/g_shock", gsShockInit);

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

INCLUDE_ASM("asm/nonmatchings/g_shock", gsShockReset);
