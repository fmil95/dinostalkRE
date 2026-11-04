#include "sound/disp.h"
extern int center_flg_h;
extern int center_flg_w;
extern int s_frm_ofy;
extern int s_frm_ofx;
extern int s_ctxt;

extern int isCountVblank;
extern int frd;

INCLUDE_ASM("asm/nonmatchings/sound/disp", initDisplay);

void cdvMpegChgOffset(int ofx, int ofy)
{
    if (ofx == 0xEFFF)
    {
        center_flg_w = 1;
    }
    else if (ofx != 0xFFFF)
    {
        s_frm_ofx = ofx;
        center_flg_w = 0;
    }

    if (ofy == 0xEFFF)
    {
        center_flg_h = 1;
    }
    else if (ofy != 0xFFFF)
    {
        s_frm_ofy = ofy;
        center_flg_h = 0;
    }
}

int cdvMpegChgCtxt(u_int ctxt)
{
    if (ctxt < 2)
    {
        s_ctxt = ctxt;

        return 0;
    }

    return 1;
}

INCLUDE_ASM("asm/nonmatchings/sound/disp", dispCreate);

void dispDelete(void) {
}

INCLUDE_ASM("asm/nonmatchings/sound/disp", texsave);

INCLUDE_ASM("asm/nonmatchings/sound/disp", texload);

INCLUDE_ASM("asm/nonmatchings/sound/disp", dispSetTags);

void dispSwitch(Display* d, int id)
{
    *(volatile u_long*)0x12000090 = ((u_long)d->fb_w << 9) | (id ? d->fbp1 : d->fbp0);
}

void dispClear(void) {
}

u_int* setTexRect(u_int* p, Rect* poly, Rect* tex)
{
    p = setPRIM(p, 6, 0, 1, 0, 0, 0, 1, s_ctxt, 0);
    p = setUV(p, tex->x, tex->y);
    p = setXYZ2(p, poly->x, poly->y, 0x3E8);

    p = setUV(p, tex->x + tex->w, tex->y + tex->h);
    p = setXYZ2(p, poly->x + poly->w, poly->y + poly->h, 0x3E8);

    return p;
}

u_int* setFlatRect(u_int* p, Rect* rect, u_int val)
{
    p = setPRIM(p, 6, 0, 0, 0, 0, 0, 1, s_ctxt, 0);
    p = setXYZ2(p, rect->x, rect->y, 0);

    p = setRGBAQ(p, val & 0xFF, (val >> 8) & 0xFF, (val >> 16) & 0xFF, (val >> 24) & 0xFF, 0);
    p = setXYZ2(p, rect->x + rect->w, rect->y + rect->h, 0);

    return p;
}

u_int* setDMAscTag(u_int* p, u_int spr, void* addr, u_int irq, u_int id, u_int pce, u_int qwc)
{
    u_long* val = (u_long*)p;

    *val = (u_long)spr << 63 | (u_long)((u_int)addr & 0xFFFFFFF0) << 32 | (u_long)irq << 31 | (u_long)id << 28 | (u_long)pce << 26 | (u_long)qwc << 0;

    return p + 4;
}

u_int* setGIFtag(u_int* p, u_long regs, u_int nreg, u_int flg, u_int prim, u_int pre, u_int eop, u_int nloop)
{
    p[0] = eop << 15 | nloop;
    p[1] = pre << (46 - 32) | prim << (47 - 32) | flg << (58 - 32) | nreg << (60 - 32);
    p[2] = regs & 0xFFFFFFFF;
    p[3] = regs >> 32;

    return p + 4;
}

u_int* setGIFad(u_int* p, u_int reg, u_long value)
{
    p[0] = value & 0xFFFFFFFF;
    p[1] = value >> 32;
    p[2] = reg;
    p[3] = 0x00;

    return p + 4;
}

u_int* setTEXFLUSH(u_int* p)
{
    return setGIFad(p, SCE_GS_TEXFLUSH, 0);
}

