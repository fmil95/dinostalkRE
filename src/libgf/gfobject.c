#include "gunsuv_usa/libgf/gfobject.h"

INCLUDE_ASM("asm/nonmatchings/libgf/gfobject", GFObject_Init);

void GFObject_AttachModel(GF_INST_OBJECT* obj, GF_MICRO* micro, GF_LIGHT* light, GF_POINT_LIGHT* point_light, GF_SPOT_LIGHT* spot_light, GF_MODEL* model)
{
    obj->micro       = micro;
    obj->light       = light;
    obj->point_light = point_light;
    obj->spot_light  = spot_light;
    obj->model       = model;
    obj->nShape      = model->podData[2];
}

INCLUDE_ASM("asm/nonmatchings/libgf/gfobject", GFObject_AttachMicro);

INCLUDE_ASM("asm/nonmatchings/libgf/gfobject", GFObject_Eval);
