#include "common.h"
#include "g_world/st5.h"
#include "taiken/taiken.h"

extern char gsEnemyInfos[];
INCLUDE_ASM("asm/nonmatchings/g_world/st5", gsWorldInitSt5);

void gsWorldSt5_SpecialEffect()
{
    gsWorldSt5_CheckBossDied();
}

INCLUDE_ASM("asm/nonmatchings/g_world/st5", gsWorldSt5_SpecialEffect2);

void gsWorldSt5_CheckBossDied()
{
    int p = (int)gsEnemyInfos;

    do
    {
        if (STRUCT_OFFSET(p, 0, int) & 1)
        {
            if (STRUCT_OFFSET(p, 0x2A, short) == 14 || STRUCT_OFFSET(p, 0x2A, short) == 8)
            {
                if (STRUCT_OFFSET(p, 0, int) & 0x20000000)
                {
                    gsTaikenCall_CLEAR();
                }
            }
        }
        p += 0x2A50;
    } while (p < (int)gsEnemyInfos + 0x1A720);
}
