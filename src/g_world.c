#include "common.h"

extern int _bullet_effect_gnd_list;
extern int _sw_dino_num;

extern int gsWorldLineSwitchManager[];
extern void sceVu0CopyVector();
extern void* GFTex_GetDb();
extern u_short D_0069167E[];
extern short _treasure_box_map[];
extern int gsWorldStageNo;
extern void gsWorldSt1_SpecialEffect();
extern void gsWorldSt2_SpecialEffect();
extern void gsWorldSt3_SpecialEffect();
extern void gsWorldSt4_SpecialEffect();
extern void gsWorldSt5_SpecialEffect();
extern void gsWorldSt7_SpecialEffect();
extern void gsWorldSt8_SpecialEffect();
extern void gsWorldSt9_SpecialEffect();
extern void gsWorldSt7Test_SpecialEffect();
extern int gsWorldSt1_SpecialEffect2();
extern int gsWorldSt2_SpecialEffect2();
extern int gsWorldSt3_SpecialEffect2();
extern int gsWorldSt4_SpecialEffect2();
extern int gsWorldSt5_SpecialEffect2();
extern int gsWorldSt7_SpecialEffect2();
extern int gsWorldSt8_SpecialEffect2();
extern int gsWorldSt9_SpecialEffect2();
extern int gsWorldSt7Test_SpecialEffect2();
void gsWorldRestoreMipmap()
{
    STRUCT_OFFSET(GFTex_GetDb(), 0x2C, int) = 0xFFCC;
}

INCLUDE_ASM("asm/nonmatchings/g_world", gsWorldInitWorld);

INCLUDE_ASM("asm/nonmatchings/g_world", gsWorldClipGnd);

INCLUDE_ASM("asm/nonmatchings/g_world", gsWorldSearchOdvMap);

INCLUDE_ASM("asm/nonmatchings/g_world", gsWorldSearchLinkObj);

INCLUDE_ASM("asm/nonmatchings/g_world", gsWorldResetOdvBlockLink);

INCLUDE_ASM("asm/nonmatchings/g_world", gsWorldResetOdvAreaLink);

INCLUDE_ASM("asm/nonmatchings/g_world", gsWorldStepFrameObj);

INCLUDE_ASM("asm/nonmatchings/g_world", gsWorldPutOdvObject);

INCLUDE_ASM("asm/nonmatchings/g_world", gsWorldBuildWorld);

INCLUDE_ASM("asm/nonmatchings/g_world", gsWorldMoveBackObj);

INCLUDE_RODATA("asm/nonmatchings/g_world", D_00665018);

void gsWorldCallSpecialEffect()
{
    switch (gsWorldStageNo)
    {
    case 0:
        gsWorldSt1_SpecialEffect();
        break;
    case 1:
        gsWorldSt2_SpecialEffect();
        break;
    case 2:
        gsWorldSt3_SpecialEffect();
        break;
    case 3:
        gsWorldSt4_SpecialEffect();
        break;
    case 4:
        gsWorldSt5_SpecialEffect();
        break;
    case 6:
        gsWorldSt7_SpecialEffect();
        break;
    case 7:
        gsWorldSt8_SpecialEffect();
        break;
    case 8:
        gsWorldSt9_SpecialEffect();
        break;
    case -1:
        gsWorldSt7Test_SpecialEffect();
        break;
    }
}

INCLUDE_ASM("asm/nonmatchings/g_world", gsWorldCallSpecialEffect2);

INCLUDE_ASM("asm/nonmatchings/g_world", gsWorldDamageObject);

void gsWorldInitReaction(char* a)
{
    char* p = a + 0x5E8;
    int i = 0x3F;

    do
    {
        STRUCT_OFFSET(p, 0, int) = 0;
        p -= 0x18;
    } while (--i >= 0);
}

INCLUDE_ASM("asm/nonmatchings/g_world", gsWorldEntryReaction);

int gsWorldCheckEntryReaction(char* a, char* b)
{
    int i;
    int r = 2;

    if (STRUCT_OFFSET(b, 0, int) >= 0)
    {
        for (i = 0; i < 0x40; i++, a += 0x18)
        {
            if (STRUCT_OFFSET(a, 0, char*) == b)
            {
                break;
            }
        }
        r = i != 0x40;
    }
    return r;
}

INCLUDE_ASM("asm/nonmatchings/g_world", gsWorldPlayReaction);

void gsWorldInitBreakAction(char* a)
{
    char* p = a + 0x5D0;
    int i = 0x1F;

    do
    {
        STRUCT_OFFSET(p, 0, int) = 0;
        p -= 0x30;
    } while (--i >= 0);
}

