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

INCLUDE_ASM("asm/nonmatchings/libgf/pod", GFPod_GetNextMaterialBlock);

INCLUDE_ASM("asm/nonmatchings/libgf/pod", GFPod_MapTextureIndex2);

INCLUDE_ASM("asm/nonmatchings/libgf/pod", GFPod_DeMapTextureIndex);
