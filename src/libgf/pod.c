#include "gunsuv_usa/libgf/pod.h"

Sint32 GFPod_IsPodData(Uint32* pod)
{
    PodHEADER* head;

    head = (PodHEADER*)pod;

    if (head->magic != 0x444F3250)
    {
        return 0;
    }

    return head->version == 0x80;
}

INCLUDE_ASM("asm/nonmatchings/libgf/pod", GFPod_MapTextureIndex);

PodMATERIAL* GFPod_GetNextMaterialBlock(PodMATERIAL* material)
{
    PodGEOMETRY* geom;
    Sint32 vinfo;
    Sint32 i;

    geom = (PodGEOMETRY*)(material + 1);
    vinfo = 1;

    if (material->flag & 1)
    {
        vinfo = 2;
    }

    if (material->flag & 2)
    {
        vinfo++;
    }

    if (material->flag & 4)
    {
        vinfo++;
    }

    for (i = 0; i < material->geomNum; i++)
    {
        geom = (PodGEOMETRY*)((qword*)(geom + 1) + vinfo * geom->vertNum);
    }

    return (PodMATERIAL*)geom;
}

INCLUDE_ASM("asm/nonmatchings/libgf/pod", GFPod_MapTextureIndex2);

INCLUDE_ASM("asm/nonmatchings/libgf/pod", GFPod_DeMapTextureIndex);
