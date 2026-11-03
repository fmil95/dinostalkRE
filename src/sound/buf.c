#include "sound/buf.h"
#include "diei.h"

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

int voBufCreate(VoBuf* f, VoData* data, VoTag* tag, int size)
{
    int i;

    f->data = data;
    f->tag = tag;
    f->size = size;
    f->count = 0;
    f->write = 0;

    for (i = 0; i < size; i++)
    {
        f->tag[i].status = VOBUF_STATUS_EMPTY;
    }

    return 0;
}

void voBufDelete(VoBuf* f)
{
    f->count = 0;
    f->data = NULL;
    f->tag = NULL;
    f->size = 0;
    f->write = 0;
}

int voBufReset(VoBuf* f)
{
    f->count = 0;
    f->write = 0;

    return 0;
}

int voBufIsFull(VoBuf* f)
{
    return f->count == f->size;
}

void voBufIncCount(VoBuf* f)
{
    DIntr();

    f->tag[f->write].status = VOBUF_STATUS_FULL;
    f->count++;
    f->write = (f->write + 1) % f->size;

    EIntr();
}

INCLUDE_ASM("asm/nonmatchings/sound/buf", voBufGetData);

int voBufIsEmpty(VoBuf* f)
{
    return f->count == 0;
}

INCLUDE_ASM("asm/nonmatchings/sound/buf", voBufGetTag);

INCLUDE_ASM("asm/nonmatchings/sound/buf", voBufGetAddr);

INCLUDE_ASM("asm/nonmatchings/sound/buf", voBufDecCount);
