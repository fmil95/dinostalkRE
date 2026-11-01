#include "common.h"

INCLUDE_ASM("asm/nonmatchings/sound/mainmpeg", cdvMpegInit);

INCLUDE_ASM("asm/nonmatchings/sound/mainmpeg", PortSlotCheck);

INCLUDE_ASM("asm/nonmatchings/sound/mainmpeg", cdvMpegSkipSet);

INCLUDE_ASM("asm/nonmatchings/sound/mainmpeg", cdvMpegSkipSetAll);

INCLUDE_ASM("asm/nonmatchings/sound/mainmpeg", cdvMpegSkipReset);

INCLUDE_ASM("asm/nonmatchings/sound/mainmpeg", cdvMpegSkipResetAll);

INCLUDE_ASM("asm/nonmatchings/sound/mainmpeg", cdvMpegPadUseSet);

INCLUDE_ASM("asm/nonmatchings/sound/mainmpeg", cdvMpegRestoreSet);

INCLUDE_ASM("asm/nonmatchings/sound/mainmpeg", cdvMpegSoundSet);

INCLUDE_ASM("asm/nonmatchings/sound/mainmpeg", cdvMpegSoundSMSet);

INCLUDE_ASM("asm/nonmatchings/sound/mainmpeg", cdvMpegGetFrameCount);

INCLUDE_ASM("asm/nonmatchings/sound/mainmpeg", cdvMpegPlayEnd);

INCLUDE_ASM("asm/nonmatchings/sound/mainmpeg", PlayMpeg);

INCLUDE_ASM("asm/nonmatchings/sound/mainmpeg", readMpeg);

INCLUDE_ASM("asm/nonmatchings/sound/mainmpeg", isAudioOK);

INCLUDE_ASM("asm/nonmatchings/sound/mainmpeg", initAll);

INCLUDE_ASM("asm/nonmatchings/sound/mainmpeg", termAll);

INCLUDE_ASM("asm/nonmatchings/sound/mainmpeg", defMain);

INCLUDE_ASM("asm/nonmatchings/sound/mainmpeg", ResetMpeg);

INCLUDE_ASM("asm/nonmatchings/sound/mainmpeg", strFileOpen);

INCLUDE_ASM("asm/nonmatchings/sound/mainmpeg", strFileClose);

INCLUDE_ASM("asm/nonmatchings/sound/mainmpeg", strFileRead);

INCLUDE_ASM("asm/nonmatchings/sound/mainmpeg", proceedAudio);

INCLUDE_ASM("asm/nonmatchings/sound/mainmpeg", videoCallback);

INCLUDE_ASM("asm/nonmatchings/sound/mainmpeg", pcmCallback);

INCLUDE_ASM("asm/nonmatchings/sound/mainmpeg", copy2area);

INCLUDE_ASM("asm/nonmatchings/sound/mainmpeg", readBufCreate);

INCLUDE_ASM("asm/nonmatchings/sound/mainmpeg", readBufDelete);

INCLUDE_ASM("asm/nonmatchings/sound/mainmpeg", readBufBeginPut);

INCLUDE_ASM("asm/nonmatchings/sound/mainmpeg", readBufEndPut);

INCLUDE_ASM("asm/nonmatchings/sound/mainmpeg", readBufBeginGet);

INCLUDE_ASM("asm/nonmatchings/sound/mainmpeg", readBufEndGet);

INCLUDE_ASM("asm/nonmatchings/sound/mainmpeg", cdvMpegUserProgSet);

INCLUDE_ASM("asm/nonmatchings/sound/mainmpeg", cdvMpegUserProgDelete);

INCLUDE_ASM("asm/nonmatchings/sound/mainmpeg", cdvMpegSendModeSet);

INCLUDE_ASM("asm/nonmatchings/sound/mainmpeg", UserThread);
