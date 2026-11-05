#include "common.h"
#include "hoya/option/g_option.h"
#include "hoya/hoya.h"
#include "g_shock.h"
#include "gunsuv_usa/libgf/gfinstance.h"
#include "g_parts.h"
#include "g_camera.h"
#include "perfmon.h"

extern int optManager[];
extern char optManagerD[];
extern int gsExtProgNext;
extern int gsNextProg;
typedef struct { void (*init)(); void (*main)(); void (*end)(); } HyPrgInfo;
extern HyPrgInfo gOptPrgInfo[];
extern int prgMan[];
extern GF_INSTANCE gHoyaNull;
extern char gNull_002c6740[];
extern char gsCamRotMatrix[];
extern char gScene[];
extern char gScreen[];
extern float cam_rot_002af8a0[];
extern float cam_trans_002af8b0[];
void LetsGotoOptionScene(int n)
{
    int* om = optManager;

    om[2] = (int)optManagerD;

    if (n != -1)
    {
        *om = n;
    }

    if ((u_int)n < 8)
    {
        gsExtProgNext = 1;
    }
    else
    {
        gsNextProg = 10;
    }
}

void ReleaseOptionScene(void) {
}

int gsOPTION_Draw1(int a)
{
    return a;
}

int gsOPTION_Draw2(int a)
{
    return a;
}

INCLUDE_ASM("asm/nonmatchings/hoya/option/g_option", gsStageInit_OPTION);

INCLUDE_ASM("asm/nonmatchings/hoya/option/g_option", gsStageExec_OPTION);

INCLUDE_ASM("asm/nonmatchings/hoya/option/g_option", gsStageInit_OPTION_STAGE);

void gsStageExec_OPTION_STAGE()
{
    int* pm;

    KeyStateUpdate(0);
    GunStateUpdate();
    GFInstance_Start();
    GFInstance_Eval(&gHoyaNull);
    GFInstance_End();

    pm = prgMan;

    if (pm[0] == pm[1])
    {
        gOptPrgInfo[pm[1]].main();
    }
    else
    {
        gOptPrgInfo[pm[1]].end();
        gOptPrgInfo[pm[0]].init();
        pm[1] = pm[0];
    }

    gsShockManagement();
}
