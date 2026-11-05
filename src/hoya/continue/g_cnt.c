#include "common.h"
#include "hoya/continue/g_cnt.h"
#include "hoya/continue/cntsub1.h"
#include "hoya/hoya.h"
#include "g_parts.h"
#include "g_effect.h"
#include "gunsuv_usa/libgf/gfinstance.h"

extern int prgMan[];
typedef struct { void (*init)(); void (*main)(); void (*end)(); } HyPrgInfo;
extern HyPrgInfo gCntPrgInfo[];
extern char gNull_002c6740[];
extern int frame;
void LetsGotoContinueScene(void) {
}

int gsCONTINUE_Draw1(int a)
{
    return a;
}

void* gsCONTINUE_Draw2(void* p)
{
    if (prgMan[0] == 1)
    {
        p = Draw2dObject2Cnt(p);
    }

    return p;
}

INCLUDE_ASM("asm/nonmatchings/hoya/continue/g_cnt", gsStageInit_CONTINUE);

void gsStageExec_CONTINUE()
{
    int* pm;

    KeyStateUpdate(0);
    GunStateUpdate();
    pm = prgMan;

    if (pm[2] & 1)
    {
        gsEffectBlurManagement(frame & 1);
        gsEffectFadeManagement(frame & 1);
    }

    GFInstance_Start();
    gpInstance_Eval(gNull_002c6740);
    GFInstance_End();

    if (pm[0] == pm[1])
    {
        gCntPrgInfo[pm[1]].main();
    }
    else
    {
        gCntPrgInfo[pm[1]].end();
        gCntPrgInfo[pm[0]].init();
        pm[1] = pm[0];
    }
}
