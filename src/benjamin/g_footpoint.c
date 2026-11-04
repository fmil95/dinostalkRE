#include "common.h"
extern int gsFootPointTexIndex[];

extern int gsFootPointBegin;
extern int gsFootPointBefore;
extern char gsFootPointInst[];
extern void GFInstance_Remove();

extern int gsfootpointpig_files[];
extern int TEST_LoadTexture();
extern char* gsFootPoint_SetGsRegs();
extern void _GFPKT_DV_CNT_FLUSH();
extern void _GFPKT_DV_CNT_MSCAL_FLUSH();
INCLUDE_ASM("asm/nonmatchings/benjamin/g_footpoint", gsFootPoint_Init);

INCLUDE_ASM("asm/nonmatchings/benjamin/g_footpoint", gsFootPoint_InitFootPoint);

void gsFootPoint_LoadTexture(int i)
{
    gsFootPointTexIndex[i] = TEST_LoadTexture(gsfootpointpig_files[i], 1);
}

void gsFootPoint_Eval(void) {
}

INCLUDE_ASM("asm/nonmatchings/benjamin/g_footpoint", gsFootPoint_Draw);

void gsFootPoint_SetFootPoint(void* a, int i)
{
    STRUCT_OFFSET(a, 0x8, int) = gsFootPointTexIndex[i];
}

char* gsFootPoint_InitPacket(char* a)
{
    char* p = gsFootPoint_SetGsRegs(a, 0);

    _GFPKT_DV_CNT_FLUSH(p, 0);
    p += 0x10;
    _GFPKT_DV_CNT_MSCAL_FLUSH(p, 0, 0);
    return p + 0x10;
}

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
