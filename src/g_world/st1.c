#include "common.h"
#include "g_world/st1.h"
#include "sound/g_sound.h"

extern int gsSt1DirectFlag;
extern int _st1_bgm_volume;
INCLUDE_ASM("asm/nonmatchings/g_world/st1", gsWorldInitSt1);

INCLUDE_ASM("asm/nonmatchings/g_world/st1", gsSt1WorkClear);

INCLUDE_ASM("asm/nonmatchings/g_world/st1", gsSt1SwingInit);

INCLUDE_ASM("asm/nonmatchings/g_world/st1", gsWorldSt1_SpecialEffect);

INCLUDE_ASM("asm/nonmatchings/g_world/st1", gsWorldSt1_SpecialEffect2);

INCLUDE_ASM("asm/nonmatchings/g_world/st1", gsSt1_TimerManagement);

int gsSt1_BgmFadeOut()
{
    if (gsSt1DirectFlag & 0x800)
    {
        gsSoundBgmVol(--_st1_bgm_volume);

        if (_st1_bgm_volume == 0)
        {
            gsSt1DirectFlag &= ~0x800;
            gsSoundBgmStop(1);
        }
    }
}

INCLUDE_ASM("asm/nonmatchings/g_world/st1", gsSt1_GndScroll);

INCLUDE_ASM("asm/nonmatchings/g_world/st1", gsSt1_PreInTheArea2);

INCLUDE_ASM("asm/nonmatchings/g_world/st1", gsSt1_PreInTheArea3);

INCLUDE_ASM("asm/nonmatchings/g_world/st1", gsSt1_AprocGND);

INCLUDE_ASM("asm/nonmatchings/g_world/st1", gsSt1_AtCameraManager);

INCLUDE_ASM("asm/nonmatchings/g_world/st1", gsSt1LenflareInit);

INCLUDE_ASM("asm/nonmatchings/g_world/st1", gsSt1LensflareManagement);

INCLUDE_ASM("asm/nonmatchings/g_world/st1", gsSt1LensflareDelete);
INCLUDE_RODATA("asm/nonmatchings/g_world/st1", D_00666750);

INCLUDE_RODATA("asm/nonmatchings/g_world/st1", D_00666760);

