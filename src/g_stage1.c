#include "common.h"
#include "g_stage1.h"

extern int gsNextProg;
extern void gsEnemySet_MovieInit();
extern void gsSoundClose();
extern void gsSoundSeMain();
INCLUDE_ASM("asm/nonmatchings/g_stage1", gsStageInit_ST1);

INCLUDE_ASM("asm/nonmatchings/g_stage1", gsStageExec_ST1);

INCLUDE_ASM("asm/nonmatchings/g_stage1", gsManagementCamera_St1);

INCLUDE_ASM("asm/nonmatchings/g_stage1", gsGetCameraRot_ST1);

INCLUDE_ASM("asm/nonmatchings/g_stage1", gsSt1_WindSwing);

INCLUDE_ASM("asm/nonmatchings/g_stage1", gsSt1_WindSwing2);

INCLUDE_ASM("asm/nonmatchings/g_stage1", gsCameraMove_St1);

void gsStage1_RepairAfterMovie(int a)
{
    switch (a)
    {
    case 0:
        gsEnemySet_MovieInit(9);
        break;
    case 1:
        gsNextProg = 9;
        gsSoundClose();
        gsSoundSeMain();
        break;
    }
}

INCLUDE_ASM("asm/nonmatchings/g_stage1", st1_coltest);
