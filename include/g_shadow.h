// STATUS: NOT STARTED

#ifndef G_SHADOW_H
#define G_SHADOW_H

gpShadow_Init();
gpShadow_InitShadow();
void gpShadow_SetSortKey(float x);
gpShadow_MakePreset();
void gpShadow_Eval();
gpShadow_AddPacket();
gpShadow_Draw();
void gpShadow_SetObject(void* p, int v);
void gpShadow_Visible(void* p, int v);
void gpShadow_SetVolumeLength(void* p, float v);
void gpShadow_ReSetScreenFarZ(float v);
void gpShadow_SetMaxAlpha(float v);
void gpShadow_SetLightVector(int a);
#endif // G_SHADOW_H
