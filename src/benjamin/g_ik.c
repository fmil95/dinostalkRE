#include "common.h"

extern void (*pDeadPoseFunc_8[])(void*);
extern int gsPause;
extern void (*pFootMoveLFunc_4[])(void*);
extern void (*pFootMoveRFunc_5[])(void*);
extern void (*pTailSwingFunc_6[])(void*);
extern void (*pSetHitFunc_2[])();
extern char gsEnemyInfos[];
extern void gsIKinitOne();
void gsIKinit()
{
    int p = (int)gsEnemyInfos;

    do
    {
        gsIKinitOne(p);
        p += 0x2A50;
    } while (p < (int)gsEnemyInfos + 0x1A720);
}

INCLUDE_ASM("asm/nonmatchings/benjamin/g_ik", gsIKinitOne);

void gsIKprocHead(void) {
}

INCLUDE_ASM("asm/nonmatchings/benjamin/g_ik", gsIKproc);

INCLUDE_ASM("asm/nonmatchings/benjamin/g_ik", gsIK_UpdateData);

INCLUDE_ASM("asm/nonmatchings/benjamin/g_ik", gsIK_ResetInfo);

void gsIK_SetHit(char* a, int b)
{
    short i = STRUCT_OFFSET(a, 0x2A, short);
    void (*f)() = pSetHitFunc_2[i];

    if (f)
    {
        if (b > 0 && i < 0x11)
        {
            asm volatile("sync");
            f(a, b);
            asm volatile("sync");
        }
    }
}

INCLUDE_ASM("asm/nonmatchings/benjamin/g_ik", _gsIK_HeadStare);

void _gsIK_FootMoveL(void* a)
{
    void (*f)(void*);

    if (gsPause == 0)
    {
        f = pFootMoveLFunc_4[STRUCT_OFFSET(a, 0x2A, short)];

        if (f)
        {
            f(a);
        }
    }
}

void _gsIK_FootMoveR(void* a)
{
    void (*f)(void*);

    if (gsPause == 0)
    {
        f = pFootMoveRFunc_5[STRUCT_OFFSET(a, 0x2A, short)];

        if (f)
        {
            f(a);
        }
    }
}

void _gsIK_TailSwing(void* a)
{
    void (*f)(void*) = pTailSwingFunc_6[STRUCT_OFFSET(a, 0x2A, short)];

    if (f)
    {
        f(a);
    }
}

INCLUDE_ASM("asm/nonmatchings/benjamin/g_ik", _gsIK_HitProc);

void _gsIK_AdjustDeadPose(void* a)
{
    void (*f)(void*);

    if (gsPause == 0)
    {
        f = pDeadPoseFunc_8[STRUCT_OFFSET(a, 0x2A, short)];

        if (f)
        {
            f(a);
        }
    }
}

INCLUDE_ASM("asm/nonmatchings/benjamin/g_ik", gsIK_RotDeadBody);

void gsIK_RecoverBodyRotXZ(char* a, int v)
{
    if ((u_int)(STRUCT_OFFSET(a, 0x2A, u_short) - 9) < 3)
    {
        return;
    }

    a += 0xD40;
    STRUCT_OFFSET(a, 0x0, int) |= 0x100000;

    if (v > 0)
    {
        STRUCT_OFFSET(a, 0x14, short) = v;
    }
}

INCLUDE_ASM("asm/nonmatchings/benjamin/g_ik", _gsIK_GetCross);

INCLUDE_ASM("asm/nonmatchings/benjamin/g_ik", _gsIK_GetCollision);

void _gsIK_setShapeFlag(char* a, int f, int s, int e)
{
    char* p;

    if (e >= s)
    {
        p = (char*)(s * 0x170 + STRUCT_OFFSET(a, 0x11C, int));
        do
        {
            STRUCT_OFFSET(p, 0x100, int) |= f;
            s++;
            p += 0x170;
        } while (e >= s);
    }
}

void _gsIK_clearShapeFlag(char* a, int f, int s, int e)
{
    char* p;

    if (e >= s)
    {
        p = (char*)(s * 0x170 + STRUCT_OFFSET(a, 0x11C, int));
        do
        {
            STRUCT_OFFSET(p, 0x100, int) &= ~f;
            s++;
            p += 0x170;
        } while (e >= s);
    }
}

INCLUDE_ASM("asm/nonmatchings/benjamin/g_ik", _gsIK_RecordTailPos);

INCLUDE_ASM("asm/nonmatchings/benjamin/g_ik", _gsIK_CheckDisplay);

INCLUDE_ASM("asm/nonmatchings/benjamin/g_ik", _gsIK_GetEnemyAngle);

INCLUDE_ASM("asm/nonmatchings/benjamin/g_ik", benjaminRand);

INCLUDE_ASM("asm/nonmatchings/benjamin/g_ik", benjaminRandRange);
