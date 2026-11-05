#include "common.h"
#include "gunsuv_usa/libgf/gfscene.h"
#include "gunsuv_usa/libgf/libgf.h"
#include "mem.h"
#include "timer.h"
#include "g_plane.h"
#include "g_test.h"
#include <libgraph.h>
#include <eekernel.h>
#include "hoya/g_test2.h"
#include "g_guncon2/g_guncon2.h"
#include "hoya/continue/g_cnt.h"
#include "hoya/mem_card/g_memc.h"
#include "hoya/modesel/gsModeselect.h"
#include "hoya/name/g_name.h"
#include "hoya/option/g_option.h"
#include "hoya/pause/g_pause.h"
#include "hoya/result/g_frslt.h"
#include "hoya/result/g_rslt.h"
#include "hoya/startgs3/g_stgs.h"
#include "hoya/title/g_title.h"
#include "perfmon.h"
#include "sound/g_sound.h"

extern int stgsOldProcNo;

extern int gsFrame;
extern int frame;
extern int gsStageNo;
extern int gsPause;
extern sceGsDBuff gDb;
extern GF_SCREEN gTest2Screen;
extern GF_SCREEN gScreen;
INCLUDE_ASM("asm/nonmatchings/hoya/g_test2", hySetVram);

INCLUDE_RODATA("asm/nonmatchings/hoya/g_test2", D_0066A140);

void G_TTL_Init()
{
    gsFrame = frame;
    pfm_init(1);
    GF_InitGraphicsFramework();
    gplInitPlane();

    switch (gsStageNo)
    {
    case 0xD:
        hySetVram(1);
        break;
    case 0xF:
        hySetVram(2);
        break;
    default:
        hySetVram(0);
        break;
    }

    gsGuncon2_Init();

    while (TIMER_GetTimer(0) < 0x9E);

    gsGuncon2_Exec();
    gsPause = 0;

    switch (gsStageNo)
    {
    case 10:
        gsObjPack.cur = gsStageInit_TITLE(gsObjPack.cur);
        break;
    case 11:
        gsObjPack.cur = gsStageInit_RESULT(gsObjPack.cur);
        break;
    case 12:
        gsObjPack.cur = gsStageInit_FRESULT(gsObjPack.cur);
        break;
    case 13:
        gsObjPack.cur = gsStageInit_OPTION(gsObjPack.cur);
        break;
    case 14:
        gsObjPack.cur = gsStageInit_CONTINUE(gsObjPack.cur);
        break;
    case 15:
        gsObjPack.cur = gsStageInit_PAUSE(gsObjPack.cur);
        break;
    case 16:
        gsObjPack.cur = gsStageInit_NAME(gsObjPack.cur);
        break;
    case 17:
        gsObjPack.cur = gsStageInit_MEMC(gsObjPack.cur);
        break;
    case 18:
        gsObjPack.cur = gsStageInit_STARTGS3(gsObjPack.cur);
        break;
    case 27:
        gsObjPack.cur = gsStageInit_ModeSelect(gsObjPack.cur);
        break;
    }

    sceGsSyncV(0);
    FlushCache(0);
    sceGsSwapDBuff(&gDb, 0);
    FlushCache(0);
    sceGsSwapDBuff(&gDb, 1);
    MEM_CheckViolation();
}

INCLUDE_ASM("asm/nonmatchings/hoya/g_test2", G_TTL_Exec);

void G_TTL_End()
{
    gsStageEnd_TITLE();
    gsSoundClose();
    sceGsSyncPath(0, 0);
    pfm_end();
    GF_EndGraphicsFramework();
    MEM_FreeAll();
}

void G_RESULT_Init()
{
    G_TTL_Init();
}

void G_RESULT_Exec()
{
    G_TTL_Exec();
}

void G_RESULT_End()
{
    gsSoundClose();
    sceGsSyncPath(0, 0);
    pfm_end();
    GF_EndGraphicsFramework();
    MEM_FreeAll();
}

void G_FRESULT_Init()
{
    G_TTL_Init();
}

