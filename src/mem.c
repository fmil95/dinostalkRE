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
extern void _mem_free();
extern int printf();
extern int mem_CheckViolation();
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
        printf("!!!!WARNING:dont free!!!!\n");
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

int MEM_CheckViolation()
{
    u_int i;

    for (i = 0; i < 2048; i++)
    {
        if (mem_CheckViolation(&gAllocInfo[i]) < 0)
        {
            return -1;
        }
    }

    return 0;
}

INCLUDE_ASM("asm/nonmatchings/mem", mem_CheckViolation);

INCLUDE_ASM("asm/nonmatchings/mem", MEM_DumpAllocationInfo);
INCLUDE_RODATA("asm/nonmatchings/mem", D_006640C8);

INCLUDE_RODATA("asm/nonmatchings/mem", D_006640E8);

INCLUDE_RODATA("asm/nonmatchings/mem", D_00664118);

INCLUDE_RODATA("asm/nonmatchings/mem", D_00664140);

INCLUDE_RODATA("asm/nonmatchings/mem", D_00664160);

INCLUDE_RODATA("asm/nonmatchings/mem", D_00664188);

INCLUDE_RODATA("asm/nonmatchings/mem", D_006641B0);

INCLUDE_RODATA("asm/nonmatchings/mem", D_006641D0);

INCLUDE_RODATA("asm/nonmatchings/mem", D_006641F0);

INCLUDE_RODATA("asm/nonmatchings/mem", D_00664210);

INCLUDE_RODATA("asm/nonmatchings/mem", D_00664230);

INCLUDE_RODATA("asm/nonmatchings/mem", D_00664250);

INCLUDE_RODATA("asm/nonmatchings/mem", D_00664268);

INCLUDE_RODATA("asm/nonmatchings/mem", D_00664298);

INCLUDE_RODATA("asm/nonmatchings/mem", D_006642C8);

INCLUDE_RODATA("asm/nonmatchings/mem", D_006642F0);

INCLUDE_RODATA("asm/nonmatchings/mem", D_00664318);

INCLUDE_RODATA("asm/nonmatchings/mem", D_00664340);

INCLUDE_RODATA("asm/nonmatchings/mem", D_00664370);

INCLUDE_RODATA("asm/nonmatchings/mem", D_00664398);

INCLUDE_RODATA("asm/nonmatchings/mem", D_006643B8);

INCLUDE_RODATA("asm/nonmatchings/mem", D_006643E0);

INCLUDE_RODATA("asm/nonmatchings/mem", D_00664410);

INCLUDE_RODATA("asm/nonmatchings/mem", D_00664438);

INCLUDE_RODATA("asm/nonmatchings/mem", D_00664460);

INCLUDE_RODATA("asm/nonmatchings/mem", D_00664490);

INCLUDE_RODATA("asm/nonmatchings/mem", D_006644B8);

INCLUDE_RODATA("asm/nonmatchings/mem", D_006644E0);

INCLUDE_RODATA("asm/nonmatchings/mem", D_00664510);

INCLUDE_RODATA("asm/nonmatchings/mem", D_00664538);

INCLUDE_RODATA("asm/nonmatchings/mem", D_00664558);

INCLUDE_RODATA("asm/nonmatchings/mem", D_00664578);

INCLUDE_RODATA("asm/nonmatchings/mem", D_006645A0);

INCLUDE_RODATA("asm/nonmatchings/mem", D_006645D0);

INCLUDE_RODATA("asm/nonmatchings/mem", D_006645F8);

INCLUDE_RODATA("asm/nonmatchings/mem", D_00664620);

INCLUDE_RODATA("asm/nonmatchings/mem", D_00664650);

INCLUDE_RODATA("asm/nonmatchings/mem", D_00664678);

INCLUDE_RODATA("asm/nonmatchings/mem", D_006646A0);

INCLUDE_RODATA("asm/nonmatchings/mem", D_006646C8);

