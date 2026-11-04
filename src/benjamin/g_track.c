#include "common.h"
#include "benjamin/g_track.h"

extern char gMicroTrack[];
extern char gTrackMS[];
extern void gsTrackInit();
extern void GFMicro_MakePacket();

void gsTrackMicroInit(int a, int b, int c)
{
    gsTrackInit(a, b, c);
    GFMicro_MakePacket(gMicroTrack, b, gTrackMS, c);
}

INCLUDE_ASM("asm/nonmatchings/benjamin/g_track", gsTrackInit);

INCLUDE_ASM("asm/nonmatchings/benjamin/g_track", gsTrackInitOne);

INCLUDE_ASM("asm/nonmatchings/benjamin/g_track", gsTrackProc);

INCLUDE_ASM("asm/nonmatchings/benjamin/g_track", gsTrackTailPos);

INCLUDE_ASM("asm/nonmatchings/benjamin/g_track", gsTrackStart);
