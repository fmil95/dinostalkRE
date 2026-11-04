#include "common.h"

extern void G_TTL_Exec();
extern void G_TTL_Init();
extern void sceGsSyncPath();
extern void GF_EndGraphicsFramework();
extern void MEM_FreeAll();
extern void gsSoundClose();
extern void pfm_end();
extern int stgsOldProcNo;
extern void gsStageEnd_TITLE();

INCLUDE_ASM("asm/nonmatchings/hoya/g_test2", hySetVram);

INCLUDE_RODATA("asm/nonmatchings/hoya/g_test2", D_0066A140);

INCLUDE_ASM("asm/nonmatchings/hoya/g_test2", G_TTL_Init);

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

INCLUDE_ASM("asm/nonmatchings/hoya/g_test2", G_FRESULT_End);

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

INCLUDE_ASM("asm/nonmatchings/hoya/g_test2", G_PAUSE_End);

void G_NAME_Init()
{
    G_TTL_Init();
}

void G_NAME_Exec()
{
    G_TTL_Exec();
}

INCLUDE_ASM("asm/nonmatchings/hoya/g_test2", G_NAME_End);

void G_MEMC_Init()
{
    G_TTL_Init();
}

void G_MEMC_Exec()
{
    G_TTL_Exec();
}

INCLUDE_ASM("asm/nonmatchings/hoya/g_test2", G_MEMC_End);

void G_MODESEL_Init()
{
    G_TTL_Init();
}

void G_MODESEL_Exec()
{
    G_TTL_Exec();
}

INCLUDE_ASM("asm/nonmatchings/hoya/g_test2", G_MODESEL_End);

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

