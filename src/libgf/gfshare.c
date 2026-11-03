#include "gunsuv_usa/libgf/gfshare.h"

extern Uint32 gf_Vu1WorkSize;

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

INCLUDE_ASM("asm/nonmatchings/libgf/gfshare", gf_GetShapeLightMatrix);

INCLUDE_ASM("asm/nonmatchings/libgf/gfshare", gf_CopyQWs);

INCLUDE_ASM("asm/nonmatchings/libgf/gfshare", gf_MakeShareShape);

INCLUDE_ASM("asm/nonmatchings/libgf/gfshare", gf_GetParentObj);

INCLUDE_ASM("asm/nonmatchings/libgf/gfshare", GFShare_Eval);

INCLUDE_ASM("asm/nonmatchings/libgf/gfshare", GFShare_Draw);

INCLUDE_ASM("asm/nonmatchings/libgf/gfshare", GFShare_SetBuf);

INCLUDE_ASM("asm/nonmatchings/libgf/gfshare", gf_GetShareBlock);

INCLUDE_ASM("asm/nonmatchings/libgf/gfshare", gf_CopyShareBlock);

INCLUDE_ASM("asm/nonmatchings/libgf/gfshare", GFShare_GetUsedBufSize);

void GFShare_SetVu1WorkSize(Uint32 size)
{
    gf_Vu1WorkSize = size;
}

Uint32 GFShare_GetVu1WorkSize()
{
    return gf_Vu1WorkSize;
}
