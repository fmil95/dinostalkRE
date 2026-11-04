#include "common.h"

void hyInitDrawPoint(char* p)
{
    STRUCT_OFFSET(p, 0x0, long) = 0x40;
    STRUCT_OFFSET(p, 0x8, int) = 0xFFFFFF;
    STRUCT_OFFSET(p, 0xE, short) = 0;
    STRUCT_OFFSET(p, 0xC, short) = 0;
    STRUCT_OFFSET(p, 0x13, char) = -0x80;
    STRUCT_OFFSET(p, 0x12, char) = -0x80;
    STRUCT_OFFSET(p, 0x11, char) = -0x80;
    STRUCT_OFFSET(p, 0x10, char) = -0x80;
}

INCLUDE_ASM("asm/nonmatchings/hoya/g_2d", hyDrawPoint);

INCLUDE_ASM("asm/nonmatchings/hoya/g_2d", hyInitDrawLine);

INCLUDE_ASM("asm/nonmatchings/hoya/g_2d", hyDrawLine);

INCLUDE_ASM("asm/nonmatchings/hoya/g_2d", hyInitDrawLineStrip);

INCLUDE_ASM("asm/nonmatchings/hoya/g_2d", hyDrawLineStrip);

INCLUDE_ASM("asm/nonmatchings/hoya/g_2d", hyInitDrawSprite);

INCLUDE_ASM("asm/nonmatchings/hoya/g_2d", hyDrawSprite);

INCLUDE_ASM("asm/nonmatchings/hoya/g_2d", hyInitDrawSprites);

INCLUDE_ASM("asm/nonmatchings/hoya/g_2d", hyDrawSprites);

INCLUDE_ASM("asm/nonmatchings/hoya/g_2d", hyInitDrawPolySprite);

INCLUDE_ASM("asm/nonmatchings/hoya/g_2d", hyDrawPolySprite);
