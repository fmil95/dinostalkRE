#include "common.h"
#include "gunsuv_usa/libgf/gfanim.h"
#include "g_enemy/enemain.h"
#include <stdlib.h>

extern void ene00joy_plmain();
extern void enemy_thkmain();
extern int D_002F18B4[2];
extern void (*ene00movestbl[])();
void ene00move_main(char* a)
{
    STRUCT_OFFSET(a, 0x98, int) = STRUCT_OFFSET(STRUCT_OFFSET(a, 0xCBC, char*), 0x148, int);
    if (STRUCT_OFFSET(a, 0, int) < 0)
    {
        STRUCT_OFFSET(a, 0xE4, int) = D_002F18B4[0];
        ene00joy_plmain(a);
    }
    else
    {
        enemy_thkmain(a);
    }
    ene00movestbl[STRUCT_OFFSET(a, 0x84, int)](a);
}

void enedummymv_ene00mv(void) {
}

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene00pro/ene00mv", ene00move00);

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene00pro/ene00mv", ene00move02);

void ene00move05(char* a)
{
    if (STRUCT_OFFSET(a, 0x8C, int) == 0)
    {
        int n = STRUCT_OFFSET(a, 0x84, int) << 1;

        int r = n + 0x1C;

        if (STRUCT_OFFSET(a, 0x0, int) & 0x8000)
        {
            r = n + 0x1D;
        }
        Enemy_AnmChg00(a, r, 8, 0);
        STRUCT_OFFSET(a, 0x0, int) |= 0x40000000;
        STRUCT_OFFSET(a, 0x8C, int)++;
    }
    else if (GFAnim_ShapeFlagCheck((GF_INST_OBJECT*)(a + 0xBA0), 0) & 2)
    {
        STRUCT_OFFSET(a, 0x0, int) ^= 0x40000000;
        Enemy_ActChg00(a, 0);
    }
}

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene00pro/ene00mv", ene00move09);

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene00pro/ene00mv", ene00move0d);

void ene00move0f(char* a)
{
    if (STRUCT_OFFSET(a, 0x8C, int) == 0)
    {
        if (STRUCT_OFFSET(a, 0x0, int) & 0x8000)
        {
            Enemy_AnmChg00(a, 0xD, 8, 0);
        }
        else
        {
            Enemy_AnmChg00(a, 0xC, 8, 0);
        }
        STRUCT_OFFSET(a, 0x0, int) |= 0x40000000;
        STRUCT_OFFSET(a, 0x8C, int)++;
    }
    else if (GFAnim_ShapeFlagCheck((GF_INST_OBJECT*)(a + 0xBA0), 0) & 2)
    {
        STRUCT_OFFSET(a, 0x0, int) &= ~0x40000000;
        Enemy_ActChg00(a, 0);
    }
}

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene00pro/ene00mv", ene00move10);

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene00pro/ene00mv", ene00move14);

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene00pro/ene00mv", ene00move15);

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene00pro/ene00mv", ene00move16);

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene00pro/ene00mv", ene00move18);

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene00pro/ene00mv", ene00move1c);

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene00pro/ene00mv", ene00move20);

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene00pro/ene00mv", ene00move21);

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene00pro/ene00mv", ene00move22);

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene00pro/ene00mv", ene00move23);

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene00pro/ene00mv", ene00move24);

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene00pro/ene00mv", ene00move27);

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene00pro/ene00mv", ene00move28);

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene00pro/ene00mv", ene00move2d);

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene00pro/ene00mv", ene00move2e);

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene00pro/ene00mv", ene00move2f);

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene00pro/ene00mv", ene00move30);

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene00pro/ene00mv", ene00move38);

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene00pro/ene00mv", ene00move39);

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene00pro/ene00mv", ene00move3a);

void ene00move3d(char* a)
{
    switch (STRUCT_OFFSET(a, 0x8C, int))
    {
    case 0:
        STRUCT_OFFSET(a, 0x0, int) &= ~0x30000000;
        Enemy_AnmChg00(a, 0x68, 8, 0);
        STRUCT_OFFSET(a, 0xC0, int) = 0;
        STRUCT_OFFSET(a, 0x8C, int)++;
        break;
    case 1:
        if (GFAnim_ShapeFlagCheck((GF_INST_OBJECT*)(a + 0xBA0), 0) & 2)
        {
            STRUCT_OFFSET(a, 0x8C, int)++;
        }
        break;
    }
}

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene00pro/ene00mv", ene00move3e);

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene00pro/ene00mv", ene00move3f);
