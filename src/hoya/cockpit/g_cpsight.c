#include "common.h"

extern int tex2dSendFlag_00674478;
extern void gsCOCKPIT_InitSightGrenade();
extern void gsCOCKPIT_PutSightGrenade();

extern char gsCOCKPIT_Sights[];
extern int gsCOCKPIT_IdtexSightsForward;
extern void gplInitSprite();
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

void gsCOCKPIT_InitSightGrenade()
{
    char* s = gsCOCKPIT_Sights;
    char** q = (char**)(s + 0x4f4);

    *q = s + 0x668;
    gplInitSprite(s + 0x668, gsCOCKPIT_IdtexSightsForward);
    STRUCT_OFFSET(*q, 0, u_char) = STRUCT_OFFSET(s, 0x20, u_char);
    STRUCT_OFFSET(*q, 1, u_char) = STRUCT_OFFSET(s, 0x24, u_char);
    STRUCT_OFFSET(*q, 2, u_char) = STRUCT_OFFSET(s, 0x28, u_char);
    STRUCT_OFFSET(*q, 0x18, u_char) = STRUCT_OFFSET(s, 0x2C, u_char);
}

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
