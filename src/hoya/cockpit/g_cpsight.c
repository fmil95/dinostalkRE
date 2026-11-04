#include "common.h"

extern int tex2dSendFlag_00674478;
extern void gsCOCKPIT_InitSightGrenade();
extern void gsCOCKPIT_PutSightGrenade();

extern char gsCOCKPIT_Sights[];
extern int gsCOCKPIT_IdtexSightsForward;
extern void gplInitSprite();
extern void gsCOCKPIT_PutSightBowgun();
extern void gsCOCKPIT_PutSightFire();
extern void gsCOCKPIT_PutSightGutoring();
extern void gsCOCKPIT_PutSightHandGrenade();
extern void gsCOCKPIT_PutSightHandgun();
extern void gsCOCKPIT_PutSightLaser();
extern void gsCOCKPIT_PutSightMachine();
extern void gsCOCKPIT_PutSightMagnum();
extern void gsCOCKPIT_PutSightMineThrower();
extern void gsCOCKPIT_PutSightMissile();
extern void gsCOCKPIT_PutSightMissilePod();
extern void gsCOCKPIT_PutSightPlasma();
extern void gsCOCKPIT_PutSightRifle();
extern void gsCOCKPIT_PutSightRocket();
extern void gsCOCKPIT_PutSightShotgun();
extern void gsCOCKPIT_PutSightSpark();
extern void gsCOCKPIT_InitSightBowgun();
extern void gsCOCKPIT_InitSightFire();
extern void gsCOCKPIT_InitSightGutoring();
extern void gsCOCKPIT_InitSightHandGrenade();
extern void gsCOCKPIT_InitSightHandgun();
extern void gsCOCKPIT_InitSightLaser();
extern void gsCOCKPIT_InitSightMachine();
extern void gsCOCKPIT_InitSightMagnum();
extern void gsCOCKPIT_InitSightMineThrower();
extern void gsCOCKPIT_InitSightMissile();
extern void gsCOCKPIT_InitSightMissilePod();
extern void gsCOCKPIT_InitSightPlasma();
extern void gsCOCKPIT_InitSightRifle();
extern void gsCOCKPIT_InitSightRocket();
extern void gsCOCKPIT_InitSightShotgun();
extern void gsCOCKPIT_InitSightSpark();
INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_cpsight", hyEntryObj4Sight);

void gsCOCKPIT_InitSightSendTex()
{
    tex2dSendFlag_00674478 = 0;
}

INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_cpsight", PermittoSend2dSightTex);

INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_cpsight", Send2dSightTex);

INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_cpsight", gsCOCKPIT_InitSightMachine);

void gsCOCKPIT_InitSightRifle()
{
    char* s = gsCOCKPIT_Sights;
    char** q = (char**)(s + 0x124);

    *q = s + 0x668;
    gplInitSprite(s + 0x668, gsCOCKPIT_IdtexSightsForward);
    STRUCT_OFFSET(*q, 0, u_char) = STRUCT_OFFSET(s, 0x20, u_char);
    STRUCT_OFFSET(*q, 1, u_char) = STRUCT_OFFSET(s, 0x24, u_char);
    STRUCT_OFFSET(*q, 2, u_char) = STRUCT_OFFSET(s, 0x28, u_char);
    STRUCT_OFFSET(*q, 0x18, u_char) = STRUCT_OFFSET(s, 0x2C, u_char);
}

INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_cpsight", gsCOCKPIT_InitSightMissile);

void gsCOCKPIT_InitSightHandgun()
{
    char* s = gsCOCKPIT_Sights;
    char** q = (char**)(s + 0x138);

    *q = s + 0x668;
    gplInitSprite(s + 0x668, gsCOCKPIT_IdtexSightsForward);
    STRUCT_OFFSET(*q, 0, u_char) = STRUCT_OFFSET(s, 0x20, u_char);
    STRUCT_OFFSET(*q, 1, u_char) = STRUCT_OFFSET(s, 0x24, u_char);
    STRUCT_OFFSET(*q, 2, u_char) = STRUCT_OFFSET(s, 0x28, u_char);
    STRUCT_OFFSET(*q, 0x18, u_char) = STRUCT_OFFSET(s, 0x2C, u_char);
}

