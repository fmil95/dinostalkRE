#include "common.h"

extern int memcManager;
extern int gsNextProg;

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/g_memc", LetsGotoMemcScene);

void LetsGotoMemcScene4Continue(int a)
{
    if (a != -1)
    {
        memcManager = 0x63;
    }

    gsNextProg = 0xe;
}

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/g_memc", PermittoSendMcTex);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/g_memc", Send2McTex);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/g_memc", gsMEMC_Draw1);

int gsMEMC_Draw2(int a)
{
    return a;
}

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/g_memc", gsStageInit_MEMC);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/g_memc", gsStageExec_MEMC);
