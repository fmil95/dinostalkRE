#include "common.h"
#include "g_enemy/eneptn03.h"

extern void Enemy_ActChg00();

extern char gsEnemyInfos[];
extern void (*ST7carno_breakobj_funcs[])();
extern void (*ST7carno_wait_funcs[])();
extern void (*ST7carno_thkchg_funcs[])();
extern void (*ST7carno_ptnfuncs[])();
extern void (*ST7carno_combi00_funcs[])();
extern int ST7Carno_NowBreaking;
extern void (*ST7carno_wave_funcs[])();
extern void* memset();
extern void sceVu0CopyVector();
extern void (*ST7carno_combi02_funcs[])();
extern void (*ST7carno_combi03_funcs[])();
extern void (*ST7carno_escape_funcs[])();
extern void (*ST7carno_head_funcs[])();
extern void (*ST7carno_jump_funcs[])();
extern void (*ST7carno_jumphead_funcs[])();
extern void (*ST7carno_straight_funcs[])();
extern void (*ST2carno_ptnfuncs[])();
extern void (*ST5carno_ptnfuncs[])();
extern void (*ST7trex_ptnfuncs[])();
extern void (*ST9trex_ptnfuncs[])();
extern void (*ST7carno_step_funcs[])();
void eneptn03_ST2carno_main(char* a)
{
    ST2carno_ptnfuncs[STRUCT_OFFSET(a, 0xC, int)](a);
}

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

void eneptn03_ST5carno_main(char* a)
{
    ST5carno_ptnfuncs[STRUCT_OFFSET(a, 0xC, int)](a);
}

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

void eneptn03_ST7carno_main(char* a)
{
    ST7carno_ptnfuncs[STRUCT_OFFSET(a, 0xC, int)](a);
}

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST7carno_manage);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST7carno_objbreaking);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST7carno_stopchk);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST7carno_movechk);

void eneptn03_ST7carno_wait(char* a)
{
    STRUCT_OFFSET(a, 0, int) |= 2;
    STRUCT_OFFSET(a, 0x70, short) = 0;
    STRUCT_OFFSET(a, 0x6E, short) = STRUCT_OFFSET(a, 0x5C, u_short);
    ST7carno_wait_funcs[STRUCT_OFFSET(a, 0x62, short)](a);
}

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST7carno_wait00);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST7carno_wait01);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST7carno_wait02);

void eneptn03_ST7carno_straight(char* a)
{
    STRUCT_OFFSET(a, 0, int) |= 2;
    STRUCT_OFFSET(a, 0x70, short) = 4;
    STRUCT_OFFSET(a, 0x6E, short) = STRUCT_OFFSET(a, 0x5C, u_short);
    ST7carno_straight_funcs[STRUCT_OFFSET(a, 0x62, short)](a);
}

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

void eneptn03_ST7carno_head(char* a)
{
    STRUCT_OFFSET(a, 0, int) |= 2;
    STRUCT_OFFSET(a, 0x70, short) = 6;
    STRUCT_OFFSET(a, 0x6E, short) = STRUCT_OFFSET(a, 0x5C, u_short);
    ST7carno_head_funcs[STRUCT_OFFSET(a, 0x62, short)](a);
}

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST7carno_head00);

void eneptn03_ST7carno_head01(char* a)
{
    STRUCT_OFFSET(a, 0x40, int) = 0;
    STRUCT_OFFSET(a, 0, int) &= ~0x1000000;
    Enemy_ActChg00(a, 0x23);
    STRUCT_OFFSET(a, 0, int) &= ~0x100;
    STRUCT_OFFSET(a, 0x62, u_short)++;
}

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

void eneptn03_ST7carno_wave(char* a)
{
    STRUCT_OFFSET(a, 0, int) |= 2;
    STRUCT_OFFSET(a, 0x70, short) = 5;
    STRUCT_OFFSET(a, 0x6E, short) = STRUCT_OFFSET(a, 0x5C, u_short);
    ST7carno_wave_funcs[STRUCT_OFFSET(a, 0x62, short)](a);
}

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST7carno_wave00);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST7carno_wave01);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST7carno_wave02);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST7carno_wave03);

void eneptn03_ST7carno_wave04(char* a)
{
    char v[16];
    int f;

    memset(v, 0, 16);
    f = STRUCT_OFFSET(a, 0, int);
    if (!(f & 0x40000000))
    {
        STRUCT_OFFSET(a, 0, int) = f | 0x1000000;
        sceVu0CopyVector(a + 0x1C0, v);
        sceVu0CopyVector(a + 0x1D0, v);
        sceVu0CopyVector(a + 0x250, v);
        STRUCT_OFFSET(a, 0x62, u_short)++;
    }
}

