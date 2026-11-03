#include "common.h"

extern int adjust_mode_0067486c;

INCLUDE_ASM("asm/nonmatchings/hoya/option/gun_ajst", CheckGunScreenOut);

INCLUDE_ASM("asm/nonmatchings/hoya/option/gun_ajst", GetScreenOffSw);

int GetAdjustMode()
{
    return adjust_mode_0067486c;
}

INCLUDE_ASM("asm/nonmatchings/hoya/option/gun_ajst", GetWideModeFlag);

INCLUDE_ASM("asm/nonmatchings/hoya/option/gun_ajst", GetTvType);

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
