// STATUS: NOT STARTED

#include "mem.h"

MEM_InitAllocation() {}

/* 100% match */
void MEM_EndAllocation() 
{
    MEM_FreeAll();
}

MEM_Malloc() {}

static _memalign_GS() {}

MEM_MallocAlign() {}

static mem_CheckAlignment() {}

static _mem_free() {}

void MEM_FreeAll() {}

MEM_Free() {}

static mem_GetFreeAllocInfo() {}

static mem_SearchAllocInfo() {}

static mem_GetMagicNumber() {}

void MEM_CheckViolation() {}

static mem_CheckViolation() {}

MEM_DumpAllocationInfo() {}
