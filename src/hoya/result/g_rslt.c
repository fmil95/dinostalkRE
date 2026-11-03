#include "common.h"

INCLUDE_ASM("asm/nonmatchings/hoya/result/g_rslt", LetsGotoResultScene);

INCLUDE_ASM("asm/nonmatchings/hoya/result/g_rslt", PermittoSendRsltTex);

INCLUDE_ASM("asm/nonmatchings/hoya/result/g_rslt", Send2RsltTex);

INCLUDE_ASM("asm/nonmatchings/hoya/result/g_rslt", gsRESULT_Draw1);

int gsRESULT_Draw2(int a)
{
    return a;
}

INCLUDE_ASM("asm/nonmatchings/hoya/result/g_rslt", gsStageInit_RESULT);

INCLUDE_ASM("asm/nonmatchings/hoya/result/g_rslt", gsStageExec_RESULT);