void eneptn03_ST7carno_wave05(void* a)
{
    STRUCT_OFFSET(a, 0x70, short) = 0;
    STRUCT_OFFSET(a, 0xC, int) = 7;
    STRUCT_OFFSET(a, 0x62, short) = 0;
}

void eneptn03_ST7carno_jump(char* a)
{
    STRUCT_OFFSET(a, 0, int) |= 2;
    STRUCT_OFFSET(a, 0x70, short) = 9;
    STRUCT_OFFSET(a, 0x6E, short) = STRUCT_OFFSET(a, 0x5C, u_short);
    ST7carno_jump_funcs[STRUCT_OFFSET(a, 0x62, short)](a);
}

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

void eneptn03_ST7carno_jumphead(char* a)
{
    STRUCT_OFFSET(a, 0, int) |= 2;
    STRUCT_OFFSET(a, 0x70, short) = 8;
    STRUCT_OFFSET(a, 0x6E, short) = STRUCT_OFFSET(a, 0x5C, u_short);
    ST7carno_jumphead_funcs[STRUCT_OFFSET(a, 0x62, short)](a);
}

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

void eneptn03_ST7carno_step(char* a)
{
    STRUCT_OFFSET(a, 0, int) |= 2;
    STRUCT_OFFSET(a, 0x70, short) = 9;
    STRUCT_OFFSET(a, 0x6E, short) = STRUCT_OFFSET(a, 0x5C, u_short);
    ST7carno_step_funcs[STRUCT_OFFSET(a, 0x62, short)](a);
}

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

void eneptn03_ST7carno_escape(char* a)
{
    STRUCT_OFFSET(a, 0, int) |= 2;
    STRUCT_OFFSET(a, 0x70, short) = 1;
    STRUCT_OFFSET(a, 0x6E, short) = STRUCT_OFFSET(a, 0x5C, u_short);
    ST7carno_escape_funcs[STRUCT_OFFSET(a, 0x62, short)](a);
}

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST7carno_escape00);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST7carno_escape01);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST7carno_escape02);

void eneptn03_ST7carno_thkchg(char* a)
{
    STRUCT_OFFSET(a, 0, int) |= 2;
    STRUCT_OFFSET(a, 0x70, short) = 2;
    STRUCT_OFFSET(a, 0x6E, short) = STRUCT_OFFSET(a, 0x5C, u_short);
    ST7carno_thkchg_funcs[STRUCT_OFFSET(a, 0x62, short)](a);
}

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST7carno_thkchg00);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST7carno_thkchg01);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST7carno_thkchg02);

void eneptn03_ST7carno_combi00(char* a)
{
    STRUCT_OFFSET(a, 0, int) |= 2;
    STRUCT_OFFSET(a, 0x70, short) = 0xB;
    STRUCT_OFFSET(a, 0x6E, short) = STRUCT_OFFSET(a, 0x5C, u_short);
    ST7carno_combi00_funcs[STRUCT_OFFSET(a, 0x62, short)](a);
}

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

void eneptn03_ST7carno_combi00_11(char* a)
{
    char* o = eneptn03_getothercarno(a);

    if (o != NULL)
    {
        STRUCT_OFFSET(a, 0x62, u_short)++;

        if (STRUCT_OFFSET(o, 0xC, int) == STRUCT_OFFSET(a, 0xC, int))
        {
            STRUCT_OFFSET(o, 0x5C, short) = STRUCT_OFFSET(a, 0x5C, short);
            STRUCT_OFFSET(o, 0x62, short) = 0xC;
        }
    }
}

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

void eneptn03_ST7carno_combi01_12(char* a)
{
    char* o = eneptn03_getothercarno(a);

    if (o != NULL)
    {
        STRUCT_OFFSET(a, 0x62, u_short)++;
        STRUCT_OFFSET(o, 0x5C, short) = STRUCT_OFFSET(a, 0x5C, short);
        STRUCT_OFFSET(o, 0x62, short) = 0xD;
    }
}

void eneptn03_ST7carno_combi01_13(void* a)
{
    STRUCT_OFFSET(a, 0x70, short) = 0;
    STRUCT_OFFSET(a, 0xC, int) = 7;
    STRUCT_OFFSET(a, 0x62, short) = 0;
}

void eneptn03_ST7carno_combi02(char* a)
{
    STRUCT_OFFSET(a, 0, int) |= 2;
    STRUCT_OFFSET(a, 0x70, short) = 10;
    STRUCT_OFFSET(a, 0x6E, short) = STRUCT_OFFSET(a, 0x5C, u_short);
    ST7carno_combi02_funcs[STRUCT_OFFSET(a, 0x62, short)](a);
}

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

