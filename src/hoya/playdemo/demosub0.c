#include "common.h"
#include "hoya/playdemo/demosub0.h"
#include "fileio.h"
#include "hoya/hoya.h"
#include "g_enemy/enemain.h"

extern int _step_2;
extern int _step_2;
extern int _step_2;
extern int gsPlayDemoFlag;
extern int gsPlayDemoFlag;
extern int gsPlayDemoFlag;

extern int gsPause;
extern int gsVRMode;
extern int tdemo_00[];
extern int gsDemoTexture;
INCLUDE_ASM("asm/nonmatchings/hoya/playdemo/demosub0", gsInitDemo);

void gsDemoLoadPig()
{
    char* buf = FIO_ReadFile_Align((int)"cdrom0:\\DATA\\DEMO\\GSADV.BIN;1", 0x40);

    gsDemoTexture = hyEntryTexture((int)buf, 1, (int)tdemo_00);
}

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
