#include "common.h"

INCLUDE_ASM("asm/nonmatchings/hoya/name/g_name", LetsGotoNameScene);

INCLUDE_ASM("asm/nonmatchings/hoya/name/g_name", LetsGotoNameEntryScene);

int gsNAME_Draw1(int a)
{
    return a;
}

INCLUDE_ASM("asm/nonmatchings/hoya/name/g_name", gsNAME_Draw2);

INCLUDE_ASM("asm/nonmatchings/hoya/name/g_name", gsStageInit_NAME);

INCLUDE_ASM("asm/nonmatchings/hoya/name/g_name", gsStageExec_NAME);
