#include "common.h"
#include "g_world/st8.h"

extern int _st8_demo0_req;
extern int _st8_demo0_step;
extern int _st8_demo0_timer;

INCLUDE_ASM("asm/nonmatchings/g_world/st8", gsWorldInitSt8);

INCLUDE_ASM("asm/nonmatchings/g_world/st8", gsWorldSt8_SpecialEffect);

INCLUDE_ASM("asm/nonmatchings/g_world/st8", gsWorldSt8_SpecialEffect2);

INCLUDE_ASM("asm/nonmatchings/g_world/st8", gsWorldSt8_CirLight_GND);

INCLUDE_ASM("asm/nonmatchings/g_world/st8", gsWorldSt8_InitCircleLight);

INCLUDE_ASM("asm/nonmatchings/g_world/st8", gsWorldSt8_EntryCircleLight);

INCLUDE_ASM("asm/nonmatchings/g_world/st8", gsWorldSt8_CircleLight);

INCLUDE_ASM("asm/nonmatchings/g_world/st8", gsWorldSt8_StoneLine);

INCLUDE_ASM("asm/nonmatchings/g_world/st8", gsWorldSt8_SetBackCOLA);

INCLUDE_ASM("asm/nonmatchings/g_world/st8", gsWorldSt8_ObjSort_Half);

INCLUDE_ASM("asm/nonmatchings/g_world/st8", gsWorldSt8_KakiTrans);

INCLUDE_ASM("asm/nonmatchings/g_world/st8", gsWorldSt8_CheckBossDied);

void gsWorldSt8_Demo0_Init()
{
    _st8_demo0_req = 0;
    _st8_demo0_step = -1;
    _st8_demo0_timer = 0;
}

INCLUDE_ASM("asm/nonmatchings/g_world/st8", gsWorldSt8_Demo0_Request);

INCLUDE_ASM("asm/nonmatchings/g_world/st8", _st8_demo0_GetTriPos);

INCLUDE_ASM("asm/nonmatchings/g_world/st8", _st8_demo0_SetEffect);

INCLUDE_ASM("asm/nonmatchings/g_world/st8", _st8_demo0_SetSound);

INCLUDE_ASM("asm/nonmatchings/g_world/st8", _st8_demo0_CamVector);

INCLUDE_ASM("asm/nonmatchings/g_world/st8", gsWorldSt8_Demo0_CallEnd);

INCLUDE_ASM("asm/nonmatchings/g_world/st8", gsWorldSt8_Demo0_Exec);
