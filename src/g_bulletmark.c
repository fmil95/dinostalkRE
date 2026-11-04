#include "common.h"

extern char* gpBulletMark_SetGsRegs();
extern void _GFPKT_DV_CNT_FLUSH();
extern void _GFPKT_DV_CNT_MSCAL_FLUSH();
INCLUDE_ASM("asm/nonmatchings/g_bulletmark", gpBulletMark_Init);

void gpBulletMark_Eval(void) {
}

INCLUDE_ASM("asm/nonmatchings/g_bulletmark", gpBulletMark_Draw);

char* gpBulletMark_InitPacket(char* a)
{
    char* p = gpBulletMark_SetGsRegs(a, 0);

    _GFPKT_DV_CNT_FLUSH(p, 0);
    p += 0x10;
    _GFPKT_DV_CNT_MSCAL_FLUSH(p, 0, 0);
    return p + 0x10;
}

INCLUDE_ASM("asm/nonmatchings/g_bulletmark", gpBulletMark_MakePacket);

INCLUDE_ASM("asm/nonmatchings/g_bulletmark", gpBulletMark_SetGsRegs);

INCLUDE_ASM("asm/nonmatchings/g_bulletmark", gpBulletMark_GetHitTriangle);

INCLUDE_ASM("asm/nonmatchings/g_bulletmark", gpBulletMark_GetChangeMatrix);

INCLUDE_ASM("asm/nonmatchings/g_bulletmark", gpBulletMark_GetTexST);

INCLUDE_ASM("asm/nonmatchings/g_bulletmark", gpBulletMark_UpDate);
