#include "common.h"
#include "g_world/st4.h"

extern short _st4_hane_flag;
extern short _st4_hane_count;
extern int rand();
extern int gsPause;
INCLUDE_ASM("asm/nonmatchings/g_world/st4", gsWorldInitSt4);

void gsWorldSt4_SpecialEffect()
{
    if (!(gsPause & 1))
    {
        gsWorldSt4_AirWingrotation();
        gsWorldSt4_SandStorm();
    }
}

INCLUDE_ASM("asm/nonmatchings/g_world/st4", gsWorldSt4_SpecialEffect2);

void gsWorldSt4_InitAirRotation()
{
    _st4_hane_flag = 0;
    _st4_hane_count = rand() % 3 * 30 + 0x3C;
}

INCLUDE_ASM("asm/nonmatchings/g_world/st4", gsWorldSt4_AirWingrotation);

INCLUDE_ASM("asm/nonmatchings/g_world/st4", gsWorldSt4_Ss_PointSet);

INCLUDE_ASM("asm/nonmatchings/g_world/st4", gsWorldSt4_SandStorm);
INCLUDE_RODATA("asm/nonmatchings/g_world/st4", D_00665900);

INCLUDE_RODATA("asm/nonmatchings/g_world/st4", D_00665918);

INCLUDE_RODATA("asm/nonmatchings/g_world/st4", D_00665930);

INCLUDE_RODATA("asm/nonmatchings/g_world/st4", D_00665948);

