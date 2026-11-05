#include "common.h"
#include "g_world/st3wave.h"
#include <libgraph.h>
#include <eekernel.h>

extern float waveRndVec;
extern float waveScrollX;
extern float waveScrollZ;
extern int gsWave_chgColTime;
extern char gsWave_chgColFlag;
extern char D_003E43A0[];
extern char waveColList[];
extern void sceVu0CopyVector();

extern char gf_default_instwave_drawfunc[];
extern char gf_default_instwave_evalfunc[];
extern void GFInstance_InitHead();
extern void* GFTex_GetDb();
extern int refTexAddr;
extern int gsIntHID;
INCLUDE_ASM("asm/nonmatchings/g_world/st3wave", gsWaveScrollX);

INCLUDE_ASM("asm/nonmatchings/g_world/st3wave", gsWaveScrollZ);

INCLUDE_ASM("asm/nonmatchings/g_world/st3wave", gsWaveMovePos);

void gsWaveSetScroll(float x, float y)
{
    waveScrollX = x;
    waveScrollZ = y;
}

INCLUDE_ASM("asm/nonmatchings/g_world/st3wave", gsWaveInit);

INCLUDE_ASM("asm/nonmatchings/g_world/st3wave", gsWaveCalc);

INCLUDE_ASM("asm/nonmatchings/g_world/st3wave", gsMoveWave);

INCLUDE_ASM("asm/nonmatchings/g_world/st3wave", gsWaveMakeScrollWave);

void gsWaveSetWaveSize(float v)
{
    waveRndVec = v;
}

INCLUDE_ASM("asm/nonmatchings/g_world/st3wave", gsWaveGetHeight);

void gsSetRefTex()
{
    u_long* db = GFTex_GetDb();

    db[8] = 5;
    refTexAddr = (int)(db[4] & 0x3FFF) >> 5;
}

void gsWaveAvoidInit()
{
    u_long imr = sceGsGetIMR();

    gsIntHID = AddIntcHandler(INTC_GS, _gsWaveHandler, 0);
    imr &= ~0x100;
    EnableIntc(INTC_GS);
    sceGsPutIMR(imr);
}

INCLUDE_ASM("asm/nonmatchings/g_world/st3wave", gsWaveAvoidEnd);

INCLUDE_ASM("asm/nonmatchings/g_world/st3wave", _gsWaveHandler);

INCLUDE_ASM("asm/nonmatchings/g_world/st3wave", gsWaveAvoidSetStart);

INCLUDE_ASM("asm/nonmatchings/g_world/st3wave", gsWaveAvoidSetEnd);

INCLUDE_ASM("asm/nonmatchings/g_world/st3wave", _gsWaveCollisionWater);

INCLUDE_ASM("asm/nonmatchings/g_world/st3wave", gsWaveCollisionWater);

void printVector(void) {
}

INCLUDE_ASM("asm/nonmatchings/g_world/st3wave", gsWaveMakeWave);

char* GFWave_MakeInstance(char* a)
{
    GFInstance_InitHead(a);
    STRUCT_OFFSET(a, 0xDC, char*) = gf_default_instwave_drawfunc;
    STRUCT_OFFSET(a, 0xD8, char*) = gf_default_instwave_evalfunc;
    STRUCT_OFFSET(a, 0xCC, int) = 6;
    STRUCT_OFFSET(a, 0xD0, int) = 0x40;
    STRUCT_OFFSET(a, 0x100, int) = 0;
    STRUCT_OFFSET(a, 0x104, short) = 0;
    STRUCT_OFFSET(a, 0x106, short) = 0;
    return a;
}

INCLUDE_ASM("asm/nonmatchings/g_world/st3wave", GFWave_Draw);

INCLUDE_ASM("asm/nonmatchings/g_world/st3wave", gsSt3WaveChange);

void gsWave_ChgColStart()
{
    gsWave_chgColTime = 0;
    gsWave_chgColFlag = 1;
}

INCLUDE_ASM("asm/nonmatchings/g_world/st3wave", gsWave_ChgColExec);

void gsWave_ChgColInit()
{
    gsWave_chgColFlag = 0;
    sceVu0CopyVector(D_003E43A0, waveColList);
}
