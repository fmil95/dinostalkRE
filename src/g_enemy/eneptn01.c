#include "common.h"
extern int gsStageNo;
extern int St1BossFlg;
extern int LeaderNo;
extern int DieLeaderNo;

extern void eneptn01_ST1PuteraLeaderPtn();
extern void eneptn01_ST1PuteraNonLeaderPtn();
extern void leader_set();
INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn01", Enemy_RotLRChk00);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn01", Enemy_Forming);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn01", Enemy_FormingS);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn01", eneptn01_turn00);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn01", eneptn01_goleset00);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn01", eneptn01_uturn);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn01", eneptn01_cturn);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn01", eneptn01_back00);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn01", eneptn01_updown00);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn01", eneptn01_downgnd00);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn01", eneptn01_fastdown00);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn01", eneptn01_fastupdown00);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn01", eneptn01_fastup00);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn01", eneptn01_nowrotfly00);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn01", eneptn01_rotchange00);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn01", eneptn01_escape00);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn01", eneptn01_circfly00);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn01", eneptn01_cls00);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn01", obj_check);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn01", eneptn01_cls01);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn01", eneptn01_cls02);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn01", leader_getinfo);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn01", leader_check);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn01", leader_set);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn01", eneptn01_NowVecGLSET);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn01", eneptn01_NowPointRotGLSET);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn01", eneptn01_xzZeroRVSET);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn01", eneptn01_inCircleOrien);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn01", eneptn01_inCircleRVSET);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn01", eneptn01_playerVecROTSET);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn01", eneptn01_mureCenterSET);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn01", eneptn01_AtackAfterGLSET);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn01", eneptn01_HighSet);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn01", GetOrderNo);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn01", eneptn01_BoidMainProc);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn01", eneptn01_BoidCopyNear);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn01", eneptn01_BoidAcSet);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn01", eneptn01_BoidHighMove);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn01", AllCircleLoop);

void eneptn01_st1bossinit()
{
    if (gsStageNo == 0)
    {
        St1BossFlg = 0;
        LeaderNo = -1;
        DieLeaderNo = -2;
    }
}

void eneptn01_cls03(char* a)
{
    if (GetOrderNo(STRUCT_OFFSET(a, 0x28, short)) == 0)
    {
        leader_getinfo(a);
    }
    if (leader_check(a))
    {
        leader_set();
    }
    if (STRUCT_OFFSET(a, 0x28, short) == LeaderNo)
    {
        eneptn01_ST1PuteraLeaderPtn(a);
    }
    else
    {
        eneptn01_ST1PuteraNonLeaderPtn(a);
    }
}

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn01", eneptn01_ST1PuteraLeaderPtn);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn01", AttackCheck);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn01", eneptn01_ST1PuteraNonLeaderPtn);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn01", eneptn01_cls04);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn01", eneptn01_cls05);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn01", eneptn01_cls06);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn01", eneptn01_cls07);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn01", eneptn01_cls08);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn01", eneptn01_cls09);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn01", eneptn01_cls10);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn01", eneptn01_cls11);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn01", eneptn01_cls12);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn01", eneptn01_spmove00);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn01", eneptn01_attack01);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn01", eneptn01_attack02);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn01", eneptn01_attack02b);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn01", eneptn01_attack03);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn01", eneptn01_attack04);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn01", eneptn01_attack05);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn01", eneptn01_attack06);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn01", eneptn01_attack07);
