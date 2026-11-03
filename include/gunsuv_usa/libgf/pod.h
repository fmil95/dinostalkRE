// STATUS: NOT STARTED

#ifndef GUNSUV_USA_LIBGF_POD_H
#define GUNSUV_USA_LIBGF_POD_H

#include "common.h"

struct pod_header { // 0x20
	/* 0x00 */ Uint32 magic;
	/* 0x04 */ Uint16 version;
	/* 0x06 */ Uint16 pad;
	/* 0x08 */ Sint32 shapeNum;
	/* 0x0c */ Sint32 rootShape;
	/* 0x10 */ Uint32 extBlockNum;
	/* 0x14 */ Sint32 pad2[3];
};

typedef struct pod_header PodHEADER;

struct pod_shapetbl { // 0x50
	/* 0x00 */ Uint16 parent;
	/* 0x02 */ Uint16 child;
	/* 0x04 */ Uint16 sibling;
	/* 0x08 */ Uint32 shape;
	/* 0x0c */ Uint32 flag;
	/* 0x10 */ union { // 0x40
		/* 0x10 */ sceVu0FMATRIX matrix;
		/* 0x10 */ struct { // 0x30
			/* 0x10 */ sceVu0FVECTOR rotate;
			/* 0x20 */ sceVu0FVECTOR scale;
			/* 0x30 */ sceVu0FVECTOR translate;
		} vector;
	} rel;
};

typedef struct pod_shapetbl PodSHAPETBL;

struct pod_extendtbl { // 0x10
	/* 0x0 */ Uint32 extId;
	/* 0x4 */ Uint32 free[3];
};

typedef struct pod_extendtbl PodEXTENDTBL;

struct pod_shape { // 0x30
	/* 0x00 */ Sint32 matNum;
	/* 0x04 */ Uint32 flag;
	/* 0x08 */ Sint32 pad;
	/* 0x0c */ Sint32 free;
	/* 0x10 */ sceVu0FVECTOR min;
	/* 0x20 */ sceVu0FVECTOR max;
};

typedef struct pod_shape PodSHAPE;

struct pod_material { // 0x60
	/* 0x00 */ Sint32 geomNum;
	/* 0x04 */ Uint32 flag;
	/* 0x08 */ Sint32 texIdx;
	/* 0x0c */ Sint32 pad0;
	/* 0x10 */ Float32 shininess;
	/* 0x14 */ Float32 transparency;
	/* 0x18 */ Sint32 pad1[2];
	/* 0x20 */ sceVu0FVECTOR ambient;
	/* 0x30 */ sceVu0FVECTOR diffuse;
	/* 0x40 */ sceVu0FVECTOR specular;
	/* 0x50 */ sceVu0FVECTOR emission;
};

typedef struct pod_material PodMATERIAL;
Sint32 GFPod_IsPodData(Uint32 *pod);
Uint32* GFPod_MapTextureIndex(Uint32 *pod, Sint32 index_ofs);
PodMATERIAL* GFPod_GetNextMaterialBlock(PodMATERIAL *material);
Uint32* GFPod_MapTextureIndex2(Uint32 *pod, Sint32 local_index, Sint32 tex_index);
Uint32* GFPod_DeMapTextureIndex(Uint32 *pod, Sint32 index_ofs);

#endif // GUNSUV_USA_LIBGF_POD_H
