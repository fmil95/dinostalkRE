#include "common.h"
#include "hoya/result/g_rslt.h"
#include "gunsuv_usa/libgf/gftex.h"

extern int tex2dSendFlag_00674788;
extern int tex2dSendFlag_00674788;
extern int tex2dSendFlag_00674788;

extern int rsltPigTexId[1];
INCLUDE_ASM("asm/nonmatchings/hoya/result/g_rslt", LetsGotoResultScene);

void PermittoSendRsltTex(int a)
{
    if (a == 0)
    {
        tex2dSendFlag_00674788 = (tex2dSendFlag_00674788 | 0x1);
    }
}

qword* Send2RsltTex(qword* pkt)
{
    int i;

    for (i = 0; i < 32; i++)
    {
        int bit = 1 << i;

        if (tex2dSendFlag_00674788 & bit)
        {
            tex2dSendFlag_00674788 &= ~bit;
            pkt = GFTex_MakeTexturePacket(pkt, GFTex_GetDb(rsltPigTexId[i]), 1);
        }
    }

    return pkt;
}

INCLUDE_ASM("asm/nonmatchings/hoya/result/g_rslt", gsRESULT_Draw1);

int gsRESULT_Draw2(int a)
{
    return a;
}

INCLUDE_ASM("asm/nonmatchings/hoya/result/g_rslt", gsStageInit_RESULT);

INCLUDE_ASM("asm/nonmatchings/hoya/result/g_rslt", gsStageExec_RESULT);
