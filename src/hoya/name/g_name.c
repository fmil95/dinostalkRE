#include "common.h"
#include "hoya/name/g_name.h"
#include "hoya/hoya.h"
#include "g_parts.h"
#include "g_camera.h"
#include "perfmon.h"
#include "gunsuv_usa/libgf/gfinstance.h"

extern int nameManager[];
extern int gsNextProg;
typedef struct { void (*init)(); void (*main)(); void (*end)(); } HyPrgInfo;
extern HyPrgInfo gNamePrgInfo[];
extern int prgMan[];
extern char gNull_002c6740[];
extern char gsCamRotMatrix[];
extern char gScene[];
extern char gScreen[];
extern float cam_rot_002af8a0[];
extern float cam_trans_002af8b0[];
void LetsGotoNameScene(int a)
{
    nameManager[2] = 0;

    if (a != -1)
    {
        nameManager[0] = a;
    }

    gsNextProg = 0x10;
}

void LetsGotoNameEntryScene(int a)
{
    nameManager[2] = 1;

    if (a != -1)
    {
        nameManager[0] = a;
    }

    gsNextProg = 0x10;
}

int gsNAME_Draw1(int a)
{
    return a;
}

int gsNAME_Draw2(int a)
{
    return a;
}

INCLUDE_ASM("asm/nonmatchings/hoya/name/g_name", gsStageInit_NAME);

void gsStageExec_NAME()
{
    int* pm;

    gsCameraCalcRotMatrix(gsCamRotMatrix, cam_rot_002af8a0);
    gsSetCameraMatrix(gScene, gsCamRotMatrix, cam_trans_002af8b0);
    KeyStateUpdate(0);
    GunStateUpdate();
    pfm_set(0x800000);
    gpClipShape(gScene, gScreen);
    GFInstance_Start();
    gpInstance_Eval(gNull_002c6740);
    GFInstance_End();
    gpClearWorldRecov(gScene);
    pfm_set(0x8000);

    pm = prgMan;

    if (pm[0] == pm[1])
    {
        gNamePrgInfo[pm[1]].main();
    }
    else
    {
        gNamePrgInfo[pm[1]].end();
        gNamePrgInfo[pm[0]].init();
        pm[1] = pm[0];
    }

    pfm_set(0x80);
}
