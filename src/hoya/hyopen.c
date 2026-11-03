#include "common.h"
#include "frozen_types.h"

extern Unknown2 gsResult;

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

INCLUDE_ASM("asm/nonmatchings/hoya/hyopen", gsPauseResetProc);

INCLUDE_ASM("asm/nonmatchings/hoya/hyopen", SetOptionScreenAdjust);

INCLUDE_ASM("asm/nonmatchings/hoya/hyopen", hyGetLimitTime);

INCLUDE_ASM("asm/nonmatchings/hoya/hyopen", GetResultRank);

INCLUDE_ASM("asm/nonmatchings/hoya/hyopen", GetResultStandardTimeBonus);

INCLUDE_ASM("asm/nonmatchings/hoya/hyopen", GetResultStandardDinoBonus);

INCLUDE_ASM("asm/nonmatchings/hoya/hyopen", GetResultStandardNoDamageBonus);
