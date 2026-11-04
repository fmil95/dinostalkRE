#include "common.h"
#include <stdlib.h>
#include "g_enemy/enemain.h"
#include "gunsuv_usa/libgf/gfanim.h"
#include "g_enemy/ene03pro/ene03mv.h"

extern void Enemy_ActChg00();
extern void Enemy_SeSet00();
extern void bigdino_vbrset();
extern void ene03joy_plmain();
extern void enemy_thkmain();
extern int D_002F18B4[2];
extern void (*ene03movestbl2[])();
void ene03move_main(char* a)
{
    STRUCT_OFFSET(a, 0x98, int) = STRUCT_OFFSET(STRUCT_OFFSET(a, 0xCBC, char*), 0x148, int);
    if (STRUCT_OFFSET(a, 0, int) < 0)
    {
        STRUCT_OFFSET(a, 0xE4, int) = D_002F18B4[0];
        ene03joy_plmain(a);
    }
    else
    {
        enemy_thkmain(a);
    }
    ene03movestbl2[STRUCT_OFFSET(a, 0x84, int) * 8 + STRUCT_OFFSET(a, 0x8C, int)](a);
}

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene03pro/ene03mv", bigdino_vbrset);

void enedummyElem_ene03mv(void) {
}

void ene03moveElem000(char* a)
{
    STRUCT_OFFSET(a, 0x0, int) &= ~0x40000000;
    Enemy_AnmChg00(a, 0, 8, 1);
    STRUCT_OFFSET(a, 0x0, int) &= ~0x800;
    if (rand() % 3 == 0)
    {
        if (STRUCT_OFFSET(a, 0x2A, short) == 7)
        {
            Enemy_SeSet00(a, 0x172);
        }
        else
        {
            Enemy_SeSet00(a, 0x186);
        }
    }
    STRUCT_OFFSET(a, 0x8C, int)++;
}

void ene03moveElem001(char* a)
{
    char* p = a + 0xBA0;

    if (GFAnim_ShapeFlagCheck((GF_INST_OBJECT*)p, 0) & 2)
    {
        GFAnim_ShapeFlagClear((GF_INST_OBJECT*)p, 2);
        if (rand() % 3 == 0)
        {
            if (STRUCT_OFFSET(a, 0x2A, short) == 7)
            {
                Enemy_SeSet00(a, 0x172);
            }
            else
            {
                Enemy_SeSet00(a, 0x186);
            }
        }
    }
}

void ene03moveElem020(char* a)
{
    int f = STRUCT_OFFSET(a, 0x0, int);

    STRUCT_OFFSET(a, 0x0, int) = f & ~0x40000000;
    if ((f & 0x800) == 0)
    {
        STRUCT_OFFSET(a, 0x8C, int) = 1;
    }
    else
    {
        STRUCT_OFFSET(a, 0x8C, int) = 3;
    }
    if (rand() % 3 == 0)
    {
        if (STRUCT_OFFSET(a, 0x2A, short) == 7)
        {
            Enemy_SeSet00(a, 0x172);
        }
        else
        {
            Enemy_SeSet00(a, 0x186);
        }
    }
}

void ene03moveElem021(char* a)
{
    Enemy_AnmChg00(a, (STRUCT_OFFSET(a, 0x84, int) << 1) + 1, 8, 0);
    STRUCT_OFFSET(a, 0x8C, int)++;
}

void ene03moveElem022(char* a)
{
    if (GFAnim_ShapeFlagCheck(a + 0xBA0, 0) & 2)
    {
        STRUCT_OFFSET(a, 0x8C, int) = 3;
        STRUCT_OFFSET(a, 0x0, int) |= 0x800;
    }
}

void ene03moveElem023(char* a)
{
    Enemy_AnmChg00(a, (STRUCT_OFFSET(a, 0x84, int) << 1) + 2, 8, 0);
    STRUCT_OFFSET(a, 0x8C, int)++;
}

void ene03moveElem024(char* a)
{
    if (GFAnim_ShapeFlagCheck(a + 0xBA0, 0) & 2)
    {
        STRUCT_OFFSET(a, 0x8C, int) = 1;
        STRUCT_OFFSET(a, 0x0, int) ^= 0x800;
    }
}

