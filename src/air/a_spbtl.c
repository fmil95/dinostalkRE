#include "common.h"

typedef struct { char b[0x2A50]; } EnemyInfoS;
extern EnemyInfoS gsEnemyInfos[];
extern int SpBattleCount;
extern int SpBattleFlag;
extern short SingleSetNo;
extern int st3MainGroupNo;
extern void gsSpBattleBossSet();
extern void SetBossInfoNum();
extern void gsEventFlagOn();
extern short st3MainGroupIdx;
extern int st3LastSetIdx;
void gsSt1BossInit()
{
    SpBattleCount = 0x14;
    SpBattleFlag = 0;
    SingleSetNo = 0;
    st3MainGroupNo = 0;
    gsSpBattleBossSet(0x1E);
    SpBattleFlag |= 1;
    SetBossInfoNum(&SpBattleCount, 9);
}

INCLUDE_ASM("asm/nonmatchings/air/a_spbtl", gsSt1BossManagement);

void gsSt2_BattleInit_RAPT()
{
    SpBattleCount = 0x14;
    SetBossInfoNum(&SpBattleCount, 1);
    gsEventFlagOn(0x3F);
}

INCLUDE_ASM("asm/nonmatchings/air/a_spbtl", gsSt2_DieCheck_RAPT);

void gsSt3BossInit()
{
    SingleSetNo = -1;
    SpBattleCount = 0x14;
    SpBattleFlag = 0x110000;
    st3MainGroupIdx = 0;
    st3LastSetIdx = 0;
    SetBossInfoNum(&SpBattleCount, 0xF);
}

INCLUDE_ASM("asm/nonmatchings/air/a_spbtl", gsSt3BossManagement);

INCLUDE_ASM("asm/nonmatchings/air/a_spbtl", gsSt3BossReqCheck);

INCLUDE_ASM("asm/nonmatchings/air/a_spbtl", gsBossNumCount);

INCLUDE_ASM("asm/nonmatchings/air/a_spbtl", gsSt7_BattleInit_OBRAPT);

INCLUDE_ASM("asm/nonmatchings/air/a_spbtl", gsSt7_DieCheck_OBRAPT);

int gsGetCheckIdEnemyNum(int id)
{
    int n = 0;
    int i;

    for (i = 0; i < 10; i++)
    {
        if (STRUCT_OFFSET(&gsEnemyInfos[i], 0x0, int) & 1)
        {
            if (STRUCT_OFFSET(&gsEnemyInfos[i], 0x4C, int) == id)
            {
                n++;
            }
        }
    }

    return n;
}

INCLUDE_ASM("asm/nonmatchings/air/a_spbtl", gsSt3GetSetBossNum);

INCLUDE_ASM("asm/nonmatchings/air/a_spbtl", gsSpBattleBossSet);

void gsSt4_ExpInit()
{
    SpBattleCount = 0x28;
    SpBattleFlag = 0;
    SetBossInfoNum(&SpBattleCount, 5);
}

INCLUDE_ASM("asm/nonmatchings/air/a_spbtl", gsSt4_ExpManage);
