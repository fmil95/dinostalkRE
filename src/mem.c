#include "common.h"

typedef struct AllocInfoWork 
{
    int unk0;
    char pad[44];
} AllocInfoWork;

extern AllocInfoWork gAllocInfo[2048];
extern int gAllocNum;
extern signed long gAllocSize;
extern int gsHeapBak;
extern int gsHeapCur;
extern int gsHeapTop;
extern void mem_SearchAllocInfo();
extern void MEM_MallocAlign();

extern int cur_magic_0;
void MEM_InitAllocation() 
{
    unsigned int i;

    FullAllocAndFree();
    
    gsHeapCur = gsHeapTop;
    gsHeapBak = gsHeapTop;
    
    for (i = 0; i < 2048; i++) 
    {
        gAllocInfo[i].unk0 = 0;
    } 
    
    gAllocNum  = 0;
    gAllocSize = 0;
}

void MEM_EndAllocation() 
{
    MEM_FreeAll();
}

void MEM_Malloc(int a, int b, int c)
{
    MEM_MallocAlign(a, 0x10, b, c);
}

INCLUDE_ASM("asm/nonmatchings/mem", _memalign_GS);

INCLUDE_ASM("asm/nonmatchings/mem", MEM_MallocAlign);

INCLUDE_ASM("asm/nonmatchings/mem", mem_CheckAlignment);

INCLUDE_ASM("asm/nonmatchings/mem", _mem_free);

INCLUDE_ASM("asm/nonmatchings/mem", MEM_FreeAll);

INCLUDE_ASM("asm/nonmatchings/mem", MEM_Free);

void mem_GetFreeAllocInfo()
{
    mem_SearchAllocInfo(0);
}

INCLUDE_ASM("asm/nonmatchings/mem", mem_SearchAllocInfo);

int mem_GetMagicNumber()
{
    return cur_magic_0++;
}

INCLUDE_ASM("asm/nonmatchings/mem", MEM_CheckViolation);

INCLUDE_ASM("asm/nonmatchings/mem", mem_CheckViolation);

INCLUDE_ASM("asm/nonmatchings/mem", MEM_DumpAllocationInfo);
