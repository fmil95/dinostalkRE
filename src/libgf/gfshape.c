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

INCLUDE_ASM("asm/nonmatchings/libgf/gfshape", gfTexturedraw);
