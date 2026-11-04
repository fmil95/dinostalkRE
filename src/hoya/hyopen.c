#include "common.h"
#include "frozen_types.h"
#include "hoya/hyopen.h"

extern Unknown2 gsResult;
extern int D_002F1FC4[];

extern int rsltTblStandardDinoBonus[];
extern int rsltTblStandardNoDamageBonus[];
extern int weaponRank[];
extern int D_00535D74[][2];
extern int rsltTblStandardTimeBonus[][2];
int hyWepRankGetWeaponRank(int w)
{
    int i;

    for (i = 0; i < 22; i++)
    {
        if (w == weaponRank[i])
        {
            return i;
        }
    }

    return -1;
}

int hyWepRankGetWeaponNo(u_int i)
{
    int r = -1;

    if (i < 0x16)
    {
        r = weaponRank[i];
    }

    return r;
}

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

int GetResultStandardTimeBonus(u_int a, int b)
{
    int r = -1;

    if (a < 3)
    {
        if (b == 1 || b == 3 || b == 4)
        {
            r = D_00535D74[a][0];
        }
        else
        {
            r = rsltTblStandardTimeBonus[a][0];
        }
    }
    return r;
}

int GetResultStandardDinoBonus(u_int i)
{
    int r = -1;

    if (i < 3)
    {
        r = rsltTblStandardDinoBonus[i];
    }

    return r;
}

int GetResultStandardNoDamageBonus(u_int i)
{
    int r = -1;

    if (i < 3)
    {
        r = rsltTblStandardNoDamageBonus[i];
    }

    return r;
}
