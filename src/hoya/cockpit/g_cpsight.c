#include "common.h"

extern int tex2dSendFlag_00674478;
extern void gsCOCKPIT_InitSightGrenade();
extern void gsCOCKPIT_PutSightGrenade();

INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_cpsight", hyEntryObj4Sight);

void gsCOCKPIT_InitSightSendTex()
{
    tex2dSendFlag_00674478 = 0;
}

INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_cpsight", PermittoSend2dSightTex);

INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_cpsight", Send2dSightTex);

INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_cpsight", gsCOCKPIT_InitSightMachine);

INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_cpsight", gsCOCKPIT_InitSightRifle);

INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_cpsight", gsCOCKPIT_InitSightMissile);

INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_cpsight", gsCOCKPIT_InitSightHandgun);

INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_cpsight", gsCOCKPIT_InitSightMagnum);

INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_cpsight", gsCOCKPIT_InitSightFire);

INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_cpsight", gsCOCKPIT_InitSightHandGrenade);

INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_cpsight", gsCOCKPIT_InitSightGutoring);

INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_cpsight", gsCOCKPIT_InitSightMissilePod);

INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_cpsight", gsCOCKPIT_InitSightGrenade);

INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_cpsight", gsCOCKPIT_InitSightBowgun);

INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_cpsight", gsCOCKPIT_InitSightPlasma);

INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_cpsight", gsCOCKPIT_InitSightRocket);

INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_cpsight", gsCOCKPIT_InitSightShotgun);

INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_cpsight", gsCOCKPIT_InitSightSpark);

void gsCOCKPIT_InitSightFGrenade()
{
    gsCOCKPIT_InitSightGrenade();
}

INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_cpsight", gsCOCKPIT_InitSightLaser);

INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_cpsight", gsCOCKPIT_InitSightMineThrower);

INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_cpsight", gsCOCKPIT_InitSights);

INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_cpsight", gsCOCKPIT_InitSightFirst);

INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_cpsight", gsCOCKPIT_PutSightMachine);

INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_cpsight", gsCOCKPIT_PutSightRifle);

INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_cpsight", gsCOCKPIT_PutSightMissile);

INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_cpsight", gsCOCKPIT_PutSightHandgun);

INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_cpsight", gsCOCKPIT_PutSightMagnum);

INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_cpsight", gsCOCKPIT_PutSightFire);

INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_cpsight", gsCOCKPIT_PutSightHandGrenade);

INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_cpsight", gsCOCKPIT_PutSightGutoring);

INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_cpsight", gsCOCKPIT_PutSightMissilePod);

INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_cpsight", gsCOCKPIT_PutSightGrenade);

INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_cpsight", gsCOCKPIT_PutSightBowgun);

INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_cpsight", gsCOCKPIT_PutSightPlasma);

INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_cpsight", gsCOCKPIT_PutSightRocket);

INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_cpsight", gsCOCKPIT_PutSightShotgun);

INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_cpsight", gsCOCKPIT_PutSightSpark);

void gsCOCKPIT_PutSightFGrenade()
{
    gsCOCKPIT_PutSightGrenade();
}

INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_cpsight", gsCOCKPIT_PutSightLaser);

INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_cpsight", gsCOCKPIT_PutSightMineThrower);

INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_cpsight", PutSights);

INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_cpsight", gsCOCKPIT_PutSights);
