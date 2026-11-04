#include "common.h"
#include "frozen_types.h"

extern Unknown2 gsResult;
extern int D_002F1FC4[];
extern void gsResultAllInit();

extern int rsltTblStandardDinoBonus[];
extern int rsltTblStandardNoDamageBonus[];
extern int weaponRank[];
INCLUDE_ASM("asm/nonmatchings/hoya/hyopen", hyWepRankGetWeaponRank);

INCLUDE_ASM("asm/nonmatchings/hoya/hyopen", hyWepRankGetWeaponNo);

int hyGetStageNumber(int arg0)
{
    return ((int*)0x535A48)[arg0];
}

INCLUDE_ASM("asm/nonmatchings/hoya/hyopen", gsResultInit);

INCLUDE_ASM("asm/nonmatchings/hoya/hyopen", gsResultAllInit);

INCLUDE_ASM("asm/nonmatchings/hoya/hyopen", hyReflectResultData);

void hyReflectResultData_FROM_CONTINUE() 
{
    int stg_no, time;

    stg_no = hyGetStageNumber(gsResult.unk0);
    
    time = gsTimerGetPathTime();
    
    addNumber(&gsResult.unkC8[stg_no], time, ((60 * 60) * 100) - 1, 0);
}

INCLUDE_ASM("asm/nonmatchings/hoya/hyopen", gsOptionInit);

void gsPauseResetProc()
{
    D_002F1FC4[0] = 0;
    gsResultAllInit();
}

INCLUDE_ASM("asm/nonmatchings/hoya/hyopen", SetOptionScreenAdjust);

INCLUDE_ASM("asm/nonmatchings/hoya/hyopen", hyGetLimitTime);

INCLUDE_ASM("asm/nonmatchings/hoya/hyopen", GetResultRank);

INCLUDE_ASM("asm/nonmatchings/hoya/hyopen", GetResultStandardTimeBonus);

int GetResultStandardDinoBonus(u_int i)
{
    int r = -1;

    if (i < 3)
    {
        r = rsltTblStandardDinoBonus[i];
    }

    return r;
}

INCLUDE_ASM("asm/nonmatchings/hoya/hyopen", GetResultStandardNoDamageBonus);
