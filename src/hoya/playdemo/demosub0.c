#include "common.h"
#include "hoya/playdemo/demosub0.h"

extern int _step_2;
extern int _step_2;
extern int _step_2;
extern int gsPlayDemoFlag;
extern int gsPlayDemoFlag;
extern int gsPlayDemoFlag;

extern int gsPause;
extern int gsVRMode;
extern void Enemy_PauseProc();
INCLUDE_ASM("asm/nonmatchings/hoya/playdemo/demosub0", gsInitDemo);

INCLUDE_ASM("asm/nonmatchings/hoya/playdemo/demosub0", gsDemoLoadPig);

INCLUDE_RODATA("asm/nonmatchings/hoya/playdemo/demosub0", D_0066C820);

INCLUDE_ASM("asm/nonmatchings/hoya/playdemo/demosub0", gsDemoInitSprite);

INCLUDE_ASM("asm/nonmatchings/hoya/playdemo/demosub0", gsPutDemoObjects);

void gsDemoRecPlayPad()
{
    if (_step_2 == 0)
    {
        _step_2 = (((((gsPlayDemoFlag << 1) + gsPlayDemoFlag) << 3) + gsPlayDemoFlag) << 2);
    }
}

INCLUDE_ASM("asm/nonmatchings/hoya/playdemo/demosub0", gsManagementDemoCamera);

INCLUDE_ASM("asm/nonmatchings/hoya/playdemo/demosub0", gsTriggerDemoGuncon);

INCLUDE_ASM("asm/nonmatchings/hoya/playdemo/demosub0", gsGuncon2_DemoGetGunPos);

INCLUDE_ASM("asm/nonmatchings/hoya/playdemo/demosub0", gsGetCameraDemoRot_SCP);

void gsDemoPause(int a)
{
    if (a)
    {
        gsPause = 1;
        gsVRMode = 2;
        Enemy_PauseProc(1);
    }
    else
    {
        gsPause = 0;
        gsVRMode = 0;
        Enemy_PauseProc(0);
    }
}
