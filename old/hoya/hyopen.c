// STATUS: NOT STARTED

#include "hyopen.h"
#include "g_other.h"
#include "frozen_types.h"

int stageNumber[1];

Unknown2 gsResult;

hyWepRankGetWeaponRank() {}

hyWepRankGetWeaponNo() {}

/* 68% match */
int hyGetStageNumber(int arg0) 
{
    return stageNumber[arg0];
}

gsResultInit() {}

gsResultAllInit() {}

void hyReflectResultData() {}

/* 100% match */
void hyReflectResultData_FROM_CONTINUE() 
{
    int temp, temp2;

    temp = hyGetStageNumber(gsResult.unk0);
    
    temp2 = gsTimerGetPathTime();
    
    addNumber(&gsResult.unkC8[temp], temp2, (60 * 60 * 100) - 1, 0);
}

gsOptionInit() {}

gsPauseResetProc() {}

SetOptionScreenAdjust() {}

hyGetLimitTime() {}

GetResultRank() {}

GetResultStandardTimeBonus() {}

GetResultStandardDinoBonus() {}

GetResultStandardNoDamageBonus() {}
