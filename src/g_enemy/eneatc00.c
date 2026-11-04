#include "common.h"
#include "g_enemy/eneatc00.h"

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneatc00", eneatc00_main);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneatc00", enemy_afteratchit);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneatc00", enemy_hiteffset);

int eneatc00_dummy()
{
    return -1;
}

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneatc00", eneatc00_atcbscchk00);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneatc00", eneatc00_atcbscchk01);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneatc00", eneatc00_atcbscchk02);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneatc00", eneatc00_atcbscchk03);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneatc00", eneatc00_holdatchitchk);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneatc00", eneatc00_pshitchk);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneatc00", eneatc00_trexhowling);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneatc00", eneatc00_crntocrnchk);
