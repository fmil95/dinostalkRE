#include "common.h"

int get_SE_MAX() 
{
    return 1000;
}

int get_BGM_MAX() 
{
    return 16;
}

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", get_STRM_MAX);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", get_BGM_VAB_MAX);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", get_SE_VAB_MAX);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeSpu2AllocInit);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeAllocInit);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeComNow);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeIopLoadStatus);

void SeSetDiscMode(void) {
}

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", ezSeInit);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeRpcCom);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", ezSeL);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", ezSe);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeTest);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeReadNow);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", IOPDevReadNow);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", IOPReadNow);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeTransNow);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeReqQueInc);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeReqQueDec);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeJobQueInc);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeTjobStart);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeTjobTrans);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeTjobTransStatus);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeTjobRead);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeTjobOpen);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeTjobLoad);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeTjobLoadStatus);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeTjobEnd);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeTjobError);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeTransMain);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeMain);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeIopStatus);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeGetPort);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeGetVhName);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeSoundOff);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeSePortOff);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeMidiPortOff);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeStrmOff);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeSpuPortOff);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeSetMasterVol);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeSetSeVol);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeSetBgmVol);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeSetStrmVol);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeSetOutType);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SePortInit);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeSoundAllClose);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeInitHot);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeInit);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeSpu2Init);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeSetEffect);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeSetEffectDepth);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", Se);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeStopSe);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeStop);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeStopVoice);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeDataOpen);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeGetVbBlockSize);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeBankOpenTransfer);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeVabOpenEE);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeVabOpenBEE);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeVabOpen);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeVabOpenB);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeVabOpenN);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeVabClose);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeVabCloseB);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", Se3D);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeDir);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeDir2);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeSetVolume);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeSetPitch);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeKeyon3D);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeKeyonDir);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeKeyonDir2);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeKeyon);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeCSLMidiPlaySt);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeCSLMidiPortSt);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeCSLMidiPlayNo);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeCSLSetMidi);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeCSLMidiVolume);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeCSLMidiPlayPort);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeCSLMidiSetLocation);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeCSLMidiPlayBP);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeCSLMidiPlayNP);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeCSLMidiPlayNB);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeCSLMidiPlay);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeCSLMidiPlay2);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeCSLMidiXFadeB);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeCSLMidiXFade);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeCSLMidiContinue);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeCSLMidiPause);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeCSLMidiStopP);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeCSLMidiStop);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeCSLBankOpenEE);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeCSLBankOpenBEE);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeCSLBankOpen);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeCSLBankOpenB);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeCSLBankOpenN);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeCSLBankClose);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeCSLBankCloseB);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeCSLSqOpenEE);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeCSLSqOpenBEE);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeCSLSqOpen);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeCSLSqOpenB);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeCSLSqOpenN);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeCSLSqCloseB);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeCSLSqClose);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeStrmRevOn);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeStrmRevOff);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeStrmPlaySt);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeStrmPortSt);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeStrmPlayNo);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeStrmInit);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeStrmOpenWithSetParam);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeStrmOpenTBL);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeStrmPlay);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeStrmStop);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeStrmQuit);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeMePlay);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeMePlayB);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeMeStop);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeMeStopB);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeMeOpenN);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeMeOpenB);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeMeOpen);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeMeOpenEE);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeMeClose);

INCLUDE_ASM("asm/nonmatchings/sound/se_rpc", SeMeCloseB);
