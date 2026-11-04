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

INCLUDE_ASM("asm/nonmatchings/sound/g_sound", gsSoundSeMePlay);

INCLUDE_ASM("asm/nonmatchings/sound/g_sound", gsSoundSeMePlayDir);

INCLUDE_ASM("asm/nonmatchings/sound/g_sound", gsSoundSeMePlay3D);

INCLUDE_ASM("asm/nonmatchings/sound/g_sound", gsSoundSeMeStop);

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

INCLUDE_ASM("asm/nonmatchings/sound/g_sound", gsSoundEeSE_ALL_SLEEP);

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

INCLUDE_ASM("asm/nonmatchings/sound/g_sound", gsSoundEeSE_STOP);

INCLUDE_ASM("asm/nonmatchings/sound/g_sound", gsSoundEeSE_VOLUME);

int gsSoundEeSE_PITCH(int* a, int b)
{
    if (a && *a >= 0)
    {
        SeSetPitch(b, *a);
    }

    return 0;
}

INCLUDE_ASM("asm/nonmatchings/sound/g_sound", gsSoundEeSE_VOLUME_WORLD);
