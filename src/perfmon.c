#include "common.h"

extern int pfm_timerno;
extern u_int pfm_mtime;
extern int pfm_offset;
extern u_int TIMER_GetTimer();
INCLUDE_ASM("asm/nonmatchings/perfmon", pfm_barx);

INCLUDE_ASM("asm/nonmatchings/perfmon", pfm_draw_num);

int pfm_draw(int a)
{
    return a;
}

int pfm_gettimer()
{
    u_int t = TIMER_GetTimer(pfm_timerno);

    if (t < pfm_mtime)
    {
        pfm_offset += 0x10000;
    }
    pfm_mtime = t;
    return t + pfm_offset;
}

INCLUDE_ASM("asm/nonmatchings/perfmon", pfm_dmastart);

INCLUDE_ASM("asm/nonmatchings/perfmon", pfm_dma1int);

INCLUDE_ASM("asm/nonmatchings/perfmon", pfm_vbint);

void pfm_init(void) {
}

void pfm_end(void) {
}

void pfm_start(void) {
}

int pfm_set()
{
    return 0;
}
