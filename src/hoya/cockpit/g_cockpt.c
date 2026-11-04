#include "common.h"
#include "hoya/cockpit/g_cockpt.h"
#include "hoya/cockpit/g_cpblt.h"
#include "hoya/cockpit/g_cpsight.h"

INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_cockpt", gsCOCKPIT_InitCocpit);

int Send2dCockpitTex()
{
    return Send2dSightTex(Send2dWeaponTex());
}
