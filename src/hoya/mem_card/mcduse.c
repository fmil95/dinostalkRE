#include "common.h"

extern int err_num_cause;
extern int err_num_func;
extern int stepque;
extern int writeque;

extern int chk_flg;
INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/mcduse", mcdFlushQue);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/mcduse", mcdInit);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/mcduse", mcdQuit);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/mcduse", mcdCheckEoq);

int mcdGetStepQue()
{
    return stepque;
}

int mcdGetWriteQue()
{
    return writeque;
}

int mcdGetQueCondition()
{
    return ((unsigned int)0 < (unsigned int)(writeque ^ stepque));
}

int mcdGetErrorFunc()
{
    return err_num_func;
}

int mcdGetErrorCause()
{
    return err_num_cause;
}

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/mcduse", mcdSetPause);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/mcduse", mcdStartChk);

int mcdEndChk()
{
    if (chk_flg == 0)
    {
        return -1;
    }

    chk_flg = 0;

    return 0;
}

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/mcduse", mcdGetChkType);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/mcduse", mcdGetChkFree);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/mcduse", mcdGetChkFormat);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/mcduse", mcdUsrFuncSet);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/mcduse", mcdErrProcSet);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/mcduse", mcdWaitSet);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/mcduse", mcdCardInfoSet);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/mcduse", mcdOpenSet);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/mcduse", mcdCloseSet);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/mcduse", mcdSeekSet);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/mcduse", mcdReadSet);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/mcduse", mcdWriteSet);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/mcduse", mcdFlushSet);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/mcduse", mcdMkdirSet);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/mcduse", mcdChDirSet);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/mcduse", mcdGetDirSet);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/mcduse", mcdFileInfoSet);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/mcduse", mcdDeleteSet);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/mcduse", mcdFormatSet);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/mcduse", mcdUnformatSet);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/mcduse", mcdEntSpaceSet);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/mcduse", mcdRenameSet);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/mcduse", mcdSlotMaxSet);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/mcduse", mcdPauseExe);

void mcdErrMess2Console(void) {
}

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/mcduse", mcdSetErrorCause);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/mcduse", mcdMain);
