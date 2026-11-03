#include "common.h"

extern int gPad[1];
extern int gPadTrg[1];

INCLUDE_ASM("asm/nonmatchings/pad", PAD_InitPad);

INCLUDE_ASM("asm/nonmatchings/pad", PAD_EndPad);

INCLUDE_ASM("asm/nonmatchings/pad", PAD_UpdatePad);

int PAD_GetPad(int a)
{
    return gPad[a];
}

int PAD_GetPadTrg(int a)
{
    return gPadTrg[a];
}
