#include "common.h"

extern u_char gsClearRGBA[];
void InitOpening()
{
    gsClearRGBA[0] = 0xff;
    gsClearRGBA[1] = 0xff;
    gsClearRGBA[2] = 0xff;
    gsClearRGBA[3] = 0x80;
}

INCLUDE_ASM("asm/nonmatchings/hoya/title/ttlsub02", MainOpening);

void EndOpening(void) {
}
