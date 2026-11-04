#include "common.h"
#include "g_guncon2/g_adjustgun.h"
extern char gDb[];

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

void set_bg_color(int r, int g, int b)
{
    char* p = gDb;

    STRUCT_OFFSET(p, 0x100, u_char) = r;
    STRUCT_OFFSET(p, 0x101, u_char) = g;
    STRUCT_OFFSET(p, 0x102, u_char) = b;
    STRUCT_OFFSET(p, 0x1F0, u_char) = r;
    STRUCT_OFFSET(p, 0x1F1, u_char) = g;
    STRUCT_OFFSET(p, 0x1F2, u_char) = b;
}
