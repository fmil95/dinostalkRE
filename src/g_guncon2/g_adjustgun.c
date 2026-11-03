#include "common.h"

extern int AdjustGunMode;
extern void sceGsSyncPath();
extern void pfm_end();
extern void GF_EndGraphicsFramework();
extern void MEM_FreeAll();

INCLUDE_ASM("asm/nonmatchings/g_guncon2/g_adjustgun", GUN_ADJUST_Init);

INCLUDE_ASM("asm/nonmatchings/g_guncon2/g_adjustgun", GUN_ADJUST_Exec);

void GUN_ADJUST_End()
{
    sceGsSyncPath(0, 0);
    pfm_end();
    GF_EndGraphicsFramework();
    MEM_FreeAll();
}

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
