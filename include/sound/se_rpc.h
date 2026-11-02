// STATUS: NOT STARTED

#ifndef SOUND_SE_RPC_H
#define SOUND_SE_RPC_H

#include "common.h"

typedef struct VAB_ALC
{
    int unk0;
    int unk4;
    int unk8;
    int unkC;
} VAB_ALC;

typedef struct BGM_ALC
{
    int unk0;
    int unk4;
    int unk8;
    int unkC;
    int unk10;
    int unk14;
    int unk18;
} BGM_ALC;

typedef struct ME_ALC
{
    int unk0;
    int unk4;
    int unk8;
    int unkC;
    int unk10;
} ME_ALC;

extern int spu2_alloc_dat[][8];
extern VAB_ALC VabAlc[];
extern ME_ALC MeAlc[];
extern BGM_ALC BgmAlc[];
extern int CurSpu2Alloc;

int get_SE_MAX();
int get_BGM_MAX();
int get_STRM_MAX();
int get_BGM_VAB_MAX();
int get_SE_VAB_MAX();
void SeSpu2AllocInit(int prm0);
static void SeAllocInit();
SeComNow();
SeIopLoadStatus();
void SeSetDiscMode();
ezSeInit();
SeRpcCom();
ezSeL();
ezSe();
SeTest();
SeReadNow();
IOPDevReadNow();
IOPReadNow();
SeTransNow();
SeReqQueInc();
SeReqQueDec();
SeJobQueInc();
SeTjobStart();
SeTjobTrans();
SeTjobTransStatus();
SeTjobRead();
SeTjobOpen();
SeTjobLoad();
SeTjobLoadStatus();
SeTjobEnd();
SeTjobError();
SeTransMain();
SeMain();
SeIopStatus();
SeGetPort();
SeGetVhName();
SeSoundOff();
SeSePortOff();
SeMidiPortOff();
SeStrmOff();
SeSpuPortOff();
SeSetMasterVol();
SeSetSeVol();
SeSetBgmVol();
SeSetStrmVol();
SeSetOutType();
SePortInit();
SeSoundAllClose();
SeInitHot();
SeInit();
SeSpu2Init();
SeSetEffect();
SeSetEffectDepth();
Se();
SeStopSe();
SeStop();
SeStopVoice();
SeGetVbBlockSize();
SeVabOpenEE();
SeVabOpenBEE();
SeVabOpen();
SeVabOpenB();
SeVabOpenN();
SeVabClose();
SeVabCloseB();
Se3D();
SeDir();
SeDir2();
SeSetVolume();
SeSetPitch();
SeKeyon3D();
SeKeyonDir();
SeKeyonDir2();
SeKeyon();
SeCSLMidiPlaySt();
SeCSLMidiPortSt();
SeCSLMidiPlayNo();
SeCSLSetMidi();
SeCSLMidiVolume();
SeCSLMidiPlayPort();
SeCSLMidiSetLocation();
SeCSLMidiPlayBP();
SeCSLMidiPlayNP();
SeCSLMidiPlayNB();
SeCSLMidiPlay();
SeCSLMidiPlay2();
SeCSLMidiXFadeB();
SeCSLMidiXFade();
SeCSLMidiContinue();
SeCSLMidiPause();
SeCSLMidiStopP();
SeCSLMidiStop();
SeCSLBankOpenEE();
SeCSLBankOpenBEE();
SeCSLBankOpen();
SeCSLBankOpenB();
SeCSLBankOpenN();
SeCSLBankClose();
SeCSLBankCloseB();
SeCSLSqOpenEE();
SeCSLSqOpenBEE();
SeCSLSqOpen();
SeCSLSqOpenB();
SeCSLSqOpenN();
SeCSLSqCloseB();
SeCSLSqClose();
SeStrmRevOn();
SeStrmRevOff();
SeStrmPlaySt();
SeStrmPortSt();
SeStrmPlayNo();
SeStrmInit();
SeStrmOpenWithSetParam();
SeStrmOpenTBL();
SeStrmPlay();
SeStrmStop();
SeStrmQuit();
SeMePlay();
SeMePlayB();
SeMeStop();
SeMeStopB();
SeMeOpenN();
SeMeOpenB();
SeMeOpen();
SeMeOpenEE();
SeMeClose();
SeMeCloseB();

#endif // SOUND_SE_RPC_H
