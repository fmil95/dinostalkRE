#include "common.h"

extern void Enemy_AnmChg00();
extern void Enemy_AnmChg01();

extern int GFAnim_ShapeFlagCheck();
INCLUDE_ASM("asm/nonmatchings/g_enemy/ene03pro/ene03mv", ene03move_main);

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene03pro/ene03mv", bigdino_vbrset);

void enedummyElem_ene03mv(void) {
}

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene03pro/ene03mv", ene03moveElem000);

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene03pro/ene03mv", ene03moveElem001);

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene03pro/ene03mv", ene03moveElem020);

void ene03moveElem021(char* a)
{
    Enemy_AnmChg00(a, (STRUCT_OFFSET(a, 0x84, int) << 1) + 1, 8, 0);
    STRUCT_OFFSET(a, 0x8C, int)++;
}

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene03pro/ene03mv", ene03moveElem022);

void ene03moveElem023(char* a)
{
    Enemy_AnmChg00(a, (STRUCT_OFFSET(a, 0x84, int) << 1) + 2, 8, 0);
    STRUCT_OFFSET(a, 0x8C, int)++;
}

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene03pro/ene03mv", ene03moveElem024);

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene03pro/ene03mv", ene03moveNewTurn00);

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene03pro/ene03mv", ene03moveNewTurn01);

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene03pro/ene03mv", ene03moveMeteoAtc00);

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene03pro/ene03mv", ene03moveMeteoAtc01);

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene03pro/ene03mv", ene03moveElem0a0);

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene03pro/ene03mv", ene03moveElem0a1);

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene03pro/ene03mv", ene03moveElem0e0);

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

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene03pro/ene03mv", ene03moveElem100);

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene03pro/ene03mv", ene03moveElem101);

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene03pro/ene03mv", ene03moveElem102);

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene03pro/ene03mv", ene03moveElem103);

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene03pro/ene03mv", ene03moveElem141);

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene03pro/ene03mv", ene03moveElem142);

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene03pro/ene03mv", ene03moveElem143);

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene03pro/ene03mv", ene03moveElem144);

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene03pro/ene03mv", ene03moveElem145);

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene03pro/ene03mv", ene03moveElem1c0);

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene03pro/ene03mv", ene03moveElem1c1);

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene03pro/ene03mv", ene03moveElem200);

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene03pro/ene03mv", ene03moveElem201);

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene03pro/ene03mv", ene03moveElem202);

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene03pro/ene03mv", ene03moveElem210);

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene03pro/ene03mv", ene03moveElem211);

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene03pro/ene03mv", ene03moveElem220);

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene03pro/ene03mv", ene03moveElem221);

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene03pro/ene03mv", ene03moveElem222);

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene03pro/ene03mv", ene03moveElem223);

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene03pro/ene03mv", ene03moveElem230);

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene03pro/ene03mv", ene03moveElem231);

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene03pro/ene03mv", ene03moveElem232);

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene03pro/ene03mv", ene03moveElem233);

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene03pro/ene03mv", ene03moveElem240);

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene03pro/ene03mv", ene03moveElem241);

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene03pro/ene03mv", ene03moveElem242);

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene03pro/ene03mv", ene03moveElem243);

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene03pro/ene03mv", ene03moveElem250);

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene03pro/ene03mv", ene03moveElem251);

void ene03moveElem252(void* a)
{
    STRUCT_OFFSET(a, 0x94, int) = -1;
    Enemy_AnmChg00(a, (((STRUCT_OFFSET(a, 0x84, int) << 1) + STRUCT_OFFSET(a, 0x84, int)) + -17), 0, 0);
    STRUCT_OFFSET(a, 0x8C, int) = 1;
}

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene03pro/ene03mv", ene03moveElem253);

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene03pro/ene03mv", ene03moveElem254);

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene03pro/ene03mv", ene03moveElem270);

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene03pro/ene03mv", ene03moveElem271);

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene03pro/ene03mv", ene03moveElem272);

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene03pro/ene03mv", ene03moveElem273);

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene03pro/ene03mv", ene03moveElem274);

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene03pro/ene03mv", ene03moveElem280);

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene03pro/ene03mv", ene03moveElem281);

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene03pro/ene03mv", ene03moveElem282);

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene03pro/ene03mv", ene03btatcsp00);

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene03pro/ene03mv", ene03btatcsp01);

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene03pro/ene03mv", ene03btatcsp02);

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene03pro/ene03mv", ene03btatcsp03);

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene03pro/ene03mv", ene03dmgmvsp00);

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene03pro/ene03mv", ene03dmgmvsp01);

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene03pro/ene03mv", ene03moveDeadElem00);

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene03pro/ene03mv", ene03moveDeadElem01);

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene03pro/ene03mv", ene03moveDeadElem02);

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene03pro/ene03mv", ene03moveDeadElem03);

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene03pro/ene03mv", ene03moveDeadElem04);

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene03pro/ene03mv", ene03moveDeadElem05);

INCLUDE_ASM("asm/nonmatchings/g_enemy/ene03pro/ene03mv", ene03moveDeadElem06);
