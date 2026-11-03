#include "common.h"

extern void G_TTL_Exec();
extern void G_TTL_Init();

INCLUDE_ASM("asm/nonmatchings/hoya/g_test2", hySetVram);

INCLUDE_ASM("asm/nonmatchings/hoya/g_test2", G_TTL_Init);

INCLUDE_ASM("asm/nonmatchings/hoya/g_test2", G_TTL_Exec);

INCLUDE_ASM("asm/nonmatchings/hoya/g_test2", G_TTL_End);

INCLUDE_ASM("asm/nonmatchings/hoya/g_test2", G_RESULT_Init);

INCLUDE_ASM("asm/nonmatchings/hoya/g_test2", G_RESULT_Exec);

INCLUDE_ASM("asm/nonmatchings/hoya/g_test2", G_RESULT_End);

void G_FRESULT_Init()
{
    G_TTL_Init();
}

void G_FRESULT_Exec()
{
    G_TTL_Exec();
}

INCLUDE_ASM("asm/nonmatchings/hoya/g_test2", G_FRESULT_End);

INCLUDE_ASM("asm/nonmatchings/hoya/g_test2", G_OPTION_Init);

INCLUDE_ASM("asm/nonmatchings/hoya/g_test2", G_OPTION_Exec);

INCLUDE_ASM("asm/nonmatchings/hoya/g_test2", G_OPTION_End);

void G_CONTINUE_Init()
{
    G_TTL_Init();
}

void G_CONTINUE_Exec()
{
    G_TTL_Exec();
}

INCLUDE_ASM("asm/nonmatchings/hoya/g_test2", G_CONTINUE_End);

INCLUDE_ASM("asm/nonmatchings/hoya/g_test2", G_PAUSE_Init);

INCLUDE_ASM("asm/nonmatchings/hoya/g_test2", G_PAUSE_Exec);

INCLUDE_ASM("asm/nonmatchings/hoya/g_test2", G_PAUSE_End);

INCLUDE_ASM("asm/nonmatchings/hoya/g_test2", G_NAME_Init);

INCLUDE_ASM("asm/nonmatchings/hoya/g_test2", G_NAME_Exec);

INCLUDE_ASM("asm/nonmatchings/hoya/g_test2", G_NAME_End);

INCLUDE_ASM("asm/nonmatchings/hoya/g_test2", G_MEMC_Init);

INCLUDE_ASM("asm/nonmatchings/hoya/g_test2", G_MEMC_Exec);

INCLUDE_ASM("asm/nonmatchings/hoya/g_test2", G_MEMC_End);

INCLUDE_ASM("asm/nonmatchings/hoya/g_test2", G_MODESEL_Init);

INCLUDE_ASM("asm/nonmatchings/hoya/g_test2", G_MODESEL_Exec);

INCLUDE_ASM("asm/nonmatchings/hoya/g_test2", G_MODESEL_End);

INCLUDE_ASM("asm/nonmatchings/hoya/g_test2", G_STARTGS3_Init);

INCLUDE_ASM("asm/nonmatchings/hoya/g_test2", G_STARTGS3_Exec);

INCLUDE_ASM("asm/nonmatchings/hoya/g_test2", G_STARTGS3_End);

INCLUDE_ASM("asm/nonmatchings/hoya/g_test2", gsHoyaPause_Init);

INCLUDE_ASM("asm/nonmatchings/hoya/g_test2", gsHoyaPause_Exec);

INCLUDE_ASM("asm/nonmatchings/hoya/g_test2", gsHoyaPause_Init2);

INCLUDE_ASM("asm/nonmatchings/hoya/g_test2", gsHoyaPause_End);

INCLUDE_ASM("asm/nonmatchings/hoya/g_test2", gsHoyaObjItemDataLoad);

INCLUDE_ASM("asm/nonmatchings/hoya/g_test2", gsHoyaOption_Init);

INCLUDE_ASM("asm/nonmatchings/hoya/g_test2", gsHoyaOption_Exec);

INCLUDE_ASM("asm/nonmatchings/hoya/g_test2", gsHoyaOption_Init2);

INCLUDE_ASM("asm/nonmatchings/hoya/g_test2", gsHoyaOption_End);
