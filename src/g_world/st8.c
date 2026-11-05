#include "common.h"
#include "g_world/st8.h"
#include "g_camera.h"
#include "g_effect.h"

extern int _st8_demo0_req;
extern int _st8_demo0_step;
extern int _st8_demo0_timer;

extern int _st8_demo0_timer2;
extern int _st8_demo0_se_step;
extern int _st8_demo0_vct_step;
typedef struct { int a[16]; } St8CirGrp;
extern St8CirGrp _st8_cir_grp[];
extern void* memset();
INCLUDE_ASM("asm/nonmatchings/g_world/st8", gsWorldInitSt8);

INCLUDE_ASM("asm/nonmatchings/g_world/st8", gsWorldSt8_SpecialEffect);

INCLUDE_ASM("asm/nonmatchings/g_world/st8", gsWorldSt8_SpecialEffect2);

INCLUDE_ASM("asm/nonmatchings/g_world/st8", gsWorldSt8_CirLight_GND);

void gsWorldSt8_InitCircleLight()
{
    int i;

    for (i = 2; i >= 0; i--)
    {
        _st8_cir_grp[i].a[0] = 0;
    }
}

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

void gsWorldSt8_Demo0_Request()
{
    if (!(gsCamera.unk4 & 0x200))
    {
        _st8_demo0_step = 0;
        _st8_demo0_timer = 0;
        _st8_demo0_timer2 = 0;
        _st8_demo0_se_step = 0;
        _st8_demo0_req = 1;
        _st8_demo0_vct_step = 0;
    }
}

INCLUDE_ASM("asm/nonmatchings/g_world/st8", _st8_demo0_GetTriPos);

INCLUDE_ASM("asm/nonmatchings/g_world/st8", _st8_demo0_SetEffect);

INCLUDE_ASM("asm/nonmatchings/g_world/st8", _st8_demo0_SetSound);

INCLUDE_ASM("asm/nonmatchings/g_world/st8", _st8_demo0_CamVector);

void gsWorldSt8_Demo0_CallEnd()
{
    float a[4];
    float b[4];

    memset(a, 0, 16);
    memset(b, 0, 16);
    b[3] = 128.0f;
    gsEffectSetFadeNowColor((int)a);
    gsEffectSetFade(b, 0x5A);
    _st8_demo0_timer = 0;
    _st8_demo0_step = 0xFF;
}

INCLUDE_ASM("asm/nonmatchings/g_world/st8", gsWorldSt8_Demo0_Exec);
