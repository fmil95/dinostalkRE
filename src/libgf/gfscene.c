#include "gunsuv_usa/libgf/libgf.h"
#include "gunsuv_usa/libgf/gffog.h"
#include "gunsuv_usa/libgf/gfscene.h"

GF_INST_SCENE* GFScene_MakeInstance(GF_INST_SCENE* scene, GF_INSTANCE* parent)
{
    sceVu0FMATRIX unit;

    scene->head.type = GF_INST_TYPE_SCENE;

    GFInstance_InitHead(&scene->head);
    sceVu0UnitMatrix(unit);
    GFScene_SetWorldView(scene, unit);

    scene->head.parent = parent;

    GFFog_Init(&scene->fog);

    scene->packet = NULL;

    return scene;
}

INCLUDE_ASM("asm/nonmatchings/libgf/gfscene", GFScene_SetViewScreen);

INCLUDE_ASM("asm/nonmatchings/libgf/gfscene", GFScene_SetViewClip);

INCLUDE_ASM("asm/nonmatchings/libgf/gfscene", GFScene_SetClipScreen);

void GFScene_SetScreen(GF_INST_SCENE* scene, GF_SCREEN* screen)
{
    GFScene_SetViewScreen(scene->viewScreen, screen);
    GFScene_SetViewClip(scene->viewClip, screen);
    GFScene_SetClipScreen(scene->clipScreen, screen);
}

qword* GFScene_MakePacket(GF_INST_SCENE* scene, qword* packbuf)
{
    return GFFog_MakePacket(&scene->fog, packbuf);
}

void GFScene_SetWorldView(GF_INST_SCENE* scene, float* m[4])
{
    sceVu0CopyMatrix(scene->worldView, m);
}

void GFScene_SetCameraPos(GF_INST_SCENE* scene, float* pos)
{
    sceVu0CopyVector(scene->cameraPos, pos);
}

void GFScene_Eval(GF_INST_SCENE* scene)
{
    sceVu0MulMatrix(scene->worldScreen, scene->viewScreen, scene->worldView);
    sceVu0MulMatrix(scene->worldClip, scene->viewClip, scene->worldView);
}

qword* GFScene_Draw(qword* packet, GF_INST_SCENE* scene)
{
    qword* cur;
    qword* src;
    Sint32 i;

    cur = packet;
    _GFPKT_DV_CNT_FLUSH(cur, 0);
    cur++;

    _GFPKT_DV_CNT_STCYCL_UNPACK(cur, 0, 9, 1, 1);
    cur++;

    src = (qword*)scene->worldScreen;

    for (i = 0; i < 9; i++)
    {
        asm volatile(
            "lq $6, 0(%1)\n"
            "sq $6, 0(%0)\n"
            : : "r"(cur), "r"(src) : "$6", "memory");
        cur++;
        src++;
    }

    _GFPKT_DV_CNT_STCYCL_UNPACK(cur, 0x2C, 4, 1, 1);
    cur++;

    src = (qword*)scene->clipScreen;

    for (i = 0; i < 4; i++)
    {
        asm volatile(
            "lq $6, 0(%1)\n"
            "sq $6, 0(%0)\n"
            : : "r"(cur), "r"(src) : "$6", "memory");
        cur++;
        src++;
    }

    gf_trans_scene = scene;

    return GFFog_Draw(&scene->fog, cur);
}
