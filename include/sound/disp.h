// STATUS: NOT STARTED

#ifndef SOUND_DISP_H
#define SOUND_DISP_H

#include "common.h"
#include <eestruct.h>

typedef struct { // 0x10
	/* 0x0 */ int x;
	/* 0x4 */ int y;
	/* 0x8 */ int w;
	/* 0xc */ int h;
} Rect;

typedef struct {
	/* 0x00 */ int fbp0;
	/* 0x04 */ int fbp1;
	/* 0x08 */ int fb_w;
} Display;

u_int *setTexRect(u_int *p, Rect *poly, Rect *tex);
u_int *setFlatRect(u_int *p, Rect *rect, u_int val);
void dispSwitch(Display *d, int id);
int cdvMpegChgCtxt(u_int ctxt);
void cdvMpegChgOffset(int ofx, int ofy);
u_int *setDMAscTag(u_int *p, u_int spr, void *addr, u_int irq, u_int id, u_int pce, u_int qwc);
u_int *setGIFtag(u_int *p, u_long regs, u_int nreg, u_int flg, u_int prim, u_int pre, u_int eop, u_int nloop);
u_int *setGIFad(u_int *p, u_int reg, u_long value);
u_int *setTEXFLUSH(u_int *p);
u_int *setTEX1_1(u_int *p, u_int lcm, u_int mxl, u_int mmag, u_int mmin, u_int mtba, u_int l, u_int k);
u_int *setTEX1_2(u_int *p, u_int lcm, u_int mxl, u_int mmag, u_int mmin, u_int mtba, u_int l, u_int k);
u_int *setTEX0_1(u_int *p, u_int tbp, u_int tbw, u_int psm, u_int tw, u_int th, u_int tcc, u_int tfx, u_int cbp, u_int cpsm, u_int csm, u_int csa, u_int cld);
u_int *setTEX0_2(u_int *p, u_int tbp, u_int tbw, u_int psm, u_int tw, u_int th, u_int tcc, u_int tfx, u_int cbp, u_int cpsm, u_int csm, u_int csa, u_int cld);
u_int *setPRIM(u_int *p, u_int prim, u_int iip, u_int tme, u_int fge, u_int abe, u_int aa1, u_int fst, u_int ctxt, u_int fix);
u_int *setUV(u_int *p, u_int u, u_int v);
u_int *setRGBAQ(u_int *p, u_int r, u_int g, u_int b, u_int a, u_int q);
u_int *setXYZ2(u_int *p, u_int x, u_int y, u_int z);
u_int *setFRAME_1(u_int *p, u_int fbp, u_int fbw, u_int psm, u_int fbmask);
u_int *setFRAME_2(u_int *p, u_int fbp, u_int fbw, u_int psm, u_int fbmask);
u_int *setTEST_1(u_int *p, u_int ate, u_int atst, u_int aref, u_int afail, u_int date, u_int datm, u_int zte, u_int ztst);
u_int *setTEST_2(u_int *p, u_int ate, u_int atst, u_int aref, u_int afail, u_int date, u_int datm, u_int zte, u_int ztst);
u_int *setSCISSOR_1(u_int *p, u_int scax0, u_int scax1, u_int scay0, u_int scay1);
u_int *setSCISSOR_2(u_int *p, u_int scax0, u_int scax1, u_int scay0, u_int scay1);
u_int *setXYOFFSET_1(u_int *p, u_int ofx, u_int ofy);
u_int *setXYOFFSET_2(u_int *p, u_int ofx, u_int ofy);
u_int *setPRMODECONT(u_int *p, u_int ac);
u_int *setCLAMP_1(u_int *p, u_int wms, u_int wmt, u_int minu, u_int maxu, u_int minv, u_int maxv);
u_int *setCLAMP_2(u_int *p, u_int wms, u_int wmt, u_int minu, u_int maxu, u_int minv, u_int maxv);
u_int *setBITBLTBUF(u_int *p, u_int sbp, u_int sbw, u_int spsm, u_int dbp, u_int dbw, u_int dpsm);
u_int *setTRXPOS(u_int *p, u_int ssax, u_int ssay, u_int dsax, u_int dsay, u_int dir);
u_int *setTRXREG(u_int *p, u_int rrw, u_int rrh);
u_int *setTRXDIR(u_int *p, u_int xdir);

/*

void initDisplay();
dispCreate();
void dispDelete();
texsave();
texload();
dispSetTags();
dispClear();
void loadImage(u_int* tags);
int vblankHandler(int val);
int handler_endimage(int val);
startDisplay();
void endDisplay();
void SetUserData(int* a, int* b, int* c, int* d);
*/

#endif // SOUND_DISP_H
