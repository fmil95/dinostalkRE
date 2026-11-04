#include "common.h"

extern int memcManager;
extern int gsNextProg;

extern int tex2dSendFlag_0067447c;
void LetsGotoMemcScene(int a)
{
    if (a != -1)
    {
        memcManager = a;
    }

    gsNextProg = 0xe;
}

void LetsGotoMemcScene4Continue(int a)
{
    if (a != -1)
    {
        memcManager = 0x63;
    }

    gsNextProg = 0xe;
}

void PermittoSendMcTex(u_int i)
{
    if (i < 3)
    {
        tex2dSendFlag_0067447c |= 1 << i;
    }
}

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/g_memc", Send2McTex);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/g_memc", gsMEMC_Draw1);

int gsMEMC_Draw2(int a)
{
    return a;
}

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/g_memc", gsStageInit_MEMC);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/g_memc", gsStageExec_MEMC);
