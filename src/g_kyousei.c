#include "common.h"
#include "g_kyousei.h"

extern int* FIO_ReadFile_Align();
extern void* memcpy();
void gsKMInit(char* a, char* b)
{
    int* p = FIO_ReadFile_Align(b, 0x40);
    int n = p[0];

    STRUCT_OFFSET(a, 0, int) = n;
    memcpy(a + 0x10, (char*)p + 0x10, n << 6);
}

INCLUDE_ASM("asm/nonmatchings/g_kyousei", InterpolateVector);

INCLUDE_ASM("asm/nonmatchings/g_kyousei", gsKyouseiMove);
