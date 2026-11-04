#include "common.h"

extern void sceVu0CopyVector();
extern void sceVu0CopyVector();

extern int gsPartComp[];
extern void _gsIK_InitDataHead();
extern int _gsIK_CompGroundData;
INCLUDE_ASM("asm/nonmatchings/benjamin/ik_comp", _gsIK_CompInit);

void _gsIK_CompUpdateData(void* a, void* b)
{
    sceVu0CopyVector((char*)a + 0xDC0, (char*)b + 0x30);
    sceVu0CopyVector((char*)a + 0xD90, b);
    STRUCT_OFFSET(a, 0xE28, int) = STRUCT_OFFSET(b, 0x98, int);
}

INCLUDE_ASM("asm/nonmatchings/benjamin/ik_comp", _gsIK_CompResetInfo);

INCLUDE_ASM("asm/nonmatchings/benjamin/ik_comp", _gsIK_CompHeadStare);

INCLUDE_ASM("asm/nonmatchings/benjamin/ik_comp", _gsIK_CompFootMoveL);

INCLUDE_ASM("asm/nonmatchings/benjamin/ik_comp", _gsIK_CompFootMoveR);

void _gsIK_CompSetHit(void* a, int i)
{
    STRUCT_OFFSET(a, 0xD58, int) |= gsPartComp[i];
    STRUCT_OFFSET(a, 0xD5C, int) |= gsPartComp[i];
}
