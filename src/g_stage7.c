#include "common.h"
#include "g_stage7.h"

extern int _st7_ext_compel_no;
extern int _st7_ext_compel_step;
extern int _st7_ext_compel_no;
extern int _st7_ext_compel_no;
extern int _st7_ext_compel_no;

INCLUDE_ASM("asm/nonmatchings/g_stage7", gsStageInit_ST7);

INCLUDE_ASM("asm/nonmatchings/g_stage7", gsStageExec_ST7);

INCLUDE_ASM("asm/nonmatchings/g_stage7", gsStageInitCamera_ST7);

INCLUDE_ASM("asm/nonmatchings/g_stage7", gsStageGetCameraVector_ST7);

INCLUDE_ASM("asm/nonmatchings/g_stage7", gsStageJeepDirection_ST7);

void gsStage7_ChangeExtCompelTbl(int a)
{
    if (a != _st7_ext_compel_no)
    {
        _st7_ext_compel_no = a;
        _st7_ext_compel_step = 0;
    }
}

INCLUDE_ASM("asm/nonmatchings/g_stage7", gsStage7_RepairAfterMovie);
