#include "common.h"

extern void Enemy_ActChg00();

extern char gsEnemyInfos[];
extern void (*ST7carno_breakobj_funcs[])();
extern void (*ST7carno_combi00_funcs[])();
extern int ST7Carno_NowBreaking;
INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST2carno_main);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST2carno_manage);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST2carno_stopchk);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST2carno_getstate);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST2carno_chkarea);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST2carno_chk4head00);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST2carno_chk4head01);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST2carno_chk4head02);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST2carno_chkescgnd);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST2carno_movechk);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST2carno_sub00);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST2carno_sub01);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST2carno_sub02);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST2carno_thkchg);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST2carno_headatk00);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST2carno_headatk01);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST2carno_headatk02);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST2carno_missatk);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST5carno_main);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST5carno_manage);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST5carno_stopchk);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST5carno_areacheck);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST5carno_judgeptrn);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST5carno_headcheck);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST5carno_jumpcheck);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST5carno_collwall);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST5carno_extchk);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST5carno_escchk);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST5carno_movechk);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST5carno_setgoalflag);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST5carno_setneargoalflag);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST5carno_thkchg);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST5carno_first);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST5carno_areachg);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST5carno_territory);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST5carno_head00);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST5carno_head01);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST5carno_head02);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST5carno_free);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST5carno_missatk);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST5carno_return);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST5carno_runaway);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST7carno_main);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST7carno_manage);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST7carno_objbreaking);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST7carno_stopchk);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST7carno_movechk);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST7carno_wait);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST7carno_wait00);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST7carno_wait01);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST7carno_wait02);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST7carno_straight);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST7carno_straight00);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST7carno_straight01);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST7carno_straight02);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST7carno_straight03);

void eneptn03_ST7carno_straight04(void* a)
{
    STRUCT_OFFSET(a, 0x70, short) = 0;
    STRUCT_OFFSET(a, 0xC, int) = 7;
    STRUCT_OFFSET(a, 0x62, short) = 0;
}

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST7carno_head);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST7carno_head00);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST7carno_head01);

void eneptn03_ST7carno_head02(void* a)
{
    if (!((STRUCT_OFFSET(a, 0x0, int) & 0x100) == 0))
    {
        STRUCT_OFFSET(a, 0x62, short) = (STRUCT_OFFSET(a, 0x62, unsigned short) + 1);
    }
}

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST7carno_head03);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST7carno_head04);

void eneptn03_ST7carno_head05(void* a)
{
    if ((STRUCT_OFFSET(a, 0x0, int) & 0x40000000) == 0)
    {
        STRUCT_OFFSET(a, 0x62, short) = (STRUCT_OFFSET(a, 0x62, unsigned short) + 1);
    }
}

void eneptn03_ST7carno_head06(void* a)
{
    STRUCT_OFFSET(a, 0x70, short) = 0;
    STRUCT_OFFSET(a, 0xC, int) = 7;
    STRUCT_OFFSET(a, 0x62, short) = 0;
}

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST7carno_wave);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST7carno_wave00);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST7carno_wave01);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST7carno_wave02);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST7carno_wave03);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST7carno_wave04);

void eneptn03_ST7carno_wave05(void* a)
{
    STRUCT_OFFSET(a, 0x70, short) = 0;
    STRUCT_OFFSET(a, 0xC, int) = 7;
    STRUCT_OFFSET(a, 0x62, short) = 0;
}

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST7carno_jump);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST7carno_jump00);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST7carno_jump01);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST7carno_jump02);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST7carno_jump03);

void eneptn03_ST7carno_jump04(void* a)
{
    if ((STRUCT_OFFSET(a, 0x0, int) & 0x40000000) == 0)
    {
        STRUCT_OFFSET(a, 0x62, short) = (STRUCT_OFFSET(a, 0x62, unsigned short) + 1);
    }
}

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST7carno_jump05);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST7carno_jump06);

void eneptn03_ST7carno_jump07(void* a)
{
    Enemy_ActChg00(a, 0x2e);
    STRUCT_OFFSET(a, 0x62, short) = (STRUCT_OFFSET(a, 0x62, unsigned short) + 1);
}

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST7carno_jump08);

void eneptn03_ST7carno_jump09(void* a)
{
    STRUCT_OFFSET(a, 0x70, short) = 0;
    STRUCT_OFFSET(a, 0xC, int) = 7;
    STRUCT_OFFSET(a, 0x62, short) = 0;
}

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST7carno_jumphead);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST7carno_jumphead00);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST7carno_jumphead01);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST7carno_jumphead02);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST7carno_jumphead03);

