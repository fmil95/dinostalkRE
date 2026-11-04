#include "common.h"

extern short _st4_hane_flag;
extern short _st4_hane_count;
extern int rand();
INCLUDE_ASM("asm/nonmatchings/g_world/st4", gsWorldInitSt4);

INCLUDE_ASM("asm/nonmatchings/g_world/st4", gsWorldSt4_SpecialEffect);

INCLUDE_ASM("asm/nonmatchings/g_world/st4", gsWorldSt4_SpecialEffect2);

void gsWorldSt4_InitAirRotation()
{
    _st4_hane_flag = 0;
    _st4_hane_count = rand() % 3 * 30 + 0x3C;
}

INCLUDE_ASM("asm/nonmatchings/g_world/st4", gsWorldSt4_AirWingrotation);

INCLUDE_ASM("asm/nonmatchings/g_world/st4", gsWorldSt4_Ss_PointSet);

INCLUDE_ASM("asm/nonmatchings/g_world/st4", gsWorldSt4_SandStorm);
