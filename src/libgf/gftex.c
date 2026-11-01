#include "common.h"

INCLUDE_ASM("asm/nonmatchings/libgf/gftex", GFTex_InitDatabase);

INCLUDE_ASM("asm/nonmatchings/libgf/gftex", GFTex_ResetDatabase);

INCLUDE_ASM("asm/nonmatchings/libgf/gftex", GFTex_EntryDatabase);

INCLUDE_ASM("asm/nonmatchings/libgf/gftex", gfTex_ClearDb);

INCLUDE_ASM("asm/nonmatchings/libgf/gftex", GFTex_Add);

INCLUDE_ASM("asm/nonmatchings/libgf/gftex", gfTex_SetDatabaseForResident);

INCLUDE_ASM("asm/nonmatchings/libgf/gftex", gfTex_SetDatabaseForCache);

INCLUDE_ASM("asm/nonmatchings/libgf/gftex", gfTex_SetDefaultValue);

INCLUDE_ASM("asm/nonmatchings/libgf/gftex", gfTex_CalcAllocationSize);

INCLUDE_ASM("asm/nonmatchings/libgf/gftex", GFTex_GetDb);

INCLUDE_ASM("asm/nonmatchings/libgf/gftex", GFTex_Validate);

INCLUDE_ASM("asm/nonmatchings/libgf/gftex", GFTex_SetScore);

INCLUDE_ASM("asm/nonmatchings/libgf/gftex", GFTex_AddScore);

INCLUDE_ASM("asm/nonmatchings/libgf/gftex", GFTex_ClearScore);

INCLUDE_ASM("asm/nonmatchings/libgf/gftex", GFTex_ClearScoreAll);

INCLUDE_ASM("asm/nonmatchings/libgf/gftex", GFTex_SubScore);

INCLUDE_ASM("asm/nonmatchings/libgf/gftex", GFTex_SubScoreAll);

INCLUDE_ASM("asm/nonmatchings/libgf/gftex", GFTex_FlushVramCache);

INCLUDE_ASM("asm/nonmatchings/libgf/gftex", GFTex_FlushVramCache_Preset);

INCLUDE_ASM("asm/nonmatchings/libgf/gftex", gfTex_SetMipmapRegs);

INCLUDE_ASM("asm/nonmatchings/libgf/gftex", GFTex_Remove);

INCLUDE_ASM("asm/nonmatchings/libgf/gftex", gfTex_FreeVram);

INCLUDE_ASM("asm/nonmatchings/libgf/gftex", gfTex_Defrag);

INCLUDE_ASM("asm/nonmatchings/libgf/gftex", gfTex_SearchDb);

INCLUDE_ASM("asm/nonmatchings/libgf/gftex", GFTex_LoadImage);

INCLUDE_ASM("asm/nonmatchings/libgf/gftex", gfTex_LoadImage);

INCLUDE_ASM("asm/nonmatchings/libgf/gftex", GFTex_MakeTexturePacket);

INCLUDE_ASM("asm/nonmatchings/libgf/gftex", GFTex_MakeTexturePresetPacket);

INCLUDE_ASM("asm/nonmatchings/libgf/gftex", GFTex_MakePixelTransPacket);

INCLUDE_ASM("asm/nonmatchings/libgf/gftex", GFTex_MakePixelTransPacket_TexDB);

INCLUDE_ASM("asm/nonmatchings/libgf/gftex", gfTex_IsFormat32);

INCLUDE_ASM("asm/nonmatchings/libgf/gftex", gfTex_GetTbpTbw);

INCLUDE_ASM("asm/nonmatchings/libgf/gftex", GFTex_GetDatabase);

INCLUDE_ASM("asm/nonmatchings/libgf/gftex", gfTex_GetTwTh);

INCLUDE_ASM("asm/nonmatchings/libgf/gftex", gfTex_InitSysTex);

INCLUDE_ASM("asm/nonmatchings/libgf/gftex", GFTex_SetFrameCnt);
