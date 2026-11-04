#include "common.h"
#include "hoya/mem_card/mcduse.h"

extern int err_num_cause;
extern int err_num_func;
extern int stepque;
extern int writeque;

extern int chk_flg;
extern int chk_fmt;
extern int chk_free;
extern int chk_type;
extern int chk_port;
extern int chk_slot;
extern int re_flg;
extern int maxque;
extern char* queaddr;
extern void mcdFlushQue();
extern long pause;
extern long pause_cnt;
extern int mcdCheckEoq();
extern int strcmp();
void mcdFlushQue()
{
    int n = maxque;
    char* p;

    writeque = 0;
    stepque = 0;
    if (n > 0)
    {
        p = queaddr;
        do
        {
            *(short*)p = -1;
            p += 0x28;
        } while (--n);
    }
}

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/mcduse", mcdInit);

int mcdQuit()
{
    if (maxque <= 0)
    {
        return -1;
    }
    maxque = 0;
    queaddr = 0;
    mcdFlushQue();
    return 0;
}

int mcdCheckEoq(int n)
{
    int m = maxque;
    int s;
    int w;

    if (m < n)
    {
        return -1;
    }
    s = stepque;
    w = writeque;
    if (w < s)
    {
        return (s - w < n) ? -1 : 0;
    }
    return (m + s - w < n) ? -1 : 0;
}

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

int mcdStartChk(int port, int slot)
{
    if (chk_flg != 0)
    {
        return -1;
    }
    chk_port = port;
    chk_slot = slot;
    chk_type = -1;
    chk_free = -1;
    chk_fmt = -1;
    chk_flg = 1;
    re_flg = 0;
    return 0;
}

int mcdEndChk()
{
    if (chk_flg == 0)
    {
        return -1;
    }

    chk_flg = 0;

    return 0;
}

int mcdGetChkType()
{
    if (chk_flg == 0)
    {
        return -3;
    }

    return chk_type;
}

int mcdGetChkFree()
{
    if (chk_flg == 0)
    {
        return -3;
    }

    return chk_free;
}

int mcdGetChkFormat()
{
    if (chk_flg == 0)
    {
        return -3;
    }

    return chk_fmt;
}

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/mcduse", mcdUsrFuncSet);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/mcduse", mcdErrProcSet);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/mcduse", mcdWaitSet);

int mcdCardInfoSet(int a, int b, int c, int d, int e, int f)
{
    int w;
    int m;
    char* q;

    if (mcdCheckEoq(1) < 0)
    {
        return -1;
    }
    w = writeque;
    m = maxque;
    q = queaddr;
    STRUCT_OFFSET(q, w * 40 + 0, short) = 1;
    STRUCT_OFFSET(q, w * 40 + 4, int) = a;
    STRUCT_OFFSET(q, w * 40 + 8, int) = b;
    STRUCT_OFFSET(q, w * 40 + 12, int) = c;
    STRUCT_OFFSET(q, w * 40 + 24, int) = d;
    STRUCT_OFFSET(q, w * 40 + 28, int) = e;
    STRUCT_OFFSET(q, w * 40 + 32, int) = f;
    writeque = (w + 1) % m;
    return writeque;
}

int mcdOpenSet(int a, int b, int c, int d, int e)
{
    int w;
    int m;
    char* q;

    if (mcdCheckEoq(1) < 0)
    {
        return -1;
    }
    w = writeque;
    m = maxque;
    q = queaddr;
    STRUCT_OFFSET(q, w * 40 + 0, short) = 2;
    STRUCT_OFFSET(q, w * 40 + 4, int) = a;
    STRUCT_OFFSET(q, w * 40 + 8, int) = b;
    STRUCT_OFFSET(q, w * 40 + 12, int) = c;
    STRUCT_OFFSET(q, w * 40 + 24, int) = d;
    STRUCT_OFFSET(q, w * 40 + 16, int) = e;
    writeque = (w + 1) % m;
    return writeque;
}

int mcdCloseSet(int a, int b)
{
    int w;
    int m;
    char* q;

    if (mcdCheckEoq(1) < 0)
    {
        return -1;
    }
    w = writeque;
    m = maxque;
    q = queaddr;
    STRUCT_OFFSET(q, w * 40 + 4, int) = a;
    STRUCT_OFFSET(q, w * 40 + 0, short) = 3;
    STRUCT_OFFSET(q, w * 40 + 8, int) = b;
    writeque = (w + 1) % m;
    return writeque;
}

