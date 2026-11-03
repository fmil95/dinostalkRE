#include "common.h"

extern void _gsIK_InitDataHead();

void _gsIK_CrnInit(void* a)
{
    _gsIK_InitDataHead((char*)a + 0xD40);
}

INCLUDE_ASM("asm/nonmatchings/benjamin/ik_crn", _gsIK_CrnResetInfo);

INCLUDE_ASM("asm/nonmatchings/benjamin/ik_crn", _gsIK_CrnSetHit);

INCLUDE_ASM("asm/nonmatchings/benjamin/ik_crn", _gsIK_CrnHeadStare);
