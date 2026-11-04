#include "common.h"

extern int tex2dSendFlag_00674320;
extern int gsGunExtraId;
extern void PermittoSend2dWeaponTex();
extern void gsCOCKPIT_InitBullet();

extern int gsArmsTypeTbl[];
extern void PutBullet_BulletBowgun();
extern void PutBullet_BulletFGrenade();
extern void PutBullet_BulletFire();
extern void PutBullet_BulletGrenade();
extern void PutBullet_BulletGutoring();
extern void PutBullet_BulletHandGrenade();
extern void PutBullet_BulletHandgun();
extern void PutBullet_BulletLaser();
extern void PutBullet_BulletMachine();
extern void PutBullet_BulletMagnum();
extern void PutBullet_BulletMineThrower();
extern void PutBullet_BulletMissile();
extern void PutBullet_BulletMissilePod();
extern void PutBullet_BulletPlasma();
extern void PutBullet_BulletRifle();
extern void PutBullet_BulletRifleSc();
extern void PutBullet_BulletRocket();
extern void PutBullet_BulletShotGun();
extern void PutBullet_BulletSpark();
extern void gsCOCKPIT_InitBulletBowgun();
extern void gsCOCKPIT_InitBulletFGrenade();
extern void gsCOCKPIT_InitBulletFire();
extern void gsCOCKPIT_InitBulletGrenade();
extern void gsCOCKPIT_InitBulletGutoring();
extern void gsCOCKPIT_InitBulletHandGrenade();
extern void gsCOCKPIT_InitBulletHandgun();
extern void gsCOCKPIT_InitBulletLaser();
extern void gsCOCKPIT_InitBulletMachine();
extern void gsCOCKPIT_InitBulletMagnum();
extern void gsCOCKPIT_InitBulletMineThrower();
extern void gsCOCKPIT_InitBulletMissile();
extern void gsCOCKPIT_InitBulletMissilePod();
extern void gsCOCKPIT_InitBulletPlasma();
extern void gsCOCKPIT_InitBulletRifle();
extern void gsCOCKPIT_InitBulletRifleSc();
extern void gsCOCKPIT_InitBulletRocket();
extern void gsCOCKPIT_InitBulletShotgun();
extern void gsCOCKPIT_InitBulletSpark();
void gsCOCKPIT_InitBulletSendTex()
{
    tex2dSendFlag_00674320 = 0;
}

INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_cpblt", PermittoSend2dWeaponTex);

void PermittoSend2dWeaponTex2(int a, int b)
{
    PermittoSend2dWeaponTex(a, b);
    gsCOCKPIT_InitBullet(a, gsGunExtraId, b);
}

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

INCLUDE_RODATA("asm/nonmatchings/hoya/cockpit/g_cpblt", D_0066A590);

INCLUDE_RODATA("asm/nonmatchings/hoya/cockpit/g_cpblt", D_0066A5A8);

void PutBullet_Bullet(int a, int n)
{
    switch (gsArmsTypeTbl[n])
    {
    case 0:
        PutBullet_BulletMachine(a, n);
        break;
    case 1:
    case 19:
        PutBullet_BulletRifle(a, n);
        break;
    case 2:
        PutBullet_BulletRifleSc(a, n);
        break;
    case 3:
        PutBullet_BulletMissile(a, n);
        break;
    case 4:
        PutBullet_BulletHandgun(a, n);
        break;
    case 5:
        PutBullet_BulletMagnum(a, n);
        break;
    case 6:
        PutBullet_BulletFire(a, n);
        break;
    case 7:
        PutBullet_BulletHandGrenade(a, n);
        break;
    case 8:
        PutBullet_BulletGutoring(a, n);
        break;
    case 9:
        PutBullet_BulletMissilePod(a, n);
        break;
    case 10:
        PutBullet_BulletGrenade(a, n);
        break;
    case 11:
        PutBullet_BulletBowgun(a, n);
        break;
    case 12:
        PutBullet_BulletPlasma(a, n);
        break;
    case 13:
        PutBullet_BulletRocket(a, n);
        break;
    case 14:
        PutBullet_BulletShotGun(a, n);
        break;
    case 15:
        PutBullet_BulletSpark(a, n);
        break;
    case 16:
        PutBullet_BulletFGrenade(a, n);
        break;
    case 17:
        PutBullet_BulletLaser(a, n);
        break;
    case 18:
        PutBullet_BulletMineThrower(a, n);
        break;
    }
}

INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_cpblt", gsCOCKPIT_PutBullet);
