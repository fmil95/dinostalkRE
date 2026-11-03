#include "common.h"

extern int tex2dSendFlag_00674788;
extern int tex2dSendFlag_00674788;
extern int tex2dSendFlag_00674788;

INCLUDE_ASM("asm/nonmatchings/hoya/result/g_rslt", LetsGotoResultScene);

void PermittoSendRsltTex(int a)
{
    if (a == 0)
    {
        tex2dSendFlag_00674788 = (tex2dSendFlag_00674788 | 0x1);
    }
}

INCLUDE_ASM("asm/nonmatchings/hoya/result/g_rslt", Send2RsltTex);

INCLUDE_ASM("asm/nonmatchings/hoya/result/g_rslt", gsRESULT_Draw1);

int gsRESULT_Draw2(int a)
{
    return a;
}

INCLUDE_ASM("asm/nonmatchings/hoya/result/g_rslt", gsStageInit_RESULT);

INCLUDE_ASM("asm/nonmatchings/hoya/result/g_rslt", gsStageExec_RESULT);
