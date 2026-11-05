#include "common.h"
#include "fileio.h"
#include "test.h"
#include "hoya/hoya.h"
#include "g_guncon2/g_guncon2.h"
#include "g_pad.h"
#include "g_plane.h"

extern int texMng[];
extern void hyDrawSMSpriteSub();
extern void hyDestroySMSpriteInfoSub();

extern int GFTex_Add();
extern int D_0052CFEC[];
extern int D_0052CFF0[];
extern int gsFONT_IdtexNo1;
extern int namePigData[];
extern int namePigAddr[];
extern int namePigTuv[];
extern int gsNAME_Idtex[];
extern int ttlPigData[];
extern int ttlPigAddr[];
extern int ttlPigTuv[];
extern int gsTITLE_Idtex[];
extern int subPigData[];
extern int subPigAddr[];
extern int subPigTuv[];
extern int gsPAUSE_Idtex[];
extern int memcPigData[];
extern int memcPigAddr[];
extern int gsMEMC_Idtex[];
extern int stgsPigData[];
extern int stgsPigAddr[];
extern int gsSTGS_Idtex[];
extern int cntPigData[];
extern int cntPigAddr[];
extern int cntPigTuv[];
extern int gsCONTINUE_Idtex[];
extern int resPigData[];
extern int resPigAddr[];
extern int resPigTuv[];
extern int gsRESULT_Idtex[];
extern int fResPigData[];
extern int fResPigAddr[];
extern int fResPigTuv[];
extern int gsFRESULT_Idtex[];
extern int cptSetuGetNo[];
extern int cptSetuPigAddr[];
extern int gsCOCKPIT_IdtexItemText[];
INCLUDE_ASM("asm/nonmatchings/hoya/hoya", hyGun1CheckScreenOut);

void hySetBgCol(void) {
}

INCLUDE_ASM("asm/nonmatchings/hoya/hoya", hyInitEzSprite);

INCLUDE_ASM("asm/nonmatchings/hoya/hoya", hySetEzSprite);

INCLUDE_ASM("asm/nonmatchings/hoya/hoya", MakeTextureAreaOnMemory);

int hyCreateTexture(int a, int b, int c, int d, int e)
{
    return GFTex_Add(MakeTextureAreaOnMemory(a, b, c, (u_char)d, (u_char)e));
}

int hyCreateTexture2(int a, int b, int c, int d, int e)
{
    return GFTex_Add(MakeTextureAreaOnMemory(a, b, c, (u_char)d, (u_char)e, 0));
}

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

int hyGetTexUv(int i, int j)
{
    return D_0052CFF0[i * 2] + j * 8;
}

int hyGetTexId(int i)
{
    return D_0052CFEC[i * 2];
}

int hyLoadTexture(int a, int b, int c)
{
    int* m = texMng;
    int* base = m + 1;
    int i = m[0];
    int* e = base + i * 2;

    e[0] = TEST_LoadTexture(a, b);
    e[1] = c;
    m[0]++;
    if (m[0] >= 0x80)
    {
        m[0] = 0;
    }
    return i;
}

int hyEntryTexture(int a, int b, int c)
{
    int* m = texMng;
    int* base = m + 1;
    int i = m[0];
    int* e = base + i * 2;

    e[0] = TEST_EntryTexture(a, b);
    e[1] = c;
    m[0]++;
    if (m[0] >= 0x80)
    {
        m[0] = 0;
    }
    return i;
}

INCLUDE_ASM("asm/nonmatchings/hoya/hoya", hyTexAdd);

INCLUDE_ASM("asm/nonmatchings/hoya/hoya", hyLoadPigCptSight);

void hyLoadPigCptSetu(char* buf)
{
    int i;

    for (i = 0; i < 39; i++)
    {
        if (cptSetuGetNo[i] != 0xFF)
        {
            gsCOCKPIT_IdtexItemText[i] = TEST_EntryTexture((unsigned int*)(buf + cptSetuPigAddr[cptSetuGetNo[i]] * 4), 0);
        }
        else
        {
            gsCOCKPIT_IdtexItemText[i] = 0;
        }
    }
}

INCLUDE_ASM("asm/nonmatchings/hoya/hoya", hyLoadPig);

