#include "common.h"

extern int finish;
extern int adjust_mode_00674810;
extern int trans;

int Gun1AjstGetViewScene()
{
    return trans;
}

int Gun1AjstGetProgNo()
{
    return adjust_mode_00674810;
}

INCLUDE_ASM("asm/nonmatchings/hoya/option/gun1_ajst", Gun1AjstCheckGun1ScreenOut);

int Gun1AjstCheckFinish()
{
    return finish;
}

INCLUDE_ASM("asm/nonmatchings/hoya/option/gun1_ajst", Gun1AdjustInit);

INCLUDE_ASM("asm/nonmatchings/hoya/option/gun1_ajst", AdjustInit_gun1_ajst);

INCLUDE_ASM("asm/nonmatchings/hoya/option/gun1_ajst", Gun1AdjustMain);

INCLUDE_ASM("asm/nonmatchings/hoya/option/gun1_ajst", Gun1AdjustProcInit);

INCLUDE_ASM("asm/nonmatchings/hoya/option/gun1_ajst", Gun1AdjustProcGunTeaching);

INCLUDE_ASM("asm/nonmatchings/hoya/option/gun1_ajst", Gun1AdjustProcGunAdjustFirst);

INCLUDE_ASM("asm/nonmatchings/hoya/option/gun1_ajst", Gun1AdjustProcGunDelayTime);

INCLUDE_ASM("asm/nonmatchings/hoya/option/gun1_ajst", Gun1AdjustProcGunSetDeleyTime);

INCLUDE_ASM("asm/nonmatchings/hoya/option/gun1_ajst", Gun1AdjustProcGunAdjustSecond);

INCLUDE_ASM("asm/nonmatchings/hoya/option/gun1_ajst", Gun1AdjustProcGunAdjustSecondCheck);

INCLUDE_ASM("asm/nonmatchings/hoya/option/gun1_ajst", Gun1AdjustProcGunAdjustFinish);

INCLUDE_ASM("asm/nonmatchings/hoya/option/gun1_ajst", Gun1AdjustProcFinish);

void Gun1AdjustProcExit()
{
    finish = 1;
    adjust_mode_00674810 = 0x63;
}

INCLUDE_ASM("asm/nonmatchings/hoya/option/gun1_ajst", Gun1Adjust);
