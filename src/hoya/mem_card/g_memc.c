#include "common.h"
#include "hoya/mem_card/g_memc.h"
#include "gunsuv_usa/libgf/gftex.h"
#include "hoya/hoya.h"
#include "g_parts.h"
#include "gunsuv_usa/libgf/gfinstance.h"

extern int memcManager;
extern int gsNextProg;

extern int tex2dSendFlag_0067447c;
extern int memcPigTexId[];
typedef struct { void (*init)(); void (*main)(); void (*end)(); } HyPrgInfo;
extern HyPrgInfo gMemcPrgInfo[];
extern int prgMan[];
extern char gNull_002c6740[];
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

void gsStageExec_MEMC()
{
    int* pm;

    KeyStateUpdate(0);
    GunStateUpdate();
    GFInstance_Start();
    gpInstance_Eval(gNull_002c6740);
    GFInstance_End();

    pm = prgMan;

    if (pm[0] == pm[1])
    {
        gMemcPrgInfo[pm[1]].main();
    }
    else
    {
        gMemcPrgInfo[pm[1]].end();
        gMemcPrgInfo[pm[0]].init();
        pm[1] = pm[0];
    }
}
