#include "common.h"

extern int tex2dSendFlag_00674320;

void gsCOCKPIT_InitBulletSendTex()
{
    tex2dSendFlag_00674320 = 0;
}

INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_cpblt", PermittoSend2dWeaponTex);

INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_cpblt", PermittoSend2dWeaponTex2);

INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_cpblt", Send2dWeaponTex);

INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_cpblt", hyEntryObj4Blt);

INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_cpblt", gsCOCKPIT_InitBullet);

INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_cpblt", gsCOCKPIT_InitBulletRifleSc);

INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_cpblt", gsCOCKPIT_InitBulletRifle);

INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_cpblt", gsCOCKPIT_InitBulletMachine);

INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_cpblt", gsCOCKPIT_InitBulletHandgun);

INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_cpblt", gsCOCKPIT_InitBulletMissile);

INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_cpblt", gsCOCKPIT_InitBulletMagnum);

INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_cpblt", gsCOCKPIT_InitBulletFire);

INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_cpblt", gsCOCKPIT_InitBulletHandGrenade);

INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_cpblt", gsCOCKPIT_InitBulletGutoring);

INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_cpblt", gsCOCKPIT_InitBulletMissilePod);

INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_cpblt", gsCOCKPIT_InitBulletGrenade);

INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_cpblt", gsCOCKPIT_InitBulletBowgun);

INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_cpblt", gsCOCKPIT_InitBulletPlasma);

INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_cpblt", gsCOCKPIT_InitBulletRocket);

INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_cpblt", gsCOCKPIT_InitBulletShotgun);

INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_cpblt", gsCOCKPIT_InitBulletSpark);

INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_cpblt", gsCOCKPIT_InitBulletFGrenade);

INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_cpblt", gsCOCKPIT_InitBulletLaser);

INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_cpblt", gsCOCKPIT_InitBulletMineThrower);

INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_cpblt", gsCOCKPIT_InitBulletBallet);

INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_cpblt", SetBullet_BulletBallet);

INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_cpblt", PutBullet_BulletBallet);

INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_cpblt", PutBullet_BulletMagnum);

INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_cpblt", PutBullet_BulletFire);

INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_cpblt", PutBullet_BulletSpark);

INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_cpblt", PutBullet_BulletMissile);

INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_cpblt", PutBullet_BulletMissilePod);

INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_cpblt", PutBullet_BulletHandgun);

INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_cpblt", PutBullet_BulletGrenade);

INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_cpblt", PutBullet_BulletFGrenade);

INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_cpblt", PutBullet_BulletBowgun);

INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_cpblt", PutBullet_BulletRocket);

INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_cpblt", PutBullet_BulletPlasma);

INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_cpblt", PutBullet_BulletMachine);

INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_cpblt", PutBullet_BulletHandGrenade);

INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_cpblt", PutBullet_BulletRifle);

INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_cpblt", PutBullet_BulletRifleSc);

INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_cpblt", PutBullet_BulletGutoring);

INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_cpblt", PutBullet_BulletShotGun);

INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_cpblt", PutBullet_BulletLaser);

INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_cpblt", PutBullet_BulletMineThrower);

INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_cpblt", PutBullet_Bullet);

INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_cpblt", gsCOCKPIT_PutBullet);