void hyLoadPigTitle()
{
    int i;
    char* buf;

    buf = (char*)FIO_ReadFile_Align(ttlPigData[0], 0x40);

    for (i = 0; i < 6; i++)
    {
        gsTITLE_Idtex[i] = hyEntryTexture((int)(buf + ttlPigAddr[i] * 4), 1, ttlPigTuv[i]);
    }
}

void hyLoadPigResult(int n)
{
    int i;
    char* buf;

    buf = (char*)FIO_ReadFile_Align(resPigData[0], 0x40);

    for (i = 0; i < 3; i++)
    {
        gsRESULT_Idtex[i] = hyEntryTexture((int)(buf + resPigAddr[i] * 4), 1, resPigTuv[i]);
    }

    gsRESULT_Idtex[3] = hyEntryTexture((int)(buf + resPigAddr[n + 3] * 4), 1, resPigTuv[n + 3]);
    gsRESULT_Idtex[4] = hyEntryTexture((int)(buf + resPigAddr[12] * 4), 1, resPigTuv[12]);
}

void hyLoadPigFResult(int n)
{
    int i;
    char* buf;

    buf = (char*)FIO_ReadFile_Align(fResPigData[0], 0x40);

    for (i = 0; i < 3; i++)
    {
        gsFRESULT_Idtex[i] = hyEntryTexture((int)(buf + fResPigAddr[i] * 4), 1, fResPigTuv[i]);
    }

    gsFRESULT_Idtex[3] = hyEntryTexture((int)(buf + fResPigAddr[n + 3] * 4), 1, fResPigTuv[n + 3]);
    gsFRESULT_Idtex[4] = hyEntryTexture((int)(buf + fResPigAddr[8] * 4), 1, fResPigTuv[8]);
}

INCLUDE_ASM("asm/nonmatchings/hoya/hoya", hyLoadPigOptionPart);

INCLUDE_ASM("asm/nonmatchings/hoya/hoya", hyLoadPigOption2Part);

void hyLoadPigPause()
{
    int i;
    char* buf;

    buf = (char*)FIO_ReadFile_Align(subPigData[0], 0x40);

    for (i = 0; i < 12; i++)
    {
        gsPAUSE_Idtex[i] = hyEntryTexture((int)(buf + subPigAddr[i] * 4), 1, subPigTuv[i]);
    }
}

INCLUDE_ASM("asm/nonmatchings/hoya/hoya", hyLoadPigPause2);

void hyLoadPigContinue()
{
    int i;
    char* buf;

    buf = (char*)FIO_ReadFile_Align(cntPigData[0], 0x40);

    for (i = 0; i < 1; i++)
    {
        gsCONTINUE_Idtex[i] = hyEntryTexture((int)(buf + cntPigAddr[i] * 4), 1, cntPigTuv[i]);
    }
}

void hyLoadPigName()
{
    int i;
    char* buf;

    buf = (char*)FIO_ReadFile_Align(namePigData[0], 0x40);

    for (i = 0; i < 4; i++)
    {
        gsNAME_Idtex[i] = hyEntryTexture((int)(buf + namePigAddr[i] * 4), 1, namePigTuv[i]);
    }
}

INCLUDE_RODATA("asm/nonmatchings/hoya/hoya", D_0066A338);

INCLUDE_RODATA("asm/nonmatchings/hoya/hoya", D_0066A360);

INCLUDE_RODATA("asm/nonmatchings/hoya/hoya", D_0066A388);

INCLUDE_RODATA("asm/nonmatchings/hoya/hoya", D_0066A3B0);

INCLUDE_RODATA("asm/nonmatchings/hoya/hoya", D_0066A3D8);

INCLUDE_RODATA("asm/nonmatchings/hoya/hoya", D_0066A400);

INCLUDE_RODATA("asm/nonmatchings/hoya/hoya", D_0066A428);

INCLUDE_RODATA("asm/nonmatchings/hoya/hoya", D_0066A450);

void hyLoadPigFont()
{
    gsFONT_IdtexNo1 = TEST_EntryTexture(FIO_ReadFile_Align("cdrom0:\\DATA\\FONT\\FNT_BIN.BIN;1", 0x40), 1);
}