void G_FRESULT_Exec()
{
    G_TTL_Exec();
}

void G_FRESULT_End()
{
    gScreen = gTest2Screen;
    gsSoundClose();
    sceGsSyncPath(0, 0);
    pfm_end();
    GF_EndGraphicsFramework();
    MEM_FreeAll();
}

void G_OPTION_Init()
{
    G_TTL_Init();
}

void G_OPTION_Exec()
{
    G_TTL_Exec();
}

void G_OPTION_End()
{
    gsSoundClose();
    sceGsSyncPath(0, 0);
    pfm_end();
    GF_EndGraphicsFramework();
    MEM_FreeAll();
}

void G_CONTINUE_Init()
{
    G_TTL_Init();
}

void G_CONTINUE_Exec()
{
    G_TTL_Exec();
}

void G_CONTINUE_End()
{
    gsSoundClose();
    sceGsSyncPath(0, 0);
    pfm_end();
    GF_EndGraphicsFramework();
    MEM_FreeAll();
}

void G_PAUSE_Init()
{
    G_TTL_Init();
}

void G_PAUSE_Exec()
{
    G_TTL_Exec();
}

void G_PAUSE_End()
{
    gsSoundClose();
    gScreen = gTest2Screen;
    sceGsSyncPath(0, 0);
    pfm_end();
    GF_EndGraphicsFramework();
    MEM_FreeAll();
}

void G_NAME_Init()
{
    G_TTL_Init();
}

void G_NAME_Exec()
{
    G_TTL_Exec();
}

void G_NAME_End()
{
    gScreen = gTest2Screen;
    gsSoundClose();
    sceGsSyncPath(0, 0);
    pfm_end();
    GF_EndGraphicsFramework();
    MEM_FreeAll();
}

void G_MEMC_Init()
{
    G_TTL_Init();
}

void G_MEMC_Exec()
{
    G_TTL_Exec();
}

void G_MEMC_End()
{
    gScreen = gTest2Screen;
    gsSoundClose();
    sceGsSyncPath(0, 0);
    pfm_end();
    GF_EndGraphicsFramework();
    MEM_FreeAll();
}

void G_MODESEL_Init()
{
    G_TTL_Init();
}

void G_MODESEL_Exec()
{
    G_TTL_Exec();
}

void G_MODESEL_End()
{
    gScreen = gTest2Screen;
    gsSoundClose();
    sceGsSyncPath(0, 0);
    pfm_end();
    GF_EndGraphicsFramework();
    MEM_FreeAll();
}

void G_STARTGS3_Init()
{
    G_TTL_Init();
}

void G_STARTGS3_Exec()
{
    G_TTL_Exec();
}

void G_STARTGS3_End()
{
    stgsOldProcNo = 0;
    gsSoundClose();
    sceGsSyncPath(0, 0);
    pfm_end();
    GF_EndGraphicsFramework();
    MEM_FreeAll();
}

INCLUDE_ASM("asm/nonmatchings/hoya/g_test2", gsHoyaPause_Init);

INCLUDE_ASM("asm/nonmatchings/hoya/g_test2", gsHoyaPause_Exec);

INCLUDE_ASM("asm/nonmatchings/hoya/g_test2", gsHoyaPause_Init2);

void gsHoyaPause_End()
{
    sceGsSyncPath(0, 0);
    GF_EndGraphicsFramework();
    MEM_FreeAll();
}

INCLUDE_ASM("asm/nonmatchings/hoya/g_test2", gsHoyaObjItemDataLoad);

INCLUDE_ASM("asm/nonmatchings/hoya/g_test2", gsHoyaOption_Init);

INCLUDE_ASM("asm/nonmatchings/hoya/g_test2", gsHoyaOption_Exec);

INCLUDE_ASM("asm/nonmatchings/hoya/g_test2", gsHoyaOption_Init2);

void gsHoyaOption_End()
{
    sceGsSyncPath(0, 0);
    GF_EndGraphicsFramework();
    MEM_FreeAll();
}
INCLUDE_RODATA("asm/nonmatchings/hoya/g_test2", D_0066A230);

