#include "common.h"

extern int _step_2;
extern int _step_2;
extern int _step_2;
extern int gsPlayDemoFlag;
extern int gsPlayDemoFlag;
extern int gsPlayDemoFlag;

INCLUDE_ASM("asm/nonmatchings/hoya/playdemo/demosub0", gsInitDemo);

INCLUDE_ASM("asm/nonmatchings/hoya/playdemo/demosub0", gsDemoLoadPig);

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

INCLUDE_ASM("asm/nonmatchings/hoya/playdemo/demosub0", gsDemoPause);