void eneptn03_ST7carno_jumphead04(void* a)
{
    if ((STRUCT_OFFSET(a, 0x0, int) & 0x40000000) == 0)
    {
        STRUCT_OFFSET(a, 0x62, short) = (STRUCT_OFFSET(a, 0x62, unsigned short) + 1);
    }
}

void eneptn03_ST7carno_jumphead05(void* a)
{
    Enemy_ActChg00(a, 0x23);
    STRUCT_OFFSET(a, 0x0, int) = (STRUCT_OFFSET(a, 0x0, int) & -257);
    STRUCT_OFFSET(a, 0x62, short) = (STRUCT_OFFSET(a, 0x62, unsigned short) + 1);
}

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST7carno_jumphead06);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST7carno_jumphead07);

void eneptn03_ST7carno_jumphead08(void* a)
{
    if ((STRUCT_OFFSET(a, 0x0, int) & 0x40000000) == 0)
    {
        STRUCT_OFFSET(a, 0x62, short) = 0;
        STRUCT_OFFSET(a, 0x70, short) = 0;
        STRUCT_OFFSET(a, 0xC, int) = 7;
    }
}

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST7carno_step);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST7carno_step00);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST7carno_step01);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST7carno_step02);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST7carno_step03);

void eneptn03_ST7carno_step04(void* a)
{
    if ((STRUCT_OFFSET(a, 0x0, int) & 0x40000000) == 0)
    {
        STRUCT_OFFSET(a, 0x62, short) = (STRUCT_OFFSET(a, 0x62, unsigned short) + 1);
    }
}

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST7carno_step05);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST7carno_step06);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST7carno_step07);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST7carno_step08);

void eneptn03_ST7carno_step09(void* a)
{
    STRUCT_OFFSET(a, 0x70, short) = 0;
    STRUCT_OFFSET(a, 0xC, int) = 7;
    STRUCT_OFFSET(a, 0x62, short) = 0;
}

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST7carno_escape);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST7carno_escape00);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST7carno_escape01);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST7carno_escape02);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST7carno_thkchg);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST7carno_thkchg00);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST7carno_thkchg01);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST7carno_thkchg02);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST7carno_combi00);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST7carno_combi00_00);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST7carno_combi00_01);

void eneptn03_ST7carno_combi00_02(void* a)
{
    if ((STRUCT_OFFSET(a, 0x0, int) & 0x40000000) == 0)
    {
        STRUCT_OFFSET(a, 0x62, short) = (STRUCT_OFFSET(a, 0x62, unsigned short) + 1);
    }
}

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST7carno_combi00_03);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST7carno_combi00_04);

void eneptn03_ST7carno_combi00_05(void* a)
{
    STRUCT_OFFSET(a, 0x6A, short) = 6;
    STRUCT_OFFSET(a, 0x66, short) = STRUCT_OFFSET(a, 0x5C, unsigned short);
    STRUCT_OFFSET(a, 0x5C, short) = 0x25;
    STRUCT_OFFSET(a, 0x62, short) = 8;
}

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST7carno_combi00_06);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST7carno_combi00_07);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST7carno_combi00_08);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST7carno_combi00_09);

void eneptn03_ST7carno_combi00_10(void* a)
{
    if ((STRUCT_OFFSET(a, 0x0, int) & 0x40000000) == 0)
    {
        STRUCT_OFFSET(a, 0x62, short) = 0xC;
    }
}

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST7carno_combi00_11);

void eneptn03_ST7carno_combi00_12(void* a)
{
    STRUCT_OFFSET(a, 0x70, short) = 0;
    STRUCT_OFFSET(a, 0xC, int) = 7;
    STRUCT_OFFSET(a, 0x62, short) = 0;
}

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST7carno_combi01);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST7carno_combi01_00);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST7carno_combi01_01);

void eneptn03_ST7carno_combi01_02(void* a)
{
    if ((STRUCT_OFFSET(a, 0x0, int) & 0x40000000) == 0)
    {
        STRUCT_OFFSET(a, 0x62, short) = (STRUCT_OFFSET(a, 0x62, unsigned short) + 1);
    }
}

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST7carno_combi01_03);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST7carno_combi01_04);

void eneptn03_ST7carno_combi01_05(void* a)
{
    STRUCT_OFFSET(a, 0x6A, short) = 6;
    STRUCT_OFFSET(a, 0x66, short) = STRUCT_OFFSET(a, 0x5C, unsigned short);
    STRUCT_OFFSET(a, 0x5C, short) = 0x25;
    STRUCT_OFFSET(a, 0x62, short) = 8;
}

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST7carno_combi01_06);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST7carno_combi01_07);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST7carno_combi01_08);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST7carno_combi01_09);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST7carno_combi01_10);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST7carno_combi01_11);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST7carno_combi01_12);

