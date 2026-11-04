#include "common.h"

extern int Send2dSightTex();
extern int Send2dWeaponTex();
INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_cockpt", gsCOCKPIT_InitCocpit);

int Send2dCockpitTex()
{
    return Send2dSightTex(Send2dWeaponTex());
}
