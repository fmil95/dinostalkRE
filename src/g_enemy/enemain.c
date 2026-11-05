#include "common.h"
#include "g_enemy/enemain.h"
#include "sound/g_sound.h"

extern int _VlcnCnt;
extern void sceVu0SubVector();
extern void sceVu0AddVector();
extern void gsEffectAddWithPri();

extern void Enemy_PmtDtLoad();
typedef struct { char b[0x40]; } PoisonInfoS;
extern PoisonInfoS gsPoisonInfos[];
extern int gspmt_files[];
extern int FIO_ReadFile_Align();
typedef struct { char b[0x2A50]; } EnemyInfoS;
extern EnemyInfoS gsEnemyInfos[];
extern void GFInstance_Remove();
extern void (*enemy_movestbl[])();
typedef struct { char b[0x230]; } AnotherItemE;
extern AnotherItemE Another_Item[];
extern int* bulthitsetbl_9[];
extern short gsEnemy_Max;
extern u_int dinoanmmaxno[];
extern int pmtadr[][128];
INCLUDE_ASM("asm/nonmatchings/g_enemy/enemain", Enemy_Main);

INCLUDE_ASM("asm/nonmatchings/g_enemy/enemain", Enemy_PauseProc);

void Enemy_AnmStpOrStt(char* a, int on)
{
    char* p = a + 0xBA0;
    char* q = STRUCT_OFFSET(a, 0xD30, char*);
    int i;

    for (i = 0; i < STRUCT_OFFSET(p, 0x118, int); i++, q += 0x170)
    {
        if (!(STRUCT_OFFSET(a, 0x0, int) & 4))
        {
            if (on)
                STRUCT_OFFSET(q, 0x100, int) &= ~2;
            else
                STRUCT_OFFSET(q, 0x100, int) |= 2;
        }
        else
        {
            if (on)
                STRUCT_OFFSET(q, 0x100, int) &= ~3;
            else
                STRUCT_OFFSET(q, 0x100, int) |= 3;
        }
    }
}

INCLUDE_ASM("asm/nonmatchings/g_enemy/enemain", Enemy_AllWorkInit);

void Enemy_AllWkIntReLd()
{
    short i;
    char* p = (char*)gsEnemyInfos;

    for (i = 0; i < 10; i++)
    {
        if (STRUCT_OFFSET(p, 0, int) & 1)
        {
            GFInstance_Remove(p + 0xBA0);
        }
        Enemy_WorkInit(p);
        p += 0x2A50;
    }
    Enemy_AllPsInfInt();
}

INCLUDE_ASM("asm/nonmatchings/g_enemy/enemain", Enemy_WorkInit);

INCLUDE_ASM("asm/nonmatchings/g_enemy/enemain", enemy_everydtset);

INCLUDE_ASM("asm/nonmatchings/g_enemy/enemain", Enemy_MkObjDt);

INCLUDE_ASM("asm/nonmatchings/g_enemy/enemain", Enemy_ObjDtSet);

void Enemy_SeSet00(int a, int b)
{
    gsSoundPlaySE_WORLD(b, (char*)a + 0x270);
}

INCLUDE_ASM("asm/nonmatchings/g_enemy/enemain", Enemy_Prt);

int Enemy_SarchEmptyWk()
{
    int i;

    for (i = 0; i < gsEnemy_Max; i++)
    {
        if (!(*(int*)gsEnemyInfos[i].b & 1))
        {
            return i;
        }
    }

    return -1;
}

INCLUDE_ASM("asm/nonmatchings/g_enemy/enemain", Enemy_RequestSet);

INCLUDE_ASM("asm/nonmatchings/g_enemy/enemain", Enemy_AllReqest);

INCLUDE_RODATA("asm/nonmatchings/g_enemy/enemain", D_00667378);

INCLUDE_ASM("asm/nonmatchings/g_enemy/enemain", Enemy_AllReqest_LvSet);

