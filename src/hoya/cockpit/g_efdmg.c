#include "common.h"
#include "hoya/cockpit/g_efdmg.h"

typedef struct { char pad[0x1CF70]; int a; int b; int c[5]; } EfDmgS;
extern EfDmgS gsCOCKPIT_EfDmg;
INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_efdmg", gsCOCKPIT_InitEfDamagePoison);

INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_efdmg", gsCOCKPIT_InitEfDamageBitingB);

INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_efdmg", gsCOCKPIT_InitEfDamageBitingS);

INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_efdmg", gsCOCKPIT_InitEfDamageCutting);

INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_efdmg", gsCOCKPIT_InitEfDamageBlood);

void gsCOCKPIT_InitEfDamage()
{
    int i;
    EfDmgS* e = &gsCOCKPIT_EfDmg;

    e->a = 0;
    e->b = 0;

    for (i = 0; i < 5; i++)
    {
        e->c[i] = -1;
    }
}

INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_efdmg", gsCOCKPIT_PutEfDamagePoison);

INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_efdmg", gsCOCKPIT_PutEfDamageBitingB);

INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_efdmg", gsCOCKPIT_PutEfDamageBitingS);

INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_efdmg", gsCOCKPIT_PutEfDamageCutting);

INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_efdmg", gsCOCKPIT_PutEfDamageBlood);

INCLUDE_RODATA("asm/nonmatchings/hoya/cockpit/g_efdmg", D_0066A9B0);

INCLUDE_RODATA("asm/nonmatchings/hoya/cockpit/g_efdmg", D_0066AA30);

INCLUDE_RODATA("asm/nonmatchings/hoya/cockpit/g_efdmg", D_0066AA40);

INCLUDE_RODATA("asm/nonmatchings/hoya/cockpit/g_efdmg", D_0066AAB0);

INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_efdmg", gsCOCKPIT_PutEfDamage);

INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_efdmg", gsCOCKPIT_SetEfDamage);
