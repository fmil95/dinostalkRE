#include "gunsuv_usa/libgf/libgf.h"
#include "gunsuv_usa/libgf/gffog.h"

GF_FOG* GFFog_Init(GF_FOG *fog)
{
    fog->min = 0.0f;
    fog->max = 256.0f;
    fog->near = 1.0f;
    fog->far = fog->min;
    fog->fogA[0] = fog->fogA[1] = fog->fogA[2] = fog->fogA[3] = fog->min;
    fog->fogB[0] = fog->fogB[1] = fog->fogB[2] = fog->fogB[3] = fog->min;
    fog->packet = NULL;
    return fog;
}

qword* GFFog_MakePacket(GF_FOG* fog, qword* packbuf)
{
    fog->packet = packbuf;

    fog->fogB[3] = -(fog->max - fog->min) / (fog->far - fog->near);
    fog->fogA[3] = -fog->fogB[3] * fog->far;

    _GFPKT_DV_REF_STCYCL_UNPACK(packbuf, (Uint32)fog->fogA, 0x14, 2, 1, 1);

    return packbuf + 1;
}

qword* GFFog_Draw(GF_FOG* fog, qword* packet)
{
    qword* cur;

    cur = GFFog_MakePacket(fog, packet);

    _GFPKT_DV_CNT_DIRECT(cur, 2);
    cur++;

    ((long*)cur)[1] = 0xE;
    ((long*)cur)[0] = 0x1000000000008001L;
    cur++;

    gf_trans_fog = fog;

    ((long*)cur)[1] = 0x3D;
    ((long*)cur)[0] = *(long*)fog->col;

    return cur + 1;
}

Float32 GFFog_SetNear(GF_FOG* fog, Float32 near)
{
    fog->near = near;

    return near;
}

Float32 GFFog_SetFar(GF_FOG* fog, Float32 far)
{
    fog->far = far;

    return far;
}

Float32 GFFog_SetMin(GF_FOG* fog, Float32 min)
{
    fog->min = min;

    return min;
}

Float32 GFFog_SetMax(GF_FOG* fog, Float32 max)
{
    fog->max = max;

    return max;
}

void GFFog_SetParam(GF_FOG* fog, Float32 min, Float32 max, Float32 near, Float32 far)
{
    GFFog_SetMin(fog, min);
    GFFog_SetMax(fog, max);
    GFFog_SetNear(fog, near);
    GFFog_SetFar(fog, far);
}
