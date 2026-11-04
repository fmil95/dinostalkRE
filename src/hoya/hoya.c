#include "common.h"

extern int texMng[];
extern void hySetFadePara();
extern void hyDrawSMSpriteSub();
extern int gsGuncon2_CheckConnect();
extern char D_0066A4E8[];
extern void FIO_ReadFile_Align();
extern void hyDestroySMSpriteInfoSub();
extern void gplInitSprite2();

extern int gsGuncon2_GetTrg();
extern int gsGuncon2_GetRTrg();
extern int gsGuncon2_Get();
extern int MakeTextureAreaOnMemory();
extern int GFTex_Add();
extern int D_0052CFEC[];
extern int D_0052CFF0[];
INCLUDE_ASM("asm/nonmatchings/hoya/hoya", hyGun1CheckScreenOut);

void hySetBgCol(void) {
}

INCLUDE_ASM("asm/nonmatchings/hoya/hoya", hyInitEzSprite);

INCLUDE_ASM("asm/nonmatchings/hoya/hoya", hySetEzSprite);

INCLUDE_ASM("asm/nonmatchings/hoya/hoya", MakeTextureAreaOnMemory);

INCLUDE_ASM("asm/nonmatchings/hoya/hoya", hyCreateTexture);

INCLUDE_ASM("asm/nonmatchings/hoya/hoya", hyCreateTexture2);

void hyInitTextureManager()
{
    texMng[0] = 0;
}

int hyGetEntryNo()
{
    return texMng[0];
}

void hySetEntryNo(int a)
{
    texMng[0] = a;
}

INCLUDE_ASM("asm/nonmatchings/hoya/hoya", hyGetTexUv);

INCLUDE_ASM("asm/nonmatchings/hoya/hoya", hyGetTexId);

INCLUDE_ASM("asm/nonmatchings/hoya/hoya", hyLoadTexture);

INCLUDE_ASM("asm/nonmatchings/hoya/hoya", hyEntryTexture);

INCLUDE_ASM("asm/nonmatchings/hoya/hoya", hyTexAdd);

INCLUDE_ASM("asm/nonmatchings/hoya/hoya", hyLoadPigCptSight);

INCLUDE_ASM("asm/nonmatchings/hoya/hoya", hyLoadPigCptSetu);

INCLUDE_ASM("asm/nonmatchings/hoya/hoya", hyLoadPig);

INCLUDE_ASM("asm/nonmatchings/hoya/hoya", hyLoadPigTitle);

INCLUDE_ASM("asm/nonmatchings/hoya/hoya", hyLoadPigResult);

INCLUDE_ASM("asm/nonmatchings/hoya/hoya", hyLoadPigFResult);

INCLUDE_ASM("asm/nonmatchings/hoya/hoya", hyLoadPigOptionPart);

INCLUDE_ASM("asm/nonmatchings/hoya/hoya", hyLoadPigOption2Part);

INCLUDE_ASM("asm/nonmatchings/hoya/hoya", hyLoadPigPause);

INCLUDE_ASM("asm/nonmatchings/hoya/hoya", hyLoadPigPause2);

INCLUDE_ASM("asm/nonmatchings/hoya/hoya", hyLoadPigContinue);

INCLUDE_ASM("asm/nonmatchings/hoya/hoya", hyLoadPigName);

INCLUDE_ASM("asm/nonmatchings/hoya/hoya", hyLoadPigFont);

INCLUDE_ASM("asm/nonmatchings/hoya/hoya", hyLoadPigFont2);

INCLUDE_ASM("asm/nonmatchings/hoya/hoya", hyLoadPigMemory);

INCLUDE_ASM("asm/nonmatchings/hoya/hoya", hyLoadPigStartgs3);

void hyLoadIcon()
{
    FIO_ReadFile_Align(D_0066A4E8, 0x40);
}

INCLUDE_ASM("asm/nonmatchings/hoya/hoya", KeyStateUpdate);

INCLUDE_ASM("asm/nonmatchings/hoya/hoya", getkeyPush);

INCLUDE_ASM("asm/nonmatchings/hoya/hoya", getkeyPress);

int getkeyRelease()
{
    return 0;
}

INCLUDE_ASM("asm/nonmatchings/hoya/hoya", getkeyState);

INCLUDE_ASM("asm/nonmatchings/hoya/hoya", GunStateUpdate);

INCLUDE_ASM("asm/nonmatchings/hoya/hoya", getGunPush);

int getGunPress()
{
    if (gsGuncon2_CheckConnect())
    {
        return gsGuncon2_GetTrg();
    }

    return 0;
}

int getGunRelease()
{
    gsGuncon2_CheckConnect();
    return 0;
}

INCLUDE_ASM("asm/nonmatchings/hoya/hoya", getGunState);

INCLUDE_ASM("asm/nonmatchings/hoya/hoya", hyInitEearthQuake);

INCLUDE_ASM("asm/nonmatchings/hoya/hoya", hyFeelEearthQuake);

INCLUDE_ASM("asm/nonmatchings/hoya/hoya", hyInitSpriteManager);

INCLUDE_ASM("asm/nonmatchings/hoya/hoya", hyInitSpriteInfo);

