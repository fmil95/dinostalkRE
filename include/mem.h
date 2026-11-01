// STATUS: NOT STARTED

#ifndef MEM_H
#define MEM_H

MEM_InitAllocation();
void MEM_EndAllocation();
MEM_Malloc();
MEM_MallocAlign();
void MEM_FreeAll();
MEM_Free();
void MEM_CheckViolation();
MEM_DumpAllocationInfo();

#endif // MEM_H