void gsCOCKPIT_InitSightMagnum()
{
    char* s = gsCOCKPIT_Sights;
    char** q = (char**)(s + 0x13c);

    *q = s + 0x668;
    gplInitSprite(s + 0x668, gsCOCKPIT_IdtexSightsForward);
    STRUCT_OFFSET(*q, 0, u_char) = STRUCT_OFFSET(s, 0x20, u_char);
    STRUCT_OFFSET(*q, 1, u_char) = STRUCT_OFFSET(s, 0x24, u_char);
    STRUCT_OFFSET(*q, 2, u_char) = STRUCT_OFFSET(s, 0x28, u_char);
    STRUCT_OFFSET(*q, 0x18, u_char) = STRUCT_OFFSET(s, 0x2C, u_char);
}

INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_cpsight", gsCOCKPIT_InitSightFire);

void gsCOCKPIT_InitSightHandGrenade()
{
    char* s = gsCOCKPIT_Sights;
    char** q = (char**)(s + 0x234);

    *q = s + 0x668;
    gplInitSprite(s + 0x668, gsCOCKPIT_IdtexSightsForward);
    STRUCT_OFFSET(*q, 0, u_char) = STRUCT_OFFSET(s, 0x20, u_char);
    STRUCT_OFFSET(*q, 1, u_char) = STRUCT_OFFSET(s, 0x24, u_char);
    STRUCT_OFFSET(*q, 2, u_char) = STRUCT_OFFSET(s, 0x28, u_char);
    STRUCT_OFFSET(*q, 0x18, u_char) = STRUCT_OFFSET(s, 0x2C, u_char);
}

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

void gsCOCKPIT_InitSightPlasma()
{
    char* s = gsCOCKPIT_Sights;
    char** q = (char**)(s + 0x4fc);

    *q = s + 0x668;
    gplInitSprite(s + 0x668, gsCOCKPIT_IdtexSightsForward);
    STRUCT_OFFSET(*q, 0, u_char) = STRUCT_OFFSET(s, 0x20, u_char);
    STRUCT_OFFSET(*q, 1, u_char) = STRUCT_OFFSET(s, 0x24, u_char);
    STRUCT_OFFSET(*q, 2, u_char) = STRUCT_OFFSET(s, 0x28, u_char);
    STRUCT_OFFSET(*q, 0x18, u_char) = STRUCT_OFFSET(s, 0x2C, u_char);
}

void gsCOCKPIT_InitSightRocket()
{
    char* s = gsCOCKPIT_Sights;
    char** q = (char**)(s + 0x500);

    *q = s + 0x668;
    gplInitSprite(s + 0x668, gsCOCKPIT_IdtexSightsForward);
    STRUCT_OFFSET(*q, 0, u_char) = STRUCT_OFFSET(s, 0x20, u_char);
    STRUCT_OFFSET(*q, 1, u_char) = STRUCT_OFFSET(s, 0x24, u_char);
    STRUCT_OFFSET(*q, 2, u_char) = STRUCT_OFFSET(s, 0x28, u_char);
    STRUCT_OFFSET(*q, 0x18, u_char) = STRUCT_OFFSET(s, 0x2C, u_char);
}

INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_cpsight", gsCOCKPIT_InitSightShotgun);

void gsCOCKPIT_InitSightSpark()
{
    char* s = gsCOCKPIT_Sights;
    char** q = (char**)(s + 0x574);

    *q = s + 0x668;
    gplInitSprite(s + 0x668, gsCOCKPIT_IdtexSightsForward);
    STRUCT_OFFSET(*q, 0, u_char) = STRUCT_OFFSET(s, 0x20, u_char);
    STRUCT_OFFSET(*q, 1, u_char) = STRUCT_OFFSET(s, 0x24, u_char);
    STRUCT_OFFSET(*q, 2, u_char) = STRUCT_OFFSET(s, 0x28, u_char);
    STRUCT_OFFSET(*q, 0x18, u_char) = STRUCT_OFFSET(s, 0x2C, u_char);
}

void gsCOCKPIT_InitSightFGrenade()
{
    gsCOCKPIT_InitSightGrenade();
}

INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_cpsight", gsCOCKPIT_InitSightLaser);

void gsCOCKPIT_InitSightMineThrower()
{
    char* s = gsCOCKPIT_Sights;
    char** q = (char**)(s + 0x660);

    *q = s + 0x668;
    gplInitSprite(s + 0x668, gsCOCKPIT_IdtexSightsForward);
    STRUCT_OFFSET(*q, 0, u_char) = STRUCT_OFFSET(s, 0x20, u_char);
    STRUCT_OFFSET(*q, 1, u_char) = STRUCT_OFFSET(s, 0x24, u_char);
    STRUCT_OFFSET(*q, 2, u_char) = STRUCT_OFFSET(s, 0x28, u_char);
    STRUCT_OFFSET(*q, 0x18, u_char) = STRUCT_OFFSET(s, 0x2C, u_char);
}

void gsCOCKPIT_InitSights(int type, int b)
{
    switch (type)
    {
    case 0:
        gsCOCKPIT_InitSightMachine(b);
        break;
    case 1:
    case 19:
        gsCOCKPIT_InitSightRifle(b);
        break;
    case 3:
        gsCOCKPIT_InitSightMissile(b);
        break;
    case 4:
        gsCOCKPIT_InitSightHandgun(b);
        break;
    case 5:
        gsCOCKPIT_InitSightMagnum(b);
        break;
    case 6:
        gsCOCKPIT_InitSightFire(b);
        break;
    case 7:
        gsCOCKPIT_InitSightHandGrenade(b);
        break;
    case 8:
        gsCOCKPIT_InitSightGutoring(b);
        break;
    case 9:
        gsCOCKPIT_InitSightMissilePod(b);
        break;
    case 10:
        gsCOCKPIT_InitSightGrenade(b);
        break;
    case 11:
        gsCOCKPIT_InitSightBowgun(b);
        break;
    case 12:
        gsCOCKPIT_InitSightPlasma(b);
        break;
    case 13:
        gsCOCKPIT_InitSightRocket(b);
        break;
    case 14:
        gsCOCKPIT_InitSightShotgun(b);
        break;
    case 15:
        gsCOCKPIT_InitSightSpark(b);
        break;
    case 16:
        gsCOCKPIT_InitSightGrenade(b);
        break;
    case 17:
        gsCOCKPIT_InitSightLaser(b);
        break;
    case 18:
        gsCOCKPIT_InitSightMineThrower(b);
        break;
    }
}

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

INCLUDE_RODATA("asm/nonmatchings/hoya/cockpit/g_cpsight", D_0066A940);

void PutSights(int a, int type)
{
    switch (type)
    {
    case 0:
        gsCOCKPIT_PutSightMachine(a);
        break;
    case 1:
    case 19:
        gsCOCKPIT_PutSightRifle(a);
        break;
    case 3:
        gsCOCKPIT_PutSightMissile(a);
        break;
    case 4:
        gsCOCKPIT_PutSightHandgun(a);
        break;
    case 5:
        gsCOCKPIT_PutSightMagnum(a);
        break;
    case 6:
        gsCOCKPIT_PutSightFire(a);
        break;
    case 7:
        gsCOCKPIT_PutSightHandGrenade(a);
        break;
    case 8:
        gsCOCKPIT_PutSightGutoring(a);
        break;
    case 9:
        gsCOCKPIT_PutSightMissilePod(a);
        break;
    case 10:
        gsCOCKPIT_PutSightGrenade(a);
        break;
    case 11:
        gsCOCKPIT_PutSightBowgun(a);
        break;
    case 12:
        gsCOCKPIT_PutSightPlasma(a);
        break;
    case 13:
        gsCOCKPIT_PutSightRocket(a);
        break;
    case 14:
        gsCOCKPIT_PutSightShotgun(a);
        break;
    case 15:
        gsCOCKPIT_PutSightSpark(a);
        break;
    case 16:
        gsCOCKPIT_PutSightGrenade(a);
        break;
    case 17:
        gsCOCKPIT_PutSightLaser(a);
        break;
    case 18:
        gsCOCKPIT_PutSightMineThrower(a);
        break;
    }
}

INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_cpsight", gsCOCKPIT_PutSights);