int mcdSeekSet(int a, int b, int c, int d)
{
    int w;
    int m;
    char* q;

    if (mcdCheckEoq(1) < 0)
    {
        return -1;
    }
    w = writeque;
    m = maxque;
    q = queaddr;
    STRUCT_OFFSET(q, w * 40 + 0, short) = 4;
    STRUCT_OFFSET(q, w * 40 + 4, int) = a;
    STRUCT_OFFSET(q, w * 40 + 8, int) = b;
    STRUCT_OFFSET(q, w * 40 + 12, int) = c;
    STRUCT_OFFSET(q, w * 40 + 16, int) = d;
    writeque = (w + 1) % m;
    return writeque;
}

int mcdReadSet(int a, int b, int c, int d)
{
    int w;
    int m;
    char* q;

    if (mcdCheckEoq(1) < 0)
    {
        return -1;
    }
    w = writeque;
    m = maxque;
    q = queaddr;
    STRUCT_OFFSET(q, w * 40 + 0, short) = 5;
    STRUCT_OFFSET(q, w * 40 + 4, int) = a;
    STRUCT_OFFSET(q, w * 40 + 8, int) = b;
    STRUCT_OFFSET(q, w * 40 + 24, int) = c;
    STRUCT_OFFSET(q, w * 40 + 12, int) = d;
    writeque = (w + 1) % m;
    return writeque;
}

int mcdWriteSet(int a, int b, int c, int d)
{
    int w;
    int m;
    char* q;

    if (mcdCheckEoq(1) < 0)
    {
        return -1;
    }
    w = writeque;
    m = maxque;
    q = queaddr;
    STRUCT_OFFSET(q, w * 40 + 0, short) = 6;
    STRUCT_OFFSET(q, w * 40 + 4, int) = a;
    STRUCT_OFFSET(q, w * 40 + 8, int) = b;
    STRUCT_OFFSET(q, w * 40 + 24, int) = c;
    STRUCT_OFFSET(q, w * 40 + 12, int) = d;
    writeque = (w + 1) % m;
    return writeque;
}

int mcdFlushSet(int a, int b)
{
    int w;
    int m;
    char* q;

    if (mcdCheckEoq(1) < 0)
    {
        return -1;
    }
    if (b < 0)
    {
        return 0;
    }
    w = writeque;
    m = maxque;
    q = queaddr;
    STRUCT_OFFSET(q, w * 40 + 0, short) = 0xA;
    STRUCT_OFFSET(q, w * 40 + 4, int) = a;
    STRUCT_OFFSET(q, w * 40 + 8, int) = b;
    writeque = (w + 1) % m;
    return writeque;
}

int mcdMkdirSet(int a, int b, int c, int d)
{
    int w;
    int m;
    char* q;

    if (mcdCheckEoq(1) < 0)
    {
        return -1;
    }
    w = writeque;
    m = maxque;
    q = queaddr;
    STRUCT_OFFSET(q, w * 40 + 0, short) = 0xB;
    STRUCT_OFFSET(q, w * 40 + 4, int) = a;
    STRUCT_OFFSET(q, w * 40 + 8, int) = b;
    STRUCT_OFFSET(q, w * 40 + 12, int) = c;
    STRUCT_OFFSET(q, w * 40 + 24, int) = d;
    writeque = (w + 1) % m;
    return writeque;
}

int mcdChDirSet(int a, int b, int c, int d, int e)
{
    int w;
    int m;
    char* q;

    if (mcdCheckEoq(1) < 0)
    {
        return -1;
    }
    w = writeque;
    m = maxque;
    q = queaddr;
    STRUCT_OFFSET(q, w * 40 + 0, short) = 0xC;
    STRUCT_OFFSET(q, w * 40 + 4, int) = a;
    STRUCT_OFFSET(q, w * 40 + 8, int) = b;
    STRUCT_OFFSET(q, w * 40 + 12, int) = c;
    STRUCT_OFFSET(q, w * 40 + 24, int) = d;
    STRUCT_OFFSET(q, w * 40 + 28, int) = e;
    writeque = (w + 1) % m;
    return writeque;
}

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/mcduse", mcdGetDirSet);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/mcduse", mcdFileInfoSet);

