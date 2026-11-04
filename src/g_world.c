#include "common.h"

extern int _bullet_effect_gnd_list;
extern int _sw_dino_num;

extern int gsWorldLineSwitchManager[];
extern void sceVu0CopyVector();
extern void* GFTex_GetDb();
extern u_short D_0069167E[];
INCLUDE_ASM("asm/nonmatchings/g_world", gsWorldRestoreMipmap);

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

INCLUDE_ASM("asm/nonmatchings/g_world", gsWorldCallSpecialEffect);

INCLUDE_ASM("asm/nonmatchings/g_world", gsWorldCallSpecialEffect2);

INCLUDE_ASM("asm/nonmatchings/g_world", gsWorldDamageObject);

INCLUDE_ASM("asm/nonmatchings/g_world", gsWorldInitReaction);

INCLUDE_ASM("asm/nonmatchings/g_world", gsWorldEntryReaction);

INCLUDE_ASM("asm/nonmatchings/g_world", gsWorldCheckEntryReaction);

INCLUDE_ASM("asm/nonmatchings/g_world", gsWorldPlayReaction);

INCLUDE_ASM("asm/nonmatchings/g_world", gsWorldInitBreakAction);

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

INCLUDE_ASM("asm/nonmatchings/g_world", gsWorldEntryOBJ_BREAK_MICRO);

INCLUDE_ASM("asm/nonmatchings/g_world", gsWorldEntryOBJ_BREAK_LIGHT);

void gsWorldEntryOBJ_BREAK_SE(char* a, int b)
{
    STRUCT_OFFSET(a + STRUCT_OFFSET(a, 0x51400, int) * 4, 0xB447C, int) = b;
}

INCLUDE_ASM("asm/nonmatchings/g_world", gsWorldEntryOBJ_LIFE);

INCLUDE_ASM("asm/nonmatchings/g_world", gsWorldEntryBACK_SCALE);

INCLUDE_ASM("asm/nonmatchings/g_world", gsWorldEntryBACK_TRANS);

INCLUDE_ASM("asm/nonmatchings/g_world", gsWorldEntryBACK_COLOR);

INCLUDE_ASM("asm/nonmatchings/g_world", gsWorldEntryTransGV);

void gsWorldEntryGV_AREA(char* a, int b)
{
    STRUCT_OFFSET(a + STRUCT_OFFSET(a, 0xC3330, int) * 4, 0xC393C, int) = b;
}

void gsWorldEntryODV_AREA(char* a, int b)
{
    STRUCT_OFFSET(a + STRUCT_OFFSET(a, 0xC3A40, int) * 4, 0xC5FC0, int) = b;
}

INCLUDE_ASM("asm/nonmatchings/g_world", gsWorldEntryOBJ_ALPHA);

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

INCLUDE_ASM("asm/nonmatchings/g_world", gsWorldEntryOBJ_COLA_OFF);

void gsWorldEntryOBJ_SCORE(char* a, int b)
{
    STRUCT_OFFSET(a + STRUCT_OFFSET(a, 0x51400, int) * 4, 0x7E5EC, int) = b;
}

INCLUDE_ASM("asm/nonmatchings/g_world", gsWorldEntryBACK_COLA_OFF);

INCLUDE_ASM("asm/nonmatchings/g_world", gsWorldSetGV_FLAG);

void gsWorldResetGV_FLAG(char* a, int i, int m)
{
    STRUCT_OFFSET(a + i * 4, 0xC3334, int) &= ~m;
}

INCLUDE_ASM("asm/nonmatchings/g_world", gsWorldSetODV_FLAG);

void gsWorldResetODV_FLAG(char* a, int i, int m)
{
    STRUCT_OFFSET(a + i * 4, 0xC3A44, int) &= ~m;
}

INCLUDE_ASM("asm/nonmatchings/g_world", gsWorldCheckODV_OBJ_BREAK);

INCLUDE_ASM("asm/nonmatchings/g_world", gsWorldInitOBJ_TREASURE);

void gsWorldEntryOBJ_TREASURE(char* a)
{
    ((u_short*)0x69167E)[STRUCT_OFFSET(a, 0x51400, int)] = 0x100;
}

void gsWorldEntryOBJ_TREASURE2(char* a, int b)
{
    ((u_short*)0x69167E)[STRUCT_OFFSET(a, 0x51400, int)] = b;
}

INCLUDE_ASM("asm/nonmatchings/g_world", gsWorldCheckOBJ_TREASURE);

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
