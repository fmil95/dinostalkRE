#include "common.h"
#include "benjamin/kinematics.h"

INCLUDE_ASM("asm/nonmatchings/benjamin/kinematics", IK_ComputeJoint);

INCLUDE_ASM("asm/nonmatchings/benjamin/kinematics", IK_JoinNullShape);

INCLUDE_ASM("asm/nonmatchings/benjamin/kinematics", IK_CutNullShape);

INCLUDE_ASM("asm/nonmatchings/benjamin/kinematics", IK_Matrix2Euler);

INCLUDE_ASM("asm/nonmatchings/benjamin/kinematics", IK_OpenPmtAnimation);

INCLUDE_ASM("asm/nonmatchings/benjamin/kinematics", ik_VectorSquareDistance);

INCLUDE_ASM("asm/nonmatchings/benjamin/kinematics", ik_ApplyMatrix);

INCLUDE_ASM("asm/nonmatchings/benjamin/kinematics", ik_AxisAngle2Matrix);

INCLUDE_ASM("asm/nonmatchings/benjamin/kinematics", ik_CheckRotateRestriction);

INCLUDE_ASM("asm/nonmatchings/benjamin/kinematics", ik_UpdateMatrix);

INCLUDE_ASM("asm/nonmatchings/benjamin/kinematics", ik_OffPmtAnimation);

INCLUDE_ASM("asm/nonmatchings/benjamin/kinematics", IK_Interpolate2Anim);

INCLUDE_ASM("asm/nonmatchings/benjamin/kinematics", IK_Interpolate2IK);

INCLUDE_ASM("asm/nonmatchings/benjamin/kinematics", ik_MakeInterpolateMatrix);

INCLUDE_ASM("asm/nonmatchings/benjamin/kinematics", IK_ComputeOneJoint);

INCLUDE_ASM("asm/nonmatchings/benjamin/kinematics", IK_ComputeNullJoint);