int mcdDeleteSet(int a, int b, int c, int d)
{
    int w;
    int m;
    char* q;

    if (mcdCheckEoq(1) < 0)
    {
        return -1;
    }
    w = writeque;
    m = maxque;
    q = queaddr;
    STRUCT_OFFSET(q, w * 40 + 0, short) = 0xF;
    STRUCT_OFFSET(q, w * 40 + 4, int) = a;
    STRUCT_OFFSET(q, w * 40 + 8, int) = b;
    STRUCT_OFFSET(q, w * 40 + 12, int) = c;
    STRUCT_OFFSET(q, w * 40 + 24, int) = d;
    writeque = (w + 1) % m;
    return writeque;
}

int mcdFormatSet(int a, int b, int c)
{
    int w;
    int m;
    char* q;

    if (mcdCheckEoq(1) < 0)
    {
        return -1;
    }
    w = writeque;
    m = maxque;
    q = queaddr;
    STRUCT_OFFSET(q, w * 40 + 0, short) = 0x10;
    STRUCT_OFFSET(q, w * 40 + 4, int) = a;
    STRUCT_OFFSET(q, w * 40 + 8, int) = b;
    STRUCT_OFFSET(q, w * 40 + 12, int) = c;
    writeque = (w + 1) % m;
    return writeque;
}

int mcdUnformatSet(int a, int b, int c)
{
    int w;
    int m;
    char* q;

    if (mcdCheckEoq(1) < 0)
    {
        return -1;
    }
    w = writeque;
    m = maxque;
    q = queaddr;
    STRUCT_OFFSET(q, w * 40 + 0, short) = 0x11;
    STRUCT_OFFSET(q, w * 40 + 4, int) = a;
    STRUCT_OFFSET(q, w * 40 + 8, int) = b;
    STRUCT_OFFSET(q, w * 40 + 12, int) = c;
    writeque = (w + 1) % m;
    return writeque;
}

int mcdEntSpaceSet(int a, int b, int c, int d)
{
    int w;
    int m;
    char* q;

    if (mcdCheckEoq(1) < 0)
    {
        return -1;
    }
    w = writeque;
    m = maxque;
    q = queaddr;
    STRUCT_OFFSET(q, w * 40 + 0, short) = 0x12;
    STRUCT_OFFSET(q, w * 40 + 4, int) = a;
    STRUCT_OFFSET(q, w * 40 + 8, int) = b;
    STRUCT_OFFSET(q, w * 40 + 12, int) = c;
    STRUCT_OFFSET(q, w * 40 + 24, int) = d;
    writeque = (w + 1) % m;
    return writeque;
}

int mcdRenameSet(int a, int b, int c, int d, int e)
{
    int w;
    int m;
    char* q;

    if (mcdCheckEoq(1) < 0)
    {
        return -1;
    }
    if (strcmp(d, e) == 0)
    {
        return 0;
    }
    w = writeque;
    m = maxque;
    q = queaddr;
    STRUCT_OFFSET(q, w * 40 + 0, short) = 0x13;
    STRUCT_OFFSET(q, w * 40 + 4, int) = a;
    STRUCT_OFFSET(q, w * 40 + 8, int) = b;
    STRUCT_OFFSET(q, w * 40 + 12, int) = c;
    STRUCT_OFFSET(q, w * 40 + 24, int) = d;
    STRUCT_OFFSET(q, w * 40 + 28, int) = e;
    writeque = (w + 1) % m;
    return writeque;
}

int mcdSlotMaxSet(int a, int b)
{
    int w;
    int m;
    char* q;

    if (mcdCheckEoq(1) < 0)
    {
        return -1;
    }
    w = writeque;
    m = maxque;
    q = queaddr;
    STRUCT_OFFSET(q, w * 40 + 0, short) = 0x15;
    STRUCT_OFFSET(q, w * 40 + 8, int) = a;
    STRUCT_OFFSET(q, w * 40 + 24, int) = b;
    writeque = (w + 1) % m;
    return writeque;
}

int mcdPauseExe()
{
    if (pause != 0 && pause_cnt > 0)
    {
        pause_cnt--;
        pause = pause_cnt;
    }
    return pause;
}

void mcdErrMess2Console(void) {
}

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/mcduse", mcdSetErrorCause);

INCLUDE_ASM("asm/nonmatchings/hoya/mem_card/mcduse", mcdMain);
