#include "common.h"
#include "g_meminit.h"

extern int gsHeapSize;
extern int gsHeapTop;
extern char _end[];
extern char D_D0000[];
extern void scePrintf(const char* fmt, ...);
extern void* malloc(unsigned int size);

int FullAllocAndFree()
{
    int size;
    int heap_size;
    void* heap_addr;

    size      = 0x1FFF000 - ((int)_end + (int)D_D0000);
    heap_size = size - 0x10;
    heap_addr = malloc(heap_size);

    gsHeapSize = heap_size;
    gsHeapTop  = (int)heap_addr;

    scePrintf("heap_addr:%x ,size:%x\n", heap_addr, size);

    return heap_size;
}
