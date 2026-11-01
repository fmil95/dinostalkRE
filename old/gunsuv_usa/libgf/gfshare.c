// STATUS: NOT STARTED

#include "gfshare.h"

static Uint32 gf_Vu1WorkSize = 0;
static qword *gf_pShareBuf;
static Uint32 *gf_pShareBufTop;
static Uint32 gf_pShareBufSize;

static GF_INST_SHAPE* gf_GetShape(GF_INST_OBJECT *pObj, Uint32 n) {}

static sceVu0FMATRIX* gf_GetShapeWorldMatrix(GF_INST_OBJECT *pObj, Uint32 n) {
	GF_INST_SHAPE *pShape;
}

static sceVu0FMATRIX* gf_GetShapeLightMatrix(GF_INST_OBJECT *pObj, Uint32 n) {
	GF_INST_SHAPE *pShape;
}

qword* gf_CopyQWs(qword *pw, qword *pr, Uint32 size) {
	Uint128 *w;
	Uint128 *r;
	Uint32 i;
}

static qword* gf_MakeShareShape(qword *packet, GF_INST_SHAPE *inst) {
	qword *cur;
	Uint32 packsize;
}

static GF_INST_OBJECT* gf_GetParentObj(GF_INST_SHAPE *inst) {
	GF_INST_HEAD *pInst;
}

void GFShare_Eval(GF_INST_SHAPE *inst) {}

qword* GFShare_Draw(qword *packet, GF_INST_SHAPE *inst) {
	qword *cur;
}

void GFShare_SetBuf(Uint32 *pBuf, Uint32 size) {}

static PodSHAPE* gf_GetShareBlock(GF_INST_SHAPE *inst) {
	PodHEADER *pPod;
	PodEXTENDTBL *pExtTbl;
	Uint32 extBlkNum;
	Uint32 i;
}

static qword* gf_CopyShareBlock(qword *pWrite, GF_INST_SHAPE *inst) {
	qword *pVtx;
	qword *pNml;
	qword *pCol;
	qword *pStq;
	qword *pwVtx;
	qword *pwNml;
	qword *pwCol;
	qword *pwStq;
	sceVu0FVECTOR tmpVtx;
	qword *pr;
	qword *pw;
	Uint32 nMat;
	Uint32 nGeo;
	Uint32 nVtx;
	Uint32 parShapeNo;
	Uint32 matFlag;
	Uint32 i;
	Uint32 j;
	Uint32 k;
	GF_INST_OBJECT *pObjOfShape;
}

Uint32 GFShare_GetUsedBufSize() {}

void GFShare_SetVu1WorkSize(Uint32 size) {}

Uint32 GFShare_GetVu1WorkSize() {}
