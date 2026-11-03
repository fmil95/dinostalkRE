#include "common.h"

INCLUDE_ASM("asm/nonmatchings/hoya/result/g_frslt", LetsGotoFinalResultScene);

INCLUDE_ASM("asm/nonmatchings/hoya/result/g_frslt", PermittoSendFrsltTex);

INCLUDE_ASM("asm/nonmatchings/hoya/result/g_frslt", Send2FrsltTex);

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
