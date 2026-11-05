#include "common.h"
#include "hoya/option/gun1_ajst.h"
#include "g_guncon1/g_guncon1.h"
#include "hoya/hoya.h"

extern int finish;
extern int adjust_mode_00674810;
extern int trans;
extern int check_wait_timer_0067480c;
extern int work0;
extern int work1;
extern int work2;
extern int work3;
extern int delay_time;

extern int subAdjustMode;
extern int check_no_00674808;
int Gun1AjstGetViewScene()
{
    return trans;
}

int Gun1AjstGetProgNo()
{
    return adjust_mode_00674810;
}

void Gun1AjstCheckGun1ScreenOut()
{
    hyGun1CheckScreenOut();
}

int Gun1AjstCheckFinish()
{
    return finish;
}

void Gun1AdjustInit(int n)
{
    if (n < 0)
    {
        n = 0;
    }

    if (n >= 2)
    {
        n = 0;
    }

    adjust_mode_00674810 = 0;
    check_wait_timer_0067480c = 0x10;
    subAdjustMode = 0;
    finish = 0;
    check_no_00674808 = n;
    trans = 0;
    work0 = 0;
    work1 = 0;
    work2 = 0;
    work3 = 0;
    gsGuncon1_Init();
}

void AdjustInit_gun1_ajst()
{
    adjust_mode_00674810 = 0;
    check_wait_timer_0067480c = 0x10;
    trans = 0;
    work0 = 0;
    work1 = 0;
    work2 = 0;
    work3 = 0;
}

INCLUDE_ASM("asm/nonmatchings/hoya/option/gun1_ajst", Gun1AdjustMain);

INCLUDE_ASM("asm/nonmatchings/hoya/option/gun1_ajst", Gun1AdjustProcInit);

INCLUDE_ASM("asm/nonmatchings/hoya/option/gun1_ajst", Gun1AdjustProcGunTeaching);

INCLUDE_ASM("asm/nonmatchings/hoya/option/gun1_ajst", Gun1AdjustProcGunAdjustFirst);

INCLUDE_ASM("asm/nonmatchings/hoya/option/gun1_ajst", Gun1AdjustProcGunDelayTime);

int Gun1AdjustProcGunSetDeleyTime()
{
    delay_time = work0;
    trans = (trans + 1);
    return 1;
}

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
