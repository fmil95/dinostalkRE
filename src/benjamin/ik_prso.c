#include "common.h"

extern void _gsIK_InitDataHead();

extern int gsPartPrso[];
void _gsIK_PrsoInit(void* a)
{
    _gsIK_InitDataHead((char*)a + 0xD40);
}

INCLUDE_ASM("asm/nonmatchings/benjamin/ik_prso", _gsIK_PrsoResetInfo);

void _gsIK_PrsoSetHit(void* a, int i)
{
    STRUCT_OFFSET(a, 0xD58, int) |= gsPartPrso[i];
    STRUCT_OFFSET(a, 0xD5C, int) |= gsPartPrso[i];
}

INCLUDE_ASM("asm/nonmatchings/benjamin/ik_prso", _gsIK_PrsoHeadStare);
