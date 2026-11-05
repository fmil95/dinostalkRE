#include "common.h"
#include <stdlib.h>
#include "g_enemy/enemain.h"
#include "gunsuv_usa/libgf/gfanim.h"
#include "g_enemy/ene04pro/ene04mv.h"
#include "g_shock.h"
#include "air/a_item.h"
#include "benjamin/g_shrink.h"
#include "g_enemy/ene04pro/ene04joy.h"
#include "g_enemy/enethkmn.h"

extern int D_002F18B4[2];
extern void (*ene04Bmovestbl2[])();
extern void (*ene04movestbl2[])();
void ene04move_main(char* a)
{
    u_int k = STRUCT_OFFSET(a, 0x94, int) - 9;

    if (k < 2)
    {
        STRUCT_OFFSET(a, 0, int) |= 0x10000000;
    }
    else
    {
        STRUCT_OFFSET(a, 0, int) &= ~0x10000000;
    }
    STRUCT_OFFSET(a, 0x98, int) = STRUCT_OFFSET(STRUCT_OFFSET(a, 0xCBC, char*), 0x148, int);
    if (STRUCT_OFFSET(a, 0, int) < 0)
    {
        STRUCT_OFFSET(a, 0xE4, int) = D_002F18B4[0];
        ene04joy_plmain(a);
    }
    else
    {
        enemy_thkmain(a);
    }
    ene04movestbl2[STRUCT_OFFSET(a, 0x84, int) * 4 + STRUCT_OFFSET(a, 0x8C, int)](a);
}

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
    if (GFAnim_ShapeFlagCheck((GF_INST_OBJECT*)(a + 0xBA0), 0) & 2)
    {
        GFAnim_ShapeFlagClear((GF_INST_OBJECT*)(a + 0xBA0), 2);
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
    if (GFAnim_ShapeFlagCheck((GF_INST_OBJECT*)(a + 0xBA0), 0) & 2)
    {
        GFAnim_ShapeFlagClear((GF_INST_OBJECT*)(a + 0xBA0), 2);
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
    if (GFAnim_ShapeFlagCheck((GF_INST_OBJECT*)(a + 0xBA0), 0) & 2)
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

void ene04moveElem090(char* a)
{
    Enemy_AnmChg00(a, 0x2E, 8, 0);
    STRUCT_OFFSET(a, 0, int) |= 0x40000000;
    STRUCT_OFFSET(a, 0xC0, float) = 1.0f;
    STRUCT_OFFSET(a, 0x8C, int)++;
}

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene04pro/ene04mv", ene04moveElem091);

void ene04moveElem0f0(char* a)
{
    Enemy_AnmChg00(a, 0xC, 8, 0);
    STRUCT_OFFSET(a, 0, int) |= 0x40000000;
    gsShockSetSeqNo(0, 0x6A);
    STRUCT_OFFSET(a, 0x8C, int)++;
}

void ene04moveElem0f1(char* a)
{
    if (GFAnim_ShapeFlagCheck((GF_INST_OBJECT*)(a + 0xBA0), 0) & 2)
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
    if (GFAnim_ShapeFlagCheck((GF_INST_OBJECT*)(a + 0xBA0), 0) & 2)
    {
        STRUCT_OFFSET(a, 0x0, int) &= ~0x40000000;
        Enemy_ActChg00(a, 0);
    }
}

void ene04Bmove_main(char* a)
{
    STRUCT_OFFSET(a, 0x98, int) = STRUCT_OFFSET(STRUCT_OFFSET(a, 0xCBC, char*), 0x148, int);
    if (STRUCT_OFFSET(a, 0, int) < 0)
    {
        STRUCT_OFFSET(a, 0xE4, int) = D_002F18B4[0];
        ene04Bjoy_plmain(a);
    }
    else
    {
        enemy_thkmain(a);
    }
    ((void (**)())0x45C2B8)[STRUCT_OFFSET(a, 0x84, int) * 8 + STRUCT_OFFSET(a, 0x8C, int)](a);
}

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
    if (GFAnim_ShapeFlagCheck((GF_INST_OBJECT*)(a + 0xBA0), 0) & 2)
    {
        GFAnim_ShapeFlagClear((GF_INST_OBJECT*)(a + 0xBA0), 2);
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
    if (GFAnim_ShapeFlagCheck((GF_INST_OBJECT*)(a + 0xBA0), 0) & 2)
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
    if (GFAnim_ShapeFlagCheck((GF_INST_OBJECT*)(a + 0xBA0), 0) & 2)
    {
        STRUCT_OFFSET(a, 0x0, int) &= ~0x40000000;
        Enemy_ActChg00(a, 0);
        Enemy_AnmChg00(a, 0, 8, 1);
    }
}

void ene04BmoveElem140(char* a)
{
    Enemy_AnmChg00(a, 0xE, 8, 0);
    STRUCT_OFFSET(a, 0x0, int) |= 0x40000200;
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

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene04pro/ene04mv", ene04BmoveElem141);

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene04pro/ene04mv", ene04BmoveElem142);

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene04pro/ene04mv", ene04BmoveElem143);

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene04pro/ene04mv", ene04BmoveElem144);

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene04pro/ene04mv", ene04BmoveElem145);

void ene04BmoveElem146(char* a)
{
    if (GFAnim_ShapeFlagCheck(a + 0xBA0, 0) & 2)
    {
        STRUCT_OFFSET(a, 0x0, int) ^= 0x40000200;
        Enemy_ActChg00(a, 0);
        Enemy_AnmChg00(a, 0, 8, 1);
    }
}

void ene04BmoveElem1c0(char* a)
{
    Enemy_AnmChg00(a, STRUCT_OFFSET(a, 0x84, int) + 0x1F, 8, 0);
    STRUCT_OFFSET(a, 0, int) |= 0x40000000;
    STRUCT_OFFSET(a, 0x1C0, float) = STRUCT_OFFSET(a, 0x1E0, float);
    STRUCT_OFFSET(a, 0x1C4, float) = STRUCT_OFFSET(a, 0x1E4, float);
    STRUCT_OFFSET(a, 0x1C8, float) = STRUCT_OFFSET(a, 0x1E8, float);
    Enemy_SeSet00(a, 0x193);
    STRUCT_OFFSET(a, 0x8C, int)++;
}

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene04pro/ene04mv", ene04BmoveElem1c1);

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene04pro/ene04mv", ene04BmoveElem1c2);

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene04pro/ene04mv", ene04BmoveElem2c0);

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene04pro/ene04mv", ene04BmoveElem2c1);

void ene04BmoveElem2c2(char* a)
{
    int f;

    STRUCT_OFFSET(a, 0x200, int) = 0;
    if (Enemy_DelDethPrcMain(a) > 0)
    {
        f = STRUCT_OFFSET(a, 0x0, int);
        if (!(f & 0x40))
        {
            STRUCT_OFFSET(a, 0x0, int) = f | 0x40;
            gsDeleteEnemySetItemObj(a);
            f = STRUCT_OFFSET(a, 0x0, int);
        }
        STRUCT_OFFSET(a, 0x0, int) = f | 0x800000;
        gsDinoSetDeadShrinkY(a, 0x2D);
        STRUCT_OFFSET(a, 0x8C, int)++;
    }
}
