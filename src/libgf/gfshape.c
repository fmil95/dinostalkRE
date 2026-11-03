#include "gunsuv_usa/libgf/libgf.h"
#include "gunsuv_usa/libgf/gftex.h"
#include "gunsuv_usa/libgf/gfanim.h"

INCLUDE_ASM("asm/nonmatchings/libgf/gfshape", gfShape_AttachObject2);

INCLUDE_ASM("asm/nonmatchings/libgf/gfshape", GFShape_AttachObject);

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

INCLUDE_ASM("asm/nonmatchings/libgf/gfshape", GFShape_MakeMatrixTransferPacket);

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
