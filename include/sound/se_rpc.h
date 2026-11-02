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

typedef struct sceSifClientData
{
    /* 0x00 */ unsigned int rpcd[4];
    /* 0x10 */ unsigned int command;
    /* 0x14 */ void*        buff;
    /* 0x18 */ void*        cbuff;
    /* 0x1C */ void*        func;
    /* 0x20 */ void*        para;
    /* 0x24 */ void*        serve;
} sceSifClientData;
 
typedef struct SE_STATUS
{
    char _pad0[0x40];
    int  unk40;
    char _pad44[0x24];
} SE_STATUS;
 
typedef struct TJOB_ST
{
    char _pad0[0x8];
    int  unk8;
    char _padC[0xC];
} TJOB_ST;

int get_SE_MAX();
int get_BGM_MAX();
int get_STRM_MAX();
int get_BGM_VAB_MAX();
int get_SE_VAB_MAX();
void SeSpu2AllocInit(int prm0);
static void SeAllocInit();
SeComNow();
int SeIopLoadStatus();
void SeSetDiscMode();
int ezSeInit();
int SeRpcCom(int prm0, int prm1, int prm2);
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

extern int spu2_alloc_dat[][8];
extern VAB_ALC VabAlc[];
extern ME_ALC MeAlc[];
extern BGM_ALC BgmAlc[];
extern int CurSpu2Alloc;
extern sceSifClientData SegCd;
extern SE_STATUS SeStatus;
extern TJOB_ST TJobSt;
extern volatile int sbuff_0084be40[];

int sceSifBindRpc(); // TODO: remove this when linking SDK libs
int sceSifCallRpc();
void* memcpy(void*, const void*, unsigned int);

#endif // SOUND_SE_RPC_H
