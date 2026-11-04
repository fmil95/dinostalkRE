#include "common.h"

extern void* memset();
extern void Enemy_MkUnitV00();
extern void Enemy_OpVInPd00();
extern int Enemy_OpVLRChk00();
INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptnsb", eneptn_samegoalchk);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptnsb", eneptn_elseneatcchk);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptnsb", eneptn_glvectorset);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptnsb", eneptn_objrveset00);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptnsb", eneptn_atcplposset);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptnsb", eneptn_glranddecide);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptnsb", eneptn_circranddecide);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptnsb", eneptn_jumpvxset);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptnsb", eneptn_jumpvyset);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptnsb", eneptn_tmchk);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptnsb", eneptn_maxrotchk);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptnsb", eneptn_glarvchmain00);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptnsb", eneptn_glarvchmain01);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptnsb", eneptn_glarvchmain02);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptnsb", eneptn_glarvchsub00);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptnsb", eneptn_glarvch01);

void eneptn_glinprdch00(char* a, int b)
{
    char v[16];
    char* p;

    memset(v, 0, 16);
    p = a + b * 16;
    Enemy_MkUnitV00(v, a + 0x240);
    Enemy_OpVInPd00(a + 0x270, v, p + 0x110);
}

short eneptn_glrlch00(char* a, int b)
{
    char v[16];
    char* p;

    memset(v, 0, 16);
    p = a + b * 16;
    Enemy_MkUnitV00(v, a + 0x240);
    return Enemy_OpVLRChk00(a + 0x270, v, p + 0x110);
}

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptnsb", eneptn_glvectorchk);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptnsb", eneptn_chkcliff00);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptnsb", eneptn_chkjpwall00);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptnsb", eneptn_ptrhichkfly);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptnsb", eneptn_ptrxroleset);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptnsb", eneptn_plchkxroleset);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptnsb", eneptn_eyelinech00);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptnsb", eneptn_eyelinech01);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptnsb", hitobject_chk00);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptnsb", hitgrd_chk00);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptnsb", hitgrd_chk01);
INCLUDE_RODATA("asm/nonmatchings/g_enemy/eneptnsb", D_006676D0);

