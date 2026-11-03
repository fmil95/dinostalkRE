#include "common.h"

extern void _gsIK_InitDataHead();

void _gsIK_PrsoInit(void* a)
{
    _gsIK_InitDataHead((char*)a + 0xD40);
}

INCLUDE_ASM("asm/nonmatchings/benjamin/ik_prso", _gsIK_PrsoResetInfo);

INCLUDE_ASM("asm/nonmatchings/benjamin/ik_prso", _gsIK_PrsoSetHit);

INCLUDE_ASM("asm/nonmatchings/benjamin/ik_prso", _gsIK_PrsoHeadStare);