INCLUDE_ASM("asm/nonmatchings/hoya/hoya", hySearchSMSpriteInfo);

INCLUDE_ASM("asm/nonmatchings/hoya/hoya", hyDrawSMSpriteSub);

void hyDrawSMSprite(void* a, int b)
{
    hyDrawSMSpriteSub(a, STRUCT_OFFSET(a, 0x14, int), b);
}

INCLUDE_ASM("asm/nonmatchings/hoya/hoya", hyEntrySMSprite);

void hyDestroySMSpriteInfoSub(void* a)
{
    if (a != 0)
    {
        hyDestroySMSpriteInfoSub(STRUCT_OFFSET(a, 0x28, int));
        STRUCT_OFFSET(a, 0x28, int) = 0;
    }
}

void hyDestroySMSpriteInfo(void* a)
{
    hyDestroySMSpriteInfoSub(STRUCT_OFFSET(a, 0x14, int));
    STRUCT_OFFSET(a, 0x14, int) = 0;
}

INCLUDE_ASM("asm/nonmatchings/hoya/hoya", hyEntryObj);

INCLUDE_ASM("asm/nonmatchings/hoya/hoya", hyEntryObj2);

INCLUDE_ASM("asm/nonmatchings/hoya/hoya", CreateBmpHead);

INCLUDE_ASM("asm/nonmatchings/hoya/hoya", PutBmpFrame);

INCLUDE_ASM("asm/nonmatchings/hoya/hoya", PutBmpZ);

void hyDumpVector(void) {
}

INCLUDE_ASM("asm/nonmatchings/hoya/hoya", hyCheckReed);

INCLUDE_ASM("asm/nonmatchings/hoya/hoya", hyHex2Bcd);

INCLUDE_ASM("asm/nonmatchings/hoya/hoya", sceVu0RotCameraMatrix);

void hyInitFadeMng(void* a)
{
    STRUCT_OFFSET(a, 0x0, int) = 0;
    STRUCT_OFFSET(a, 0x10, int) = 0;
    STRUCT_OFFSET(a, 0x14, int) = 0;
    STRUCT_OFFSET(a, 0x18, int) = 0;
    STRUCT_OFFSET(a, 0x1C, int) = 0;
    STRUCT_OFFSET(a, 0x20, int) = 0;
    STRUCT_OFFSET(a, 0x24, int) = 0;
    STRUCT_OFFSET(a, 0x28, int) = 0;
    STRUCT_OFFSET(a, 0x2C, int) = 0;
    STRUCT_OFFSET(a, 0x30, int) = 0;
}

INCLUDE_ASM("asm/nonmatchings/hoya/hoya", hySetFadePara);

INCLUDE_ASM("asm/nonmatchings/hoya/hoya", hyCalcFade);

void hyInitFadeMng2(void* a)
{
    STRUCT_OFFSET(a, 0x0, int) = 0;
    STRUCT_OFFSET(a, 0x10, int) = 0;
    STRUCT_OFFSET(a, 0x14, int) = 0;
    STRUCT_OFFSET(a, 0x18, int) = 0;
    STRUCT_OFFSET(a, 0x1C, int) = 0;
    STRUCT_OFFSET(a, 0x20, int) = 0;
    STRUCT_OFFSET(a, 0x24, int) = 0;
    STRUCT_OFFSET(a, 0x28, int) = 0;
    STRUCT_OFFSET(a, 0x2C, int) = 0;
    STRUCT_OFFSET(a, 0x30, int) = 0;
    gplInitSprite2((char*)a + 0x38, 0);
}

void hySetFadePara2()
{
    hySetFadePara();
}

INCLUDE_ASM("asm/nonmatchings/hoya/hoya", hyCalcFade2);

INCLUDE_ASM("asm/nonmatchings/hoya/hoya", hySwitchFadeTimer);

int hyCheckFadeFinishFlag(void* a)
{
    return (((STRUCT_OFFSET(a, 0x0, int) >> 1) ^ 0x1) & 0x1);
}

INCLUDE_ASM("asm/nonmatchings/hoya/hoya", ClipLine2D);

int hyWait(int a)
{
    return (a - (0 < a));
}

INCLUDE_ASM("asm/nonmatchings/hoya/hoya", hyGetTimeSync);

INCLUDE_ASM("asm/nonmatchings/hoya/hoya", hyGetTimeSecond);

INCLUDE_ASM("asm/nonmatchings/hoya/hoya", hyGetTimeMinute);

INCLUDE_ASM("asm/nonmatchings/hoya/hoya", hyGetTimeHour);

INCLUDE_ASM("asm/nonmatchings/hoya/hoya", hyConvTimePercentage);

INCLUDE_ASM("asm/nonmatchings/hoya/hoya", hyGetTimeSyncPercentage);

INCLUDE_ASM("asm/nonmatchings/hoya/hoya", hyGetTimeSecondPercentage);

INCLUDE_ASM("asm/nonmatchings/hoya/hoya", hyGetTimeMinutePercentage);

INCLUDE_ASM("asm/nonmatchings/hoya/hoya", hyGetTimeHourPercentage);
