#include "gunsuv_usa/libgf/gfscene.h"

INCLUDE_ASM("asm/nonmatchings/libgf/gfscene", GFScene_MakeInstance);

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

INCLUDE_ASM("asm/nonmatchings/libgf/gfscene", GFScene_Draw);
