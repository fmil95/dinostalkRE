#include "common.h"
#include "pad.h"

extern int gPad[1];
extern int gPadTrg[1];
extern int scePadPortClose();
extern int scePadPortClose();
extern int scePadEnd();

INCLUDE_ASM("asm/nonmatchings/pad", PAD_InitPad);

int PAD_EndPad()
{
    scePadPortClose(1, 0);
    scePadPortClose(0, 0);
    scePadEnd();
    return 0;
}

INCLUDE_ASM("asm/nonmatchings/pad", PAD_UpdatePad);

int PAD_GetPad(int a)
{
    return gPad[a];
}

int PAD_GetPadTrg(int a)
{
    return gPadTrg[a];
}
