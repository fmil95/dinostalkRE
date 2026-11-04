#include "sound/buf.h"
#include <eekernel.h>


#define DmaAddr(p) ((void*)((u_int)(p) & 0x0FFFFFFF))
#define UncAddr(p) ((void*)(((u_int)(p) & 0x0FFFFFFF) | 0x20000000))

#define D3_CHCR   ((volatile u_int*)0x1000B000)
#define D4_CHCR   ((volatile u_int*)0x1000B400)
#define D4_MADR   ((volatile u_int*)0x1000B410)
#define D4_QWC    ((volatile u_int*)0x1000B420)
#define D4_TADR   ((volatile u_int*)0x1000B430)
#define D_ENABLER ((volatile u_int*)0x1000F520)
#define D_ENABLEW ((volatile u_int*)0x1000F590)

#define TS_NONE (-1)

#define FS(f) ((f->dmaStart + f->dmaN) * VIBUF_ELM_SIZE)
#define FN(f) ((f->n - 2 - f->dmaN) * VIBUF_ELM_SIZE)

#define min(x, y) (((x) > (y)) ? (y) : (x))
#define max(x, y) (((x) > (y)) ? (x) : (y))

#define IPU_BP ((volatile u_int*)0x10002020)

extern inline int IsPtsInRegion(int tgt, int pos, int len, int size)
{
    int tgt1 = (tgt - pos + size) % size;

    return tgt1 < len;
}

#define DMA_ID_REFE 0
#define DMA_ID_NEXT 2
#define DMA_ID_REF  3


INCLUDE_ASM("asm/nonmatchings/sound/buf", getFIFOindex);

void setD3_CHCR(u_int a)
{
    DIntr();
    *D_ENABLEW = *D_ENABLER | 0x10000;
    *D3_CHCR = a;
    *D_ENABLEW = *D_ENABLER & ~0x10000;
    EIntr();
}

void setD4_CHCR(u_int a)
{
    DIntr();
    *D_ENABLEW = *D_ENABLER | 0x10000;
    *D4_CHCR = a;
    *D_ENABLEW = *D_ENABLER & ~0x10000;
    EIntr();
}

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

void viBufBeginPut(ViBuf* f, u_char** ptr0, int* len0, u_char** ptr1, int* len1)
{
    int es;
    int en;
    int fs;
    int fn;

    WaitSema(f->sema);

    fs = FS(f);
    fn = FN(f);

    es = (fs + f->readBytes) % f->buffSize;
    en = fn - f->readBytes;

    if (f->buffSize - es >= en)
    {
        *ptr0 = (u_char*)f->data + es;
        *len0 = en;
        *ptr1 = NULL;
        *len1 = 0;
    }
    else
    {
        *ptr0 = (u_char*)f->data + es;
        *len0 = f->buffSize - es;
        *ptr1 = (u_char*)f->data;
        *len1 = en - (f->buffSize - es);
    }

    SignalSema(f->sema);
}

void viBufEndPut(ViBuf* f, int size)
{
    WaitSema(f->sema);

    f->readBytes += size;
    f->totalBytes += size;

    SignalSema(f->sema);
}

int viBufAddDMA(ViBuf* f)
{
    int i;
    int index;
    int id;
    int last;
    u_int d4chcr;
    int isNewData = 0;
    int consume;
    int read_start;
    int read_n;

    WaitSema(f->sema);

    if (!f->isActive)
    {
        return 0;
    }

    setD4_CHCR((DMA_ID_REFE << 28) | (0 << 8) | (1 << 2) | 1);
    d4chcr = *D4_CHCR;

    index = getFIFOindex(f, (void*)*D4_MADR);
    consume = (index + f->n - f->dmaStart) % f->n;
    f->dmaStart = (f->dmaStart + consume) % f->n;
    f->dmaN -= consume;

    read_start = (f->dmaStart + f->dmaN) % f->n;
    read_n = f->readBytes / VIBUF_ELM_SIZE;
    f->readBytes %= VIBUF_ELM_SIZE;

    if (read_n > 0)
    {
        last = (f->dmaStart + f->dmaN - 1 + f->n) % f->n;
        scTag2((QWORD*)(f->tag + last), (char*)f->data + VIBUF_ELM_SIZE * last, DMA_ID_REF, VIBUF_ELM_SIZE / 16);
        isNewData = 1;
    }

    index = read_start;

    for (i = 0; i < read_n; i++)
    {
        id = (i == read_n - 1) ? DMA_ID_REFE : DMA_ID_REF;
        scTag2((QWORD*)(f->tag + index), (char*)f->data + VIBUF_ELM_SIZE * index, id, VIBUF_ELM_SIZE / 16);
        index = (index + 1) % f->n;
    }

    f->dmaN += read_n;

    if (f->dmaN)
    {
        if (isNewData)
        {
            d4chcr = (d4chcr & 0x0fffffff) | (DMA_ID_REF << 28);
        }

        setD4_CHCR(d4chcr | 0x100);
    }

    SignalSema(f->sema);

    return 1;
}

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

