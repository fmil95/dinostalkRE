// STATUS: NOT STARTED

#include "gfanim.h"

struct _gf_animcomp {
	union {
		PmtQUATERNION qrot;
		sceVu0FVECTOR vrot;
	} rot;
	sceVu0FVECTOR trans;
	sceVu0FVECTOR scale;
};

typedef _gf_animcomp _GF_ANIMCOMPDATA;

_GF_ANIMCOMPDATA _gfAnim_unitComp = {
	/* .rot = */ {
		/* .qrot = */ {
			/* [0] = */ -1.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .vrot = */ {
			/* [0] = */ -1.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		}
	},
	/* .trans = */ {
		/* [0] = */ 0.f,
		/* [1] = */ 0.f,
		/* [2] = */ 0.f,
		/* [3] = */ 0.f
	},
	/* .scale = */ {
		/* [0] = */ 1.f,
		/* [1] = */ 1.f,
		/* [2] = */ 1.f,
		/* [3] = */ 1.f
	}
};

static void gfAnim_InterpolateQuaternion(Float32 *outq, Float32 *srcq, Float32 *dstq, Float32 ratio) {
	Float32 dotp;
	Float32 theta;
	Float32 sin_0;
	Float32 sin_2;
	PmtQUATERNION sq;
	PmtQUATERNION dq;
}

static void gfAnim_VectorToMatrix(float *m[4], float *rot, Uint32 rot_flag) {}

void GFAnim_Attach(GF_INST_OBJECT *obj, PmtHEADER *anim) {}

void GFAnim_HotAttach(GF_INST_OBJECT *obj, PmtHEADER *anim) {}

static void gfAnim_Attach(GF_INST_OBJECT *obj, PmtHEADER *anim, Uint32 flag) {
	Sint32 i;
	Sint32 num;
	PmtSHAPEOFS *shape_ofs;
	GF_INST_SHAPE *shape;
}

void GFAnim_ScaleMatrix(float *out_mat[4], float *in_mat[4], float *scale) {}

static void gfAnim_CalcMyMatrix(PodSHAPETBL *shape_tbl, float *anim_mat[4], GF_INST_SHAPE *inst) {
	Float32 int_pos;
	PmtQUATERNION start;
	PmtQUATERNION end;
	PmtQUATERNION work;
	sceVu0FMATRIX mat;
	sceVu0FVECTOR trns;
	Uint8 flag;
}

void gfAnim_calcmatrix(GF_INST_SHAPE *shape) {
	PmtSHAPEKEYHEAD *cur_key;
	PmtSHAPEKEYHEAD *next_key;
	_GF_ANIMCOMPDATA normalcalc;
	_GF_ANIMCOMPDATA compnextcalc;
	sceVu0FMATRIX calcoutMatrix;
	Float32 int_pos;
	Uint32 anim_info;
	Uint32 anim_flag;
}

void GFAnim_Eval(GF_INST_SHAPE *shape, Float32 spd) {
	PmtSHAPEKEYHEAD *cur_key;
	PmtSHAPEKEYHEAD *cur_keyComp;
	Uint32 anim_flag;
	Uint32 anim_info;
	Uint32 anim_infoComp;
}

void GFAnim_SetSpeed(GF_INST_OBJECT *obj, Float32 speed) {}

void GFAnim_Forward(GF_INST_OBJECT *obj, Sint32 frd) {
	Sint32 i;
	Float32 total;
}

Uint32 GFAnim_ShapeFlagCheck(GF_INST_OBJECT *obj, Uint32 flag2) {
	Uint32 flag;
	Sint32 i;
	GF_INST_SHAPE *shape;
}

Uint32 GFAnim_ShapeFlagSet(GF_INST_OBJECT *obj, Uint32 setFlag) {
	Sint32 i;
	GF_INST_SHAPE *shape;
}

Uint32 GFAnim_ShapeFlagClear(GF_INST_OBJECT *obj, Uint32 setFlag) {
	Sint32 i;
	GF_INST_SHAPE *shape;
}

void GFAnim_SetNextAnimation(GF_INST_OBJECT *object, PmtHEADER *nextanim, Uint32 flag, Sint32 time) {}

void GFAnim_SetCallbackFunction(GF_INST_OBJECT *object, GF_CallBackFunction function) {}

static void gfAnim_CalcPosition(_GF_ANIMCOMPDATA *posDst, PmtSHAPEKEYHEAD *cur_key, PmtSHAPEKEYHEAD *next_key, Uint32 flag, Float32 int_pos) {}

static void gfAnim_MatToQuat(Float32 *quat, float *m[4]) {
	Float32 tr;
	Float32 s;
	Float32 q[4];
	Sint32 i;
	Sint32 j;
	Sint32 k;
	static Sint32 nxt[3] = {
		/* [0] = */ 1,
		/* [1] = */ 2,
		/* [2] = */ 0
	};
}

static void gfAnim_QuaternionToMatrix(float *m[4], Float32 *quat) {
	Float32 wx;
	Float32 wy;
	Float32 wz;
	Float32 xx;
	Float32 yy;
	Float32 yz;
	Float32 xy;
	Float32 xz;
	Float32 zz;
	Float32 x2;
	Float32 y2;
	Float32 z2;
}

static void gfAnim_NormalizeQuaternion(Float32 *v0, Float32 *v1) {}

static void gfAnim_InterpolateVector(float *v0, float *v1, float *v2, Float32 t, Sint32 is_rot) {}

static void gfAnim_Vu0CopyQuat(Float32 *v0, Float32 *v1) {}

static Float32 gfAnim_Vu0InnerProduct(Float32 *v0, Float32 *v1) {}

static void gfAnim_InterpolateQuat(Float32 *v0, Float32 *v1, Float32 *v2, Float32 sin_0, Float32 sin_1) {}

static Float32 gfAnim_Sinf(Float32 ratio) {
	Float32 x2;
	sceVu0FVECTOR x329;
	static sceVu0FVECTOR s225 = {
		/* [0] = */ -0.166666567f,
		/* [1] = */ 0.0083330255f,
		/* [2] = */ -0.000198074136f,
		/* [3] = */ 2.60188699e-06f
	};
}

static Float32 gfAnim_Arccosf(Float32 ratio) {
	Float32 x;
	Float32 x2;
	sceVu0FVECTOR x127;
	sceVu0FVECTOR x9215;
	static sceVu0FVECTOR t124 = {
		/* [0] = */ 0.999999344f,
		/* [1] = */ -0.333298564f,
		/* [2] = */ 0.199465364f,
		/* [3] = */ -0.139085338f
	};
	static sceVu0FVECTOR t528 = {
		/* [0] = */ 0.0964200422f,
		/* [1] = */ -0.055909887f,
		/* [2] = */ 0.0218612291f,
		/* [3] = */ -0.00405405788f
	};
}
