#include "common.h"

INCLUDE_ASM("asm/nonmatchings/taiken/taiken", gsTaiken_Init);

INCLUDE_ASM("asm/nonmatchings/taiken/taiken", gsTaiken_Exec);

INCLUDE_ASM("asm/nonmatchings/taiken/taiken", gsTaiken_End);

INCLUDE_ASM("asm/nonmatchings/taiken/taiken", gsTaiken_Init_SELECT);

INCLUDE_ASM("asm/nonmatchings/taiken/taiken", gsTaiken_Exec_SELECT);

INCLUDE_ASM("asm/nonmatchings/taiken/taiken", _select_move_cursor);

INCLUDE_ASM("asm/nonmatchings/taiken/taiken", _select_put_cursor);

INCLUDE_ASM("asm/nonmatchings/taiken/taiken", _select_put_info);

INCLUDE_ASM("asm/nonmatchings/taiken/taiken", gsTaiken_Init_KEYWORD);

INCLUDE_ASM("asm/nonmatchings/taiken/taiken", gsTaiken_Exec_KEYWORD);

INCLUDE_ASM("asm/nonmatchings/taiken/taiken", _keyword_put_word);

INCLUDE_ASM("asm/nonmatchings/taiken/taiken", gsTaikenInit_READY_GO);

INCLUDE_ASM("asm/nonmatchings/taiken/taiken", gsTaikenExec_READY_GO);

INCLUDE_ASM("asm/nonmatchings/taiken/taiken", gsTaikenExec_CLEAR);

INCLUDE_ASM("asm/nonmatchings/taiken/taiken", gsTaikenCall_CLEAR);

INCLUDE_ASM("asm/nonmatchings/taiken/taiken", gsTaikenCall_CLEAR_ON_OFF);

INCLUDE_ASM("asm/nonmatchings/taiken/taiken", _ready_go_put_font);

INCLUDE_ASM("asm/nonmatchings/taiken/taiken", _clear_put_font);
