#include "common.h"

extern void gsSoundEeSE_PLAY2();
extern int SeSetBgmVol();
extern int SeSetMasterVol();
extern int SeSoundOff();
extern int SeMain();
extern int SeStopVoice();
extern int _g_sound_vab_tbl;
extern int SeVabOpen();
extern int gsVRMode;
extern void SeCSLMidiXFade();
extern void SeCSLMidiStop();
extern int gsSoundBgmNo;
extern void SeCSLMidiPlay();

extern int* _g_sound_ch_buf[];
extern void SeSetPitch();
extern void SeSetVolume();
extern int get_SE_MAX();
extern void Se();
extern void SeStop();
extern void _gsSoundEE_DeleteChBuf();
extern int _g_sound_bgm_cnt;
extern int _g_sound_bgm_tbl[];
extern int SeCSLBankOpen();
extern int SeCSLSqOpen();
extern int SeReadNow();
extern void sceGsSyncV();
extern int gsSoundComWait();
extern int SeIopStatus();
extern int SeComNow();
typedef struct { int w[6]; } SeEntS;
extern SeEntS D_0064B56C[];
extern int gsSoundStopVoice();
extern int* _g_sound_ch[];
INCLUDE_ASM("asm/nonmatchings/sound/g_sound", gsSoundInitModule);

INCLUDE_ASM("asm/nonmatchings/sound/g_sound", gsSoundInitAll);

int gsSoundReadSe(int a)
{
    _g_sound_vab_tbl = a;
    SeVabOpen(a);
    return 0;
}

INCLUDE_ASM("asm/nonmatchings/sound/g_sound", gsSoundReadBgm);

INCLUDE_ASM("asm/nonmatchings/sound/g_sound", gsSoundReadWait);

INCLUDE_ASM("asm/nonmatchings/sound/g_sound", gsSoundComWait);

int gsSoundReset()
{
    return 0;
}

int gsSoundSeMePlay(int a)
{
    if (a >= 0 && a < get_SE_MAX())
    {
        Se(a);
    }

    return 0;
}

INCLUDE_ASM("asm/nonmatchings/sound/g_sound", gsSoundSeMePlayDir);

INCLUDE_ASM("asm/nonmatchings/sound/g_sound", gsSoundSeMePlay3D);

int gsSoundSeMeStop(int a)
{
    if (a >= 0 && a < get_SE_MAX())
    {
        SeStop(a);
    }

    return 0;
}

INCLUDE_ASM("asm/nonmatchings/sound/g_sound", gsSoundSeMeStop2);

int gsSoundStopVoice()
{
    SeStopVoice();
    return 0;
}

int gsSoundBgmPlay(int a)
{
    if (gsVRMode == 0)
    {
        gsSoundBgmNo = a;
        SeCSLMidiPlay(a);
    }

    return 0;
}

int gsSoundBgmReplay()
{
    if (gsVRMode == 0 && gsSoundBgmNo >= 0)
    {
        SeCSLMidiPlay(gsSoundBgmNo);
    }

    return 0;
}

int gsSoundBgmStop()
{
    if (gsVRMode == 0)
    {
        SeCSLMidiStop();
    }

    return 0;
}

int gsSoundBgmCrossFade()
{
    if (gsVRMode == 0)
    {
        SeCSLMidiXFade();
    }

    return 0;
}

INCLUDE_ASM("asm/nonmatchings/sound/g_sound", gsSoundClose);

int gsSoundSetEffect()
{
    return 0;
}

int gsSoundGetEffect()
{
    return 0;
}

int gsSoundSeMain()
{
    SeMain();
    return 0;
}

int gsSoundMasterVol()
{
    SeSetMasterVol();
    return 0;
}

int gsSoundBgmVol()
{
    SeSetBgmVol();
    return 0;
}

INCLUDE_ASM("asm/nonmatchings/sound/g_sound", gsSoundReboot);

int gsSoundOff()
{
    SeSoundOff();
    return 0;
}

INCLUDE_ASM("asm/nonmatchings/sound/g_sound", _gsSoundEE_LoadFreePort);

void _gsSoundEE_EntryChBuf(int a, int* b)
{
    int i = a - 12;

    if (i >= 0)
    {
        int* old = _g_sound_ch_buf[i];

        if (old)
        {
            *old = -1;
        }

        _g_sound_ch_buf[i] = b;
    }

    if (b)
    {
        *b = a;
    }
}

INCLUDE_ASM("asm/nonmatchings/sound/g_sound", _gsSoundEE_DeleteChBuf);

INCLUDE_ASM("asm/nonmatchings/sound/g_sound", _gsSound3D_GetPos);

INCLUDE_ASM("asm/nonmatchings/sound/g_sound", gsSoundPlaySE_WORLD);

INCLUDE_ASM("asm/nonmatchings/sound/g_sound", gsSoundEeSE_ALL_CLEAR);

void gsSoundEeSE_ALL_SLEEP()
{
    int i;

    for (i = 0; i < 4; i++)
    {
        SeSetVolume(0, 0, i + 12);
        if (_g_sound_ch_buf[i])
        {
            *_g_sound_ch_buf[i] = -1;
        }
    }
}

void gsSoundEeSE_ALL_WAKE()
{
    int i;

    for (i = 0; i < 4; i++)
    {
        if (_g_sound_ch_buf[i])
        {
            *_g_sound_ch_buf[i] = i + 12;
        }
    }
}

void gsSoundEeSE_PLAY(int a, int b)
{
    gsSoundEeSE_PLAY2(a, b, -128);
}

INCLUDE_ASM("asm/nonmatchings/sound/g_sound", gsSoundEeSE_PLAY2);

INCLUDE_ASM("asm/nonmatchings/sound/g_sound", gsSoundEeSE_PLAY_WORLD);

int gsSoundEeSE_STOP(int* a)
{
    if (a && *a >= 0)
    {
        SeSetVolume(0, 0, *a);
        SeStopVoice(*a);
        _gsSoundEE_DeleteChBuf(a);
    }
    return 0;
}

int gsSoundEeSE_VOLUME(int* a, int b, int c)
{
    if (a && *a >= 0)
    {
        SeSetVolume((u_short)b, (u_short)c, *a);
    }

    return 0;
}

int gsSoundEeSE_PITCH(int* a, int b)
{
    if (a && *a >= 0)
    {
        SeSetPitch(b, *a);
    }

    return 0;
}

INCLUDE_ASM("asm/nonmatchings/sound/g_sound", gsSoundEeSE_VOLUME_WORLD);
