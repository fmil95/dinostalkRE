#include "common.h"

extern int GFAnim_ShapeFlagCheck();
extern void Enemy_AnmChg00();
extern void Enemy_ActChg00();
extern int rand();
extern void Enemy_SeSet00();
extern void GFAnim_ShapeFlagClear();
INCLUDE_ASM("asm/nonmatchings/g_enemy/ene04pro/ene04mv", ene04move_main);

void enedummyElem_ene04mv(void) {
}

void ene04moveElem000(char* a)
{
    Enemy_AnmChg00(a, 0, 8, 1);
    if (rand() % 3 == 0)
    {
        Enemy_SeSet00(a, 0x17C);
    }
    STRUCT_OFFSET(a, 0x8C, int)++;
}

void ene04moveElem001(char* a)
{
    if (GFAnim_ShapeFlagCheck(a + 0xBA0, 0) & 2)
    {
        GFAnim_ShapeFlagClear(a + 0xBA0, 2);
        if (rand() % 3 == 0)
        {
            Enemy_SeSet00(a, 0x17C);
        }
    }
}

void ene04moveElem020(char* a)
{
    Enemy_AnmChg00(a, 5, 8, 1);
    if (rand() % 3 == 0)
    {
        Enemy_SeSet00(a, 0x17C);
    }
    STRUCT_OFFSET(a, 0x8C, int)++;
}

void ene04moveElem021(char* a)
{
    if (GFAnim_ShapeFlagCheck(a + 0xBA0, 0) & 2)
    {
        GFAnim_ShapeFlagClear(a + 0xBA0, 2);
        if (rand() % 3 == 0)
        {
            Enemy_SeSet00(a, 0x17C);
        }
    }
}

void ene04moveElem030(char* a)
{
    Enemy_AnmChg00(a, STRUCT_OFFSET(a, 0x84, int) + 6, 8, 1);
    if (rand() % 3 == 0)
    {
        Enemy_SeSet00(a, 0x17C);
    }
    STRUCT_OFFSET(a, 0x8C, int)++;
}

void ene04moveElem050(char* a)
{
    Enemy_AnmChg00(a, (STRUCT_OFFSET(a, 0x84, int) << 1) + 0x1C, 8, 0);
    STRUCT_OFFSET(a, 0x0, int) |= 0x40000000;
    STRUCT_OFFSET(a, 0x8C, int)++;
}

void ene04moveElem051(char* a)
{
    if (GFAnim_ShapeFlagCheck(a + 0xBA0, 0) & 2)
    {
        STRUCT_OFFSET(a, 0x0, int) &= ~0x40000000;
        Enemy_ActChg00(a, 0);
    }
}

void ene04moveElem070(char* a)
{
    Enemy_AnmChg00(a, (STRUCT_OFFSET(a, 0x84, int) << 1) + 0x1C, 8, 1);
    if (rand() % 3 == 0)
    {
        Enemy_SeSet00(a, 0x17C);
    }
    STRUCT_OFFSET(a, 0x8C, int)++;
}

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene04pro/ene04mv", ene04moveElem090);

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene04pro/ene04mv", ene04moveElem091);

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene04pro/ene04mv", ene04moveElem0f0);

void ene04moveElem0f1(char* a)
{
    if (GFAnim_ShapeFlagCheck(a + 0xBA0, 0) & 2)
    {
        STRUCT_OFFSET(a, 0x0, int) &= ~0x40000000;
        Enemy_ActChg00(a, 0);
    }
}

void ene04moveElem1c0(char* a)
{
    Enemy_AnmChg00(a, STRUCT_OFFSET(a, 0x84, int) + 0x17, 8, 0);
    STRUCT_OFFSET(a, 0x0, int) |= 0x40000000;
    Enemy_SeSet00(a, 0x17D);
    STRUCT_OFFSET(a, 0x8C, int)++;
}

void ene04moveElem1c1(char* a)
{
    if (GFAnim_ShapeFlagCheck(a + 0xBA0, 0) & 2)
    {
        STRUCT_OFFSET(a, 0x0, int) &= ~0x40000000;
        Enemy_ActChg00(a, 0);
    }
}

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene04pro/ene04mv", ene04Bmove_main);

void enedummyElemB(void) {
}

void ene04BmoveElem000(char* a)
{
    Enemy_AnmChg00(a, 0, 8, 1);
    if (rand() % 3 == 0)
    {
        if ((rand() & 1) == 0)
        {
            Enemy_SeSet00(a, 0x190);
        }
        else
        {
            Enemy_SeSet00(a, 0x191);
        }
    }
    STRUCT_OFFSET(a, 0x8C, int)++;
}

void ene04BmoveElem001(char* a)
{
    if (GFAnim_ShapeFlagCheck(a + 0xBA0, 0) & 2)
    {
        GFAnim_ShapeFlagClear(a + 0xBA0, 2);
        if (rand() % 3 == 0)
        {
            if ((rand() & 1) == 0)
            {
                Enemy_SeSet00(a, 0x190);
            }
            else
            {
                Enemy_SeSet00(a, 0x191);
            }
        }
    }
}

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene04pro/ene04mv", ene04BmoveElem021);

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene04pro/ene04mv", ene04BmoveElem022);

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene04pro/ene04mv", ene04BmoveElem023);

void ene04BmoveElem026(char* a)
{
    if (GFAnim_ShapeFlagCheck(a + 0xBA0, 0) & 2)
    {
        STRUCT_OFFSET(a, 0x8C, int) = 1;
        STRUCT_OFFSET(a, 0x0, int) ^= 0x40000200;
    }
}

void ene04BmoveElem090(char* a)
{
    Enemy_AnmChg00(a, STRUCT_OFFSET(a, 0x84, int) + 0x25, 8, 0);
    STRUCT_OFFSET(a, 0x0, int) |= 0x40000000;
    if (STRUCT_OFFSET(a, 0x84, int) == 9)
    {
        Enemy_SeSet00(a, 0x192);
    }
    STRUCT_OFFSET(a, 0x8C, int)++;
}

void ene04BmoveElem091(char* a)
{
    if (GFAnim_ShapeFlagCheck(a + 0xBA0, 0) & 2)
    {
        STRUCT_OFFSET(a, 0x0, int) &= ~0x40000000;
        Enemy_ActChg00(a, 0);
        Enemy_AnmChg00(a, 0, 8, 1);
    }
}

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene04pro/ene04mv", ene04BmoveElem140);

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene04pro/ene04mv", ene04BmoveElem141);

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene04pro/ene04mv", ene04BmoveElem142);

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene04pro/ene04mv", ene04BmoveElem143);

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene04pro/ene04mv", ene04BmoveElem144);

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene04pro/ene04mv", ene04BmoveElem145);

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene04pro/ene04mv", ene04BmoveElem146);

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene04pro/ene04mv", ene04BmoveElem1c0);

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene04pro/ene04mv", ene04BmoveElem1c1);

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene04pro/ene04mv", ene04BmoveElem1c2);

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene04pro/ene04mv", ene04BmoveElem2c0);

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene04pro/ene04mv", ene04BmoveElem2c1);

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene04pro/ene04mv", ene04BmoveElem2c2);
