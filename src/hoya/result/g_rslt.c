#include "common.h"
#include "hoya/result/g_rslt.h"
#include "gunsuv_usa/libgf/gftex.h"
#include "hoya/hoya.h"
#include "g_parts.h"
#include "gunsuv_usa/libgf/gfinstance.h"

extern int tex2dSendFlag_00674788;
extern int tex2dSendFlag_00674788;
extern int tex2dSendFlag_00674788;

extern int rsltPigTexId[1];
typedef struct { void (*init)(); void (*main)(); void (*end)(); } HyPrgInfo;
extern HyPrgInfo gRsltPrgInfo[];
extern int prgMan[];
extern char gNull_002c6740[];
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

void gsStageExec_RESULT()
{
    int* pm;

    KeyStateUpdate(0);
    GunStateUpdate();
    GFInstance_Start();
    gpInstance_Eval(gNull_002c6740);
    GFInstance_End();

    pm = prgMan;

    if (pm[0] == pm[1])
    {
        gRsltPrgInfo[pm[1]].main();
    }
    else
    {
        gRsltPrgInfo[pm[1]].end();
        gRsltPrgInfo[pm[0]].init();
        pm[1] = pm[0];
    }
}
