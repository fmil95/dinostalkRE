// STATUS: NOT STARTED

#include "pod.h"

Sint32 GFPod_IsPodData(Uint32 *pod) {
	PodHEADER *head;
}

Uint32* GFPod_MapTextureIndex(Uint32 *pod, Sint32 index_ofs) {
	PodSHAPETBL *shape_tbl;
	PodSHAPE *shape;
	PodEXTENDTBL *extend_tbl;
	PodMATERIAL *material;
	Sint32 i;
	Sint32 j;
}

PodMATERIAL* GFPod_GetNextMaterialBlock(PodMATERIAL *material) {
	PodGEOMETRY *geom;
	Sint32 vinfo;
	Sint32 i;
}

Uint32* GFPod_MapTextureIndex2(Uint32 *pod, Sint32 local_index, Sint32 tex_index) {
	PodSHAPETBL *shape_tbl;
	PodSHAPE *shape;
	PodEXTENDTBL *extend_tbl;
	PodMATERIAL *material;
	Sint32 i;
	Sint32 j;
}

Uint32* GFPod_DeMapTextureIndex(Uint32 *pod, Sint32 index_ofs) {
	PodSHAPETBL *shape_tbl;
	PodSHAPE *shape;
	PodEXTENDTBL *extend_tbl;
	PodMATERIAL *material;
	Sint32 i;
	Sint32 j;
}
