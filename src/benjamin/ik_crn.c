#include "common.h"
#include "benjamin/ik_crn.h"

extern void _gsIK_InitDataHead();

extern int gsPartCrn[];
void _gsIK_CrnInit(void* a)
{
    _gsIK_InitDataHead((char*)a + 0xD40);
}

INCLUDE_ASM("asm/nonmatchings/benjamin/ik_crn", _gsIK_CrnResetInfo);

void _gsIK_CrnSetHit(void* a, int i)
{
    STRUCT_OFFSET(a, 0xD58, int) |= gsPartCrn[i];
    STRUCT_OFFSET(a, 0xD5C, int) |= gsPartCrn[i];
}

INCLUDE_ASM("asm/nonmatchings/benjamin/ik_crn", _gsIK_CrnHeadStare);