u_int* setTEX1_1(u_int* p, u_int lcm, u_int mxl, u_int mmag, u_int mmin, u_int mtba, u_int l, u_int k)
{
    u_long val = SCE_GS_SET_TEX1_1(lcm, mxl, mmag, mmin, mtba, l, k);

    return setGIFad(p, SCE_GS_TEX1_1, val);
}

u_int* setTEX1_2(u_int* p, u_int lcm, u_int mxl, u_int mmag, u_int mmin, u_int mtba, u_int l, u_int k)
{
    u_long val = SCE_GS_SET_TEX1_2(lcm, mxl, mmag, mmin, mtba, l, k);

    return setGIFad(p, SCE_GS_TEX1_2, val);
}

u_int* setTEX0_1(u_int* p, u_int tbp, u_int tbw, u_int psm, u_int tw, u_int th, u_int tcc, u_int tfx, u_int cbp, u_int cpsm, u_int csm, u_int csa, u_int cld)
{
    u_long val = SCE_GS_SET_TEX0_1(tbp, tbw, psm, tw, th, tcc, tfx, cbp, cpsm, csm, csa, cld);

    return setGIFad(p, SCE_GS_TEX0_1, val);
}

u_int* setTEX0_2(u_int* p, u_int tbp, u_int tbw, u_int psm, u_int tw, u_int th, u_int tcc, u_int tfx, u_int cbp, u_int cpsm, u_int csm, u_int csa, u_int cld)
{
    u_long val = SCE_GS_SET_TEX0_2(tbp, tbw, psm, tw, th, tcc, tfx, cbp, cpsm, csm, csa, cld);

    return setGIFad(p, SCE_GS_TEX0_2, val);
}

u_int* setPRIM(u_int* p, u_int prim, u_int iip, u_int tme, u_int fge, u_int abe, u_int aa1, u_int fst, u_int ctxt, u_int fix)
{
    u_long val = SCE_GS_SET_PRIM(prim, iip, tme, fge, abe, aa1, fst, ctxt, fix);

    return setGIFad(p, SCE_GS_PRIM, val);
}

u_int* setUV(u_int* p, u_int u, u_int v)
{
    u_long val = SCE_GS_SET_UV(u, v);

    return setGIFad(p, SCE_GS_UV, val);
}

u_int* setRGBAQ(u_int* p, u_int r, u_int g, u_int b, u_int a, u_int q)
{
    u_long val = SCE_GS_SET_RGBAQ(r, g, b, a, q);

    return setGIFad(p, SCE_GS_RGBAQ, val);
}

u_int* setXYZ2(u_int* p, u_int x, u_int y, u_int z)
{
    u_long val = SCE_GS_SET_XYZ2(x, y, z);

    return setGIFad(p, SCE_GS_XYZ2, val);
}

u_int* setFRAME_1(u_int* p, u_int fbp, u_int fbw, u_int psm, u_int fbmask)
{
    u_long val = SCE_GS_SET_FRAME_1(fbp, fbw, psm, fbmask);

    return setGIFad(p, SCE_GS_FRAME_1, val);
}

u_int* setFRAME_2(u_int* p, u_int fbp, u_int fbw, u_int psm, u_int fbmask)
{
    u_long val = SCE_GS_SET_FRAME_2(fbp, fbw, psm, fbmask);

    return setGIFad(p, SCE_GS_FRAME_2, val);
}

u_int* setTEST_1(u_int* p, u_int ate, u_int atst, u_int aref, u_int afail, u_int date, u_int datm, u_int zte, u_int ztst)
{
    u_long val = SCE_GS_SET_TEST_1(ate, atst, aref, afail, date, datm, zte, ztst);

    return setGIFad(p, SCE_GS_TEST_1, val);
}

u_int* setTEST_2(u_int* p, u_int ate, u_int atst, u_int aref, u_int afail, u_int date, u_int datm, u_int zte, u_int ztst)
{
    u_long val = SCE_GS_SET_TEST_2(ate, atst, aref, afail, date, datm, zte, ztst);

    return setGIFad(p, SCE_GS_TEST_2, val);
}

