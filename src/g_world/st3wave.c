#include "common.h"

extern float waveRndVec;
extern float waveScrollX;
extern float waveScrollZ;
extern int gsWave_chgColTime;
extern char gsWave_chgColFlag;

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

INCLUDE_ASM("asm/nonmatchings/g_world/st3wave", gsSetRefTex);

INCLUDE_ASM("asm/nonmatchings/g_world/st3wave", gsWaveAvoidInit);

INCLUDE_ASM("asm/nonmatchings/g_world/st3wave", gsWaveAvoidEnd);

INCLUDE_ASM("asm/nonmatchings/g_world/st3wave", _gsWaveHandler);

INCLUDE_ASM("asm/nonmatchings/g_world/st3wave", gsWaveAvoidSetStart);

INCLUDE_ASM("asm/nonmatchings/g_world/st3wave", gsWaveAvoidSetEnd);

INCLUDE_ASM("asm/nonmatchings/g_world/st3wave", _gsWaveCollisionWater);

INCLUDE_ASM("asm/nonmatchings/g_world/st3wave", gsWaveCollisionWater);

void printVector(void) {
}

INCLUDE_ASM("asm/nonmatchings/g_world/st3wave", gsWaveMakeWave);

INCLUDE_ASM("asm/nonmatchings/g_world/st3wave", GFWave_MakeInstance);

INCLUDE_ASM("asm/nonmatchings/g_world/st3wave", GFWave_Draw);

INCLUDE_ASM("asm/nonmatchings/g_world/st3wave", gsSt3WaveChange);

void gsWave_ChgColStart()
{
    gsWave_chgColTime = 0;
    gsWave_chgColFlag = 1;
}

INCLUDE_ASM("asm/nonmatchings/g_world/st3wave", gsWave_ChgColExec);

INCLUDE_ASM("asm/nonmatchings/g_world/st3wave", gsWave_ChgColInit);
