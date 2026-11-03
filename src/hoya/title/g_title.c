#include "common.h"

INCLUDE_ASM("asm/nonmatchings/hoya/title/g_title", LetsGotoTitle);

INCLUDE_ASM("asm/nonmatchings/hoya/title/g_title", LetsGotoStart);

void LetsGotoDaisakusen(void) {
}

INCLUDE_ASM("asm/nonmatchings/hoya/title/g_title", LetsGotoOpening);

INCLUDE_ASM("asm/nonmatchings/hoya/title/g_title", gsStageInit_TITLE);

INCLUDE_ASM("asm/nonmatchings/hoya/title/g_title", gsStageExec_TITLE);

void gsStageEnd_TITLE(void) {
}

int gsTITLE_Draw1(int a)
{
    return a;
}

INCLUDE_ASM("asm/nonmatchings/hoya/title/g_title", gsTITLE_Draw2);
