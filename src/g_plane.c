#include "common.h"

extern void aeInit();
extern void saeDrawPrim();

void gplInitPlane()
{
    aeInit();
}

INCLUDE_ASM("asm/nonmatchings/g_plane", gplInitSprite);

INCLUDE_ASM("asm/nonmatchings/g_plane", gplSetSprite);

INCLUDE_ASM("asm/nonmatchings/g_plane", gplChangeClutSprite);

INCLUDE_ASM("asm/nonmatchings/g_plane", gplInitPolyFt4);

INCLUDE_ASM("asm/nonmatchings/g_plane", gplSetPolyFt4);

INCLUDE_ASM("asm/nonmatchings/g_plane", gplInitPolyFt42);

INCLUDE_ASM("asm/nonmatchings/g_plane", gplSetPolyFt42);

INCLUDE_ASM("asm/nonmatchings/g_plane", gplInitSprite2);

INCLUDE_ASM("asm/nonmatchings/g_plane", gplSetSprite2);

INCLUDE_ASM("asm/nonmatchings/g_plane", gplInitPartLine);

INCLUDE_ASM("asm/nonmatchings/g_plane", gplSetPartLine);

INCLUDE_ASM("asm/nonmatchings/g_plane", gplInitTile);

INCLUDE_ASM("asm/nonmatchings/g_plane", gplSetTile);

INCLUDE_ASM("asm/nonmatchings/g_plane", gplInitPolyGt4);

INCLUDE_ASM("asm/nonmatchings/g_plane", gplSetPolyGt4);

void gplDrawPlane(int a)
{
    saeDrawPrim((a & 0x1));
}
