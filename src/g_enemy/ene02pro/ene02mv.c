#include "common.h"
#include "gunsuv_usa/libgf/gfanim.h"
#include "g_enemy/enemain.h"
#include <stdlib.h>

extern void Enemy_AnmChg00();

extern void ene02B_joy_plmain();
extern void enemy_thkmain();
extern int D_002F18B4[2];
extern void (*ene02B_movestbl[])();
extern void ene02joy_plmain();
extern void (*ene02movestbl[])();
void ene02move_main(char* a)
{
    STRUCT_OFFSET(a, 0x98, int) = STRUCT_OFFSET(STRUCT_OFFSET(a, 0xCBC, char*), 0x148, int);
    if (STRUCT_OFFSET(a, 0, int) < 0)
    {
        STRUCT_OFFSET(a, 0xE4, int) = D_002F18B4[0];
        ene02joy_plmain(a);
    }
    else
    {
        enemy_thkmain(a);
    }
    ene02movestbl[STRUCT_OFFSET(a, 0x84, int)](a);
}

void enedummymv_ene02mv(void) {
}

void ene02move00(char* a)
{
    STRUCT_OFFSET(a, 0x200, int) = 0;
    if (STRUCT_OFFSET(a, 0x8C, int) == 0)
    {
        if (!(STRUCT_OFFSET(a, 0x0, int) & 0x20000))
        {
            Enemy_AnmChg00(a, 0, 8, 1);
            STRUCT_OFFSET(a, 0x8C, int)++;
        }
        else
        {
            Enemy_ActChg00(a, 1);
        }
    }
}

void ene02move01(char* a)
{
    STRUCT_OFFSET(a, 0x200, int) = 0;
    if (STRUCT_OFFSET(a, 0x8C, int) == 0)
    {
        Enemy_AnmChg00(a, 1, 8, 1);
        STRUCT_OFFSET(a, 0x0, int) |= 0x20000;
        STRUCT_OFFSET(a, 0x8C, int)++;
    }
}

void ene02move02(char* a)
{
    char* p;

    STRUCT_OFFSET(a, 0x200, int) = 0;
    if (STRUCT_OFFSET(a, 0x8C, int) == 0)
    {
        if (STRUCT_OFFSET(a, 0x84, int) == 2)
        {
            if ((STRUCT_OFFSET(a, 0x0, int) & 0x20000) == 0)
            {
                Enemy_AnmChg00(a, 5, 8, 1);
            }
            else
            {
                Enemy_AnmChg00(a, 9, 8, 1);
            }
        }
        else
        {
            if ((STRUCT_OFFSET(a, 0x0, int) & 0x20000) == 0)
            {
                Enemy_AnmChg00(a, 7, 8, 1);
            }
            else
            {
                Enemy_AnmChg00(a, 9, 8, 1);
            }
        }
        STRUCT_OFFSET(a, 0x8C, int)++;
    }
    else if (STRUCT_OFFSET(a, 0x94, int) != 9)
    {
        p = a + 0xBA0;
        if (GFAnim_ShapeFlagCheck((GF_INST_OBJECT*)p, 0) & 2)
        {
            GFAnim_ShapeFlagClear((GF_INST_OBJECT*)p, 2);
            Enemy_SeReq(a, 0xD2, 0);
        }
    }
}

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene02pro/ene02mv", ene02move04);

void ene02move07(char* a)
{
    STRUCT_OFFSET(a, 0x200, int) = 0;
    switch (STRUCT_OFFSET(a, 0x8C, int))
    {
    case 0:
        Enemy_AnmChg00(a, (STRUCT_OFFSET(a, 0x84, int) << 1) + 0x18, 8, 0);
        STRUCT_OFFSET(a, 0x0, int) |= 0x40000000;
        STRUCT_OFFSET(a, 0x8C, int)++;
        break;
    case 1:
        if (GFAnim_ShapeFlagCheck((GF_INST_OBJECT*)(a + 0xBA0), 0) & 2)
        {
            STRUCT_OFFSET(a, 0x0, int) ^= 0x40000000;
            Enemy_ActChg00(a, 0);
        }
        break;
    }
}

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene02pro/ene02mv", ene02move09);

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene02pro/ene02mv", ene02move0d);

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene02pro/ene02mv", ene02move1c);

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene02pro/ene02mv", ene02move20);

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene02pro/ene02mv", ene02move23);

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene02pro/ene02mv", ene02move2c);

void ene02B_move_main(char* a)
{
    STRUCT_OFFSET(a, 0x98, int) = STRUCT_OFFSET(STRUCT_OFFSET(a, 0xCBC, char*), 0x148, int);
    if (STRUCT_OFFSET(a, 0, int) < 0)
    {
        STRUCT_OFFSET(a, 0xE4, int) = D_002F18B4[0];
        ene02B_joy_plmain(a);
    }
    else
    {
        enemy_thkmain(a);
    }
    ene02B_movestbl[STRUCT_OFFSET(a, 0x84, int)](a);
}

void ene02B_move00(void* a)
{
    STRUCT_OFFSET(a, 0x200, int) = 0;
    if (!(STRUCT_OFFSET(a, 0x8C, int) != 0))
    {
        Enemy_AnmChg00(a, 0, 8, 1);
        STRUCT_OFFSET(a, 0x8C, int) = (STRUCT_OFFSET(a, 0x8C, int) + 1);
    }
}

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene02pro/ene02mv", ene02B_move02);

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene02pro/ene02mv", ene02B_move04);

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene02pro/ene02mv", ene02B_move14);

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene02pro/ene02mv", ene02B_move18);

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene02pro/ene02mv", ene02B_move21);

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene02pro/ene02mv", ene02B_move24);

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene02pro/ene02mv", ene02B_move2c);
