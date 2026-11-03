#include "gunsuv_usa/libgf/gfscene.h"

INCLUDE_ASM("asm/nonmatchings/libgf/gfscene", GFScene_MakeInstance);

INCLUDE_ASM("asm/nonmatchings/libgf/gfscene", GFScene_SetViewScreen);

INCLUDE_ASM("asm/nonmatchings/libgf/gfscene", GFScene_SetViewClip);

INCLUDE_ASM("asm/nonmatchings/libgf/gfscene", GFScene_SetClipScreen);

INCLUDE_ASM("asm/nonmatchings/libgf/gfscene", GFScene_SetScreen);

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

INCLUDE_ASM("asm/nonmatchings/libgf/gfscene", GFScene_Eval);

INCLUDE_ASM("asm/nonmatchings/libgf/gfscene", GFScene_Draw);
