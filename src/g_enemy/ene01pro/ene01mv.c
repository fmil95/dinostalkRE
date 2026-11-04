#include "common.h"
#include "gunsuv_usa/libgf/gfanim.h"
#include "g_enemy/enemain.h"
#include <stdlib.h>

extern void ene01joy_plmain();
extern void enemy_thkmain();
extern int D_002F18B4[2];
extern void (*ene01movestbl[])();
void ene01move_main(char* a)
{
    STRUCT_OFFSET(a, 0x98, int) = STRUCT_OFFSET(STRUCT_OFFSET(a, 0xCBC, char*), 0x148, int);
    if (STRUCT_OFFSET(a, 0, int) < 0)
    {
        STRUCT_OFFSET(a, 0xE4, int) = D_002F18B4[0];
        ene01joy_plmain(a);
    }
    else
    {
        enemy_thkmain(a);
    }
    ene01movestbl[STRUCT_OFFSET(a, 0x84, int)](a);
}

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene01pro/ene01mv", ene01posecntl);

void enedummymv_ene01mv(void) {
}

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene01pro/ene01mv", ene01move00);

void ene01move01(char* a)
{
    char* p = a + 0xBA0;

    if (STRUCT_OFFSET(a, 0x8C, int) == 0)
    {
        Enemy_AnmChg00(a, 1, 8, 1);
        STRUCT_OFFSET(a, 0x0, int) &= ~0x40000;
        STRUCT_OFFSET(a, 0x8C, int)++;
    }
    else if (GFAnim_ShapeFlagCheck((GF_INST_OBJECT*)p, 0) & 2)
    {
        GFAnim_ShapeFlagClear((GF_INST_OBJECT*)p, 2);
        if (rand() % 3 == 0)
        {
            Enemy_SeReq(a, 0x14A, 1);
        }
    }
}

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene01pro/ene01mv", ene01move02);

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene01pro/ene01mv", ene01move04);

void ene01move05(char* a)
{
    char* p = a + 0xBA0;

    STRUCT_OFFSET(a, 0x200, int) = 0;
    if (STRUCT_OFFSET(a, 0x8C, int) == 0)
    {
        Enemy_AnmChg00(a, (STRUCT_OFFSET(a, 0x84, int) != 5) ? 6 : 5, 8, 1);
        STRUCT_OFFSET(a, 0x0, int) |= 0x40000;
        STRUCT_OFFSET(a, 0x8C, int) = -1;
    }
    else if (GFAnim_ShapeFlagCheck((GF_INST_OBJECT*)p, 0) & 2)
    {
        GFAnim_ShapeFlagClear((GF_INST_OBJECT*)p, 2);
        if (STRUCT_OFFSET(a, 0x94, int) == 6)
        {
            Enemy_SeReq(a, 0xC8, 0);
        }
        if (rand() % 3 == 0)
        {
            Enemy_SeReq(a, 0x14A, 1);
        }
    }
}

void ene01move07(char* a)
{
    char* p = a + 0xBA0;

    STRUCT_OFFSET(a, 0x200, int) = 0;
    if (STRUCT_OFFSET(a, 0x8C, int) == 0)
    {
        Enemy_AnmChg00(a, 0, 8, 1);
        STRUCT_OFFSET(a, 0x0, int) |= 0x40000;
        STRUCT_OFFSET(a, 0x8C, int) = -1;
    }
    else if (GFAnim_ShapeFlagCheck((GF_INST_OBJECT*)p, 0) & 2)
    {
        GFAnim_ShapeFlagClear((GF_INST_OBJECT*)p, 2);
        Enemy_SeReq(a, 0xC8, 0);
        if (rand() % 3 == 0)
        {
            Enemy_SeReq(a, 0x14A, 1);
        }
    }
}

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene01pro/ene01mv", ene01move09);

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene01pro/ene01mv", ene01move0a);

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene01pro/ene01mv", ene01move0d);

INCLUDE_RODATA("asm/nonmatchings/g_enemy/ene01pro/ene01mv", D_00669718);

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene01pro/ene01mv", ene01move18);

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene01pro/ene01mv", ene01move20);

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene01pro/ene01mv", ene01move24);

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene01pro/ene01mv", ene01move25);

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene01pro/ene01mv", ene01move28);

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene01pro/ene01mv", ene01move2c);