u_short Enemy_HowManySet()
{
    u_short n = 0;
    int i;

    for (i = 0; i < 10; i++)
    {
        if (STRUCT_OFFSET(&gsEnemyInfos[i], 0x0, int) & 1)
        {
            n++;
        }
    }

    return n;
}

INCLUDE_ASM("asm/nonmatchings/g_enemy/enemain", Enemy_DelCheck);

INCLUDE_ASM("asm/nonmatchings/g_enemy/enemain", Enemy_plbkchk);

void ene_mvdummy(void) {
}

void enemy_movemain(char* a)
{
    enemy_movestbl[STRUCT_OFFSET(a, 0x2A, short)](a);
    enemy_positionset(a);
    enemy_blowoffcnt(a);
}

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

void enemy_obrptitemdrop(char* a)
{
    int s;

    if (STRUCT_OFFSET(a, 0x2A, short) == 0x10)
    {
        s = STRUCT_OFFSET(a, 0x76, short);
        if (s >= 0 && (STRUCT_OFFSET(a, 0, int) & 0xC000))
        {
            STRUCT_OFFSET(a, 0x76, short) = -1;
            STRUCT_OFFSET(&Another_Item[s], 0, int) &= ~0x300;
        }
    }
}

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

float Enemy_OpVInPd00(float* a, float* b, float* c)
{
    float ret;

    asm volatile(
        ".set noreorder\n"
        "lqc2 $vf4, 0x0(%3)\n"
        "lqc2 $vf5, 0x0(%1)\n"
        "vsub.xyzw $vf6, $vf4, $vf5\n"
        "vmul.xz $vf7, $vf6, $vf6\n"
        "vaddz.x $vf7, $vf7, $vf7z\n"
        "vsqrt Q, $vf7x\n"
        "vwaitq\n"
        "vaddq.x $vf7, $vf0, Q\n"
        "vnop\n"
        "vnop\n"
        "vdiv Q, $vf0w, $vf7x\n"
        "vsub.xyzw $vf8, $vf0, $vf0\n"
        "vwaitq\n"
        "vmulq.xz $vf8, $vf6, Q\n"
        "lqc2 $vf9, 0x0(%2)\n"
        "vmul.xyz $vf10, $vf8, $vf9\n"
        "vaddy.x $vf10, $vf10, $vf10y\n"
        "vaddz.x $vf10, $vf10, $vf10z\n"
        "qmfc2.ni %0, $vf10\n"
        ".set reorder\n"
        : "=r"(ret) : "r"(a), "r"(b), "r"(c));

    return ret;
}

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

INCLUDE_RODATA("asm/nonmatchings/g_enemy/enemain", D_006673C8);

INCLUDE_RODATA("asm/nonmatchings/g_enemy/enemain", D_006673D0);

INCLUDE_RODATA("asm/nonmatchings/g_enemy/enemain", D_006673D8);

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

void Enemy_PmtDataCopy(int dst, int src)
{
    u_int i;

    for (i = 0; i < dinoanmmaxno[dst]; i++)
    {
        pmtadr[dst][i] = pmtadr[src][i];
    }
}

INCLUDE_RODATA("asm/nonmatchings/g_enemy/enemain", D_00667450);

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

void enemy_blthitseset(char* e, int b)
{
    short t = *(short*)(e + 0x2A);

    Enemy_SeSet00((int)e, (t == 6) ? 0x3B2 : bulthitsetbl_9[t][b]);
}

INCLUDE_ASM("asm/nonmatchings/g_enemy/enemain", Enemy_DelDethPrcInit);

INCLUDE_ASM("asm/nonmatchings/g_enemy/enemain", Enemy_DelDethPrcMain);

INCLUDE_ASM("asm/nonmatchings/g_enemy/enemain", Enemy_SetSmokeTrkr);

INCLUDE_RODATA("asm/nonmatchings/g_enemy/enemain", D_006674E8);

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
INCLUDE_RODATA("asm/nonmatchings/g_enemy/enemain", D_00667510);

INCLUDE_RODATA("asm/nonmatchings/g_enemy/enemain", D_00667520);