int viBufModifyPts(ViBuf* f, TimeStamp* new_ts)
{
    TimeStamp* ts;
    int rd = (f->wt_ts - f->count_ts + f->n_ts) % f->n_ts;
    int datasize = VIBUF_ELM_SIZE * f->n;
    int loop = 1;

    if (f->count_ts > 0)
    {
        while (loop)
        {
            ts = f->ts + rd;

            if (ts->len == 0 || new_ts->len == 0)
            {
                break;
            }

            if (IsPtsInRegion(ts->pos, new_ts->pos, new_ts->len, datasize))
            {
                int len = min(new_ts->pos + new_ts->len - ts->pos, ts->len);

                ts->pos = (ts->pos + len) % datasize;
                ts->len -= len;

                if (ts->len == 0)
                {
                    if (ts->pts >= 0)
                    {
                        ts->pts = TS_NONE;
                        ts->dts = TS_NONE;
                        ts->pos = 0;
                        ts->len = 0;
                    }

                    f->count_ts = max(f->count_ts - 1, 0);
                }
            }
            else
            {
                loop = 0;
            }

            rd = (rd + 1) % f->n_ts;
        }
    }

    return 0;
}


int viBufPutTs(ViBuf* f, TimeStamp* ts)
{
    int ret = 0;

    WaitSema(f->sema);

    if (f->count_ts < f->n_ts)
    {
        viBufModifyPts(f, ts);

        if (ts->pts >= 0 || ts->dts >= 0)
        {
            f->ts[f->wt_ts].pts = ts->pts;
            f->ts[f->wt_ts].dts = ts->dts;
            f->ts[f->wt_ts].pos = ts->pos;
            f->ts[f->wt_ts].len = ts->len;

            f->count_ts++;
            f->wt_ts = (f->wt_ts + 1) % f->n_ts;
        }

        ret = 1;
    }

    SignalSema(f->sema);

    return ret;
}

int viBufGetTs(ViBuf* f, TimeStamp* ts)
{
    u_int d4madr = *D4_MADR;
    u_int ipubp = *IPU_BP;
    int bp = f->env.ipubp & 0x7F;
    int fp = (ipubp >> 16) & 0x3;
    int ifc = (ipubp >> 8) & 0xF;
    u_int d4madr_next = d4madr - ((fp + ifc) << 4);
    u_int stop;
    int datasize = VIBUF_ELM_SIZE * f->n;
    int isEnd = 0;
    int tscount;
    int wt;
    int i;

    WaitSema(f->sema);

    ts->pts = TS_NONE;
    ts->dts = TS_NONE;

    stop = (d4madr_next + (bp >> 3) + datasize - (u_int)f->data) % datasize;

    tscount = f->count_ts;
    wt = f->wt_ts;

    for (i = 0; i < tscount && !isEnd; i++)
    {
        int rd = (wt - tscount + f->n_ts + i) % f->n_ts;

        if (IsPtsInRegion(stop, f->ts[rd].pos, f->ts[rd].len, datasize))
        {
            ts->pts = f->ts[rd].pts;
            ts->dts = f->ts[rd].dts;
            f->ts[rd].pts = TS_NONE;
            f->ts[rd].dts = TS_NONE;

            isEnd = 1;
            f->count_ts -= min(1, f->count_ts);
        }
    }

    SignalSema(f->sema);

    return 1;
}

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
