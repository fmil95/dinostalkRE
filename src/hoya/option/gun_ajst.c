#include "common.h"

extern int adjust_mode_0067486c;
extern int screen_off_sw_0067487c;
extern int wide_mode_flag_0067488c;
extern int D_00653B70[];
extern void gun_teaching_gun_ajst();
extern void adjust_check_gun_ajst();
extern int check_wait_timer_0067485c;
extern int teach_time_00674874;
extern int chk_mon_timer_00674878;
extern int check_delay_timer_00674880;
extern int adj_point[];
extern int gun_point[];

extern int center_x_00674884;
extern int adjust_center_gun_ajst();
extern void set_adjustX_gun_ajst();
extern int center_y_00674888;
extern int adjust_wide_gun_ajst();
extern void set_adjustY_gun_ajst();
extern int D_00653B78[];
extern void Guncon2_TransCtrlData();
INCLUDE_ASM("asm/nonmatchings/hoya/option/gun_ajst", CheckGunScreenOut);

int GetScreenOffSw()
{
    return screen_off_sw_0067487c;
}

int GetAdjustMode()
{
    return adjust_mode_0067486c;
}

int GetWideModeFlag()
{
    return wide_mode_flag_0067488c;
}

int GetTvType()
{
    return D_00653B70[0];
}

INCLUDE_ASM("asm/nonmatchings/hoya/option/gun_ajst", GunAdjustInit);

INCLUDE_ASM("asm/nonmatchings/hoya/option/gun_ajst", InitGunAdjustPara);

INCLUDE_ASM("asm/nonmatchings/hoya/option/gun_ajst", GunAdjustMain);

void AdjustInit_gun_ajst()
{
    adjust_mode_0067486c = 0;
    check_wait_timer_0067485c = 0x10;
    teach_time_00674874 = 0;
    chk_mon_timer_00674878 = 0;
    screen_off_sw_0067487c = 0;
    check_delay_timer_00674880 = 0;
}

INCLUDE_ASM("asm/nonmatchings/hoya/option/gun_ajst", GunAdjust_gun_ajst);

int change_wide_gun_ajst(char* a)
{
    if (STRUCT_OFFSET(a, 0x28, int) & 8)
    {
        if (STRUCT_OFFSET(a, 0x2C, int) & 0x20)
        {
            if (STRUCT_OFFSET(a, 0x1C, int) == -1)
            {
                return 1;
            }
        }
    }
    return 0;
}

void change_wide_mode_gun_ajst()
{
    wide_mode_flag_0067488c = 1;
    adj_point[0] = 0;
    gun_point[0] = 0;
    adjust_mode_0067486c = 0;
    teach_time_00674874 = 0;
}

INCLUDE_ASM("asm/nonmatchings/hoya/option/gun_ajst", change_normal_mode_gun_ajst);

INCLUDE_ASM("asm/nonmatchings/hoya/option/gun_ajst", change_monitor_gun_ajst);

void gun_adjust0_gun_ajst()
{
    gun_teaching_gun_ajst();
}

int gun_adjust1_gun_ajst(int a, int b)
{
    int ret;

    ret = adjust_center_gun_ajst(a);

    if (ret != 0)
    {
        set_adjustX_gun_ajst(b, center_x_00674884);
    }

    return ret;
}

int gun_adjust2_gun_ajst(int a, int b)
{
    int ret;

    ret = adjust_wide_gun_ajst(a);

    if (ret != 0)
    {
        set_adjustY_gun_ajst(b, center_y_00674888);
    }

    return ret;
}

void gun_adjust3()
{
    adjust_check_gun_ajst();
}

void gun_adjust_W0_gun_ajst()
{
    gun_teaching_gun_ajst();
}

int gun_adjust_W1_gun_ajst(int a, int b)
{
    int ret;

    ret = adjust_center_gun_ajst(a);

    if (ret != 0)
    {
        set_adjustX_gun_ajst(b, center_x_00674884);
    }

    return ret;
}

int gun_adjust_W2_gun_ajst(int a, int b)
{
    int ret;

    ret = adjust_wide_gun_ajst(a);

    if (ret != 0)
    {
        set_adjustY_gun_ajst(b, center_y_00674888);
    }

    return ret;
}

void gun_adjust_W3_gun_ajst()
{
    adjust_check_gun_ajst();
}

INCLUDE_ASM("asm/nonmatchings/hoya/option/gun_ajst", gun_teaching_gun_ajst);

INCLUDE_ASM("asm/nonmatchings/hoya/option/gun_ajst", adjust_center_gun_ajst);

INCLUDE_ASM("asm/nonmatchings/hoya/option/gun_ajst", adjust_wide_gun_ajst);

INCLUDE_ASM("asm/nonmatchings/hoya/option/gun_ajst", adjust_check_gun_ajst);

void set_adjustX_gun_ajst(void* p)
{
    STRUCT_OFFSET(D_00653B78, STRUCT_OFFSET(p, 0x0, int) * 16, int) = STRUCT_OFFSET(D_00653B78, STRUCT_OFFSET(p, 0x0, int) * 16, int) + center_x_00674884 - 0x1A6;
    Guncon2_TransCtrlData(STRUCT_OFFSET(p, 0x34, int), STRUCT_OFFSET(p, 0x0, int));
}

INCLUDE_ASM("asm/nonmatchings/hoya/option/gun_ajst", set_adjustY_gun_ajst);