void ene03moveNewTurn00(char* a)
{
    Enemy_AnmChg00(a, STRUCT_OFFSET(a, 0x84, int) + 0x6F, 8, 0);
    STRUCT_OFFSET(a, 0x0, int) |= 0x40000000;
    STRUCT_OFFSET(a, 0xC0, int) = 0;
    STRUCT_OFFSET(a, 0x8C, int)++;
}

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene03pro/ene03mv", ene03moveNewTurn01);

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene03pro/ene03mv", ene03moveMeteoAtc00);

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene03pro/ene03mv", ene03moveMeteoAtc01);

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene03pro/ene03mv", ene03moveElem0a0);

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene03pro/ene03mv", ene03moveElem0a1);

void ene03moveElem0e0(char* a)
{
    Enemy_AnmChg00(a, (u_char)(STRUCT_OFFSET(a, 0x84, int) * 3 + 0x1B), 8, 0);
    STRUCT_OFFSET(a, 0x0, int) |= 0x40000000;
    STRUCT_OFFSET(a, 0xC0, int) = 0;
    STRUCT_OFFSET(a, 0x8C, int)++;
}

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene03pro/ene03mv", ene03moveElem0e1);

void ene03moveElem0e2(void* a)
{
    STRUCT_OFFSET(a, 0x94, int) = -1;
    Enemy_AnmChg00(a, (STRUCT_OFFSET(a, 0x84, int) + 92), 0, 0);
    STRUCT_OFFSET(a, 0x8C, int) = 1;
}

void ene03moveElem0e3(void* a)
{
    Enemy_AnmChg01(a, (((STRUCT_OFFSET(a, 0x84, int) << 1) + STRUCT_OFFSET(a, 0x84, int)) + 219), 8, 0, 6);
    STRUCT_OFFSET(a, 0x8C, int) = (STRUCT_OFFSET(a, 0x8C, int) + 1);
}

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene03pro/ene03mv", ene03moveElem0e4);

void ene03moveElem100(char* a)
{
    Enemy_AnmChg00(a, 0xE, 8, 0);
    STRUCT_OFFSET(a, 0x0, int) |= 0x40000200;
    STRUCT_OFFSET(a, 0x8C, int)++;
}

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene03pro/ene03mv", ene03moveElem101);

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene03pro/ene03mv", ene03moveElem102);

void ene03moveElem103(char* a)
{
    if (GFAnim_ShapeFlagCheck(a + 0xBA0, 0) & 2)
    {
        STRUCT_OFFSET(a, 0x0, int) &= ~0x40000A00;
        Enemy_ActChg00(a, 0);
        Enemy_AnmChg00(a, 0, 8, 1);
    }
}

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene03pro/ene03mv", ene03moveElem141);

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene03pro/ene03mv", ene03moveElem142);

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene03pro/ene03mv", ene03moveElem143);

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene03pro/ene03mv", ene03moveElem144);

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene03pro/ene03mv", ene03moveElem145);

void ene03moveElem1c0(char* a)
{
    Enemy_AnmChg00(a, STRUCT_OFFSET(a, 0x84, int) + 0x17, 8, 0);
    STRUCT_OFFSET(a, 0x0, int) |= 0x40000000;
    if (STRUCT_OFFSET(a, 0x2A, short) == 7)
    {
        Enemy_SeSet00(a, 0x172);
    }
    else
    {
        Enemy_SeSet00(a, 0x186);
    }
    STRUCT_OFFSET(a, 0x8C, int)++;
}

void ene03moveElem1c1(char* a)
{
    if (GFAnim_ShapeFlagCheck(a + 0xBA0, 0) & 2)
    {
        STRUCT_OFFSET(a, 0x0, int) &= ~0x4C200800;
        Enemy_ActChg00(a, 0);
        Enemy_AnmChg00(a, 0, 8, 1);
    }
}

void ene03moveElem200(char* a)
{
    Enemy_AnmChg00(a, 0x64, 8, 0);
    STRUCT_OFFSET(a, 0x0, int) = (STRUCT_OFFSET(a, 0x0, int) | 0x40000100) & ~0x400;
    if (STRUCT_OFFSET(a, 0x2A, short) == 7)
    {
        Enemy_SeSet00(a, 0x177);
    }
    else
    {
        Enemy_SeSet00(a, 0x189);
    }
    STRUCT_OFFSET(a, 0x8C, int)++;
}

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene03pro/ene03mv", ene03moveElem201);

