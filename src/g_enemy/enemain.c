#include "common.h"

extern int _VlcnCnt;
extern void sceVu0SubVector();
extern void gsSoundPlaySE_WORLD();
extern void sceVu0AddVector();
extern void gsEffectAddWithPri();
extern void Enemy_PsInfInt();

extern int Enemy_DataLoadExceptPmt();
extern void Enemy_PmtDtLoad();
typedef struct { char b[0x40]; } PoisonInfoS;
extern PoisonInfoS gsPoisonInfos[];
extern int gspmt_files[];
extern int FIO_ReadFile_Align();
extern void Enemy_PmtDataSet();
typedef struct { char b[0x2A50]; } EnemyInfoS;
extern EnemyInfoS gsEnemyInfos[];
INCLUDE_ASM("asm/nonmatchings/g_enemy/enemain", Enemy_Main);

INCLUDE_ASM("asm/nonmatchings/g_enemy/enemain", Enemy_PauseProc);

INCLUDE_ASM("asm/nonmatchings/g_enemy/enemain", Enemy_AnmStpOrStt);

INCLUDE_ASM("asm/nonmatchings/g_enemy/enemain", Enemy_AllWorkInit);

INCLUDE_ASM("asm/nonmatchings/g_enemy/enemain", Enemy_AllWkIntReLd);

INCLUDE_ASM("asm/nonmatchings/g_enemy/enemain", Enemy_WorkInit);

INCLUDE_ASM("asm/nonmatchings/g_enemy/enemain", enemy_everydtset);

INCLUDE_ASM("asm/nonmatchings/g_enemy/enemain", Enemy_MkObjDt);

INCLUDE_ASM("asm/nonmatchings/g_enemy/enemain", Enemy_ObjDtSet);

void Enemy_SeSet00(int a, int b)
{
    gsSoundPlaySE_WORLD(b, (char*)a + 0x270);
}

INCLUDE_ASM("asm/nonmatchings/g_enemy/enemain", Enemy_Prt);

INCLUDE_ASM("asm/nonmatchings/g_enemy/enemain", Enemy_SarchEmptyWk);

INCLUDE_ASM("asm/nonmatchings/g_enemy/enemain", Enemy_RequestSet);

INCLUDE_ASM("asm/nonmatchings/g_enemy/enemain", Enemy_AllReqest);

INCLUDE_ASM("asm/nonmatchings/g_enemy/enemain", Enemy_AllReqest_LvSet);

INCLUDE_ASM("asm/nonmatchings/g_enemy/enemain", Enemy_HowManySet);

INCLUDE_ASM("asm/nonmatchings/g_enemy/enemain", Enemy_DelCheck);

INCLUDE_ASM("asm/nonmatchings/g_enemy/enemain", Enemy_plbkchk);

void ene_mvdummy(void) {
}

INCLUDE_ASM("asm/nonmatchings/g_enemy/enemain", enemy_movemain);

INCLUDE_ASM("asm/nonmatchings/g_enemy/enemain", enemy_positionset);

INCLUDE_ASM("asm/nonmatchings/g_enemy/enemain", Enemy_AnmChg00);

INCLUDE_ASM("asm/nonmatchings/g_enemy/enemain", Enemy_AnmChg01);

INCLUDE_ASM("asm/nonmatchings/g_enemy/enemain", Enemy_ActChg00);

INCLUDE_ASM("asm/nonmatchings/g_enemy/enemain", enemy_rotadd);

void enemy_veadd(int a)
{
    sceVu0AddVector((char*)a + 0x1C0, (char*)a + 0x1C0, (char*)a + 0x1D0);
}

INCLUDE_ASM("asm/nonmatchings/g_enemy/enemain", Enemy_BltHitPosChk);

INCLUDE_ASM("asm/nonmatchings/g_enemy/enemain", Enemy_DmgHitCheck);

INCLUDE_ASM("asm/nonmatchings/g_enemy/enemain", enemy_blowoffcnt);

INCLUDE_ASM("asm/nonmatchings/g_enemy/enemain", enemy_hitbloodset);

