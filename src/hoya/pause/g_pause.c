#include "common.h"
#include "hoya/pause/g_pause.h"
#include "hoya/hoya.h"
#include "g_parts.h"
#include "g_camera.h"
#include "g_effect.h"
#include "perfmon.h"
#include "gunsuv_usa/libgf/gfinstance.h"
#include "gunsuv_usa/libgf/gfmodel.h"
#include "gunsuv_usa/libgf/gfobject.h"

extern int pauseManager[];
extern int gsExtProgNext;
extern int gsNextProg;
typedef struct { void (*init)(); void (*main)(); void (*end)(); } HyPrgInfo;
extern HyPrgInfo gPausePrgInfo[];
extern int prgMan[];
extern char gNull_002c6740[];
extern char gsCamRotMatrix[];
extern char gScene[];
extern char gScreen[];
extern float cam_rot_002af8a0[];
extern float cam_trans_002af8b0[];
extern char _hoya_itemobj[];
extern Uint32* _hoya_adr_itempod[];
extern int vu1work_00673cc4;
extern GF_MICRO gMicroShare;
extern GF_LIGHT gLight;
void LetsGotoPauseScene(int n)
{
    int* pm = pauseManager;

    if (n != -1)
    {
        *pm = n;
    }

    if ((u_int)n < 8)
    {
        gsExtProgNext = 0;
    }
    else
    {
        gsNextProg = 13;
    }
}

INCLUDE_ASM("asm/nonmatchings/hoya/pause/g_pause", PauseItemSet);

INCLUDE_ASM("asm/nonmatchings/hoya/pause/g_pause", PauseInfosClear);

qword* PauseCreateObjectPacket(qword* pkt, int i)
{
    char* m = _hoya_itemobj + i * 0x1C0;

    pkt = GFModel_MakePreset((GF_MODEL*)m, pkt, _hoya_adr_itempod[i], vu1work_00673cc4);
    GFObject_Init((GF_INST_OBJECT*)(m + 0x30));
    GFObject_AttachModel((GF_INST_OBJECT*)(m + 0x30), &gMicroShare, &gLight, 0, 0, (GF_MODEL*)m);
    return pkt;
}

INCLUDE_ASM("asm/nonmatchings/hoya/pause/g_pause", PauseItemObjectSet);

INCLUDE_ASM("asm/nonmatchings/hoya/pause/g_pause", PauseMakeItemInfo);

INCLUDE_ASM("asm/nonmatchings/hoya/pause/g_pause", PauseItemSetItems);

int gsPAUSE_Draw1(int a)
{
    return a;
}

int gsPAUSE_Draw2(int a)
{
    return a;
}

INCLUDE_ASM("asm/nonmatchings/hoya/pause/g_pause", gsStageInit_PAUSE);

INCLUDE_ASM("asm/nonmatchings/hoya/pause/g_pause", gsMoveCamera2);

void gsStageExec_PAUSE()
{
    int* pm;

    gsCameraCalcRotMatrix(gsCamRotMatrix, cam_rot_002af8a0);
    gsSetCameraMatrix(gScene, gsCamRotMatrix, cam_trans_002af8b0);
    PauseItemSetItems();
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
        gPausePrgInfo[pm[1]].main();
    }
    else
    {
        gPausePrgInfo[pm[1]].end();
        gPausePrgInfo[pm[0]].init();
        pm[1] = pm[0];
    }

    pfm_set(0x80);
}

INCLUDE_ASM("asm/nonmatchings/hoya/pause/g_pause", gsStageInit_PAUSE_STAGE);

INCLUDE_ASM("asm/nonmatchings/hoya/pause/g_pause", gsStageExec_PAUSE_STAGE);
