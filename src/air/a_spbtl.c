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
INCLUDE_ASM("asm/nonmatchings/air/a_spbtl", gsSt1BossInit);

INCLUDE_ASM("asm/nonmatchings/air/a_spbtl", gsSt1BossManagement);

INCLUDE_ASM("asm/nonmatchings/air/a_spbtl", gsSt2_BattleInit_RAPT);

INCLUDE_ASM("asm/nonmatchings/air/a_spbtl", gsSt2_DieCheck_RAPT);

INCLUDE_ASM("asm/nonmatchings/air/a_spbtl", gsSt3BossInit);

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

INCLUDE_ASM("asm/nonmatchings/air/a_spbtl", gsSt4_ExpInit);

INCLUDE_ASM("asm/nonmatchings/air/a_spbtl", gsSt4_ExpManage);
