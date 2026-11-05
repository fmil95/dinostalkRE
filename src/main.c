#include "main.h"
#include <libgraph.h>
#include <libdma.h>
#include <libdev.h>
#include <eekernel.h>
#include <stdlib.h>

#define SCE_GS_ALPHA_GREATER (6)
#define SCE_GS_FALSE         (0)
#define SCE_GS_TRUE          (1)
#define SCE_GS_NONE          (0)

extern void sceVpu0Reset();
extern void MEM_InitAllocation();
extern void TIMER_InitTimer();
extern void gsPad_Init();

typedef struct {
    /* 0x0 */ u_char stat;
    /* 0x1 */ u_char second;
    /* 0x2 */ u_char minute;
    /* 0x3 */ u_char hour;
    /* 0x4 */ u_char pad;
    /* 0x5 */ u_char day;
    /* 0x6 */ u_char month;
    /* 0x7 */ u_char year;
} sceCdCLOCK;

typedef struct {
    /* 0x00 */ int unk0;
    /* 0x04 */ void (*unk4)(int);
    /* 0x08 */ void (*unk8)();
    /* 0x0c */ void (*unkC)();
    /* 0x10 */ int unk10;
} TestInfo;

extern void TIMER_SetTimer(int arg0, int arg1, int arg2);
extern void TIMER_StartTimer(int arg0, int arg1);
extern void gsCameraSetParam_AFTER_STAGE();
extern void gsCameraSetParam_FROM_CONTINUE();
extern void gsCameraSetParam_START_GAME();
extern void gsCdvFlushWait();
extern void gsCdvMain();
extern void gsGuncon1_Init();
extern void gsGuncon1_InitAll();
extern void gsInitGunManager_START_GAME();
extern void gsOmakeInitManager();
extern void gsOmakeResetArmsFlag(int arg0, int arg1);
extern void gsOmakeSetArmsFlagAll(int arg0);
extern void gsOmakeSetFlag(int arg0);
extern void gsOptionInit();
extern void gsPad_Update();
extern void gsResultInit();
extern void hyReflectResultData_FROM_CONTINUE();
extern int sceCdReadClock(sceCdCLOCK* rtc);

extern sceGsDBuff gDb;
extern int frame;
extern TestInfo gTestInfo[];
extern unsigned int gsCurProg;
extern int gsMuteki;
extern unsigned int gsNextProg;
extern int gsStageNo;
extern int gsVRMode;
extern int gsVRMode_CNT;
extern int gsVRMode_STEP;
extern long gsPixelTest;

static void InitSystem();
static void InitSif();
static void SetDefaultGsEnv();

typedef struct { char b[12]; } OmakeMap;
extern OmakeMap _omake_map[];
extern int _omake_y;
int main()
{
    sceCdCLOCK rtc;

    InitSystem();
    gsGuncon1_InitAll();
    sceCdReadClock(&rtc);
    srand(rtc.second);
    gsOptionInit();
    gsResultInit();
    gsOmakeInitManager();
    gsCameraSetParam_START_GAME();
    gsInitGunManager_START_GAME();

    gsNextProg = 18;
    gsCurProg = 18;
    gsMuteki = 0;
    gsVRMode = 0;
    gsVRMode_STEP = 0;
    gsVRMode_CNT = 0;

    TIMER_SetTimer(0, 3, 0);

    do
    {
        frame = 0;

        if (gsCurProg != -1)
        {
            TIMER_StartTimer(0, 0);
            gsCdvFlushWait();
            gsGuncon1_Init();

            gsStageNo = gTestInfo[gsCurProg].unk10;
            gTestInfo[gsCurProg].unk4(gsStageNo);
        }

        sceGsSyncV(0);

        while (gsCurProg == gsNextProg)
        {
            TIMER_StartTimer(0, 0);
            gsPad_Update();
            sceDevConsClear(gConsole);
            sceDevConsLocate(gConsole, 0, 0);

            if (gsCurProg != -1)
            {
                gTestInfo[gsCurProg].unk8();
                gsCdvMain();
                rand();
            }
        }

        if (gsCurProg != -1)
        {
            gTestInfo[gsCurProg].unkC();
            gsCdvFlushWait();
        }

        if (gsCurProg == 15 || gsCurProg == 21 || gsCurProg == 22)
        {
            if (gsNextProg == 0)
            {
                gsOmakeInitManager();

                if (gsCurProg == 21)
                {
                    gsOmakeSetFlag(1);
                }
                else if (gsCurProg == 22)
                {
                    gsOmakeSetArmsFlagAll(1);
                    gsOmakeResetArmsFlag(0x13, 1);
                    gsOmakeResetArmsFlag(21, 1);
                }

                gsResultInit();
                gsCameraSetParam_START_GAME();
                gsInitGunManager_START_GAME();
            }
        }

        if (gsCurProg != 11)
        {
            if (gsNextProg >= 0 && gsNextProg < 8)
            {
                gsCameraSetParam_AFTER_STAGE();
            }
        }

        if (gsCurProg == 11)
        {
            if (gsNextProg >= 0 && gsNextProg < 8)
            {
                hyReflectResultData_FROM_CONTINUE();
                gsCameraSetParam_FROM_CONTINUE();
            }
        }

        gsCurProg = gsNextProg;
    } while (gsCurProg != 0x64);

    EndSystem();

    return 0;
}

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

void _gsOmakePower_INIT()
{
    int i;

    _omake_y = 0;

    for (i = 0; i < 20; i++)
    {
        _omake_map[i].b[8] = ' ';
    }
}

INCLUDE_ASM("asm/nonmatchings/main", _gsOmakePower_EXEC);

void _gsOmakePower_END() 
{ 

}
