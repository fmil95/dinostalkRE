#include "common.h"

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

INCLUDE_ASM("asm/nonmatchings/g_world", gsWorldInitLineSwitch);

INCLUDE_ASM("asm/nonmatchings/g_world", gsWorldTriggerLineSwitch);

INCLUDE_ASM("asm/nonmatchings/g_world", gsWorldLineSwitchDINO_INIT);

INCLUDE_ASM("asm/nonmatchings/g_world", gsWorldLineSwitchDINO_ENTRY);

INCLUDE_ASM("asm/nonmatchings/g_world", gsWorldTriggerLineSwitch_DINO);

INCLUDE_ASM("asm/nonmatchings/g_world", gsWorldBulletEffectGnd_INIT);

INCLUDE_ASM("asm/nonmatchings/g_world", gsWorldBulletEffectGnd_ENTRY);

INCLUDE_ASM("asm/nonmatchings/g_world", gsWorldBulletEffectGnd_GET_SE_ID);

INCLUDE_ASM("asm/nonmatchings/g_world", gsWorldBulletEffectGnd);

INCLUDE_ASM("asm/nonmatchings/g_world", gsWorldBulletSeGnd);

INCLUDE_ASM("asm/nonmatchings/g_world", gsWorldEntryBulletEffectObj);

INCLUDE_ASM("asm/nonmatchings/g_world", gsWorldEntryBulletSeObj);

INCLUDE_ASM("asm/nonmatchings/g_world", gsWorldEntryOBJ_SE_ID);

INCLUDE_ASM("asm/nonmatchings/g_world", gsWorldBulletEffectObj);

INCLUDE_ASM("asm/nonmatchings/g_world", gsWorldBulletSeObj);

INCLUDE_ASM("asm/nonmatchings/g_world", gsWorldGetOBJ_TYPE);

INCLUDE_ASM("asm/nonmatchings/g_world", gsWorldEntryOBJ_BREAK_NO);

INCLUDE_ASM("asm/nonmatchings/g_world", gsWorldEntryOBJ_REACT_NO);

INCLUDE_ASM("asm/nonmatchings/g_world", gsWorldEntryOBJ_BREAK_MICRO);

INCLUDE_ASM("asm/nonmatchings/g_world", gsWorldEntryOBJ_BREAK_LIGHT);

INCLUDE_ASM("asm/nonmatchings/g_world", gsWorldEntryOBJ_BREAK_SE);

INCLUDE_ASM("asm/nonmatchings/g_world", gsWorldEntryOBJ_LIFE);

INCLUDE_ASM("asm/nonmatchings/g_world", gsWorldEntryBACK_SCALE);

INCLUDE_ASM("asm/nonmatchings/g_world", gsWorldEntryBACK_TRANS);

INCLUDE_ASM("asm/nonmatchings/g_world", gsWorldEntryBACK_COLOR);

INCLUDE_ASM("asm/nonmatchings/g_world", gsWorldEntryTransGV);

INCLUDE_ASM("asm/nonmatchings/g_world", gsWorldEntryGV_AREA);

INCLUDE_ASM("asm/nonmatchings/g_world", gsWorldEntryODV_AREA);

INCLUDE_ASM("asm/nonmatchings/g_world", gsWorldEntryOBJ_ALPHA);

INCLUDE_ASM("asm/nonmatchings/g_world", gsWorldEntryGND_ALPHA);

INCLUDE_ASM("asm/nonmatchings/g_world", gsWorldEntryGND_COL);

INCLUDE_ASM("asm/nonmatchings/g_world", gsWorldEntryOBJ_REPLACE);

INCLUDE_ASM("asm/nonmatchings/g_world", gsWorldEntryOBJ_COLA_OFF);

INCLUDE_ASM("asm/nonmatchings/g_world", gsWorldEntryOBJ_SCORE);

INCLUDE_ASM("asm/nonmatchings/g_world", gsWorldEntryBACK_COLA_OFF);

INCLUDE_ASM("asm/nonmatchings/g_world", gsWorldSetGV_FLAG);

INCLUDE_ASM("asm/nonmatchings/g_world", gsWorldResetGV_FLAG);

INCLUDE_ASM("asm/nonmatchings/g_world", gsWorldSetODV_FLAG);

INCLUDE_ASM("asm/nonmatchings/g_world", gsWorldResetODV_FLAG);

INCLUDE_ASM("asm/nonmatchings/g_world", gsWorldCheckODV_OBJ_BREAK);

INCLUDE_ASM("asm/nonmatchings/g_world", gsWorldInitOBJ_TREASURE);

INCLUDE_ASM("asm/nonmatchings/g_world", gsWorldEntryOBJ_TREASURE);

INCLUDE_ASM("asm/nonmatchings/g_world", gsWorldEntryOBJ_TREASURE2);

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
