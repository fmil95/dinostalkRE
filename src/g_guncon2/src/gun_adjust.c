#include "common.h"

extern void gun_teaching_gun_adjust();

INCLUDE_ASM("asm/nonmatchings/g_guncon2/src/gun_adjust", gun_adjust_init);

INCLUDE_ASM("asm/nonmatchings/g_guncon2/src/gun_adjust", init_gun_adjust_para);

INCLUDE_ASM("asm/nonmatchings/g_guncon2/src/gun_adjust", gun_adjust_main);

INCLUDE_ASM("asm/nonmatchings/g_guncon2/src/gun_adjust", GunAdjustInit_gun_adjust);

INCLUDE_ASM("asm/nonmatchings/g_guncon2/src/gun_adjust", GunAdjust_gun_adjust);

INCLUDE_ASM("asm/nonmatchings/g_guncon2/src/gun_adjust", change_wide_gun_adjust);

INCLUDE_ASM("asm/nonmatchings/g_guncon2/src/gun_adjust", change_wide_mode_gun_adjust);

INCLUDE_ASM("asm/nonmatchings/g_guncon2/src/gun_adjust", change_normal_mode_gun_adjust);

INCLUDE_ASM("asm/nonmatchings/g_guncon2/src/gun_adjust", change_monitor_gun_adjust);

void gun_adjust0_gun_adjust()
{
    gun_teaching_gun_adjust();
}

INCLUDE_ASM("asm/nonmatchings/g_guncon2/src/gun_adjust", gun_adjust1_gun_adjust);

INCLUDE_ASM("asm/nonmatchings/g_guncon2/src/gun_adjust", gun_adjust2_gun_adjust);

void gun_adjust_W0_gun_adjust()
{
    gun_teaching_gun_adjust();
}

INCLUDE_ASM("asm/nonmatchings/g_guncon2/src/gun_adjust", gun_adjust_W1_gun_adjust);

INCLUDE_ASM("asm/nonmatchings/g_guncon2/src/gun_adjust", gun_adjust_W2_gun_adjust);

INCLUDE_ASM("asm/nonmatchings/g_guncon2/src/gun_adjust", gun_adjust_W3_gun_adjust);

INCLUDE_ASM("asm/nonmatchings/g_guncon2/src/gun_adjust", gun_teaching_gun_adjust);

INCLUDE_ASM("asm/nonmatchings/g_guncon2/src/gun_adjust", adjust_center_gun_adjust);

INCLUDE_ASM("asm/nonmatchings/g_guncon2/src/gun_adjust", adjust_wide_gun_adjust);

INCLUDE_ASM("asm/nonmatchings/g_guncon2/src/gun_adjust", adjust_check_gun_adjust);

INCLUDE_ASM("asm/nonmatchings/g_guncon2/src/gun_adjust", set_adjustX_gun_adjust);

INCLUDE_ASM("asm/nonmatchings/g_guncon2/src/gun_adjust", set_adjustY_gun_adjust);
