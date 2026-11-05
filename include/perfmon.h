// STATUS: NOT STARTED

#ifndef PERFMON_H
#define PERFMON_H

pfm_barx();
pfm_draw_num();
int pfm_draw(int a);
int pfm_gettimer();
pfm_dmastart();
pfm_dma1int();
int pfm_vbint(int ch);
void pfm_init();
void pfm_end();
void pfm_start(void);
int pfm_set();
#endif // PERFMON_H
