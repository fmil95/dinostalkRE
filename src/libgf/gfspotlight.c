#include "gunsuv_usa/libgf/gfspotlight.h"

GF_SPOT_LIGHT* GFSpotLight_Init(GF_SPOT_LIGHT* light)
{
    return light;
}

void GFSpotLight_SetPos(GF_SPOT_LIGHT* light, Uint32 no, float* v0)
{
}

void GFSpotLight_SetColor(GF_SPOT_LIGHT* light, Uint32 no, float* c0)
{
}

void GFSpotLight_SetVector(GF_SPOT_LIGHT* light, Uint32 no, float* v0)
{
}

qword* GFSpotLight_MakePacket(GF_SPOT_LIGHT* light, qword* packbuf)
{
    return packbuf;
}

qword* GFSpotLight_Draw(qword* packet, GF_SPOT_LIGHT* light)
{
    return packet;
}

void GFSpotLight_SetShape(struct gf_inst* shape, GF_SPOT_LIGHT* light)
{
}