void eneptn03_ST7carno_combi02_10(char* a)
{
    char* o = eneptn03_getothercarno(a);
    int c;

    if (o)
    {
        if (STRUCT_OFFSET(o, 0x62, short) < 0xB)
        {
            c = STRUCT_OFFSET(o, 0xC, int);
            if (c == 0xB)
            {
                STRUCT_OFFSET(a, 0x70, short) = c;
                STRUCT_OFFSET(a, 0, int) |= 0x1000000;
                Enemy_ActChg00(a, 0xB);
            }
        }
        STRUCT_OFFSET(a, 0x62, u_short)++;
    }
}

void eneptn03_ST7carno_combi02_11(void* a)
{
    if ((STRUCT_OFFSET(a, 0x0, int) & 0x40000000) == 0)
    {
        STRUCT_OFFSET(a, 0x62, short) = 0;
        STRUCT_OFFSET(a, 0x70, short) = 0;
        STRUCT_OFFSET(a, 0xC, int) = 7;
    }
}

void eneptn03_ST7carno_combi03(char* a)
{
    STRUCT_OFFSET(a, 0, int) |= 2;
    STRUCT_OFFSET(a, 0x70, short) = 10;
    STRUCT_OFFSET(a, 0x6E, short) = STRUCT_OFFSET(a, 0x5C, u_short);
    ST7carno_combi03_funcs[STRUCT_OFFSET(a, 0x62, short)](a);
}

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

void eneptn03_ST7carno_combi03_10(char* a)
{
    char* o = eneptn03_getothercarno(a);

    if (o)
    {
        if (STRUCT_OFFSET(o, 0x62, short) < 0xA)
        {
            if (STRUCT_OFFSET(o, 0xC, int) == 0xC)
            {
                STRUCT_OFFSET(a, 0, int) |= 0x1000000;
                STRUCT_OFFSET(a, 0x70, short) = 0xB;
                Enemy_ActChg00(a, 0xB);
            }
        }
        STRUCT_OFFSET(a, 0x62, u_short)++;
    }
}

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

void eneptn03_ST7carno_breakobj02(char* a)
{
    if (eneptn03_getothercarno(a))
    {
        if (STRUCT_OFFSET(a, 0, int) & 0x100)
        {
            u_short t = STRUCT_OFFSET(a, 0x62, u_short);

            ST7Carno_NowBreaking = 1;
            STRUCT_OFFSET(a, 0x62, u_short) = t + 1;
        }
    }
}

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST7carno_breakobj03);

void eneptn03_ST7trex_main(char* a)
{
    ST7trex_ptnfuncs[STRUCT_OFFSET(a, 0xC, int)](a);
}

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST7trex_manage);

INCLUDE_RODATA("asm/nonmatchings/g_enemy/eneptn03", D_00668980);

INCLUDE_RODATA("asm/nonmatchings/g_enemy/eneptn03", D_00668990);

INCLUDE_RODATA("asm/nonmatchings/g_enemy/eneptn03", D_006689A0);

INCLUDE_RODATA("asm/nonmatchings/g_enemy/eneptn03", D_006689C0);

INCLUDE_RODATA("asm/nonmatchings/g_enemy/eneptn03", D_006689E0);

INCLUDE_RODATA("asm/nonmatchings/g_enemy/eneptn03", D_00668A00);

INCLUDE_RODATA("asm/nonmatchings/g_enemy/eneptn03", D_00668A20);

INCLUDE_RODATA("asm/nonmatchings/g_enemy/eneptn03", D_00668A30);

INCLUDE_RODATA("asm/nonmatchings/g_enemy/eneptn03", D_00668A40);

INCLUDE_RODATA("asm/nonmatchings/g_enemy/eneptn03", D_00668A50);

INCLUDE_RODATA("asm/nonmatchings/g_enemy/eneptn03", D_00668A60);

INCLUDE_RODATA("asm/nonmatchings/g_enemy/eneptn03", D_00668A70);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST7trex_sub00);

INCLUDE_RODATA("asm/nonmatchings/g_enemy/eneptn03", D_00668AA0);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST7trex_sub01);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST7trex_sub02);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST7trex_thkchg);

void eneptn03_ST9trex_main(char* a)
{
    ST9trex_ptnfuncs[STRUCT_OFFSET(a, 0xC, int)](a);
}

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

INCLUDE_RODATA("asm/nonmatchings/g_enemy/eneptn03", D_00668B30);

INCLUDE_RODATA("asm/nonmatchings/g_enemy/eneptn03", D_00668B40);

INCLUDE_RODATA("asm/nonmatchings/g_enemy/eneptn03", D_00668B58);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST9trex_thkchg);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST9trex_first);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST9trex_second);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST9trex_third);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST9trex_semifinal);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST9trex_final);

INCLUDE_ASM("asm/nonmatchings/g_enemy/eneptn03", eneptn03_ST9trex_head);

INCLUDE_RODATA("asm/nonmatchings/g_enemy/eneptn03", D_00668D00);

INCLUDE_RODATA("asm/nonmatchings/g_enemy/eneptn03", D_00668D10);

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
