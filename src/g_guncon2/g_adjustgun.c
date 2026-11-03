#include "common.h"

extern int AdjustGunMode;

INCLUDE_ASM("asm/nonmatchings/g_guncon2/g_adjustgun", GUN_ADJUST_Init);

INCLUDE_ASM("asm/nonmatchings/g_guncon2/g_adjustgun", GUN_ADJUST_Exec);

INCLUDE_ASM("asm/nonmatchings/g_guncon2/g_adjustgun", GUN_ADJUST_End);

void gsAdjustGun_Init()
{
    AdjustGunMode = 0;
}

INCLUDE_ASM("asm/nonmatchings/g_guncon2/g_adjustgun", gsAdjustGun_Main);

INCLUDE_ASM("asm/nonmatchings/g_guncon2/g_adjustgun", gsAdjustGun_DrawSight);

INCLUDE_ASM("asm/nonmatchings/g_guncon2/g_adjustgun", gsAdjustGun_DrawLine);

INCLUDE_ASM("asm/nonmatchings/g_guncon2/g_adjustgun", gsAdjustGun_DrawBullet);

INCLUDE_ASM("asm/nonmatchings/g_guncon2/g_adjustgun", draw_sprite);

INCLUDE_ASM("asm/nonmatchings/g_guncon2/g_adjustgun", set_bg_color);
