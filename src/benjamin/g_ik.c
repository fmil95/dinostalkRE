#include "common.h"

INCLUDE_ASM("asm/nonmatchings/benjamin/g_ik", gsIKinit);

INCLUDE_ASM("asm/nonmatchings/benjamin/g_ik", gsIKinitOne);

void gsIKprocHead(void) {
}

INCLUDE_ASM("asm/nonmatchings/benjamin/g_ik", gsIKproc);

INCLUDE_ASM("asm/nonmatchings/benjamin/g_ik", gsIK_UpdateData);

INCLUDE_ASM("asm/nonmatchings/benjamin/g_ik", gsIK_ResetInfo);

INCLUDE_ASM("asm/nonmatchings/benjamin/g_ik", gsIK_SetHit);

INCLUDE_ASM("asm/nonmatchings/benjamin/g_ik", _gsIK_HeadStare);

INCLUDE_ASM("asm/nonmatchings/benjamin/g_ik", _gsIK_FootMoveL);

INCLUDE_ASM("asm/nonmatchings/benjamin/g_ik", _gsIK_FootMoveR);

INCLUDE_ASM("asm/nonmatchings/benjamin/g_ik", _gsIK_TailSwing);

INCLUDE_ASM("asm/nonmatchings/benjamin/g_ik", _gsIK_HitProc);

INCLUDE_ASM("asm/nonmatchings/benjamin/g_ik", _gsIK_AdjustDeadPose);

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
