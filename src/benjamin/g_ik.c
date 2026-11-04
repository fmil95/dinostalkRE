#include "common.h"

extern void (*pDeadPoseFunc_8[])(void*);
extern int gsPause;
extern void (*pFootMoveLFunc_4[])(void*);
extern void (*pFootMoveRFunc_5[])(void*);
extern void (*pTailSwingFunc_6[])(void*);
INCLUDE_ASM("asm/nonmatchings/benjamin/g_ik", gsIKinit);

INCLUDE_ASM("asm/nonmatchings/benjamin/g_ik", gsIKinitOne);

void gsIKprocHead(void) {
}

INCLUDE_ASM("asm/nonmatchings/benjamin/g_ik", gsIKproc);

INCLUDE_ASM("asm/nonmatchings/benjamin/g_ik", gsIK_UpdateData);

INCLUDE_ASM("asm/nonmatchings/benjamin/g_ik", gsIK_ResetInfo);

INCLUDE_ASM("asm/nonmatchings/benjamin/g_ik", gsIK_SetHit);

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

INCLUDE_ASM("asm/nonmatchings/benjamin/g_ik", gsIK_RecoverBodyRotXZ);

INCLUDE_ASM("asm/nonmatchings/benjamin/g_ik", _gsIK_GetCross);

INCLUDE_ASM("asm/nonmatchings/benjamin/g_ik", _gsIK_GetCollision);

INCLUDE_ASM("asm/nonmatchings/benjamin/g_ik", _gsIK_setShapeFlag);

INCLUDE_ASM("asm/nonmatchings/benjamin/g_ik", _gsIK_clearShapeFlag);

INCLUDE_ASM("asm/nonmatchings/benjamin/g_ik", _gsIK_RecordTailPos);

INCLUDE_ASM("asm/nonmatchings/benjamin/g_ik", _gsIK_CheckDisplay);

INCLUDE_ASM("asm/nonmatchings/benjamin/g_ik", _gsIK_GetEnemyAngle);

INCLUDE_ASM("asm/nonmatchings/benjamin/g_ik", benjaminRand);

INCLUDE_ASM("asm/nonmatchings/benjamin/g_ik", benjaminRandRange);
