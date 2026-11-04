// STATUS: NOT STARTED

#ifndef PARTICLE_H
#define PARTICLE_H

GFParticle_Update();
void GFParticle_Kill(char* a);
gf_CreateSingleParticle();
GFParticle_MallocMemory();
void GFParticle_SetAnimTbl(void* p, int v);
void GFParticle_SetAnimTexInfoTbl(void* p, int v);
int GFParticle_GetSize(void* p);
GFParticle_Lifeless();
GFParticle_SetStartRGBA();
GFParticle_SetEndRGBA();
GFParticle_SetRGBAVar();
void GFParticle_SetStatus(void* p, int v);
void GFParticle_AddStatus(void* a, int b);
void GFParticle_EraseStatus(void* a, int b);
void GFParticle_InitPosition(void* a, int b);
void GFParticle_SetPosition();
void GFParticle_SetPositionFunction(char* a, int f);
void GFParticle_SetGravity(void* a);
GFParticle_SetSize();
void GFParticle_SetSpeed(void* a, float x, float y);
GFParticle_SetSeparateAngle();
void GFParticle_SetLife(void* a, float x, float y);
void GFParticle_SetCreateSpeed(void* a, float x, float y);
void GFParticle_SetTextureID(char* a, int b);
int GFParticle_GetTextureID(void* p);
GFParticle_SetAttractRate();
GFParticle_SetCollidePlane();
GFParticle_SetTail();
void GFParticle_SetCreateRange(char* a, void* b, void* c);
void GFParticle_SetAttractPos(void* a);
void GFParticle_SetAlphaType(void* p, int v);
void GFParticle_SetDirection(int a, int b);
GFParticle_Draw();
GFParticle_Eval();
GFParticle_MakeInstance();
void GFParticle_OffInstance(void* a);
GFParticle_Vu0RandomInit();
void GFParticle_SetExecFunction(void* p, int v);
void GFParticle_SetMulVelocity(void* p, float v);
#endif // PARTICLE_H