INCLUDE_ASM("asm/nonmatchings/g_enemy/enemain", enemy_obrptitemdrop);

INCLUDE_ASM("asm/nonmatchings/g_enemy/enemain", enemy_godmgact);

INCLUDE_ASM("asm/nonmatchings/g_enemy/enemain", Enemy_GoDmgInit);

INCLUDE_ASM("asm/nonmatchings/g_enemy/enemain", enemy_hitbkset00);

INCLUDE_ASM("asm/nonmatchings/g_enemy/enemain", enemy_hitbkset01);

INCLUDE_ASM("asm/nonmatchings/g_enemy/enemain", enemy_hitbkset02);

INCLUDE_ASM("asm/nonmatchings/g_enemy/enemain", Enemy_ObjNeedCheck);

INCLUDE_ASM("asm/nonmatchings/g_enemy/enemain", Enemy_ObjSort);

INCLUDE_ASM("asm/nonmatchings/g_enemy/enemain", Enemy_RgetByInpd);

void Enemy_MakeV()
{
    sceVu0SubVector();
}

INCLUDE_ASM("asm/nonmatchings/g_enemy/enemain", Enemy_MkUnitV00);

INCLUDE_ASM("asm/nonmatchings/g_enemy/enemain", Enemy_Op2Plen00);

INCLUDE_ASM("asm/nonmatchings/g_enemy/enemain", Enemy_OpVInPd00);

INCLUDE_ASM("asm/nonmatchings/g_enemy/enemain", Enemy_Op3PInPd00);

INCLUDE_ASM("asm/nonmatchings/g_enemy/enemain", Enemy_OpVLRChk00);

INCLUDE_ASM("asm/nonmatchings/g_enemy/enemain", Enemy_OpVLRChk01);

INCLUDE_ASM("asm/nonmatchings/g_enemy/enemain", Enemy_OpVChlMkR);

INCLUDE_ASM("asm/nonmatchings/g_enemy/enemain", Enemy_AttackHitChk);

INCLUDE_ASM("asm/nonmatchings/g_enemy/enemain", Enemy_OpMkEyeLine);

INCLUDE_ASM("asm/nonmatchings/g_enemy/enemain", Enemy_HighToGnd);

INCLUDE_ASM("asm/nonmatchings/g_enemy/enemain", Enemy_GetClsGnd00);

INCLUDE_ASM("asm/nonmatchings/g_enemy/enemain", Enemy_GetNearGdT00);

INCLUDE_ASM("asm/nonmatchings/g_enemy/enemain", Enemy_ObstacleCheck00);

INCLUDE_ASM("asm/nonmatchings/g_enemy/enemain", Enemy_ObstacleCheck01);

INCLUDE_ASM("asm/nonmatchings/g_enemy/enemain", Enemy_CheckWall);

INCLUDE_ASM("asm/nonmatchings/g_enemy/enemain", enemy_dinohitchk);

INCLUDE_ASM("asm/nonmatchings/g_enemy/enemain", enemy_gndtouchch);

INCLUDE_ASM("asm/nonmatchings/g_enemy/enemain", enemy_objtouchch);

INCLUDE_ASM("asm/nonmatchings/g_enemy/enemain", enemy_v0grdchk);

INCLUDE_ASM("asm/nonmatchings/g_enemy/enemain", gsEnemyDelete);

INCLUDE_ASM("asm/nonmatchings/g_enemy/enemain", Enemy_ShadowChk);

int Enemy_AllDataLoad(int a, int b)
{
    int r = Enemy_DataLoadExceptPmt(a);

    Enemy_PmtDtLoad(b);

    return r;
}

INCLUDE_ASM("asm/nonmatchings/g_enemy/enemain", Enemy_DataLoadExceptPmt);

void Enemy_PmtDtLoad(int i)
{
    if (i <= 0x10)
    {
        Enemy_PmtDataSet(FIO_ReadFile_Align(gspmt_files[i], 0x40), i);
    }
}

INCLUDE_ASM("asm/nonmatchings/g_enemy/enemain", Enemy_PmtDataSet);

INCLUDE_ASM("asm/nonmatchings/g_enemy/enemain", Enemy_PmtDataCopy);

