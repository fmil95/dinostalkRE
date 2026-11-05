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

void gsFootPoint_InitFootPoint(int* f)
{
    int* b = (int*)gsFootPointBefore;

    f[0] = 0;
    f[0x1930 / 4] = 0;
    f[1] = 0;
    f[2] = 0;

    if (b)
    {
        b[0x1930 / 4] = (int)f;
    }
    else
    {
        gsFootPointBegin = (int)f;
    }

    gsFootPointBefore = (int)f;
}

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
INCLUDE_RODATA("asm/nonmatchings/benjamin/g_footpoint", D_00666B30);

INCLUDE_RODATA("asm/nonmatchings/benjamin/g_footpoint", D_00666B60);

INCLUDE_RODATA("asm/nonmatchings/benjamin/g_footpoint", D_00666B90);

INCLUDE_RODATA("asm/nonmatchings/benjamin/g_footpoint", D_00666BC0);

INCLUDE_RODATA("asm/nonmatchings/benjamin/g_footpoint", D_00666BF0);

INCLUDE_RODATA("asm/nonmatchings/benjamin/g_footpoint", D_00666C20);

INCLUDE_RODATA("asm/nonmatchings/benjamin/g_footpoint", D_00666C50);

INCLUDE_RODATA("asm/nonmatchings/benjamin/g_footpoint", D_00666C80);

INCLUDE_RODATA("asm/nonmatchings/benjamin/g_footpoint", D_00666CB0);

INCLUDE_RODATA("asm/nonmatchings/benjamin/g_footpoint", D_00666CE0);

INCLUDE_RODATA("asm/nonmatchings/benjamin/g_footpoint", D_00666D10);

INCLUDE_RODATA("asm/nonmatchings/benjamin/g_footpoint", D_00666D40);

INCLUDE_RODATA("asm/nonmatchings/benjamin/g_footpoint", D_00666D70);

INCLUDE_RODATA("asm/nonmatchings/benjamin/g_footpoint", D_00666DA0);

INCLUDE_RODATA("asm/nonmatchings/benjamin/g_footpoint", D_00666DD0);

INCLUDE_RODATA("asm/nonmatchings/benjamin/g_footpoint", D_00666E00);

INCLUDE_RODATA("asm/nonmatchings/benjamin/g_footpoint", D_00666E30);

INCLUDE_RODATA("asm/nonmatchings/benjamin/g_footpoint", D_00666E60);

INCLUDE_RODATA("asm/nonmatchings/benjamin/g_footpoint", D_00666E90);

INCLUDE_RODATA("asm/nonmatchings/benjamin/g_footpoint", D_00666EC0);

INCLUDE_RODATA("asm/nonmatchings/benjamin/g_footpoint", D_00666EF0);

INCLUDE_RODATA("asm/nonmatchings/benjamin/g_footpoint", D_00666F20);

INCLUDE_RODATA("asm/nonmatchings/benjamin/g_footpoint", D_00666F50);

INCLUDE_RODATA("asm/nonmatchings/benjamin/g_footpoint", D_00666F80);

INCLUDE_RODATA("asm/nonmatchings/benjamin/g_footpoint", D_00666FB0);

INCLUDE_RODATA("asm/nonmatchings/benjamin/g_footpoint", D_00666FE0);

INCLUDE_RODATA("asm/nonmatchings/benjamin/g_footpoint", D_00667008);

INCLUDE_RODATA("asm/nonmatchings/benjamin/g_footpoint", D_00667030);

INCLUDE_RODATA("asm/nonmatchings/benjamin/g_footpoint", D_00667058);

INCLUDE_RODATA("asm/nonmatchings/benjamin/g_footpoint", D_00667080);

INCLUDE_RODATA("asm/nonmatchings/benjamin/g_footpoint", D_006670A8);

INCLUDE_RODATA("asm/nonmatchings/benjamin/g_footpoint", D_006670D0);

INCLUDE_RODATA("asm/nonmatchings/benjamin/g_footpoint", D_006670F8);

INCLUDE_RODATA("asm/nonmatchings/benjamin/g_footpoint", D_00667120);

INCLUDE_RODATA("asm/nonmatchings/benjamin/g_footpoint", D_00667148);

INCLUDE_RODATA("asm/nonmatchings/benjamin/g_footpoint", D_00667170);

INCLUDE_RODATA("asm/nonmatchings/benjamin/g_footpoint", D_00667198);

INCLUDE_RODATA("asm/nonmatchings/benjamin/g_footpoint", D_006671C0);

INCLUDE_RODATA("asm/nonmatchings/benjamin/g_footpoint", D_006671E8);

INCLUDE_RODATA("asm/nonmatchings/benjamin/g_footpoint", D_00667210);

INCLUDE_RODATA("asm/nonmatchings/benjamin/g_footpoint", D_00667238);

INCLUDE_RODATA("asm/nonmatchings/benjamin/g_footpoint", D_00667260);

INCLUDE_RODATA("asm/nonmatchings/benjamin/g_footpoint", D_00667288);

INCLUDE_RODATA("asm/nonmatchings/benjamin/g_footpoint", D_006672B0);

INCLUDE_RODATA("asm/nonmatchings/benjamin/g_footpoint", D_006672D8);

INCLUDE_RODATA("asm/nonmatchings/benjamin/g_footpoint", D_00667300);

INCLUDE_RODATA("asm/nonmatchings/benjamin/g_footpoint", D_00667328);

INCLUDE_RODATA("asm/nonmatchings/benjamin/g_footpoint", D_00667350);

