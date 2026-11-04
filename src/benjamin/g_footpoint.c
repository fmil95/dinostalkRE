#include "common.h"
extern int gsFootPointTexIndex[];

extern int gsFootPointBegin;
extern int gsFootPointBefore;
extern char gsFootPointInst[];
extern void GFInstance_Remove();

INCLUDE_ASM("asm/nonmatchings/benjamin/g_footpoint", gsFootPoint_Init);

INCLUDE_ASM("asm/nonmatchings/benjamin/g_footpoint", gsFootPoint_InitFootPoint);

INCLUDE_ASM("asm/nonmatchings/benjamin/g_footpoint", gsFootPoint_LoadTexture);

void gsFootPoint_Eval(void) {
}

INCLUDE_ASM("asm/nonmatchings/benjamin/g_footpoint", gsFootPoint_Draw);

void gsFootPoint_SetFootPoint(void* a, int i)
{
    STRUCT_OFFSET(a, 0x8, int) = gsFootPointTexIndex[i];
}

INCLUDE_ASM("asm/nonmatchings/benjamin/g_footpoint", gsFootPoint_InitPacket);

INCLUDE_ASM("asm/nonmatchings/benjamin/g_footpoint", gsFootPoint_MakePacket);

INCLUDE_ASM("asm/nonmatchings/benjamin/g_footpoint", gsFootPoint_SetGsRegs);

INCLUDE_ASM("asm/nonmatchings/benjamin/g_footpoint", gsFootPoint_PutFootPoint);

INCLUDE_ASM("asm/nonmatchings/benjamin/g_footpoint", gsFootPoint_GetNearTriangles);

INCLUDE_ASM("asm/nonmatchings/benjamin/g_footpoint", gsFootPoint_AddTriList);

INCLUDE_ASM("asm/nonmatchings/benjamin/g_footpoint", gsFootPoint_GetChangeMatrix);

INCLUDE_ASM("asm/nonmatchings/benjamin/g_footpoint", gsFootPoint_GetTexST);

void gsFootPoint_Remove()
{
    gsFootPointBegin = 0;
    gsFootPointBefore = 0;
    GFInstance_Remove(gsFootPointInst);
}
