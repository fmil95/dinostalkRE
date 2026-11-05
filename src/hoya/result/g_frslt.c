#include "common.h"
#include "gunsuv_usa/libgf/gftex.h"

extern int tex2dSendFlag_00674778;
extern int tex2dSendFlag_00674778;
extern int tex2dSendFlag_00674778;

extern int fRsltPigTexId[1];
INCLUDE_ASM("asm/nonmatchings/hoya/result/g_frslt", LetsGotoFinalResultScene);

void PermittoSendFrsltTex(int a)
{
    if (a == 0)
    {
        tex2dSendFlag_00674778 = (tex2dSendFlag_00674778 | 0x1);
    }
}

qword* Send2FrsltTex(qword* pkt)
{
    int i;

    for (i = 0; i < 32; i++)
    {
        int bit = 1 << i;

        if (tex2dSendFlag_00674778 & bit)
        {
            tex2dSendFlag_00674778 &= ~bit;
            pkt = GFTex_MakeTexturePacket(pkt, GFTex_GetDb(fRsltPigTexId[i]), 1);
        }
    }

    return pkt;
}

void ReleaseFResultScene(void) {
}

INCLUDE_ASM("asm/nonmatchings/hoya/result/g_frslt", FRsltItemSet);

INCLUDE_ASM("asm/nonmatchings/hoya/result/g_frslt", FRsltInfosClear);

INCLUDE_ASM("asm/nonmatchings/hoya/result/g_frslt", FRsltCreateObjectPacket);

INCLUDE_ASM("asm/nonmatchings/hoya/result/g_frslt", FRsltItemObjectSet);

INCLUDE_ASM("asm/nonmatchings/hoya/result/g_frslt", FRsltMakeItemInfo);

INCLUDE_ASM("asm/nonmatchings/hoya/result/g_frslt", FRsltItemSetItems);

INCLUDE_ASM("asm/nonmatchings/hoya/result/g_frslt", gsFRESULT_Draw1);

int gsFRESULT_Draw2(int a)
{
    return a;
}

INCLUDE_ASM("asm/nonmatchings/hoya/result/g_frslt", gsStageInit_FRESULT);

INCLUDE_ASM("asm/nonmatchings/hoya/result/g_frslt", gsStageExec_FRESULT);
