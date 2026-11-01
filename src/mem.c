#include "common.h"

INCLUDE_ASM("asm/nonmatchings/mem", MEM_InitAllocation);

INCLUDE_ASM("asm/nonmatchings/mem", MEM_EndAllocation);

INCLUDE_ASM("asm/nonmatchings/mem", MEM_Malloc);

INCLUDE_ASM("asm/nonmatchings/mem", _memalign_GS);

INCLUDE_ASM("asm/nonmatchings/mem", MEM_MallocAlign);

INCLUDE_ASM("asm/nonmatchings/mem", mem_CheckAlignment);

INCLUDE_ASM("asm/nonmatchings/mem", _mem_free);

INCLUDE_ASM("asm/nonmatchings/mem", MEM_FreeAll);

INCLUDE_ASM("asm/nonmatchings/mem", MEM_Free);

INCLUDE_ASM("asm/nonmatchings/mem", mem_GetFreeAllocInfo);

INCLUDE_ASM("asm/nonmatchings/mem", mem_SearchAllocInfo);

INCLUDE_ASM("asm/nonmatchings/mem", mem_GetMagicNumber);

INCLUDE_ASM("asm/nonmatchings/mem", MEM_CheckViolation);

INCLUDE_ASM("asm/nonmatchings/mem", mem_CheckViolation);

INCLUDE_ASM("asm/nonmatchings/mem", MEM_DumpAllocationInfo);
