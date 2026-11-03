#include "common.h"

extern int oldProcNo;
extern int gsNextProg;

INCLUDE_ASM("asm/nonmatchings/hoya/title/g_title", LetsGotoTitle);

void LetsGotoStart(int a)
{
    if (a != -1)
    {
        oldProcNo = 0x62;
    }

    gsNextProg = 8;
}

void LetsGotoDaisakusen(void) {
}

void LetsGotoOpening(int a)
{
    if (a != -1)
    {
        oldProcNo = 0x63;
    }

    gsNextProg = 8;
}

INCLUDE_ASM("asm/nonmatchings/hoya/title/g_title", gsStageInit_TITLE);

INCLUDE_ASM("asm/nonmatchings/hoya/title/g_title", gsStageExec_TITLE);

void gsStageEnd_TITLE(void) {
}

int gsTITLE_Draw1(int a)
{
    return a;
}

INCLUDE_ASM("asm/nonmatchings/hoya/title/g_title", gsTITLE_Draw2);
