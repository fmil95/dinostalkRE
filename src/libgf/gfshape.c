#include "gunsuv_usa/libgf/pod.h"
#include "gunsuv_usa/libgf/libgf.h"
#include "gunsuv_usa/libgf/gftex.h"
#include "gunsuv_usa/libgf/gfanim.h"

extern sceVu0FVECTOR D_00655C00;
INCLUDE_ASM("asm/nonmatchings/libgf/gfshape", gfShape_AttachObject2);

void GFShape_AttachObject(GF_INST_SHAPE* shape, GF_INST_OBJECT* obj)
{
    Sint32 no;

    obj->shape = shape;

    for (no = 0; no < obj->nShape; no++)
    {
        shape[no].head.type = 2;
        GFInstance_InitHead(&shape[no].head);
    }

    no = ((PodHEADER*)obj->model->podData)->rootShape;

    gfShape_AttachObject2(obj, obj->shape, no);

    obj->head.child = &shape[no].head;
    shape[no].head.parent = &obj->head;
}

void GFShape_Eval(GF_INST_SHAPE* inst)
{
    GF_INST_OBJECT* obj;

    GFAnim_Eval(inst, inst->object->speedAnim);

    obj = inst->object;

    if (!(obj->head.flag & 8))
    {
        inst->col[0] = obj->col[0];
        inst->alpha  = obj->alpha;
        inst->col[1] = obj->col[1];
        inst->col[2] = obj->col[2];
        inst->col[3] = obj->col[3];
    }
}

INCLUDE_ASM("asm/nonmatchings/libgf/gfshape", GFShape_Draw);

qword* GFShape_MakeMatrixTransferPacket(float* mat_lw[4], float* mat_light[4], qword* packet)
{
    qword* cur;

    _GFPKT_DV_CNT_FLUSH(packet, 0);
    _GFPKT_DV_CNT_STCYCL_UNPACK(packet + 1, 0xE0, 8, 1, 1);
    sceVu0CopyMatrix((void*)(packet + 2), (void*)mat_lw);
    sceVu0CopyMatrix((void*)(packet + 6), (void*)mat_light);
    _GFPKT_DV_CNT_MSCAL_FLUSH(packet + 10, 0, 0);
    _GFPKT_DV_CNT_STCYCL_STROW(packet + 11, 1, 1, 1);

    cur = packet + 12;

    asm volatile(
        "lq $6, 0(%1)\n"
        "sq $6, 0(%0)\n"
        : : "r"(cur), "r"(D_00655C00) : "$6", "memory");

    return cur + 1;
}

INCLUDE_ASM("asm/nonmatchings/libgf/gfshape", GFShape_MakeAllMatrixTransferPacket);

qword* gfTexturedraw(qword* packet, Sint32 texidx)
{
    qword* cur;
    Sint32 valid;

    cur = packet;

    if (texidx < 0)
    {
        _GFPKT_DV_CNT_FLUSH(cur, 0);
        cur++;

        return GFTex_MakeTexturePacket(cur, GFTex_GetDb(texidx), 0);
    }

    valid = GFTex_Validate(texidx);
    cur = GFTex_MakeTexturePacket(packet, GFTex_GetDb(texidx), valid);

    if (valid)
    {
        gf_transTextureNum++;
    }

    return cur;
}