INCLUDE_ASM("asm/nonmatchings/g_world", gsWorldBreakAction_SHOCK);

INCLUDE_ASM("asm/nonmatchings/g_world", gsWorldEntryBreakAction);

INCLUDE_ASM("asm/nonmatchings/g_world", gsWorldPlayBreakAction);

INCLUDE_ASM("asm/nonmatchings/g_world", gsWorldClearBreakAction);

INCLUDE_ASM("asm/nonmatchings/g_world", gsWorldGetLineDistance);

void gsWorldInitLineSwitch(int a, float* b)
{
    gsWorldLineSwitchManager[1] = a;
    sceVu0CopyVector(&gsWorldLineSwitchManager[4], b);
}

INCLUDE_ASM("asm/nonmatchings/g_world", gsWorldTriggerLineSwitch);

void gsWorldLineSwitchDINO_INIT()
{
    _sw_dino_num = 0;
}

INCLUDE_ASM("asm/nonmatchings/g_world", gsWorldLineSwitchDINO_ENTRY);

INCLUDE_ASM("asm/nonmatchings/g_world", gsWorldTriggerLineSwitch_DINO);

void gsWorldBulletEffectGnd_INIT()
{
    _bullet_effect_gnd_list = 0;
}

void gsWorldBulletEffectGnd_ENTRY(int v)
{
    _bullet_effect_gnd_list = v;
}

int gsWorldBulletEffectGnd_GET_SE_ID(int i)
{
    return STRUCT_OFFSET(_bullet_effect_gnd_list + i * 20, 0x10, int);
}

INCLUDE_ASM("asm/nonmatchings/g_world", gsWorldBulletEffectGnd);

INCLUDE_ASM("asm/nonmatchings/g_world", gsWorldBulletSeGnd);

INCLUDE_ASM("asm/nonmatchings/g_world", gsWorldEntryBulletEffectObj);

INCLUDE_ASM("asm/nonmatchings/g_world", gsWorldEntryBulletSeObj);

INCLUDE_ASM("asm/nonmatchings/g_world", gsWorldEntryOBJ_SE_ID);

INCLUDE_ASM("asm/nonmatchings/g_world", gsWorldBulletEffectObj);

INCLUDE_ASM("asm/nonmatchings/g_world", gsWorldBulletSeObj);

int gsWorldGetOBJ_TYPE(char* a)
{
    return STRUCT_OFFSET(a, 0x51400, int) - 1;
}

void gsWorldEntryOBJ_BREAK_NO(char* a, int b)
{
    STRUCT_OFFSET(a + STRUCT_OFFSET(a, 0x51400, int) * 4, 0xB415C, int) = b;
}

void gsWorldEntryOBJ_REACT_NO(char* a, int b)
{
    STRUCT_OFFSET(a + STRUCT_OFFSET(a, 0x51400, int) * 4, 0x7DFAC, int) = b;
}

void gsWorldEntryOBJ_BREAK_MICRO(char* a, int b)
{
    int n = STRUCT_OFFSET(a, 0x51400, int) - 1;

    STRUCT_OFFSET(a + n * 0x1B0, 0x9F124, int) = b;
}

void gsWorldEntryOBJ_BREAK_LIGHT(char* a, int b)
{
    int n = STRUCT_OFFSET(a, 0x51400, int) - 1;

    STRUCT_OFFSET(a + n * 0x1B0, 0x9F128, int) = b;
}

void gsWorldEntryOBJ_BREAK_SE(char* a, int b)
{
    STRUCT_OFFSET(a + STRUCT_OFFSET(a, 0x51400, int) * 4, 0xB447C, int) = b;
}

INCLUDE_ASM("asm/nonmatchings/g_world", gsWorldEntryOBJ_LIFE);

INCLUDE_ASM("asm/nonmatchings/g_world", gsWorldEntryBACK_SCALE);

INCLUDE_ASM("asm/nonmatchings/g_world", gsWorldEntryBACK_TRANS);

void gsWorldEntryBACK_COLOR(char* a, void* v)
{
    int n = STRUCT_OFFSET(a, 0xC1820, int) - 1;

    sceVu0CopyVector(a + n * 0x1B0 + 0xC19B0, v);
}

void gsWorldEntryTransGV(char* a, int i, void* v)
{
    sceVu0CopyVector(a + i * 16 + 0xC3540, v);
}

void gsWorldEntryGV_AREA(char* a, int b)
{
    STRUCT_OFFSET(a + STRUCT_OFFSET(a, 0xC3330, int) * 4, 0xC393C, int) = b;
}

