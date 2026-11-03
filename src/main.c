#include "main.h"
#include <libgraph.h>
#include <libdma.h>
#include <libdev.h>

#define SCE_GS_ALPHA_GREATER (6)
#define SCE_GS_FALSE         (0)
#define SCE_GS_TRUE          (1)
#define SCE_GS_NONE          (0)

extern void FlushCache(int);
extern void sceVpu0Reset();
extern void MEM_InitAllocation();
extern void TIMER_InitTimer();
extern void gsPad_Init();

extern sceGsDBuff gDb;
extern long gsPixelTest;

static void InitSif();
static void SetDefaultGsEnv();

INCLUDE_ASM("asm/nonmatchings/main", main);

INCLUDE_ASM("asm/nonmatchings/main", SelectTest);

static inline void set_rgbaq(sceGsRgbaq* reg, int r, int g, int b, int a, float q)
{
    reg->R = r;
    reg->G = g;
    reg->B = b;
    reg->A = a;
    reg->Q = q;
}

static void InitSystem()
{
    InitSif();
    FlushCache(0);
    MEM_InitAllocation();
    sceGsSyncV(0);
    sceGsResetPath();
    sceDmaReset(1);
    sceVpu0Reset();
    sceGsSyncV(0);
    sceGsResetGraph(0, 1, 2, 1);
    sceGsSyncV(0);
    sceGsSetDefDBuff(&gDb, 0, 0x200, 0xE0, 2, 0x31, 1);

    set_rgbaq(&gDb.clear0.rgbaq, 0, 0, 0, -0x80, 1.0f);
    set_rgbaq(&gDb.clear1.rgbaq, 0, 0, 0, -0x80, 1.0f);

    gsPixelTest = SCE_GS_SET_TEST(SCE_GS_TRUE, SCE_GS_ALPHA_GREATER, SCE_GS_FALSE, SCE_GS_NONE, SCE_GS_FALSE, SCE_GS_NONE, SCE_GS_TRUE, SCE_GS_ZGEQUAL);
    *(u_long*)&gDb.draw0.test1 = SCE_GS_SET_TEST(SCE_GS_TRUE, SCE_GS_ALPHA_GREATER, SCE_GS_FALSE, SCE_GS_NONE, SCE_GS_FALSE, SCE_GS_NONE, SCE_GS_TRUE, SCE_GS_ZGEQUAL);
    *(u_long*)&gDb.draw1.test1 = SCE_GS_SET_TEST(SCE_GS_TRUE, SCE_GS_ALPHA_GREATER, SCE_GS_FALSE, SCE_GS_NONE, SCE_GS_FALSE, SCE_GS_NONE, SCE_GS_TRUE, SCE_GS_ZGEQUAL);

    FlushCache(0);
    SetDefaultGsEnv();
    gsPad_Init();
    TIMER_InitTimer();
    sceDevConsInit();

    gConsole = sceDevConsOpen(0x7200, 0x7A00, 0x4B, 0x23);
    sceDevConsClear(gConsole);
}

INCLUDE_ASM("asm/nonmatchings/main", InitSif);

INCLUDE_ASM("asm/nonmatchings/main", SetDefaultGsEnv);

static void EndSystem() 
{
    sceDevConsClose(gConsole);
    
    gsPad_End();
    
    MEM_EndAllocation();
}

void _gsMuteki_INIT() 
{
    
}

INCLUDE_ASM("asm/nonmatchings/main", _gsMuteki_EXEC);

void _gsMuteki_END() 
{

}

INCLUDE_ASM("asm/nonmatchings/main", _gsOmakePower_INIT);

INCLUDE_ASM("asm/nonmatchings/main", _gsOmakePower_EXEC);

void _gsOmakePower_END() 
{ 

}
