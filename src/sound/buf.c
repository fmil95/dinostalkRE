#include "sound/buf.h"
#include "diei.h"

extern int CreateSema(void* param);
extern int DeleteSema(int sema);
extern int WaitSema(int sema);
extern int SignalSema(int sema);

#define DmaAddr(p) ((void*)((u_int)(p) & 0x0FFFFFFF))
#define UncAddr(p) ((void*)(((u_int)(p) & 0x0FFFFFFF) | 0x20000000))

#define D3_CHCR   ((volatile u_int*)0x1000B000)
#define D4_CHCR   ((volatile u_int*)0x1000B400)
#define D4_MADR   ((volatile u_int*)0x1000B410)
#define D4_QWC    ((volatile u_int*)0x1000B420)
#define D4_TADR   ((volatile u_int*)0x1000B430)
#define D_ENABLER ((volatile u_int*)0x1000F520)
#define D_ENABLEW ((volatile u_int*)0x1000F590)

#define DMA_ID_REFE 0
#define DMA_ID_NEXT 2
#define DMA_ID_REF  3

struct SemaParam {
    int count;
    int maxCount;
    int initCount;
    int waitThreads;
    int attr;
    int option;
};

INCLUDE_ASM("asm/nonmatchings/sound/buf", getFIFOindex);

INCLUDE_ASM("asm/nonmatchings/sound/buf", setD3_CHCR);

INCLUDE_ASM("asm/nonmatchings/sound/buf", setD4_CHCR);

void scTag2(QWORD* q, void* addr, u_int id, u_int qwc)
{
    q->l[0] = (u_long)(u_int)addr << 32 | (u_long)id << 28 | (u_long)qwc << 0;
}

int viBufCreate(ViBuf* f, u_long128* data, u_long128* tag, int size, TimeStamp* ts, int n_ts)
{
    struct SemaParam param;

    f->data = data;
    f->tag = UncAddr(tag);
    f->n = size;
    f->buffSize = size * VIBUF_ELM_SIZE;

    f->ts = ts;
    f->n_ts = n_ts;

    param.initCount = 1;
    param.maxCount = 1;
    f->sema = CreateSema(&param);

    viBufReset(f);

    f->totalBytes = 0;

    return 1;
}

INCLUDE_ASM("asm/nonmatchings/sound/buf", viBufReset);

INCLUDE_ASM("asm/nonmatchings/sound/buf", viBufBeginPut);

void viBufEndPut(ViBuf* f, int size)
{
    WaitSema(f->sema);

    f->readBytes += size;
    f->totalBytes += size;

    SignalSema(f->sema);
}

INCLUDE_ASM("asm/nonmatchings/sound/buf", viBufAddDMA);

INCLUDE_ASM("asm/nonmatchings/sound/buf", viBufStopDMA);

INCLUDE_ASM("asm/nonmatchings/sound/buf", viBufRestartDMA);

int viBufDelete(ViBuf* f)
{
    setD4_CHCR((0 << 8) | (1 << 2) | 1);
    *D4_QWC = 0;
    *D4_MADR = 0;
    *D4_TADR = 0;

    DeleteSema(f->sema);

    return 1;
}

int viBufIsActive(ViBuf* f)
{
    int ret;

    WaitSema(f->sema);

    ret = f->isActive;

    SignalSema(f->sema);

    return ret;
}

int viBufCount(ViBuf* f)
{
    int ret;

    WaitSema(f->sema);

    ret = f->dmaN * VIBUF_ELM_SIZE + f->readBytes;

    SignalSema(f->sema);

    return ret;
}

void viBufFlush(ViBuf* f)
{
    WaitSema(f->sema);

    f->readBytes = (f->readBytes + VIBUF_ELM_SIZE - 1) / VIBUF_ELM_SIZE * VIBUF_ELM_SIZE;

    SignalSema(f->sema);
}

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

VoData* voBufGetData(VoBuf* f)
{
    return voBufIsFull(f) ? (VoData*)NULL : f->data + f->write;
}

int voBufIsEmpty(VoBuf* f)
{
    return f->count == 0;
}

VoTag* voBufGetTag(VoBuf* f)
{
    return voBufIsEmpty(f) ? (VoTag*)NULL : f->tag + ((f->write - f->count + f->size) % f->size);
}

VoData* voBufGetAddr(VoBuf* f)
{
    return voBufIsEmpty(f) ? (VoData*)NULL : f->data + ((f->write - f->count + f->size) % f->size);
}

void voBufDecCount(VoBuf* f)
{
    if (f->count > 0)
    {
        f->count--;
    }
}
