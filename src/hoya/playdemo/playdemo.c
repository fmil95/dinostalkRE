#include "common.h"

extern int D_0064B34C[];
extern int D_0064B354[];
extern int gsPlayDemoFlag;
extern void G_TEST_Init();
extern void gsOmakeInitManager();

extern int playDemo[];
INCLUDE_ASM("asm/nonmatchings/hoya/playdemo/playdemo", gsRecordPadInit);

INCLUDE_ASM("asm/nonmatchings/hoya/playdemo/playdemo", gsRecordPadMain);

INCLUDE_ASM("asm/nonmatchings/hoya/playdemo/playdemo", gsRecordPadMain2);

INCLUDE_ASM("asm/nonmatchings/hoya/playdemo/playdemo", gsRecordPadEnd);

INCLUDE_ASM("asm/nonmatchings/hoya/playdemo/playdemo", gsRecordPadFPutData);

void gsPlayPadInit(int a, int b)
{
    playDemo[2] = a;
    playDemo[1] = b;
    playDemo[4] = 0;
    playDemo[3] = 0;
    playDemo[0] = 0;
}

INCLUDE_ASM("asm/nonmatchings/hoya/playdemo/playdemo", gsPlayPadMain);

INCLUDE_ASM("asm/nonmatchings/hoya/playdemo/playdemo", gsPlayPadMain2);

INCLUDE_ASM("asm/nonmatchings/hoya/playdemo/playdemo", gsPlayPadEnd);

INCLUDE_ASM("asm/nonmatchings/hoya/playdemo/playdemo", gsPlayPadFGetData);

INCLUDE_ASM("asm/nonmatchings/hoya/playdemo/playdemo", gsPlayDemoPadSwitch);

int retGunActTaddr()
{
    return D_0064B354[0];
}

int IsRecordHeaderExists()
{
    return D_0064B34C[0];
}

void gsPlayDemoInit()
{
    gsPlayDemoFlag = 2;
    gsOmakeInitManager();
    G_TEST_Init();
}

void gsRecDemoInit()
{
    gsPlayDemoFlag = 4;
    G_TEST_Init();
}

INCLUDE_ASM("asm/nonmatchings/hoya/playdemo/playdemo", gsPad_GetGuncon2BuckUp);