void eneptn03_ST7carno_combi01_13(void* a)
{
    STRUCT_OFFSET(a, 0x70, short) = 0;
    STRUCT_OFFSET(a, 0xC, int) = 7;
    STRUCT_OFFSET(a, 0x62, short) = 0;
}

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST7carno_combi02);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST7carno_combi02_00);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST7carno_combi02_01);

void eneptn03_ST7carno_combi02_02(void* a)
{
    if ((STRUCT_OFFSET(a, 0x0, int) & 0x40000000) == 0)
    {
        STRUCT_OFFSET(a, 0x62, short) = (STRUCT_OFFSET(a, 0x62, unsigned short) + 1);
    }
}

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST7carno_combi02_03);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST7carno_combi02_04);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST7carno_combi02_05);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST7carno_combi02_06);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST7carno_combi02_07);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST7carno_combi02_08);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST7carno_combi02_09);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST7carno_combi02_10);

void eneptn03_ST7carno_combi02_11(void* a)
{
    if ((STRUCT_OFFSET(a, 0x0, int) & 0x40000000) == 0)
    {
        STRUCT_OFFSET(a, 0x62, short) = 0;
        STRUCT_OFFSET(a, 0x70, short) = 0;
        STRUCT_OFFSET(a, 0xC, int) = 7;
    }
}

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST7carno_combi03);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST7carno_combi03_00);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST7carno_combi03_01);

void eneptn03_ST7carno_combi03_02(void* a)
{
    if ((STRUCT_OFFSET(a, 0x0, int) & 0x40000000) == 0)
    {
        STRUCT_OFFSET(a, 0x62, short) = (STRUCT_OFFSET(a, 0x62, unsigned short) + 1);
    }
}

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST7carno_combi03_03);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST7carno_combi03_04);

void eneptn03_ST7carno_combi03_05(void* a)
{
    STRUCT_OFFSET(a, 0x66, short) = STRUCT_OFFSET(a, 0x5C, unsigned short);
    STRUCT_OFFSET(a, 0x6A, short) = 6;
    STRUCT_OFFSET(a, 0x5C, short) = 0x25;
    STRUCT_OFFSET(a, 0x62, short) = 8;
}

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST7carno_combi03_06);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST7carno_combi03_07);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST7carno_combi03_08);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST7carno_combi03_09);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST7carno_combi03_10);

void eneptn03_ST7carno_combi03_11(void* a)
{
    if ((STRUCT_OFFSET(a, 0x0, int) & 0x40000000) == 0)
    {
        STRUCT_OFFSET(a, 0x62, short) = 0;
        STRUCT_OFFSET(a, 0x70, short) = 0;
        STRUCT_OFFSET(a, 0xC, int) = 7;
    }
}

void eneptn03_ST7carno_breakobj(char* a)
{
    STRUCT_OFFSET(a, 0, int) |= 2;
    STRUCT_OFFSET(a, 0x70, short) = 3;
    STRUCT_OFFSET(a, 0x6E, short) = STRUCT_OFFSET(a, 0x5C, u_short);
    ST7carno_breakobj_funcs[STRUCT_OFFSET(a, 0x62, short)](a);
}

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST7carno_breakobj00);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST7carno_breakobj01);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST7carno_breakobj02);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST7carno_breakobj03);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST7trex_main);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST7trex_manage);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST7trex_sub00);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST7trex_sub01);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST7trex_sub02);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST7trex_thkchg);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST9trex_main);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST9trex_manage);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST9trex_chkdemostart);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST9trex_chkdemoend);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST9trex_stopchk);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST9trex_collwall);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST9trex_collsidewall);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST9trex_collwallex);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST9trex_escplayer);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST9trex_chkmeteo);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST9trex_extchk);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST9trex_turnchk);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST9trex_movechk);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST9trex_thkchg);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST9trex_first);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST9trex_second);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST9trex_third);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST9trex_semifinal);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST9trex_final);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST9trex_head);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST9trex_demo);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST9trex_return);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST9trex_inoutwall);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST9trex_turn);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST9trex_meteo);

char* eneptn03_getothercarno(char* a)
{
    int i;
    char* p = gsEnemyInfos;

    for (i = 0; i < 10; i++, p += 0x2A50)
    {
        short k;

        if (!(STRUCT_OFFSET(p, 0, int) & 1))
        {
            continue;
        }
        if (i == STRUCT_OFFSET(a, 0x28, short))
        {
            continue;
        }
        k = STRUCT_OFFSET(p, 0x2A, short);
        if ((k == 8 || k == 0xE) && STRUCT_OFFSET(a, 0x2A, short) != k)
        {
            return p;
        }
    }
    return 0;
}

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", Enemy_eneptn03_Init);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", Enemy_eneptn03_Exec);
