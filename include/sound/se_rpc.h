// STATUS: NOT STARTED

#ifndef SOUND_SE_RPC_H
#define SOUND_SE_RPC_H

#include "common.h"
#include <sifrpc.h>

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

 
typedef struct SE_STATUS
{
    char unk0[48];
    int  unk30[2];
    int  unk38[2];
    int  unk40;
    char _pad44[8];
    int  unk4C;
    char _pad50[24];
} SE_STATUS;
 
typedef struct TJOB_ST
{
    int  unk0;
    int  unk4;
    int  unk8;
    char _padC[12];
} TJOB_ST;

int get_SE_MAX();
int get_BGM_MAX();
int get_STRM_MAX();
int get_BGM_VAB_MAX();
int get_SE_VAB_MAX();
void SeSpu2AllocInit(int prm0);
static void SeAllocInit();
int SeComNow();
int SeIopLoadStatus();
void SeSetDiscMode();
int ezSeInit();
int SeRpcCom(int prm0, int prm1, int prm2);
int ezSeL();
int ezSe();
void* SeTest(int prm0);
int SeReadNow();
int IOPDevReadNow();
int IOPReadNow();
int SeTransNow();
void SeReqQueInc();
void SeReqQueDec();
int SeJobQueInc();
int SeTjobStart();
int SeTjobTrans();
int SeTjobTransStatus();
int SeTjobRead();
int SeTjobOpen();
int SeTjobLoad();
int SeTjobLoadStatus();
int SeTjobEnd();
int SeTjobError();
int SeTransMain();
int SeMain();
int SeIopStatus();
int SeGetPort();
int SeGetVhName();
int SeSoundOff();
int SeSePortOff();
int SeMidiPortOff();
int SeStrmOff();
int SeSpuPortOff();
int SeSetMasterVol();
int SeSetSeVol();
int SeSetBgmVol();
int SeSetStrmVol();
int SeSetOutType();
int SePortInit();
int SeSoundAllClose();
void SeInitHot();
int SeInit();
void SeSpu2Init();
int SeSetEffect();
int SeSetEffectDepth();
int Se();
int SeStopSe();
int SeStop();
int SeStopVoice();
int SeGetVbBlockSize();
int SeVabOpenEE(int a, int b, int c, int d, int e);
int SeVabOpenBEE();
int SeVabOpen(int a);
int SeVabOpenB();
int SeVabOpenN(int a, int b, int c);
void SeVabClose();
void SeVabCloseB();
int Se3D();
int SeDir();
int SeDir2();
int SeSetVolume();
int SeSetPitch();
int SeKeyon3D();
int SeKeyonDir();
int SeKeyonDir2();
int SeKeyon();
int SeCSLMidiPlaySt();
int SeCSLMidiPortSt();
int SeCSLMidiPlayNo();
int SeCSLSetMidi();
int SeCSLMidiVolume();
int SeCSLMidiPlayPort();
int SeCSLMidiSetLocation();
int SeCSLMidiPlayBP();
int SeCSLMidiPlayNP();
int SeCSLMidiPlayNB();
int SeCSLMidiPlay();
int SeCSLMidiPlay2();
int SeCSLMidiXFadeB();
int SeCSLMidiXFade();
int SeCSLMidiContinue();
int SeCSLMidiPause();
int SeCSLMidiStopP();
int SeCSLMidiStop();
int SeCSLBankOpenEE(int a, int b, int c, int d, int e);
int SeCSLBankOpenBEE();
int SeCSLBankOpen(int a);
int SeCSLBankOpenB();
int SeCSLBankOpenN();
int SeCSLBankClose();
int SeCSLBankCloseB();
int SeCSLSqOpenEE();
int SeCSLSqOpenBEE();
int SeCSLSqOpen();
int SeCSLSqOpenB();
int SeCSLSqOpenN();
int SeCSLSqCloseB();
int SeCSLSqClose();
int SeStrmRevOn();
int SeStrmRevOff();
int SeStrmPlaySt();
int SeStrmPortSt();
int SeStrmPlayNo();
int SeStrmInit();
int SeStrmOpenWithSetParam();
int SeStrmOpenTBL();
int SeStrmPlay();
int SeStrmStop();
int SeStrmQuit();
int SeMePlay();
int SeMePlayB();
int SeMeStop();
int SeMeStopB();
int SeMeOpenN();
int SeMeOpenB();
int SeMeOpen();
int SeMeOpenEE();
int SeMeClose();
int SeMeCloseB();

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
