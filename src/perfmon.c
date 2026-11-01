#include "common.h"

INCLUDE_ASM("asm/nonmatchings/perfmon", pfm_barx);

INCLUDE_ASM("asm/nonmatchings/perfmon", pfm_draw_num);

INCLUDE_ASM("asm/nonmatchings/perfmon", pfm_draw);

INCLUDE_ASM("asm/nonmatchings/perfmon", pfm_gettimer);

INCLUDE_ASM("asm/nonmatchings/perfmon", pfm_dmastart);

INCLUDE_ASM("asm/nonmatchings/perfmon", pfm_dma1int);

INCLUDE_ASM("asm/nonmatchings/perfmon", pfm_vbint);

void pfm_init(void) {
}

void pfm_end(void) {
}

void pfm_start(void) {
}

INCLUDE_ASM("asm/nonmatchings/perfmon", pfm_set);
