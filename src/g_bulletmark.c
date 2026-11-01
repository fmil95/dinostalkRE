#include "common.h"

INCLUDE_ASM("asm/nonmatchings/g_bulletmark", gpBulletMark_Init);

void gpBulletMark_Eval(void) {
}

INCLUDE_ASM("asm/nonmatchings/g_bulletmark", gpBulletMark_Draw);

INCLUDE_ASM("asm/nonmatchings/g_bulletmark", gpBulletMark_InitPacket);

INCLUDE_ASM("asm/nonmatchings/g_bulletmark", gpBulletMark_MakePacket);

INCLUDE_ASM("asm/nonmatchings/g_bulletmark", gpBulletMark_SetGsRegs);

INCLUDE_ASM("asm/nonmatchings/g_bulletmark", gpBulletMark_GetHitTriangle);

INCLUDE_ASM("asm/nonmatchings/g_bulletmark", gpBulletMark_GetChangeMatrix);

INCLUDE_ASM("asm/nonmatchings/g_bulletmark", gpBulletMark_GetTexST);

INCLUDE_ASM("asm/nonmatchings/g_bulletmark", gpBulletMark_UpDate);
