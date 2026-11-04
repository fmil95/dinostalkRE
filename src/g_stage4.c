#include "common.h"
#include "g_stage4.h"

INCLUDE_ASM("asm/nonmatchings/g_stage4", gsStageInit_ST4);

INCLUDE_ASM("asm/nonmatchings/g_stage4", gsStageExec_ST4);

INCLUDE_ASM("asm/nonmatchings/g_stage4", gsStage4_RepairAfterMovie);

INCLUDE_ASM("asm/nonmatchings/g_stage4", st4_fogtest);