INCLUDE_ASM("asm/nonmatchings/g_enemy/enemain", Enemy_EveryStgDtLd);

INCLUDE_ASM("asm/nonmatchings/g_enemy/enemain", Enemy_BossDtLd);

INCLUDE_ASM("asm/nonmatchings/g_enemy/enemain", Enemy_NeedPrtInfSet);

INCLUDE_ASM("asm/nonmatchings/g_enemy/enemain", Enemy_ShdFtpSet);

INCLUDE_ASM("asm/nonmatchings/g_enemy/enemain", Enemy_PoisonMain);

void Enemy_AllPsInfInt()
{
    int i;

    for (i = 0; i < 20; i++)
    {
        Enemy_PsInfInt(&gsPoisonInfos[i]);
    }
}

INCLUDE_ASM("asm/nonmatchings/g_enemy/enemain", Enemy_PsInfInt);

int Enemy_SarchEmptyPsInf()
{
    int i;

    for (i = 0; i < 20; i++)
    {
        if ((STRUCT_OFFSET(&gsPoisonInfos[i], 0x0, int) & 1) == 0)
        {
            return i;
        }
    }

    return -1;
}

INCLUDE_ASM("asm/nonmatchings/g_enemy/enemain", enemy_poisonmv);

INCLUDE_ASM("asm/nonmatchings/g_enemy/enemain", Enemy_PoisonShoot);

void Enemy_PsGunHit(int a)
{
    gsEffectAddWithPri((char*)a + 0x10, 0, 0x87, 0);
    Enemy_PsInfInt(a);
}

INCLUDE_ASM("asm/nonmatchings/g_enemy/enemain", enemy_psgrdhitchk);

INCLUDE_ASM("asm/nonmatchings/g_enemy/enemain", enemy_psobjhitchk);

INCLUDE_ASM("asm/nonmatchings/g_enemy/enemain", Enemy_GrdSeEffSet);

INCLUDE_ASM("asm/nonmatchings/g_enemy/enemain", Enemy_SeWkInit);

INCLUDE_ASM("asm/nonmatchings/g_enemy/enemain", Enemy_SeReq);

INCLUDE_ASM("asm/nonmatchings/g_enemy/enemain", Enemy_SetSeMain);

INCLUDE_ASM("asm/nonmatchings/g_enemy/enemain", ST9TREX_DmgHitCheck);

INCLUDE_ASM("asm/nonmatchings/g_enemy/enemain", Enemy_SchOkNgSetDel);

INCLUDE_ASM("asm/nonmatchings/g_enemy/enemain", enemy_deadshotmain);

INCLUDE_ASM("asm/nonmatchings/g_enemy/enemain", Enemy_MaxEneNoChg);

INCLUDE_ASM("asm/nonmatchings/g_enemy/enemain", enemy_blthitseset);

INCLUDE_ASM("asm/nonmatchings/g_enemy/enemain", Enemy_DelDethPrcInit);

INCLUDE_ASM("asm/nonmatchings/g_enemy/enemain", Enemy_DelDethPrcMain);

INCLUDE_ASM("asm/nonmatchings/g_enemy/enemain", Enemy_SetSmokeTrkr);

INCLUDE_ASM("asm/nonmatchings/g_enemy/enemain", Enemy_ColAlphaInit);

INCLUDE_ASM("asm/nonmatchings/g_enemy/enemain", Enemy_FlashingInit);

INCLUDE_ASM("asm/nonmatchings/g_enemy/enemain", Enemy_Flashing);

INCLUDE_ASM("asm/nonmatchings/g_enemy/enemain", Enemy_TrntyDethMoveInit);

void VolcanoInit()
{
    _VlcnCnt = 0;
}

void VolcanoMain(void) {
}

INCLUDE_ASM("asm/nonmatchings/g_enemy/enemain", enemy_plhitch);

INCLUDE_ASM("asm/nonmatchings/g_enemy/enemain", Enemy_PrtDetails);

INCLUDE_ASM("asm/nonmatchings/g_enemy/enemain", enemy_joke);
