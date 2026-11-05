#include "common.h"
#include "hoya/mem_card/g_memc.h"
#include "gunsuv_usa/libgf/gftex.h"

extern int memcManager;
extern int gsNextProg;

extern int tex2dSendFlag_0067447c;
extern int memcPigTexId[];
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

qword* Send2McTex(qword* pkt)
{
    int i;

    for (i = 0; i < 32; i++)
    {
        int bit = 1 << i;

        if (tex2dSendFlag_0067447c & bit)
        {
            tex2dSendFlag_0067447c &= ~bit;
            pkt = GFTex_MakeTexturePacket(pkt, GFTex_GetDb(memcPigTexId[i]), 1);
        }
    }

    return pkt;
}

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/g_memc", gsMEMC_Draw1);

int gsMEMC_Draw2(int a)
{
    return a;
}

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/g_memc", gsStageInit_MEMC);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/g_memc", gsStageExec_MEMC);