void gsWorldEntryODV_AREA(char* a, int b)
{
    STRUCT_OFFSET(a + STRUCT_OFFSET(a, 0xC3A40, int) * 4, 0xC5FC0, int) = b;
}

void gsWorldEntryOBJ_ALPHA(char* a, long v)
{
    int n = STRUCT_OFFSET(a, 0x51400, int) - 1;

    STRUCT_OFFSET(a + n * 0x1B0, 0x66720, long) = v;
}

void gsWorldEntryGND_ALPHA(void* a, int b, long c)
{
    ((long*)((char*)a + 0x100))[b] = c;
}

INCLUDE_ASM("asm/nonmatchings/g_world", gsWorldEntryGND_COL);

void gsWorldEntryOBJ_REPLACE(char* a)
{
    int x = STRUCT_OFFSET(a, 0x51400, int);

    STRUCT_OFFSET(a + x * 4, 0x7E2CC, int) = x;
}

void gsWorldEntryOBJ_COLA_OFF(char* a)
{
    int n = STRUCT_OFFSET(a, 0x51400, int) - 1;
    int o = n * 0x1B0 + 0x666A0;

    STRUCT_OFFSET(a + o, 0, int) |= 8;
}

void gsWorldEntryOBJ_SCORE(char* a, int b)
{
    STRUCT_OFFSET(a + STRUCT_OFFSET(a, 0x51400, int) * 4, 0x7E5EC, int) = b;
}

void gsWorldEntryBACK_COLA_OFF(char* a)
{
    int n = STRUCT_OFFSET(a, 0xC1820, int) - 1;
    char* p = a + n * 0x1B0;
    int* q = (int*)(p + 0xC1870);

    q[0x34] |= 8;
}

void gsWorldSetGV_FLAG(char* a, int i, int m)
{
    STRUCT_OFFSET(a + i * 4, 0xC3334, int) |= m;
}

void gsWorldResetGV_FLAG(char* a, int i, int m)
{
    STRUCT_OFFSET(a + i * 4, 0xC3334, int) &= ~m;
}

void gsWorldSetODV_FLAG(char* a, int i, int m)
{
    STRUCT_OFFSET(a + i * 4, 0xC3A44, int) |= m;
}

void gsWorldResetODV_FLAG(char* a, int i, int m)
{
    STRUCT_OFFSET(a + i * 4, 0xC3A44, int) &= ~m;
}

INCLUDE_ASM("asm/nonmatchings/g_world", gsWorldCheckODV_OBJ_BREAK);

void gsWorldInitOBJ_TREASURE()
{
    short v = -1;
    short* p = _treasure_box_map;
    int i;

    for (i = 199; i >= 0; i--)
    {
        p[i] = v;
    }
}

void gsWorldEntryOBJ_TREASURE(char* a)
{
    ((u_short*)0x69167E)[STRUCT_OFFSET(a, 0x51400, int)] = 0x100;
}

void gsWorldEntryOBJ_TREASURE2(char* a, int b)
{
    ((u_short*)0x69167E)[STRUCT_OFFSET(a, 0x51400, int)] = b;
}

int gsWorldCheckOBJ_TREASURE(char* a, int b)
{
    if (b >= 0 && (u_int)b < STRUCT_OFFSET(a, 0x51400, u_int))
    {
        return _treasure_box_map[b];
    }
    return -1;
}

INCLUDE_ASM("asm/nonmatchings/g_world", gsWorldEntryOBJ_ODV_FLAG);

INCLUDE_ASM("asm/nonmatchings/g_world", gsWorldEntryOBJ_CRASH);

INCLUDE_ASM("asm/nonmatchings/g_world", gsWorldCrashOBJ_FLUSH);

INCLUDE_ASM("asm/nonmatchings/g_world", _gsWorldCrashOBJ);

INCLUDE_ASM("asm/nonmatchings/g_world", gsWorldCrashOBJ);

INCLUDE_ASM("asm/nonmatchings/g_world", gsWorldCrashOBJ2);

INCLUDE_ASM("asm/nonmatchings/g_world", gsWorldCrashOBJ_GUN);

INCLUDE_ASM("asm/nonmatchings/g_world", gsWorldCrashOBJ_SET_CH);

INCLUDE_ASM("asm/nonmatchings/g_world", gsWorldInitMovieManager);

INCLUDE_ASM("asm/nonmatchings/g_world", gsWorldPlayMovie);

INCLUDE_ASM("asm/nonmatchings/g_world", gsWorldCheckMovieSwitch);

INCLUDE_ASM("asm/nonmatchings/g_world", gsWorldMovieManagement);
