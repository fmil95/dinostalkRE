#include "common.h"

extern void gun_teaching_gun_adjust();
extern int adjust_mode_00674c84;
extern int teach_time_00674c8c;
extern int chk_mon_timer_00674c90;
extern int screen_off_sw_00674c94;
extern int check_delay_timer_00674c98;

INCLUDE_ASM("asm/nonmatchings/g_guncon2/src/gun_adjust", gun_adjust_init);

INCLUDE_ASM("asm/nonmatchings/g_guncon2/src/gun_adjust", init_gun_adjust_para);

INCLUDE_ASM("asm/nonmatchings/g_guncon2/src/gun_adjust", gun_adjust_main);

void GunAdjustInit_gun_adjust()
{
    adjust_mode_00674c84 = 0;
    teach_time_00674c8c = 0;
    chk_mon_timer_00674c90 = 0;
    screen_off_sw_00674c94 = 0;
    check_delay_timer_00674c98 = 0;
}

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
