#include "common.h"

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/g_memc", LetsGotoMemcScene);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/g_memc", LetsGotoMemcScene4Continue);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/g_memc", PermittoSendMcTex);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/g_memc", Send2McTex);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/g_memc", gsMEMC_Draw1);

int gsMEMC_Draw2(int a)
{
    return a;
}

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/g_memc", gsStageInit_MEMC);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/g_memc", gsStageExec_MEMC);
