#include "common.h"
#include "hoya/continue/g_cnt.h"
#include "hoya/continue/cntsub1.h"
#include "hoya/hoya.h"
#include "g_parts.h"
#include "g_effect.h"
#include "gunsuv_usa/libgf/gfinstance.h"
#include "sound/g_sound.h"
#include "hoya/g_string.h"

extern int prgMan[];
typedef struct { void (*init)(); void (*main)(); void (*end)(); } HyPrgInfo;
extern HyPrgInfo gCntPrgInfo[4];
extern char gNull_002c6740[];
extern int frame;
extern u_char gsClearRGBA[];
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

int gsStageInit_CONTINUE(int p)
{
    char* n;
    u_char* c;

    LetsGotoContinueScene();
    n = gNull_002c6740;
    STRUCT_OFFSET(n, 0xCC, int) = 0;
    GFInstance_InitHead((GF_INSTANCE*)n);
    hyLoadPigContinue();
    strInitStringManager();
    c = gsClearRGBA;
    c[1] = 0;
    c[3] = 0x80;
    c[2] = 0;
    c[0] = 0;
    gsSoundInitAll();
    gsSoundReadSe(0x1D);
    gsSoundReadWait();
    prgMan[2] = 0;
    prgMan[0] = 1;
    prgMan[1] = 1;
    gCntPrgInfo[1].init();
    return p;
}

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
