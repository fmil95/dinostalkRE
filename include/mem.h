// STATUS: NOT STARTED

#ifndef MEM_H
#define MEM_H

void MEM_InitAllocation();
void MEM_EndAllocation();
void MEM_Malloc(int a, int b, int c);
MEM_MallocAlign();
void MEM_FreeAll();
void MEM_Free(int a);
void MEM_CheckViolation();
MEM_DumpAllocationInfo();

#endif // MEM_H
