#include "common.h"
#include "benjamin/g_shrink.h"
#include "particle.h"

extern void* pEffectInfoS;
extern void* pEffectInfoM;
extern void* pEffectInfoL;
extern void* staffInitOneTypeEffect();
INCLUDE_ASM("asm/nonmatchings/benjamin/g_shrink", gsDinoSetDeadShrinkY);

INCLUDE_ASM("asm/nonmatchings/benjamin/g_shrink", gsDinoSetDeadShrinkXZ);

INCLUDE_ASM("asm/nonmatchings/benjamin/g_shrink", gsDinoIsShrinking);

void staffInitParticle()
{
    GFParticle_Vu0RandomInit();
    pEffectInfoS = staffInitOneTypeEffect(pEffectInfoS, 0x20, 50);
    pEffectInfoM = staffInitOneTypeEffect(pEffectInfoM, 0x20, 500);
    pEffectInfoL = staffInitOneTypeEffect(pEffectInfoL, 5, 2000);
}

INCLUDE_ASM("asm/nonmatchings/benjamin/g_shrink", staffInitOneTypeEffect);

INCLUDE_ASM("asm/nonmatchings/benjamin/g_shrink", staffAddEffect);

INCLUDE_ASM("asm/nonmatchings/benjamin/g_shrink", staffEffectSearchUsable);

INCLUDE_ASM("asm/nonmatchings/benjamin/g_shrink", staffEffectAddInstance);

INCLUDE_ASM("asm/nonmatchings/benjamin/g_shrink", staffEffectUpdate);

INCLUDE_ASM("asm/nonmatchings/benjamin/g_shrink", staffEffectCheckOne);

INCLUDE_ASM("asm/nonmatchings/benjamin/g_shrink", staffFlyingMoney);
