#include "common.h"

extern int texMng[];

INCLUDE_ASM("asm/nonmatchings/hoya/hoya", hyGun1CheckScreenOut);

void hySetBgCol(void) {
}

INCLUDE_ASM("asm/nonmatchings/hoya/hoya", hyInitEzSprite);

INCLUDE_ASM("asm/nonmatchings/hoya/hoya", hySetEzSprite);

INCLUDE_ASM("asm/nonmatchings/hoya/hoya", MakeTextureAreaOnMemory);

INCLUDE_ASM("asm/nonmatchings/hoya/hoya", hyCreateTexture);

INCLUDE_ASM("asm/nonmatchings/hoya/hoya", hyCreateTexture2);

INCLUDE_ASM("asm/nonmatchings/hoya/hoya", hyInitTextureManager);

int hyGetEntryNo()
{
    return texMng[0];
}

INCLUDE_ASM("asm/nonmatchings/hoya/hoya", hySetEntryNo);

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

INCLUDE_ASM("asm/nonmatchings/hoya/hoya", hyLoadIcon);

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

INCLUDE_ASM("asm/nonmatchings/hoya/hoya", getGunPress);

INCLUDE_ASM("asm/nonmatchings/hoya/hoya", getGunRelease);

INCLUDE_ASM("asm/nonmatchings/hoya/hoya", getGunState);

INCLUDE_ASM("asm/nonmatchings/hoya/hoya", hyInitEearthQuake);

INCLUDE_ASM("asm/nonmatchings/hoya/hoya", hyFeelEearthQuake);

INCLUDE_ASM("asm/nonmatchings/hoya/hoya", hyInitSpriteManager);

INCLUDE_ASM("asm/nonmatchings/hoya/hoya", hyInitSpriteInfo);

INCLUDE_ASM("asm/nonmatchings/hoya/hoya", hySearchSMSpriteInfo);

INCLUDE_ASM("asm/nonmatchings/hoya/hoya", hyDrawSMSpriteSub);

INCLUDE_ASM("asm/nonmatchings/hoya/hoya", hyDrawSMSprite);

INCLUDE_ASM("asm/nonmatchings/hoya/hoya", hyEntrySMSprite);

INCLUDE_ASM("asm/nonmatchings/hoya/hoya", hyDestroySMSpriteInfoSub);

INCLUDE_ASM("asm/nonmatchings/hoya/hoya", hyDestroySMSpriteInfo);

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

INCLUDE_ASM("asm/nonmatchings/hoya/hoya", hyInitFadeMng);

INCLUDE_ASM("asm/nonmatchings/hoya/hoya", hySetFadePara);

INCLUDE_ASM("asm/nonmatchings/hoya/hoya", hyCalcFade);

INCLUDE_ASM("asm/nonmatchings/hoya/hoya", hyInitFadeMng2);

INCLUDE_ASM("asm/nonmatchings/hoya/hoya", hySetFadePara2);

INCLUDE_ASM("asm/nonmatchings/hoya/hoya", hyCalcFade2);

INCLUDE_ASM("asm/nonmatchings/hoya/hoya", hySwitchFadeTimer);

INCLUDE_ASM("asm/nonmatchings/hoya/hoya", hyCheckFadeFinishFlag);

INCLUDE_ASM("asm/nonmatchings/hoya/hoya", ClipLine2D);

INCLUDE_ASM("asm/nonmatchings/hoya/hoya", hyWait);

INCLUDE_ASM("asm/nonmatchings/hoya/hoya", hyGetTimeSync);

INCLUDE_ASM("asm/nonmatchings/hoya/hoya", hyGetTimeSecond);

INCLUDE_ASM("asm/nonmatchings/hoya/hoya", hyGetTimeMinute);

INCLUDE_ASM("asm/nonmatchings/hoya/hoya", hyGetTimeHour);

INCLUDE_ASM("asm/nonmatchings/hoya/hoya", hyConvTimePercentage);

INCLUDE_ASM("asm/nonmatchings/hoya/hoya", hyGetTimeSyncPercentage);

INCLUDE_ASM("asm/nonmatchings/hoya/hoya", hyGetTimeSecondPercentage);

INCLUDE_ASM("asm/nonmatchings/hoya/hoya", hyGetTimeMinutePercentage);

INCLUDE_ASM("asm/nonmatchings/hoya/hoya", hyGetTimeHourPercentage);
