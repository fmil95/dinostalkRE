#include "common.h"

extern void gun_teaching_gun_adjust();
extern int adjust_mode_00674c84;
extern int teach_time_00674c8c;
extern int chk_mon_timer_00674c90;
extern int screen_off_sw_00674c94;
extern int check_delay_timer_00674c98;
extern int wide_mode_flag_00674ca4;
extern void set_bg_color();
extern int adjust_check_gun_adjust();

extern int center_x_00674c9c;
extern int adjust_center_gun_adjust();
extern void set_adjustX_gun_adjust();
extern int D_00653B78[];
extern void Guncon2_TransCtrlData();
extern int center_y_00674ca0;
extern void set_adjustY_gun_adjust();
extern int adjust_wide_gun_adjust();
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

void change_wide_mode_gun_adjust()
{
    adjust_mode_00674c84 = 0x14;
    wide_mode_flag_00674ca4 = 1;
    teach_time_00674c8c = 0;
}

INCLUDE_ASM("asm/nonmatchings/g_guncon2/src/gun_adjust", change_normal_mode_gun_adjust);

INCLUDE_ASM("asm/nonmatchings/g_guncon2/src/gun_adjust", change_monitor_gun_adjust);

void gun_adjust0_gun_adjust()
{
    gun_teaching_gun_adjust();
}

int gun_adjust1_gun_adjust(int a, int b)
{
    int ret;

    ret = adjust_center_gun_adjust(a);

    if (ret != 0)
    {
        set_adjustX_gun_adjust(b, center_x_00674c9c);
        set_adjustY_gun_adjust(b, center_y_00674ca0);
    }

    return ret;
}

int gun_adjust2_gun_adjust()
{
    return adjust_check_gun_adjust() == 1;
}

void gun_adjust_W0_gun_adjust()
{
    gun_teaching_gun_adjust();
}

int gun_adjust_W1_gun_adjust(int a, int b)
{
    int ret;

    ret = adjust_center_gun_adjust(a);

    if (ret != 0)
    {
        set_adjustX_gun_adjust(b, center_x_00674c9c);
    }

    return ret;
}

int gun_adjust_W2_gun_adjust(int a, int b)
{
    int ret;

    ret = adjust_wide_gun_adjust(a);

    if (ret != 0)
    {
        set_adjustY_gun_adjust(b, center_y_00674ca0);
    }

    set_bg_color(0x6E, 0x6E, 0x6E);

    return ret;
}

void gun_adjust_W3_gun_adjust(int a, int b)
{
    set_bg_color(0x6e, 0x6e, 0x6e);
    adjust_check_gun_adjust(a, b);
}

INCLUDE_ASM("asm/nonmatchings/g_guncon2/src/gun_adjust", gun_teaching_gun_adjust);

INCLUDE_ASM("asm/nonmatchings/g_guncon2/src/gun_adjust", adjust_center_gun_adjust);

INCLUDE_ASM("asm/nonmatchings/g_guncon2/src/gun_adjust", adjust_wide_gun_adjust);

INCLUDE_ASM("asm/nonmatchings/g_guncon2/src/gun_adjust", adjust_check_gun_adjust);

void set_adjustX_gun_adjust(void* p)
{
    STRUCT_OFFSET(D_00653B78, STRUCT_OFFSET(p, 0x0, int) * 16, int) = STRUCT_OFFSET(D_00653B78, STRUCT_OFFSET(p, 0x0, int) * 16, int) + center_x_00674c9c - 0x1A6;
    Guncon2_TransCtrlData(STRUCT_OFFSET(p, 0x34, int), STRUCT_OFFSET(p, 0x0, int));
}

INCLUDE_ASM("asm/nonmatchings/g_guncon2/src/gun_adjust", set_adjustY_gun_adjust);
