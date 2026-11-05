#include "common.h"
#include "taiken/taiken.h"
#include "g_camera.h"
#include "hoya/cockpit/g_other.h"

extern int _clear_bit;
extern int _clear_bit;

extern int _clear_cnt;
extern void _clear_put_font();
INCLUDE_ASM("asm/nonmatchings/taiken/taiken", gsTaiken_Init);

INCLUDE_ASM("asm/nonmatchings/taiken/taiken", gsTaiken_Exec);

INCLUDE_ASM("asm/nonmatchings/taiken/taiken", gsTaiken_End);

INCLUDE_ASM("asm/nonmatchings/taiken/taiken", gsTaiken_Init_SELECT);

INCLUDE_ASM("asm/nonmatchings/taiken/taiken", gsTaiken_Exec_SELECT);

INCLUDE_ASM("asm/nonmatchings/taiken/taiken", _select_move_cursor);

INCLUDE_ASM("asm/nonmatchings/taiken/taiken", _select_put_cursor);

INCLUDE_ASM("asm/nonmatchings/taiken/taiken", _select_put_info);

INCLUDE_ASM("asm/nonmatchings/taiken/taiken", gsTaiken_Init_KEYWORD);

INCLUDE_RODATA("asm/nonmatchings/taiken/taiken", D_0066CDA0);

INCLUDE_RODATA("asm/nonmatchings/taiken/taiken", D_0066CDC8);

INCLUDE_ASM("asm/nonmatchings/taiken/taiken", gsTaiken_Exec_KEYWORD);

INCLUDE_ASM("asm/nonmatchings/taiken/taiken", _keyword_put_word);

INCLUDE_ASM("asm/nonmatchings/taiken/taiken", gsTaikenInit_READY_GO);

INCLUDE_ASM("asm/nonmatchings/taiken/taiken", gsTaikenExec_READY_GO);

void gsTaikenExec_CLEAR()
{
    if (!(gsCamera.unk4 & 0x200) && _clear_bit)
    {
        if (!(_clear_bit & 2))
        {
            _clear_put_font();
        }

        if (++_clear_cnt > 1000)
        {
            _clear_cnt = 1000;
        }
    }
}

void gsTaikenCall_CLEAR()
{
    if (!(gsCamera.unk4 & 0x200))
    {
        if (!_clear_bit)
        {
            gsTimerPauseTimeEx(1);
        }

        gsCamera.unk1A0 = 10000;
        gsCamera.unk4 |= 0x8000;
        _clear_bit = 1;
    }
}

void gsTaikenCall_CLEAR_ON_OFF()
{
    _clear_bit = (_clear_bit ^ 0x2);
}

INCLUDE_ASM("asm/nonmatchings/taiken/taiken", _ready_go_put_font);

INCLUDE_ASM("asm/nonmatchings/taiken/taiken", _clear_put_font);
INCLUDE_RODATA("asm/nonmatchings/taiken/taiken", D_0066CDF8);

