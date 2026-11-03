#include "common.h"

extern int adjust_mode_0067486c;
extern int screen_off_sw_0067487c;
extern int wide_mode_flag_0067488c;
extern int D_00653B70[];

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

INCLUDE_ASM("asm/nonmatchings/hoya/option/gun_ajst", AdjustInit_gun_ajst);

INCLUDE_ASM("asm/nonmatchings/hoya/option/gun_ajst", GunAdjust_gun_ajst);

INCLUDE_ASM("asm/nonmatchings/hoya/option/gun_ajst", change_wide_gun_ajst);

INCLUDE_ASM("asm/nonmatchings/hoya/option/gun_ajst", change_wide_mode_gun_ajst);

INCLUDE_ASM("asm/nonmatchings/hoya/option/gun_ajst", change_normal_mode_gun_ajst);

INCLUDE_ASM("asm/nonmatchings/hoya/option/gun_ajst", change_monitor_gun_ajst);

INCLUDE_ASM("asm/nonmatchings/hoya/option/gun_ajst", gun_adjust0_gun_ajst);

INCLUDE_ASM("asm/nonmatchings/hoya/option/gun_ajst", gun_adjust1_gun_ajst);

INCLUDE_ASM("asm/nonmatchings/hoya/option/gun_ajst", gun_adjust2_gun_ajst);

INCLUDE_ASM("asm/nonmatchings/hoya/option/gun_ajst", gun_adjust3);

INCLUDE_ASM("asm/nonmatchings/hoya/option/gun_ajst", gun_adjust_W0_gun_ajst);

INCLUDE_ASM("asm/nonmatchings/hoya/option/gun_ajst", gun_adjust_W1_gun_ajst);

INCLUDE_ASM("asm/nonmatchings/hoya/option/gun_ajst", gun_adjust_W2_gun_ajst);

INCLUDE_ASM("asm/nonmatchings/hoya/option/gun_ajst", gun_adjust_W3_gun_ajst);

INCLUDE_ASM("asm/nonmatchings/hoya/option/gun_ajst", gun_teaching_gun_ajst);

INCLUDE_ASM("asm/nonmatchings/hoya/option/gun_ajst", adjust_center_gun_ajst);

INCLUDE_ASM("asm/nonmatchings/hoya/option/gun_ajst", adjust_wide_gun_ajst);

INCLUDE_ASM("asm/nonmatchings/hoya/option/gun_ajst", adjust_check_gun_ajst);

INCLUDE_ASM("asm/nonmatchings/hoya/option/gun_ajst", set_adjustX_gun_ajst);

INCLUDE_ASM("asm/nonmatchings/hoya/option/gun_ajst", set_adjustY_gun_ajst);
