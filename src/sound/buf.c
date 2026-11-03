#include "common.h"

INCLUDE_ASM("asm/nonmatchings/sound/buf", getFIFOindex);

INCLUDE_ASM("asm/nonmatchings/sound/buf", setD3_CHCR);

INCLUDE_ASM("asm/nonmatchings/sound/buf", setD4_CHCR);

INCLUDE_ASM("asm/nonmatchings/sound/buf", scTag2);

INCLUDE_ASM("asm/nonmatchings/sound/buf", viBufCreate);

INCLUDE_ASM("asm/nonmatchings/sound/buf", viBufReset);

INCLUDE_ASM("asm/nonmatchings/sound/buf", viBufBeginPut);

INCLUDE_ASM("asm/nonmatchings/sound/buf", viBufEndPut);

INCLUDE_ASM("asm/nonmatchings/sound/buf", viBufAddDMA);

INCLUDE_ASM("asm/nonmatchings/sound/buf", viBufStopDMA);

INCLUDE_ASM("asm/nonmatchings/sound/buf", viBufRestartDMA);

INCLUDE_ASM("asm/nonmatchings/sound/buf", viBufDelete);

INCLUDE_ASM("asm/nonmatchings/sound/buf", viBufIsActive);

INCLUDE_ASM("asm/nonmatchings/sound/buf", viBufCount);

INCLUDE_ASM("asm/nonmatchings/sound/buf", viBufFlush);

INCLUDE_ASM("asm/nonmatchings/sound/buf", viBufModifyPts);

INCLUDE_ASM("asm/nonmatchings/sound/buf", viBufPutTs);

INCLUDE_ASM("asm/nonmatchings/sound/buf", viBufGetTs);

INCLUDE_ASM("asm/nonmatchings/sound/buf", voBufCreate);

INCLUDE_ASM("asm/nonmatchings/sound/buf", voBufDelete);

INCLUDE_ASM("asm/nonmatchings/sound/buf", voBufReset);

INCLUDE_ASM("asm/nonmatchings/sound/buf", voBufIsFull);

INCLUDE_ASM("asm/nonmatchings/sound/buf", voBufIncCount);

INCLUDE_ASM("asm/nonmatchings/sound/buf", voBufGetData);

int voBufIsEmpty(void* a)
{
    return (STRUCT_OFFSET(a, 0xC, int) == 0);
}

INCLUDE_ASM("asm/nonmatchings/sound/buf", voBufGetTag);

INCLUDE_ASM("asm/nonmatchings/sound/buf", voBufGetAddr);

INCLUDE_ASM("asm/nonmatchings/sound/buf", voBufDecCount);