char* hyLoadPigFont2(int a)
{
    int sz = FIO_GetFileSize("cdrom0:\\DATA\\FONT\\FNT_BIN.BIN;1");
    char* p = FIO_ReadFile("cdrom0:\\DATA\\FONT\\FNT_BIN.BIN;1", a);

    gsFONT_IdtexNo1 = TEST_EntryTexture(p, 1);
    return p + (sz + 3) / 4 * 4;
}

void hyLoadPigMemory()
{
    int i;
    char* buf;

    buf = (char*)FIO_ReadFile_Align(memcPigData[0], 0x40);

    for (i = 0; i < 4; i++)
    {
        gsMEMC_Idtex[i] = TEST_EntryTexture((unsigned int*)(buf + memcPigAddr[i] * 4), 1);
    }
}

void hyLoadPigStartgs3()
{
    int i;
    char* buf;

    buf = (char*)FIO_ReadFile_Align(stgsPigData[0], 0x40);

    for (i = 0; i < 3; i++)
    {
        gsSTGS_Idtex[i] = TEST_EntryTexture((unsigned int*)(buf + stgsPigAddr[i] * 4), 1);
    }
}

INCLUDE_RODATA("asm/nonmatchings/hoya/hoya", D_0066A498);

INCLUDE_RODATA("asm/nonmatchings/hoya/hoya", D_0066A4C0);

void hyLoadIcon()
{
    FIO_ReadFile_Align("cdrom0:\\DATA\\ICON\\ICON_BIN.BIN;1", 0x40);
}

INCLUDE_ASM("asm/nonmatchings/hoya/hoya", KeyStateUpdate);

int getkeyPush(int p)
{
    int a = gsPad_GetRTrg(p);
    int b = gsPad_AGetRTrg(p);

    return a | b;
}

int getkeyPress(int p)
{
    int a = gsPad_GetTrg(p);
    int b = gsPad_AGetTrg(p);

    return a | b;
}

int getkeyRelease()
{
    return 0;
}

int getkeyState(int p)
{
    int a = gsPad_Get(p);
    int b = gsPad_AGet(p);

    return a | b;
}

INCLUDE_ASM("asm/nonmatchings/hoya/hoya", GunStateUpdate);

int getGunPush()
{
    if (gsGuncon2_CheckConnect())
    {
        return gsGuncon2_GetRTrg();
    }

    return 0;
}

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

int getGunState()
{
    if (gsGuncon2_CheckConnect())
    {
        return gsGuncon2_Get();
    }

    return 0;
}

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

int hyCheckReed(int a)
{
    return a < 0 ? -1 : 10;
}

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

void hySwitchFadeTimer(int a, int* p)
{
    if (a)
    {
        *p |= 4;
    }
    else
    {
        *p &= ~4;
    }
}

int hyCheckFadeFinishFlag(void* a)
{
    return (((STRUCT_OFFSET(a, 0x0, int) >> 1) ^ 0x1) & 0x1);
}

INCLUDE_ASM("asm/nonmatchings/hoya/hoya", ClipLine2D);

int hyWait(int a)
{
    return (a - (0 < a));
}

int hyGetTimeSync(int a, int b)
{
    if (b == 0)
    {
        a = a % 60;
    }

    return a;
}

int hyGetTimeSecond(int t, int b)
{
    t = t / 60;

    if (b == 0)
    {
        t = t % 60;
    }

    return t;
}

int hyGetTimeMinute(int t, int b)
{
    t = t / 3600;

    if (b == 0)
    {
        t = t % 60;
    }

    return t;
}

int hyGetTimeHour(int t, int b)
{
    t = t / 216000;

    if (b == 0)
    {
        t = t % 60;
    }

    return t;
}

int hyConvTimePercentage(int t)
{
    return t * 100 / 60;
}

int hyGetTimeSyncPercentage(int a, int b)
{
    if (b == 0)
    {
        a = a % 100;
    }

    return a;
}

int hyGetTimeSecondPercentage(int t, int b)
{
    t = t / 100;

    if (b == 0)
    {
        t = t % 60;
    }

    return t;
}

int hyGetTimeMinutePercentage(int t, int b)
{
    t = t / 6000;

    if (b == 0)
    {
        t = t % 60;
    }

    return t;
}

int hyGetTimeHourPercentage(int t, int b)
{
    t = t / 360000;

    if (b == 0)
    {
        t = t % 60;
    }

    return t;
}
INCLUDE_RODATA("asm/nonmatchings/hoya/hoya", D_0066A510);

