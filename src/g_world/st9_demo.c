#include "common.h"
#include "g_world/st9_demo.h"

extern short _st9_demo_flag;
extern short _st9_demo_id;
extern int _st9_demo_count;
extern int _st9_demo_tex_count;
extern int _st9_demo_lava_count;
extern int _st9_demo_fogback_count;
extern short _st9_demo_camPoint;

void gsWorldST9_DemoInit()
{
    _st9_demo_flag = 0;
    _st9_demo_id = 0;
    _st9_demo_count = 0;
    _st9_demo_tex_count = 0;
    _st9_demo_lava_count = 0;
    _st9_demo_fogback_count = 0;
    _st9_demo_camPoint = 0;
}

INCLUDE_ASM("asm/nonmatchings/g_world/st9_demo", gsWorldSt9_DemoManager);

INCLUDE_ASM("asm/nonmatchings/g_world/st9_demo", gsWorldSt9_Demo);

void gsSt9Demo_EndChack()
{
    if (!(_st9_demo_flag & 0x100))
    {
        if (--_st9_demo_count == 0)
        {
            _st9_demo_flag |= 0x100;
        }
    }
}

INCLUDE_ASM("asm/nonmatchings/g_world/st9_demo", gsSt9Demo_ChancelCheck);

INCLUDE_ASM("asm/nonmatchings/g_world/st9_demo", gsSt9Demo_CameraWorkManagement);

INCLUDE_ASM("asm/nonmatchings/g_world/st9_demo", gsSt9DemoCW_GetVector);

INCLUDE_ASM("asm/nonmatchings/g_world/st9_demo", gsSt9DemoCW_RolLookPoint);
