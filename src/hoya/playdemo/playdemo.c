#include "common.h"

extern int D_0064B34C[];
extern int D_0064B354[];

INCLUDE_ASM("asm/nonmatchings/hoya/playdemo/playdemo", gsRecordPadInit);

INCLUDE_ASM("asm/nonmatchings/hoya/playdemo/playdemo", gsRecordPadMain);

INCLUDE_ASM("asm/nonmatchings/hoya/playdemo/playdemo", gsRecordPadMain2);

INCLUDE_ASM("asm/nonmatchings/hoya/playdemo/playdemo", gsRecordPadEnd);

INCLUDE_ASM("asm/nonmatchings/hoya/playdemo/playdemo", gsRecordPadFPutData);

INCLUDE_ASM("asm/nonmatchings/hoya/playdemo/playdemo", gsPlayPadInit);

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

INCLUDE_ASM("asm/nonmatchings/hoya/playdemo/playdemo", gsPlayDemoInit);

INCLUDE_ASM("asm/nonmatchings/hoya/playdemo/playdemo", gsRecDemoInit);

INCLUDE_ASM("asm/nonmatchings/hoya/playdemo/playdemo", gsPad_GetGuncon2BuckUp);