void ene03moveElem202(char* a)
{
    if (GFAnim_ShapeFlagCheck(a + 0xBA0, 0) & 2)
    {
        STRUCT_OFFSET(a, 0x0, int) &= ~0x42000800;
        Enemy_ActChg00(a, 0);
        Enemy_AnmChg00(a, 0, 8, 1);
    }
}

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene03pro/ene03mv", ene03moveElem210);

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene03pro/ene03mv", ene03moveElem211);

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene03pro/ene03mv", ene03moveElem220);

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene03pro/ene03mv", ene03moveElem221);

void ene03moveElem222(char* a)
{
    int r = GFAnim_ShapeFlagCheck(a + 0xBA0, 0);

    if (r & 2)
    {
        Enemy_AnmChg00(a, 0x71, 8, 0);
        STRUCT_OFFSET(a, 0x8C, int)++;
    }
}

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene03pro/ene03mv", ene03moveElem223);

void ene03moveElem230(char* a)
{
    Enemy_AnmChg00(a, 0x66, 8, 0);
    STRUCT_OFFSET(a, 0x0, int) = (STRUCT_OFFSET(a, 0x0, int) | 0x40000000) & ~0x400;
    if (STRUCT_OFFSET(a, 0x2A, short) == 7)
    {
        Enemy_SeSet00(a, 0x176);
    }
    else
    {
        Enemy_SeSet00(a, 0x18A);
    }
    STRUCT_OFFSET(a, 0x8C, int)++;
}

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene03pro/ene03mv", ene03moveElem231);

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene03pro/ene03mv", ene03moveElem232);

void ene03moveElem233(char* a)
{
    if (GFAnim_ShapeFlagCheck(a + 0xBA0, 0) & 2)
    {
        STRUCT_OFFSET(a, 0x0, int) = (STRUCT_OFFSET(a, 0x0, int) & ~0x40000000) | 0x800;
        Enemy_ActChg00(a, 2);
    }
}

void ene03moveElem240(char* a)
{
    Enemy_AnmChg00(a, 0x69, 8, 0);
    STRUCT_OFFSET(a, 0x0, int) = (STRUCT_OFFSET(a, 0x0, int) | 0x40000000) & ~0x400;
    if (STRUCT_OFFSET(a, 0x2A, short) == 7)
    {
        Enemy_SeSet00(a, 0x176);
    }
    else
    {
        Enemy_SeSet00(a, 0x18A);
    }
    STRUCT_OFFSET(a, 0x8C, int)++;
}

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene03pro/ene03mv", ene03moveElem241);

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene03pro/ene03mv", ene03moveElem242);

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene03pro/ene03mv", ene03moveElem243);

void ene03moveElem250(char* a)
{
    Enemy_AnmChg00(a, (u_char)(STRUCT_OFFSET(a, 0x84, int) * 3 - 0x12), 8, 0);
    STRUCT_OFFSET(a, 0x0, int) = (STRUCT_OFFSET(a, 0x0, int) | 0x40000100) & ~0x400;
    if (STRUCT_OFFSET(a, 0x2A, short) == 7)
    {
        Enemy_SeSet00(a, 0x175);
    }
    else
    {
        Enemy_SeSet00(a, 0x189);
    }
    STRUCT_OFFSET(a, 0xC0, int) = 0;
    STRUCT_OFFSET(a, 0x8C, int)++;
}

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene03pro/ene03mv", ene03moveElem251);

void ene03moveElem252(void* a)
{
    STRUCT_OFFSET(a, 0x94, int) = -1;
    Enemy_AnmChg00(a, (((STRUCT_OFFSET(a, 0x84, int) << 1) + STRUCT_OFFSET(a, 0x84, int)) + -17), 0, 0);
    STRUCT_OFFSET(a, 0x8C, int) = 1;
}

void ene03moveElem253(char* a)
{
    int n;

    Enemy_AnmChg01(a, STRUCT_OFFSET(a, 0x84, int) * 3 - 0x10, 8, 0, 6);
    n = STRUCT_OFFSET(a, 0x8C, int);
    STRUCT_OFFSET(a, 0xC0, int) = 0;
    STRUCT_OFFSET(a, 0x8C, int) = n + 1;
}

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene03pro/ene03mv", ene03moveElem254);

