#include "common.h"
#include "gunsuv_usa/libgf/gftex.h"
#include "hoya/hoya.h"
#include "g_parts.h"
#include "g_camera.h"
#include "g_effect.h"
#include "perfmon.h"
#include "gunsuv_usa/libgf/gfinstance.h"

extern int tex2dSendFlag_00674778;
extern int tex2dSendFlag_00674778;
extern int tex2dSendFlag_00674778;

extern int fRsltPigTexId[1];
typedef struct { void (*init)(); void (*main)(); void (*end)(); } HyPrgInfo;
extern HyPrgInfo gFRsltPrgInfo[];
extern int prgMan[];
extern char gNull_002c6740[];
extern char gsCamRotMatrix[];
extern char gScene[];
extern char gScreen[];
extern float cam_rot_002af8a0[];
extern float cam_trans_002af8b0[];
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

void gsStageExec_FRESULT()
{
    int* pm;

    gsCameraCalcRotMatrix(gsCamRotMatrix, cam_rot_002af8a0);
    gsSetCameraMatrix(gScene, gsCamRotMatrix, cam_trans_002af8b0);
    KeyStateUpdate(0);
    GunStateUpdate();
    pfm_set(0x800000);
    gpClipShape(gScene, gScreen);

    pm = prgMan;

    if (pm[2] & 1)
    {
        gsManagementEffect(&gsCamera, gScene + 0x100);
    }

    GFInstance_Start();
    gpInstance_Eval(gNull_002c6740);
    GFInstance_End();
    gpClearWorldRecov(gScene);
    pfm_set(0x8000);

    if (pm[0] == pm[1])
    {
        gFRsltPrgInfo[pm[1]].main();
    }
    else
    {
        gFRsltPrgInfo[pm[1]].end();
        gFRsltPrgInfo[pm[0]].init();
        pm[1] = pm[0];
    }

    pfm_set(0x80);
}