u_int* setSCISSOR_1(u_int* p, u_int scax0, u_int scax1, u_int scay0, u_int scay1)
{
    u_long val = SCE_GS_SET_SCISSOR_1(scax0, scax1, scay0, scay1);

    return setGIFad(p, SCE_GS_SCISSOR_1, val);
}

u_int* setSCISSOR_2(u_int* p, u_int scax0, u_int scax1, u_int scay0, u_int scay1)
{
    u_long val = SCE_GS_SET_SCISSOR_2(scax0, scax1, scay0, scay1);

    return setGIFad(p, SCE_GS_SCISSOR_2, val);
}

u_int* setXYOFFSET_1(u_int* p, u_int ofx, u_int ofy)
{
    u_long val = SCE_GS_SET_XYOFFSET_1(ofx, ofy);

    return setGIFad(p, SCE_GS_XYOFFSET_1, val);
}

u_int* setXYOFFSET_2(u_int* p, u_int ofx, u_int ofy)
{
    u_long val = SCE_GS_SET_XYOFFSET_2(ofx, ofy);

    return setGIFad(p, SCE_GS_XYOFFSET_2, val);
}

u_int* setPRMODECONT(u_int* p, u_int ac)
{
    u_long val = SCE_GS_SET_PRMODECONT(ac);

    return setGIFad(p, SCE_GS_PRMODECONT, val);
}

u_int* setCLAMP_1(u_int* p, u_int wms, u_int wmt, u_int minu, u_int maxu, u_int minv, u_int maxv)
{
    u_long val = SCE_GS_SET_CLAMP_1(wms, wmt, minu, maxu, minv, maxv);

    return setGIFad(p, SCE_GS_CLAMP_1, val);
}

u_int* setCLAMP_2(u_int* p, u_int wms, u_int wmt, u_int minu, u_int maxu, u_int minv, u_int maxv)
{
    u_long val = SCE_GS_SET_CLAMP_2(wms, wmt, minu, maxu, minv, maxv);

    return setGIFad(p, SCE_GS_CLAMP_2, val);
}

u_int* setBITBLTBUF(u_int* p, u_int sbp, u_int sbw, u_int spsm, u_int dbp, u_int dbw, u_int dpsm)
{
    u_long val = ((u_long)dpsm << 56) | ((u_long)dbw << 48) | ((u_long)dbp << 32) | ((u_long)spsm << 24) | ((u_long)sbw << 16) | (u_long)sbp;

    return setGIFad(p, SCE_GS_BITBLTBUF, val);
}

u_int* setTRXPOS(u_int* p, u_int ssax, u_int ssay, u_int dsax, u_int dsay, u_int dir)
{
    u_long val = ((u_long)dir << 59) | ((u_long)dsay << 48) | ((u_long)dsax << 32) | ((u_long)ssay << 16) | (u_long)ssax;

    return setGIFad(p, SCE_GS_TRXPOS, val);
}

u_int* setTRXREG(u_int* p, u_int rrw, u_int rrh)
{
    u_long val = ((u_long)rrh << 32) | ((u_long)rrw << 0);

    return setGIFad(p, SCE_GS_TRXREG, val);
}

u_int* setTRXDIR(u_int* p, u_int xdir)
{
    return setGIFad(p, SCE_GS_TRXDIR, (u_long)xdir);
}

INCLUDE_ASM("asm/nonmatchings/sound/disp", loadImage);

INCLUDE_ASM("asm/nonmatchings/sound/disp", vblankHandler);

INCLUDE_ASM("asm/nonmatchings/sound/disp", handler_endimage);

INCLUDE_ASM("asm/nonmatchings/sound/disp", startDisplay);

void endDisplay()
{
    isCountVblank = 0;
    frd = 0;
}

INCLUDE_ASM("asm/nonmatchings/sound/disp", SetUserData);
