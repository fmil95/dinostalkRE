#include "gunsuv_usa/libgf/gfshape.h"
#include "gunsuv_usa/libgf/gfpack.h"
#include "gunsuv_usa/libgf/libgf.h"
#include <stdio.h>
#include "gunsuv_usa/libgf/pod.h"
#include "gunsuv_usa/libgf/gfshare.h"

extern Uint32 gf_pShareBufSize;

extern Uint32* gf_pShareBufTop;

extern Uint32* gf_pShareBuf;

extern Uint32 gf_Vu1WorkSize;

extern char D_0066D458[];
static PodSHAPE* gf_GetShareBlock(GF_INST_SHAPE* inst);
static GF_INST_SHAPE* gf_GetShape(GF_INST_OBJECT* pObj, Uint32 n)
{
    return &pObj->shape[n];
}

static sceVu0FMATRIX* gf_GetShapeWorldMatrix(GF_INST_OBJECT* pObj, Uint32 n)
{
    GF_INST_SHAPE* pShape;

    pShape = gf_GetShape(pObj, n);

    if (pShape != NULL)
    {
        return &pShape->head.worldMatrix;
    }

    return (sceVu0FMATRIX*)pShape;
}

static sceVu0FMATRIX* gf_GetShapeLightMatrix(GF_INST_OBJECT* pObj, Uint32 n)
{
    GF_INST_SHAPE* pShape;

    pShape = gf_GetShape(pObj, n);

    if (pShape != NULL)
    {
        return &pShape->head.lightMatrix;
    }

    return (sceVu0FMATRIX*)pShape;
}

qword* gf_CopyQWs(qword* pw, qword* pr, Uint32 size)
{
    Uint128* w = (Uint128*)pw;
    Uint128* r = (Uint128*)pr;
    Uint32 i;

    for (i = 0; i < size; i++)
    {
        asm volatile(
            "lq $6, 0(%1)\n"
            "sq $6, 0(%0)\n"
            : : "r"(w), "r"(r) : "$6", "memory");
        w++;
        r++;
    }

    return (qword*)w;
}

INCLUDE_ASM("asm/nonmatchings/libgf/gfshare", gf_MakeShareShape);

static GF_INST_OBJECT* gf_GetParentObj(GF_INST_SHAPE* inst)
{
    GF_INST_HEAD* pInst;

    pInst = &inst->head;

    while (pInst->type != GF_INST_TYPE_OBJECT)
    {
        pInst = pInst->parent;
    }

    return (GF_INST_OBJECT*)pInst;
}

INCLUDE_ASM("asm/nonmatchings/libgf/gfshare", GFShare_Eval);

qword* GFShare_Draw(qword* packet, GF_INST_SHAPE* inst)
{
    qword* cur;

    cur = packet;

    if (gf_GetShareBlock(inst) != NULL)
    {
        cur = GFShape_MakeMatrixTransferPacket((float**)gUnitMatrix, (float**)gUnitMatrix, cur);
        cur = GFPacket_Add(cur, inst->extPacket);

        if ((Uint32)gf_pShareBufTop + gf_pShareBufSize < (Uint32)gf_pShareBuf)
        {
            printf(D_0066D458);
        }
    }

    return cur;
}

void GFShare_SetBuf(Uint32* pBuf, Uint32 size)
{
    gf_pShareBuf     = pBuf;
    gf_pShareBufTop  = pBuf;
    gf_pShareBufSize = size;
}

static PodSHAPE* gf_GetShareBlock(GF_INST_SHAPE* inst)
{
    PodHEADER* pPod;
    PodEXTENDTBL* pExtTbl;
    Uint32 extBlkNum;
    Uint32 i;

    pPod = (PodHEADER*)gf_GetParentObj(inst)->model->podData;
    pExtTbl = (PodEXTENDTBL*)(pPod + 1);
    pExtTbl = (PodEXTENDTBL*)((PodSHAPETBL*)pExtTbl + pPod->shapeNum);
    extBlkNum = pPod->extBlockNum;

    for (i = 0; i < extBlkNum; i++, pExtTbl++)
    {
        if (pExtTbl->extId == 0 && pExtTbl->free[0] == inst->no)
        {
            return (PodSHAPE*)((Uint8*)pPod + pExtTbl->free[1]);
        }
    }

    return NULL;
}

INCLUDE_ASM("asm/nonmatchings/libgf/gfshare", gf_CopyShareBlock);

Uint32 GFShare_GetUsedBufSize()
{
    return (Uint32)gf_pShareBuf - (Uint32)gf_pShareBufTop;
}

void GFShare_SetVu1WorkSize(Uint32 size)
{
    gf_Vu1WorkSize = size;
}

Uint32 GFShare_GetVu1WorkSize()
{
    return gf_Vu1WorkSize;
}
INCLUDE_RODATA("asm/nonmatchings/libgf/gfshare", D_0066D458);

