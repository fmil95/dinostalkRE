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
extern char D_00663F28[];
extern void _mem_free();
extern int printf();
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

void* _memalign_GS(int a, int s)
{
    int m = a - 1;
    int base = gsHeapCur;
    int sz = (s + m) & ~m;
    int p = (base + m) & ~m;
    int* q;

    gsHeapBak = base;
    gsHeapCur = p + sz;
    sz >>= 2;
    if (sz > 0)
    {
        q = (int*)base;
        do
        {
            *q++ = 0;
        } while (--sz);
    }
    return (void*)p;
}

INCLUDE_ASM("asm/nonmatchings/mem", MEM_MallocAlign);

int mem_CheckAlignment(u_int a)
{
    int i;

    if (a & 3)
    {
        return -1;
    }
    for (i = 0; i < 31; i++)
    {
        if (a == (1 << i))
        {
            return 0;
        }
    }
    return -1;
}

INCLUDE_ASM("asm/nonmatchings/mem", _mem_free);

INCLUDE_ASM("asm/nonmatchings/mem", MEM_FreeAll);

void MEM_Free(int a)
{
    _mem_free(a);
    if (a == gsHeapBak)
    {
        gsHeapCur = a;
    }
    else
    {
        printf(D_00663F28);
    }
}

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
