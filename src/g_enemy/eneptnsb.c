#include "common.h"
#include "g_enemy/eneptnsb.h"
#include <libvu0.h>
#include "g_enemy/enemain.h"

extern void* memset();
extern float cam_trans_002af8b0[];
extern char gsEnemyInfos[];
INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptnsb", eneptn_samegoalchk);

int eneptn_elseneatcchk(char* e)
{
    short i;

    for (i = 0; i < 10; i++)
    {
        if (*(short*)(e + 0x28) != i)
        {
            int f = *(int*)(gsEnemyInfos + i * 0x2A50);

            if (f & 1)
            {
                if (f & 0x100)
                {
                    return -1;
                }
            }
        }
    }

    return 0;
}

void eneptn_glvectorset(char* e, int n)
{
    float* out = (float*)(e + n * 16 + 0x160);
    float* b = (float*)(e + 0x270);
    float* a = (float*)(e + n * 16 + 0x110);

    asm volatile(
        "lqc2 $vf4, 0x0(%0)\n"
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
        "sqc2 $vf8, 0x0(%2)\n"
        : : "r"(a), "r"(b), "r"(out) : "memory");
}

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

float eneptn_glvectorchk(char* e, int n)
{
    float* c = (float*)(e + n * 16 + 0x160);
    float* b = (float*)(e + 0x270);
    float* a = (float*)(e + n * 16 + 0x110);
    float ret;

    asm volatile(
        ".set noreorder\n"
        "lqc2 $vf4, 0x0(%1)\n"
        "lqc2 $vf5, 0x0(%2)\n"
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
        "lqc2 $vf9, 0x0(%3)\n"
        "vmul.xyz $vf10, $vf8, $vf9\n"
        "vaddy.x $vf10, $vf10, $vf10y\n"
        "vaddz.x $vf10, $vf10, $vf10z\n"
        "qmfc2.ni $2, $vf10\n"
        "mtc1 $2, %0\n"
        ".set reorder\n"
        : "=f"(ret) : "r"(a), "r"(b), "r"(c) : "$2");

    return ret;
}

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptnsb", eneptn_chkcliff00);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptnsb", eneptn_chkjpwall00);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptnsb", eneptn_ptrhichkfly);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptnsb", eneptn_ptrxroleset);

void eneptn_plchkxroleset(char* e)
{
    sceVu0FVECTOR v;

    sceVu0CopyVector(v, cam_trans_002af8b0);
    v[1] -= *(float*)(e + 0xF0);
    eneptn_ptrxroleset(e, v);
}

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptnsb", eneptn_eyelinech00);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptnsb", eneptn_eyelinech01);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptnsb", hitobject_chk00);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptnsb", hitgrd_chk00);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptnsb", hitgrd_chk01);
INCLUDE_RODATA("asm/nonmatchings/g_enemy/eneptnsb", D_006676D0);

