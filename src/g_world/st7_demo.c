#include "common.h"
#include "g_world/st7_demo.h"
#include <libvu0.h>

extern int _st7_demo_sw_manager[];
extern int _st7_demo_sw_line[];
extern float D_002F1E50[];
extern int _st7_demo_timer;
extern int _st7_demo_no;
void gsWorldSt7_InitDemo()
{
    _st7_demo_sw_manager[1] = (int)_st7_demo_sw_line;
    sceVu0CopyVector((float*)&_st7_demo_sw_manager[4], D_002F1E50);
    _st7_demo_timer = 0;
    _st7_demo_no = -1;
}

INCLUDE_ASM("asm/nonmatchings/g_world/st7_demo", gsWorldSt7_TriggerDemo);

INCLUDE_ASM("asm/nonmatchings/g_world/st7_demo", gsWorldSt7_Demo);

INCLUDE_ASM("asm/nonmatchings/g_world/st7_demo", gsWorldSt7_Demo_0);

INCLUDE_ASM("asm/nonmatchings/g_world/st7_demo", gsWorldSt7_Demo_1);

INCLUDE_ASM("asm/nonmatchings/g_world/st7_demo", gsWorldSt7_Demo_2);

INCLUDE_ASM("asm/nonmatchings/g_world/st7_demo", gsWorldSt7_Demo_3);

INCLUDE_ASM("asm/nonmatchings/g_world/st7_demo", gsWorldSt7_Demo_4);

INCLUDE_ASM("asm/nonmatchings/g_world/st7_demo", gsWorldSt7_Demo_5);
INCLUDE_RODATA("asm/nonmatchings/g_world/st7_demo", D_00665BB0);

INCLUDE_RODATA("asm/nonmatchings/g_world/st7_demo", D_00665BC0);

