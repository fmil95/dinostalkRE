#include "common.h"

extern int gpCShadowMicro;
extern float gpCShadowFarZ;
extern float gpCShadowAlpha;
extern int gpCShadowBegin;
extern int gpCShadowBefore;

extern char* gpCShadow_SetGsRegs();
extern void _GFPKT_DV_CNT_FLUSH();
extern void _GFPKT_DV_CNT_MSCAL_FLUSH();
void gpCShadow_Init(int a, float x, float y)
{
    gpCShadowMicro = a;
    gpCShadowFarZ = x;
    gpCShadowAlpha = y;
    gpCShadowBegin = 0;
    gpCShadowBefore = 0;
}

void gpCShadow_InitCShadow(void* a, int b)
{
    int before = gpCShadowBefore;

    STRUCT_OFFSET(a, 0x4, int) = b;
    STRUCT_OFFSET(a, 0x6030, int) = 0;
    STRUCT_OFFSET(a, 0x0, int) = 0;

    if (before)
    {
        STRUCT_OFFSET(before, 0x6030, int) = (int)a;
    }
    else
    {
        gpCShadowBegin = (int)a;
    }

    gpCShadowBefore = (int)a;
}

INCLUDE_ASM("asm/nonmatchings/g_cshadow", gpCShadow_Draw);

char* gpCShadow_InitPacket(char* a)
{
    char* p = gpCShadow_SetGsRegs(a, 0);

    _GFPKT_DV_CNT_FLUSH(p, 0);
    p += 0x10;
    _GFPKT_DV_CNT_MSCAL_FLUSH(p, 0, 0);
    return p + 0x10;
}

INCLUDE_ASM("asm/nonmatchings/g_cshadow", gpCShadow_CalcAlpha);

INCLUDE_ASM("asm/nonmatchings/g_cshadow", gpCShadow_MakePacket);

INCLUDE_ASM("asm/nonmatchings/g_cshadow", gpCShadow_SetGsRegs);

INCLUDE_ASM("asm/nonmatchings/g_cshadow", gpCShadow_GetHitTriangle);

INCLUDE_ASM("asm/nonmatchings/g_cshadow", gpCShadow_GetNearTriangles);

INCLUDE_ASM("asm/nonmatchings/g_cshadow", gpCShadow_AddTriList);

INCLUDE_ASM("asm/nonmatchings/g_cshadow", gpCShadow_GetChangeMatrix);

INCLUDE_ASM("asm/nonmatchings/g_cshadow", gpCShadow_GetTexST);
