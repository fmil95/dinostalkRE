// STATUS: NOT STARTED

#ifndef GUNSUV_USA_LIBGF_POD_H
#define GUNSUV_USA_LIBGF_POD_H

struct pod_material {
	Sint32 geomNum;
	Uint32 flag;
	Sint32 texIdx;
	Sint32 pad0;
	Float32 shininess;
	Float32 transparency;
	Sint32 pad1[2];
	sceVu0FVECTOR ambient;
	sceVu0FVECTOR diffuse;
	sceVu0FVECTOR specular;
	sceVu0FVECTOR emission;
};

typedef pod_material PodMATERIAL;
Sint32 GFPod_IsPodData(Uint32 *pod);
Uint32* GFPod_MapTextureIndex(Uint32 *pod, Sint32 index_ofs);
PodMATERIAL* GFPod_GetNextMaterialBlock(PodMATERIAL *material);
Uint32* GFPod_MapTextureIndex2(Uint32 *pod, Sint32 local_index, Sint32 tex_index);
Uint32* GFPod_DeMapTextureIndex(Uint32 *pod, Sint32 index_ofs);

#endif // GUNSUV_USA_LIBGF_POD_H
