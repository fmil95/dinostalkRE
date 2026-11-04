#include "common.h"
#include "hoya/cockpit/g_cprlod.h"

extern char* reload;
extern void CheckReload();
extern void PutReload_Reload();
extern void PutReload_Gun();
INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_cprlod", gsCOCKPIT_InitReload);

INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_cprlod", CheckReload);

INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_cprlod", PutReload_Reload);

INCLUDE_ASM("asm/nonmatchings/hoya/cockpit/g_cprlod", PutReload_Gun);

void gsCOCKPIT_PutReload(int a)
{
    char* r = reload;
    int s = a & 1;

    STRUCT_OFFSET(r, 0x18, int) = 0x100;
    STRUCT_OFFSET(r, 0x14, int) = 0;
    STRUCT_OFFSET(r, 0x1C, int) = 0xE0;
    CheckReload();
    PutReload_Reload(s);
    PutReload_Gun(s);
}
