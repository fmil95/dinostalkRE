#include "common.h"
#include "gunsuv_usa/libgf/gfanim.h"
#include "g_enemy/enemain.h"
#include <stdlib.h>

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene01pro/ene01mv", ene01move_main);

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

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene01pro/ene01mv", ene01move05);

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene01pro/ene01mv", ene01move07);

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene01pro/ene01mv", ene01move09);

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene01pro/ene01mv", ene01move0a);

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene01pro/ene01mv", ene01move0d);

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene01pro/ene01mv", ene01move18);

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene01pro/ene01mv", ene01move20);

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene01pro/ene01mv", ene01move24);

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene01pro/ene01mv", ene01move25);

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene01pro/ene01mv", ene01move28);

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene01pro/ene01mv", ene01move2c);
