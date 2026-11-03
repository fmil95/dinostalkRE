#include "gunsuv_usa/libgf/gfpointlight.h"

GF_POINT_LIGHT* GFPointLight_Init(GF_POINT_LIGHT* light)
{
}

void GFPointLight_SetPos(GF_POINT_LIGHT* light, Uint32 no, float* v0)
{
}

void GFPointLight_SetColor(GF_POINT_LIGHT* light, Uint32 no, float* c0)
{
}

qword* GFPointLight_MakePacket(GF_POINT_LIGHT* light, qword* packbuf)
{
}

qword* GFPointLight_Draw(qword* packet, GF_POINT_LIGHT* light)
{
    return packet;
}

void GFPointLight_SetShape(struct gf_inst* shape, GF_POINT_LIGHT* light)
{
}