void ene03moveElem270(char* a)
{
    int f;
    int n;

    Enemy_AnmChg01(a, 0x6C, 8, 0, 6);
    f = STRUCT_OFFSET(a, 0x0, int);
    n = STRUCT_OFFSET(a, 0x8C, int);
    f |= 0x40000000;
    f &= ~0x400;
    n++;
    STRUCT_OFFSET(a, 0x8C, int) = n;
    STRUCT_OFFSET(a, 0x0, int) = f;
    STRUCT_OFFSET(a, 0xC0, int) = 0;
}

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene03pro/ene03mv", ene03moveElem271);

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene03pro/ene03mv", ene03moveElem272);

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene03pro/ene03mv", ene03moveElem273);

void ene03moveElem274(char* a)
{
    if (GFAnim_ShapeFlagCheck(a + 0xBA0, 0) & 2)
    {
        STRUCT_OFFSET(a, 0x0, int) &= ~0x40000000;
        Enemy_ActChg00(a, 0);
        Enemy_AnmChg00(a, 0, 8, 1);
    }
}

void ene03moveElem280(char* a)
{
    Enemy_AnmChg00(a, (STRUCT_OFFSET(a, 0x84, int) * 4 - 0xA0) / 3 + 0x51, 8, 0);
    STRUCT_OFFSET(a, 0x0, int) = (STRUCT_OFFSET(a, 0x0, int) | 0x40000100) & ~0x400;
    if (STRUCT_OFFSET(a, 0x2A, short) == 7)
    {
        Enemy_SeSet00(a, 0x175);
    }
    else
    {
        Enemy_SeSet00(a, 0x189);
    }
    STRUCT_OFFSET(a, 0x8C, int)++;
}

void ene03moveElem281(char* a)
{
    if (GFAnim_ShapeFlagCheck((GF_INST_OBJECT*)(a + 0xBA0), 0) & 2)
    {
        Enemy_AttackHitChk(a, (STRUCT_OFFSET(a, 0x84, u_char) - 0x28) & 0xFF);
        STRUCT_OFFSET(a, 0x0, int) &= ~0x100;
        Enemy_AnmChg00(a, (STRUCT_OFFSET(a, 0x84, int) - 0x28) / 3 * 4 + 0x54, 8, 0);
        STRUCT_OFFSET(a, 0x8C, int)++;
    }
}

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene03pro/ene03mv", ene03moveElem282);

void ene03btatcsp00(char* a)
{
    Enemy_AnmChg00(a, 0x6C, 8, 0);
    STRUCT_OFFSET(a, 0x0, int) = (STRUCT_OFFSET(a, 0x0, int) | 0x40000100) & ~0x400;
    STRUCT_OFFSET(a, 0x8C, int)++;
    STRUCT_OFFSET(a, 0xC0, int) = 0;
}

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene03pro/ene03mv", ene03btatcsp01);

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene03pro/ene03mv", ene03btatcsp02);

void ene03btatcsp03(char* a)
{
    if (GFAnim_ShapeFlagCheck((GF_INST_OBJECT*)(a + 0xBA0), 0) & 2)
    {
        STRUCT_OFFSET(a, 0x0, int) &= ~0x40000000;
        Enemy_ActChg00(a, 0);
    }
}

void ene03dmgmvsp00(char* a)
{
    Enemy_AnmChg00(a, 0x31, 8, 0);
    bigdino_vbrset(a, 0x3B, 0x3C, 0x3D);
    STRUCT_OFFSET(a, 0xC0, int) = 0;
    STRUCT_OFFSET(a, 0x0, int) |= 0x40000000;
    STRUCT_OFFSET(a, 0xC4, int) = 0;
    STRUCT_OFFSET(a, 0x8C, int)++;
}

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene03pro/ene03mv", ene03dmgmvsp01);

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene03pro/ene03mv", ene03moveDeadElem00);

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene03pro/ene03mv", ene03moveDeadElem01);

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene03pro/ene03mv", ene03moveDeadElem02);

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene03pro/ene03mv", ene03moveDeadElem03);

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene03pro/ene03mv", ene03moveDeadElem04);

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene03pro/ene03mv", ene03moveDeadElem05);

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene03pro/ene03mv", ene03moveDeadElem06);
