#include "common.h"
#include "g_world/st7test.h"
#include "gunsuv_usa/libgf/gftex.h"

INCLUDE_ASM("asm/nonmatchings/g_world/st7test", gsWorldInitSt7Test);

INCLUDE_ASM("asm/nonmatchings/g_world/st7test", gsWorldSt7Test_SpecialEffect);

INCLUDE_ASM("asm/nonmatchings/g_world/st7test", gsWorldSt7Test_SpecialEffect2);

int gsWorldSt7Test_Neon_00(int pkt, int tex, int pos)
{
    GF_TEXDB* db = GFTex_GetDb(tex);
    int* pig = (int*)db->pig;
    int save[2];

    save[0] = pig[0x48 / 4];
    save[1] = pig[0x4C / 4];
    pig[0x48 / 4] = save[0] + (0x80 - (pos & 0x7F)) * 32;
    pkt = (int)GFTex_MakeTexturePacket((qword*)pkt, db, 1);
    pig[0x48 / 4] = save[0];
    pig[0x4C / 4] = save[1];
    return pkt;
}

INCLUDE_ASM("asm/nonmatchings/g_world/st7test", gsWorldSt7Test_Neon_01);

INCLUDE_ASM("asm/nonmatchings/g_world/st7test", gsWorldSt7Test_Neon_02);

INCLUDE_ASM("asm/nonmatchings/g_world/st7test", gsWorldSt7Test_Neon_10);
