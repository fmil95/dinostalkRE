// *****************************************************************************
// FILE -- /usr/local/sce/ee/lib/crt0.s
// *****************************************************************************

/* 00100008 000000ac */ _start() {}
/* 001000b8 00000008 */ _exit() {}
/* 001000c0 00000008 */ static _root() {}

// *****************************************************************************
// FILE -- main.c
// *****************************************************************************

/* 001000c8 000002f8 */ main() {}
/* 001003c0 000001b8 */ static SelectTest() {}
/* 00100578 00000130 */ static InitSystem() {}
/* 001006a8 000000ec */ static InitSif() {}
/* 00100798 00000114 */ static SetDefaultGsEnv() {}
/* 001008b0 00000028 */ static EndSystem() {}
/* 001008d8 00000008 */ _gsMuteki_INIT() {}
/* 001008e0 000000e0 */ _gsMuteki_EXEC() {}
/* 001009c0 00000008 */ _gsMuteki_END() {}
/* 001009c8 0000003c */ _gsOmakePower_INIT() {}
/* 00100a08 00000238 */ _gsOmakePower_EXEC() {}
/* 00100c40 00000008 */ _gsOmakePower_END() {}

// *****************************************************************************
// FILE -- mem.c
// *****************************************************************************

/* 00100c48 00000058 */ MEM_InitAllocation() {}
/* 00100ca0 00000014 */ MEM_EndAllocation() {}
/* 00100cb8 00000024 */ MEM_Malloc() {}
/* 00100ce0 0000005c */ static _memalign_GS() {}
/* 00100d40 00000160 */ MEM_MallocAlign() {}
/* 00100ea0 0000005c */ static mem_CheckAlignment() {}
/* 00100f00 00000070 */ static _mem_free() {}
/* 00100f70 0000006c */ MEM_FreeAll() {}
/* 00100fe0 00000048 */ MEM_Free() {}
/* 00101028 00000018 */ static mem_GetFreeAllocInfo() {}
/* 00101040 00000060 */ static mem_SearchAllocInfo() {}
/* 001010a0 00000018 */ static mem_GetMagicNumber() {}
/* 001010b8 0000005c */ MEM_CheckViolation() {}
/* 00101118 0000005c */ static mem_CheckViolation() {}
/* 00101178 000000f4 */ MEM_DumpAllocationInfo() {}

// *****************************************************************************
// FILE -- timer.c
// *****************************************************************************

/* 00101270 00000064 */ TIMER_InitTimer() {}
/* 001012d8 00000048 */ TIMER_SetTimer() {}
/* 00101320 00000080 */ TIMER_StartTimer() {}
/* 001013a0 00000048 */ TIMER_StopTimer() {}
/* 001013e8 00000018 */ TIMER_GetTimer() {}

// *****************************************************************************
// FILE -- fileio.c
// *****************************************************************************

/* 00101400 00000068 */ static SCELSEEK2() {}
/* 00101468 00000040 */ static SCECLOSE2() {}
/* 001014a8 00000068 */ static SCEREAD2() {}
/* 00101510 00000068 */ static SCEOPEN2() {}
/* 00101578 00000028 */ FIO_ReadFile() {}
/* 001015a0 00000028 */ FIO_ReadFile_NoChk() {}
/* 001015c8 00000028 */ FIO_ReadFile_Align() {}
/* 001015f0 0000002c */ FIO_ReadFile_Align2() {}
/* 00101620 00000020 */ FIO_ReadFilePartly() {}
/* 00101640 00000020 */ FIO_ReadFilePartly_Align() {}
/* 00101660 00000140 */ static fio_ReadFile() {}
/* 001017a0 0000005c */ FIO_GetFileSize() {}
/* 00101800 00000028 */ static fio_OpenFile() {}
/* 00101828 000000f8 */ FIO_WriteFile() {}
/* 00101920 00000034 */ FIOCache_Init() {}
/* 00101958 00000040 */ static fio_GetEmptyCacheInfo() {}
/* 00101998 00000088 */ FIOCache_ReadPack_Align2() {}
/* 00101a20 000000dc */ FIOCache_ReadSdp() {}
/* 00101b00 00000098 */ FIOCache_Search() {}
/* 00101b98 00000034 */ FIOCache_GetCheckSum() {}

// *****************************************************************************
// FILE -- pad.c
// *****************************************************************************

/* 00101bd0 00000080 */ PAD_InitPad() {}
/* 00101c50 00000038 */ PAD_EndPad() {}
/* 00101c88 000000a8 */ PAD_UpdatePad() {}
/* 00101d30 00000014 */ PAD_GetPad() {}
/* 00101d48 00000014 */ PAD_GetPadTrg() {}

// *****************************************************************************
// FILE -- perfmon.c
// *****************************************************************************

/* 00101d60 00000048 */ pfm_barx() {}
/* 00101da8 000001ac */ pfm_draw_num() {}
/* 00101f58 00000008 */ pfm_draw() {}
/* 00101f60 00000048 */ pfm_gettimer() {}
/* 00101fa8 00000038 */ pfm_dmastart() {}
/* 00101fe0 00000060 */ pfm_dma1int() {}
/* 00102040 00000054 */ pfm_vbint() {}
/* 00102098 00000008 */ pfm_init() {}
/* 001020a0 00000008 */ pfm_end() {}
/* 001020a8 00000008 */ pfm_start() {}
/* 001020b0 00000008 */ pfm_set() {}

// *****************************************************************************
// FILE -- inststr.c
// *****************************************************************************

/* 001020b8 00000078 */ String_MakeInstance() {}
/* 00102130 00000018 */ String_SetString() {}
/* 00102148 00000018 */ String_SetPosition() {}
/* 00102160 000005f4 */ String_draw() {}

// *****************************************************************************
// FILE -- test.c
// *****************************************************************************

/* 00102758 0000004c */ TEST_LoadTexture() {}
/* 001027a8 00000044 */ TEST_EntryTexture() {}
/* 001027f0 00000178 */ TEST_Sync() {}
/* 00102968 000000dc */ TEST_SetObjMatrix() {}
/* 00102a48 000000fc */ TEST_SetCameraMatrix() {}
/* 00102b48 00000168 */ TEST_MoveObject() {}
/* 00102cb0 000000c0 */ TEST_MoveCamera() {}
/* 00102d70 00000038 */ TEST_create_instance() {}
/* 00102da8 00000014 */ TEST_destroy_instshape() {}

// *****************************************************************************
// FILE -- particle.c
// *****************************************************************************

/* 00102dc0 00000040 */ static gf_MyRand() {}
/* 00102e00 00000038 */ static gf_MyRandRange() {}
/* 00102e38 00000040 */ static gf_MyRandRangeV() {}
/* 00102e78 0000002c */ static gf_GetDistance() {}
/* 00102ea8 000002b0 */ GFParticle_Update() {}
/* 00103158 0000003c */ GFParticle_Kill() {}
/* 00103198 000004f8 */ static gf_UpdateAllParticle() {}
/* 00103690 000003f4 */ gf_CreateSingleParticle() {}
/* 00103a88 00000044 */ static gf_ParticleInitAnimData() {}
/* 00103ad0 00000060 */ GFParticle_MallocMemory() {}
/* 00103b30 00000008 */ GFParticle_SetAnimTbl() {}
/* 00103b38 00000008 */ GFParticle_SetAnimTexInfoTbl() {}
/* 00103b40 00000008 */ GFParticle_GetSize() {}
/* 00103b48 00000044 */ GFParticle_Lifeless() {}
/* 00103b90 0000003c */ GFParticle_SetStartRGBA() {}
/* 00103bd0 0000003c */ GFParticle_SetEndRGBA() {}
/* 00103c10 0000003c */ GFParticle_SetRGBAVar() {}
/* 00103c50 00000008 */ GFParticle_SetStatus() {}
/* 00103c58 00000010 */ GFParticle_AddStatus() {}
/* 00103c68 00000014 */ GFParticle_EraseStatus() {}
/* 00103c80 0000004c */ GFParticle_InitPosition() {}
/* 00103cd0 00000014 */ GFParticle_SetPosition() {}
/* 00103ce8 0000002c */ GFParticle_SetPositionFunction() {}
/* 00103d18 00000018 */ GFParticle_SetGravity() {}
/* 00103d30 00000094 */ GFParticle_SetSize() {}
/* 00103dc8 0000000c */ GFParticle_SetSpeed() {}
/* 00103dd8 000000e8 */ GFParticle_SetSeparateAngle() {}
/* 00103ec0 0000000c */ GFParticle_SetLife() {}
/* 00103ed0 00000010 */ GFParticle_SetCreateSpeed() {}
/* 00103ee0 00000050 */ GFParticle_SetTextureID() {}
/* 00103f30 00000008 */ GFParticle_GetTextureID() {}
/* 00103f38 00000028 */ GFParticle_SetAttractRate() {}
/* 00103f60 0000003c */ GFParticle_SetCollidePlane() {}
/* 00103fa0 00000050 */ GFParticle_SetTail() {}
/* 00103ff0 0000003c */ GFParticle_SetCreateRange() {}
/* 00104030 00000018 */ GFParticle_SetAttractPos() {}
/* 00104048 00000008 */ GFParticle_SetAlphaType() {}
/* 00104050 00000040 */ GFParticle_SetDirection() {}
/* 00104090 00000908 */ GFParticle_Draw() {}
/* 00104998 00000008 */ GFParticle_Eval() {}
/* 001049a0 0000005c */ GFParticle_MakeInstance() {}
/* 00104a00 00000014 */ GFParticle_OffInstance() {}
/* 00104a18 00000028 */ GFParticle_Vu0RandomInit() {}
/* 00104a40 00000008 */ GFParticle_SetExecFunction() {}
/* 00104a48 00000008 */ GFParticle_SetMulVelocity() {}

// *****************************************************************************
// FILE -- gs_math.c
// *****************************************************************************

/* 00104a50 00000168 */ gsSinfNC() {}
/* 00104bb8 000001c8 */ gsSinf() {}
/* 00104d80 00000050 */ gsArcsinf() {}
/* 00104dd0 00000050 */ gsArctanfNC() {}
/* 00104e20 000000a0 */ gsArctanf() {}
/* 00104ec0 000000dc */ gsArctan2f() {}
/* 00104fa0 00000024 */ gsSqrtf() {}

// *****************************************************************************
// FILE -- g_test.c
// *****************************************************************************

/* 00104fc8 000004f4 */ G_TEST_Init() {}
/* 001054c0 00000968 */ G_TEST_Exec() {}
/* 00105e28 00000124 */ G_TEST_End() {}
/* 00105f50 00000020 */ gsExtProg_INIT() {}
/* 00105f70 00000010 */ gsExtProg_ENTRY_WORK() {}
/* 00105f80 00000038 */ gsExtProg_RECOV_WORK() {}
/* 00105fb8 00000378 */ gsExtProg_EXEC() {}
/* 00106330 000002e4 */ gsExtProg_TIME_OVER() {}
/* 00106618 0000004c */ gsStageExit_AfterMovie() {}
/* 00106668 00000008 */ gsPC_Start() {}
/* 00106670 00000008 */ gsPC_Disp() {}
/* 00106678 00000008 */ gsPC_Stop() {}
/* 00106680 000000f0 */ gsLoading_Init() {}
/* 00106770 00000158 */ gsLoading_Exec() {}
/* 001068c8 00000044 */ gsClearHiddenFrame() {}
/* 00106910 00000028 */ _dbgCS_OverWrite() {}

// *****************************************************************************
// FILE -- g_meminit.c
// *****************************************************************************

/* 00106938 00000070 */ FullAllocAndFree() {}

// *****************************************************************************
// FILE -- g_stage2.c
// *****************************************************************************

/* 001069a8 0000059c */ gsStageInit_ST2() {}
/* 00106f48 00000234 */ gsStageExec_ST2() {}
/* 00107180 00000268 */ gsStage2_RepairAfterMovie() {}

// *****************************************************************************
// FILE -- g_stage3.c
// *****************************************************************************

/* 001073e8 00000664 */ gsStageInit_ST3() {}
/* 00107a50 000002ac */ gsStageExec_ST3() {}
/* 00107d00 00000164 */ gsStageInitCamera_ST3() {}
/* 00107e68 000006e4 */ gsStageGetCameraVector_ST3() {}
/* 00108550 00000108 */ gsStageBoatDirection_ST3() {}
/* 00108658 00000230 */ gsStage3_RepairAfterMovie() {}

// *****************************************************************************
// FILE -- g_stage4.c
// *****************************************************************************

/* 00108888 00000498 */ gsStageInit_ST4() {}
/* 00108d20 00000190 */ gsStageExec_ST4() {}
/* 00108eb0 00000090 */ gsStage4_RepairAfterMovie() {}
/* 00108f40 000001f0 */ st4_fogtest() {}

// *****************************************************************************
// FILE -- g_stage5.c
// *****************************************************************************

/* 00109130 0000049c */ gsStageInit_ST5() {}
/* 001095d0 000001a8 */ gsStageExec_ST5() {}
/* 00109778 00000120 */ gsStage5_RepairAfterMovie() {}

// *****************************************************************************
// FILE -- g_stage7.c
// *****************************************************************************

/* 00109898 00000520 */ gsStageInit_ST7() {}
/* 00109db8 000001e0 */ gsStageExec_ST7() {}
/* 00109f98 000003a8 */ gsStageInitCamera_ST7() {}
/* 0010a340 00000aa4 */ gsStageGetCameraVector_ST7() {}
/* 0010ade8 00000104 */ gsStageJeepDirection_ST7() {}
/* 0010aef0 0000001c */ gsStage7_ChangeExtCompelTbl() {}
/* 0010af10 00000260 */ gsStage7_RepairAfterMovie() {}

// *****************************************************************************
// FILE -- g_stage8.c
// *****************************************************************************

/* 0010b170 00000484 */ gsStageInit_ST8() {}
/* 0010b5f8 000001c4 */ gsStageExec_ST8() {}
/* 0010b7c0 000000a0 */ gsStage8_RepairAfterMovie() {}

// *****************************************************************************
// FILE -- g_stage1.c
// *****************************************************************************

/* 0010b860 000005c0 */ gsStageInit_ST1() {}
/* 0010be20 000002dc */ gsStageExec_ST1() {}
/* 0010c100 00000524 */ gsManagementCamera_St1() {}
/* 0010c628 00000368 */ gsGetCameraRot_ST1() {}
/* 0010c990 000000d8 */ gsSt1_WindSwing() {}
/* 0010ca68 00000288 */ gsSt1_WindSwing2() {}
/* 0010ccf0 00000510 */ gsCameraMove_St1() {}
/* 0010d200 00000050 */ gsStage1_RepairAfterMovie() {}
/* 0010d250 000000e0 */ st1_coltest() {}

// *****************************************************************************
// FILE -- g_stage9.c
// *****************************************************************************

/* 0010d330 00000478 */ gsStageInit_ST9() {}
/* 0010d7a8 000001cc */ gsStageExec_ST9() {}
/* 0010d978 000000b0 */ gsStage9_RepairAfterMovie() {}
/* 0010da28 0000030c */ st9_fogtest() {}

// *****************************************************************************
// FILE -- g_effect.c
// *****************************************************************************

/* 0010dd38 00000084 */ static gs_effectResetEffectSrc() {}
/* 0010ddc0 00000038 */ gsEffectRemove() {}
/* 0010ddf8 0000006c */ gsEffectRemoveForce() {}
/* 0010de68 00000134 */ static _gsEffectAddOne() {}
/* 0010dfa0 00000138 */ gsEffectAddOne() {}
/* 0010e0d8 00000064 */ gsEffectAddWithVector() {}
/* 0010e140 00000048 */ gsEffectAddWithRot() {}
/* 0010e188 000001f0 */ gsEffectAddWithPri() {}
/* 0010e378 00000018 */ gsEffectAdd() {}
/* 0010e390 00000160 */ gsEffectAddThunder() {}
/* 0010e4f0 00000244 */ gsEffectAddScale() {}
/* 0010e738 00000028 */ gsEffectInitMicro() {}
/* 0010e760 00000084 */ gsEffectTexLoad() {}
/* 0010e7e8 00000038 */ gsEffectGetTexIdx() {}
/* 0010e820 00000034 */ gsEffectTexReset() {}
/* 0010e858 00000020 */ gs_EffectMemAlign() {}
/* 0010e878 00000194 */ gs_effectInitEffectSrc() {}
/* 0010ea10 000000f8 */ gsEffectInit() {}
/* 0010eb08 0000004c */ gsEffectReset() {}
/* 0010eb58 00000070 */ static gf_calcViewPosZ() {}
/* 0010ebc8 00000294 */ gsManagementEffectOne() {}
/* 0010ee60 0000009c */ gsManagementEffect() {}
/* 0010ef00 00000168 */ static initParticleParamAll() {}
/* 0010f068 000000ec */ gsEffectFuncRandomMove() {}
/* 0010f158 000000d4 */ gsEffectFuncRandomMove2() {}
/* 0010f230 000000d4 */ gsEffectFuncRandomMove3() {}
/* 0010f308 00000020 */ gsEffectFuncMakeParticle() {}
/* 0010f328 00000098 */ gsEffectFuncFadein() {}
/* 0010f3c0 0000011c */ gsEffectFuncMagmaL() {}
/* 0010f4e0 00000244 */ gsEffectFuncThunderCreate() {}
/* 0010f728 000000d4 */ gsEffectInitBlur() {}
/* 0010f800 000000a4 */ gsEffectSetBlurFade() {}
/* 0010f8a8 0000003c */ gsEffectSetBlurNowColor() {}
/* 0010f8e8 00000068 */ gsEffectBlurStatPush() {}
/* 0010f950 00000068 */ gsEffectBlurStatPop() {}
/* 0010f9b8 0000028c */ gsEffectBlurManagement() {}
/* 0010fc48 0000022c */ gsEffectBlurFullScreen() {}
/* 0010fe78 00000058 */ gsEffectInitFade() {}
/* 0010fed0 0000015c */ gsEffectFade() {}
/* 00110030 00000094 */ gsEffectSetFade() {}
/* 001100c8 0000003c */ gsEffectSetFadeNowColor() {}
/* 00110108 000001e4 */ gsEffectFadeManagement() {}
/* 001102f0 00000008 */ gsEffectGetFadeCnt() {}
/* 001102f8 0000010c */ gsEffectChangeBloodColor() {}
/* 00110408 00000020 */ gsEffectSetWind() {}

// *****************************************************************************
// FILE -- g_parts.c
// *****************************************************************************

/* 00110428 00000240 */ _gpGetBoundBox() {}
/* 00110668 000000fc */ gpGetBoundBox() {}
/* 00110768 00000064 */ gpGetNextMaterialBlock() {}
/* 001107d0 00000048 */ gpGetNextGeometryBlock() {}
/* 00110818 00000448 */ gpInitWorldManager() {}
/* 00110c60 00000020 */ gpStepWorldManagerOverHead_GV() {}
/* 00110c80 000000e4 */ gpEntryWorldManagerOverHead_GV() {}
/* 00110d68 00000020 */ gpStepWorldManagerOverHead_ODV() {}
/* 00110d88 000000e4 */ gpEntryWorldManagerOverHead_ODV() {}
/* 00110e70 00000094 */ gpEntryWorldManagerGV() {}
/* 00110f08 000000d4 */ gpEntryWorldManagerODV() {}
/* 00110fe0 00000040 */ gpSetWorldManagerMatrixGND() {}
/* 00111020 0000022c */ gpEntryWorldManagerGND() {}
/* 00111250 000002f0 */ gpEntryWorldManagerOBJ() {}
/* 00111540 000000b0 */ gpAttachWorldDispOBJ() {}
/* 001115f0 00000204 */ gpEntryWorldManagerBACK() {}
/* 001117f8 00000058 */ gpEntryWorldObjAnim() {}
/* 00111850 0000025c */ gpEntryWorldManagerGND_LOOP() {}
/* 00111ab0 00000010 */ gpSetCollisionSkipGV() {}
/* 00111ac0 00000010 */ gpSetCollisionSkipODV() {}
/* 00111ad0 000005bc */ gpJudgeCollisionSphere() {}
/* 00112090 000000e0 */ gpSetCollisionTriangleInfo() {}
/* 00112170 0000004c */ gpModifyCollisionTriangle() {}
/* 001121c0 00000298 */ gpModifyCollisionTriangle2() {}
/* 00112458 000001e4 */ gpJudgeCollisionTerms() {}
/* 00112640 0000005c */ gpJudgeCollisionTermsCHR() {}
/* 001126a0 00000034 */ gpGetCollisionSphere() {}
/* 001126d8 00000098 */ gpGetCollisionSphere2() {}
/* 00112770 000008d0 */ gpGetCollisionSphereGND() {}
/* 00113040 000003c4 */ static _gpGetCollisionSphereOBJ() {}
/* 00113408 00000580 */ gpGetCollisionSphereOBJ() {}
/* 00113988 00000364 */ gpJudgeCollisionLine() {}
/* 00113cf0 00000398 */ gpJudgeCollisionLineGND() {}
/* 00114088 00000034 */ gpGetCollisionLine() {}
/* 001140c0 00000090 */ gpGetCollisionLine2() {}
/* 00114150 0000087c */ gpGetCollisionLineGND() {}
/* 001149d0 000003ac */ static _gpGetCollisionLineOBJ() {}
/* 00114d80 000005a4 */ gpGetCollisionLineOBJ() {}
/* 00115328 000000b4 */ gpSetMatrixXYZ() {}
/* 001153e0 000000b4 */ gpSetMatrixZYX() {}
/* 00115498 0000001c */ gpStandardizeBoundBox() {}
/* 001154b8 00000048 */ gpCompareBoundBox() {}
/* 00115500 00000064 */ gpFloat2Int() {}
/* 00115568 0000022c */ gpArcTan() {}
/* 00115798 0000022c */ gpArcTanHi() {}
/* 001159c8 0000004c */ gpAddRotation() {}
/* 00115a18 00000080 */ gpRotTransXYZ() {}
/* 00115a98 00000080 */ gpRotTransZYX() {}
/* 00115b18 00000080 */ gpRotTransZXY() {}
/* 00115b98 00000084 */ gpVector2RotZYX() {}
/* 00115c20 00000084 */ gpVector2RotXYZ() {}
/* 00115ca8 00000064 */ gpGetLength() {}
/* 00115d10 00000084 */ gpVector2RotZYX_Hi() {}
/* 00115d98 00000170 */ gpJudgeCircleOnLine() {}
/* 00115f08 00000104 */ gpGetNearTriangle() {}
/* 00116010 000000b8 */ _gpGetNearTriangle2() {}
/* 001160c8 00000124 */ gpGetNearTriangle2() {}
/* 001161f0 000000e4 */ gpGetNearTriangle3() {}
/* 001162d8 00000024 */ gpGetMaxVal() {}
/* 00116300 00000024 */ gpGetMinVal() {}
/* 00116328 00000748 */ _gpGetCollisionObjectBox() {}
/* 00116a70 000000a4 */ gpGetCollisionObjectBox() {}
/* 00116b18 00000554 */ _gpGetCollisionObjectBox2() {}
/* 00117070 000000a4 */ gpGetCollisionObjectBox2() {}
/* 00117118 000000f4 */ gpGetNearObjectBox() {}
/* 00117210 00000450 */ static _gpClipShape() {}
/* 00117660 0000007c */ gpClipShape() {}
/* 001176e0 000001a4 */ static _gpClipWorldShape() {}
/* 00117888 00000064 */ gpClipWorldShape() {}
/* 001178f0 00000060 */ static _gpClearWorldRecov() {}
/* 00117950 00000014 */ gpClearWorldRecov() {}
/* 00117968 00000118 */ gpInstance_MakeRotMatrix() {}
/* 00117a80 0000033c */ static gpInstance_Eval2() {}
/* 00117dc0 00000054 */ gpInstance_Eval() {}
/* 00117e18 00000050 */ gpGetEyeComLine() {}
/* 00117e68 00000478 */ _gpGetEyeComLine() {}
/* 001182e0 00000168 */ static _gpGetEyeComLineOBJ() {}
/* 00118448 00000608 */ gpGetEyeComLineOBJ() {}
/* 00118a50 00000284 */ static _gpGetEyeComSquare() {}
/* 00118cd8 00000134 */ static _gpGetEyeComSquareOBJ() {}
/* 00118e10 0000037c */ gpGetEyeComSquareOBJ() {}
/* 00119190 000002dc */ gpJudgeCollisionVertex() {}
/* 00119470 00000034 */ gpGetCollisionVertex() {}
/* 001194a8 00000044 */ gpGetCollisionVertex2() {}
/* 001194f0 00000704 */ gpGetCollisionVertexGND() {}
/* 00119bf8 0000034c */ static _gpGetCollisionVertexOBJ() {}
/* 00119f48 00000420 */ gpGetCollisionVertexOBJ() {}
/* 0011a368 000000d8 */ static _gpGetPodGeometryNum() {}
/* 0011a440 0000002c */ static gpGetPodGeometryNum() {}
/* 0011a470 00000254 */ static _gpMakeWorldOdvGeomBound() {}
/* 0011a6c8 0000005c */ gpMakeWorldOdvGeomBound() {}

// *****************************************************************************
// FILE -- g_shadow.c
// *****************************************************************************

/* 0011a728 000000d8 */ gpShadow_Init() {}
/* 0011a800 00000044 */ gpShadow_InitShadow() {}
/* 0011a848 0000000c */ gpShadow_SetSortKey() {}
/* 0011a858 00000140 */ gpShadow_MakePreset() {}
/* 0011a998 000000e0 */ static gpShadow_MakeShapePacket() {}
/* 0011aa78 00000154 */ static gpShadow_MakeVertexPacket() {}
/* 0011abd0 000000c0 */ static gpShadow_GifPacketMask() {}
/* 0011ac90 000000c0 */ static gpShadow_GifPacketShadow() {}
/* 0011ad50 000000c0 */ static gpShadow_GifPacketCover() {}
/* 0011ae10 00000010 */ gpShadow_Eval() {}
/* 0011ae20 0000003c */ gpShadow_AddPacket() {}
/* 0011ae60 000000e8 */ gpShadow_Draw() {}
/* 0011af48 00000008 */ gpShadow_SetObject() {}
/* 0011af50 00000008 */ gpShadow_Visible() {}
/* 0011af58 00000008 */ gpShadow_SetVolumeLength() {}
/* 0011af60 00000008 */ gpShadow_ReSetScreenFarZ() {}
/* 0011af68 00000008 */ gpShadow_SetMaxAlpha() {}
/* 0011af70 00000020 */ gpShadow_SetLightVector() {}
/* 0011af90 0000018c */ static gpShadow_InitPacket() {}
/* 0011b120 000000e0 */ static gpShadow_CalcParam() {}
/* 0011b200 00000058 */ static gpShadow_CheckClip() {}
/* 0011b258 000000e0 */ static gpShadow_DrawParam() {}
/* 0011b338 000001e0 */ static gpShadow_AllMatrixTransfer() {}
/* 0011b518 00000174 */ static gpShadow_Start() {}
/* 0011b690 000001c4 */ static gpShadow_End() {}

// *****************************************************************************
// FILE -- g_cshadow.c
// *****************************************************************************

/* 0011b858 00000018 */ gpCShadow_Init() {}
/* 0011b870 0000002c */ gpCShadow_InitCShadow() {}
/* 0011b8a0 000000e0 */ gpCShadow_Draw() {}
/* 0011b980 0000004c */ static gpCShadow_InitPacket() {}
/* 0011b9d0 000000d4 */ static gpCShadow_CalcAlpha() {}
/* 0011baa8 00000170 */ static gpCShadow_MakePacket() {}
/* 0011bc18 000000a8 */ static gpCShadow_SetGsRegs() {}
/* 0011bcc0 000000e0 */ gpCShadow_GetHitTriangle() {}
/* 0011bda0 000000e4 */ static gpCShadow_GetNearTriangles() {}
/* 0011be88 000001bc */ static gpCShadow_AddTriList() {}
/* 0011c048 00000128 */ static gpCShadow_GetChangeMatrix() {}
/* 0011c170 000000e8 */ static gpCShadow_GetTexST() {}

// *****************************************************************************
// FILE -- g_bulletmark.c
// *****************************************************************************

/* 0011c258 000000c0 */ gpBulletMark_Init() {}
/* 0011c318 00000008 */ gpBulletMark_Eval() {}
/* 0011c320 00000084 */ gpBulletMark_Draw() {}
/* 0011c3a8 0000004c */ static gpBulletMark_InitPacket() {}
/* 0011c3f8 00000294 */ static gpBulletMark_MakePacket() {}
/* 0011c690 000000ac */ static gpBulletMark_SetGsRegs() {}
/* 0011c740 00000240 */ gpBulletMark_GetHitTriangle() {}
/* 0011c980 0000013c */ static gpBulletMark_GetChangeMatrix() {}
/* 0011cac0 00000070 */ static gpBulletMark_GetTexST() {}
/* 0011cb30 000000ec */ static gpBulletMark_UpDate() {}

// *****************************************************************************
// FILE -- g_pad.c
// *****************************************************************************

/* 0011cc20 00000124 */ gsPad_Init() {}
/* 0011cd48 00000024 */ gsPad_Reset() {}
/* 0011cd70 00000038 */ gsPad_End() {}
/* 0011cda8 00000064 */ static _gsPad_changeByOpton() {}
/* 0011ce10 000006c0 */ gsPad_Update() {}
/* 0011d4d0 00000440 */ gsPad_Update2() {}
/* 0011d910 0000004c */ static _us_key_exchange() {}
/* 0011d960 00000008 */ static _us_get_port() {}
/* 0011d968 00000078 */ static _us_key_exchange2() {}
/* 0011d9e0 0000003c */ gsPad_GetNgc1() {}
/* 0011da20 00000048 */ gsPad_Get() {}
/* 0011da68 0000003c */ gsPad_GetTrgNgc1() {}
/* 0011daa8 00000048 */ gsPad_GetTrg() {}
/* 0011daf0 00000048 */ gsPad_GetRTrg() {}
/* 0011db38 00000060 */ gsPad_AGet() {}
/* 0011db98 00000060 */ gsPad_AGetTrg() {}
/* 0011dbf8 00000060 */ gsPad_AGetRTrg() {}
/* 0011dc58 00000028 */ gsPad_Get2() {}
/* 0011dc80 00000028 */ gsPad_GetTrg2() {}
/* 0011dca8 00000028 */ gsPad_GetRTrg2() {}
/* 0011dcd0 00000028 */ gsPad_GetState() {}
/* 0011dcf8 00000028 */ gsPad_GetStep() {}
/* 0011dd20 00000148 */ static gsPadAdjustFree() {}
/* 0011de68 00000034 */ gsPadSetAct() {}
/* 0011dea0 00000040 */ static gsPadAlignDataInit() {}
/* 0011dee0 0000014c */ static gsPadDataInit() {}
/* 0011e030 00000058 */ static gsPadGetAnalog2Digital() {}
/* 0011e088 00000170 */ static gsPadSetTrgRepeat() {}
/* 0011e1f8 00000164 */ static gsPadSetATrgRepeat() {}

// *****************************************************************************
// FILE -- g_camera.c
// *****************************************************************************

/* 0011e360 000000f8 */ gsSetCameraMatrix() {}
/* 0011e458 00000070 */ gsCameraCalcRotMatrix() {}
/* 0011e4c8 000000ac */ gsCameraCalcRotMatrix_COMPEL() {}
/* 0011e578 00000244 */ gsMoveCamera() {}
/* 0011e7c0 000002c4 */ gsInitCamera() {}
/* 0011ea88 00000070 */ gsCameraSetParam_START_GAME() {}
/* 0011eaf8 0000006c */ gsCameraSetParam_AFTER_STAGE() {}
/* 0011eb68 00000014 */ gsCameraSetParam_FROM_CONTINUE() {}
/* 0011eb80 000005b4 */ gsManagementCamera() {}
/* 0011f138 00000634 */ gsManagementCamera_COMPEL() {}
/* 0011f770 00000388 */ gsGetCameraRot() {}
/* 0011faf8 0000034c */ gsGetCameraRot_COMPEL() {}
/* 0011fe48 00000304 */ gsGetCameraVct() {}
/* 00120150 00000080 */ static _getPartsTrans_BDINO() {}
/* 001201d0 00000434 */ gsCameraGetDinoCollision() {}
/* 00120608 00000600 */ gsCameraGetDinoCollision_COMPEL() {}
/* 00120c08 000006e4 */ gsSetCameraMove() {}
/* 001212f0 00000324 */ gsSetCameraMove_COMPEL() {}
/* 00121618 000005c4 */ _gsGetCollisionWorld() {}
/* 00121be0 000000e8 */ gsGetCollisionWorld() {}
/* 00121cc8 00000308 */ gsGetCameraTilt() {}
/* 00121fd0 00000164 */ gsGetCameraAmp() {}
/* 00122138 00000300 */ static _gsCameraGetItem() {}
/* 00122438 000001bc */ gsCameraGetItem() {}
/* 001225f8 00000090 */ static gsCameraSubLife() {}
/* 00122688 0000043c */ gsCameraEntryDamageEffect() {}
/* 00122ac8 0000009c */ static _gsCameraDamageEffect() {}
/* 00122b68 000000b0 */ static _gsCameraDamageEffect_TREX() {}
/* 00122c18 000001f0 */ static gsCameraDamageEffect_TREX() {}
/* 00122e08 00001a44 */ gsCameraDamageEffect() {}
/* 00124850 00000074 */ gsCameraShock_ENTRY() {}
/* 001248c8 0000013c */ gsCameraShock_EXEC() {}
/* 00124a08 0000002c */ gsCameraShock_RESET() {}
/* 00124a38 00000080 */ static _searchTarget_GetPos() {}
/* 00124ab8 000001dc */ gsCameraSearchTarget() {}
/* 00124c98 000002fc */ gsCameraSearchTargetM() {}
/* 00124f98 00000088 */ gsCameraSearchTargetH() {}
/* 00125020 00000098 */ gsCameraTraceTarget() {}
/* 001250b8 00000388 */ gsCameraDemoSearch() {}
/* 00125440 0000031c */ gsCameraPutGND() {}
/* 00125760 00000650 */ gsCameraPutGND_COMPEL() {}
/* 00125db0 0000014c */ gsInitCocpit() {}
/* 00125f00 000000fc */ gsPutCocpit() {}
/* 00126000 000000b0 */ gsMoveSight() {}
/* 001260b0 00000094 */ gsSetBashMark() {}
/* 00126148 00000258 */ gsPutBashMark() {}
/* 001263a0 00000474 */ gsChangeArms() {}
/* 00126818 00000100 */ gsPutScope_INIT() {}
/* 00126918 000001b0 */ static _gsPutScope() {}
/* 00126ac8 000001f4 */ static _gsPutScope_MemH() {}
/* 00126cc0 000001f4 */ static _gsPutScope_MemV() {}
/* 00126eb8 000000f4 */ static _gsPutScope_Font() {}
/* 00126fb0 00000aa8 */ gsPutScope() {}
/* 00127a58 0000054c */ gsGetCameraRot_SCP() {}
/* 00127fa8 00000164 */ gsGetCameraZoom() {}
/* 00128110 00000188 */ gsPutCinesco() {}
/* 00128298 0000003c */ gsCameraUseItem_INIT() {}
/* 001282d8 00000034 */ gsCameraUseItem_ENTRY() {}
/* 00128310 0000020c */ gsCameraUseItem_EXEC() {}
/* 00128520 00000038 */ gsCameraCountItem_Medicine() {}
/* 00128558 00000038 */ gsCameraCountItem_Revicer() {}
/* 00128590 00000038 */ gsCameraCountItem_Antidote() {}
/* 001285c8 00000098 */ gsCameraCountItem_Tachyon() {}
/* 00128660 000000d0 */ gsCameraSetPauseParam() {}
/* 00128730 0000019c */ static _gsCameraTraceTilt() {}
/* 001288d0 00000438 */ gsCameraTraceTilt() {}
/* 00128d08 000000f0 */ gsCameraGetRaderDir_INIT() {}
/* 00128df8 00000480 */ gsCameraGetRaderDir_EXEC() {}
/* 00129278 000002c0 */ gsManagementCamera2() {}

// *****************************************************************************
// FILE -- aelib.c
// *****************************************************************************

/* 00129538 00000094 */ aeInit() {}
/* 001295d0 00000094 */ aeStartMfifo() {}
/* 00129668 0000003c */ aeStopMfifo() {}
/* 001296a8 00000044 */ aeSwapDBMfifo() {}
/* 001296f0 000000d0 */ aePresetPolyFt4() {}
/* 001297c0 000000d0 */ aePresetSprite() {}
/* 00129890 000000d0 */ aePresetSprite2() {}
/* 00129960 000000d0 */ aePresetPolyG3() {}
/* 00129a30 000000d0 */ aePresetPartSoft() {}
/* 00129b00 000000d0 */ aePresetPartLine0() {}
/* 00129bd0 000000c4 */ aePresetPartLine1() {}
/* 00129c98 000000cc */ aePresetTile() {}
/* 00129d68 000000cc */ aePresetPolyGt4() {}
/* 00129e38 000000c0 */ static _aeKickSourceChannel() {}
/* 00129ef8 00000098 */ aeKickPrim() {}
/* 00129f90 00000068 */ aeKickEndTag() {}
/* 00129ff8 00000100 */ aeLoadImage() {}
/* 0012a0f8 00000080 */ aeStoreImage() {}
/* 0012a178 000000d8 */ aeSetAD() {}
/* 0012a250 00000010 */ saeInit() {}
/* 0012a260 00000020 */ saeSetPolyFt4() {}
/* 0012a280 00000024 */ saeSetSprite() {}
/* 0012a2a8 00000024 */ saeSetAD() {}
/* 0012a2d0 00000024 */ saeSetLoadImage() {}
/* 0012a2f8 00000024 */ saeSetSprite2() {}
/* 0012a320 00000024 */ saeSetPolyG3() {}
/* 0012a348 00000024 */ saeSetPartSoft() {}
/* 0012a370 00000024 */ saeSetPartLine() {}
/* 0012a398 00000024 */ saeSetPolyFt42() {}
/* 0012a3c0 00000024 */ saeSetPolyGt4() {}
/* 0012a3e8 00000024 */ saeSetSprite3() {}
/* 0012a410 00000024 */ saeSetTile() {}
/* 0012a438 00000124 */ saeDrawPrim() {}
/* 0012a560 00000154 */ static _saeDrawPrim_PLYFT4() {}
/* 0012a6b8 00000154 */ static _saeDrawPrim_PLYFT42() {}
/* 0012a810 000001cc */ static _saeDrawPrim_PLYGT4() {}
/* 0012a9e0 000000e8 */ static _saeDrawPrim_SPRT() {}
/* 0012aac8 000000b0 */ static _saeDrawPrim_TILE() {}
/* 0012ab78 00000030 */ static _saeDrawPrim_AD() {}
/* 0012aba8 00000050 */ static _saeDrawPrim_LDIMG() {}
/* 0012abf8 000000cc */ static _saeDrawPrim_SPRT2() {}
/* 0012acc8 000000cc */ static _saeDrawPrim_SPRT3() {}
/* 0012ad98 00000124 */ static _saeDrawPrim_PLYG3() {}
/* 0012aec0 00000158 */ static _saeDrawPrim_PRTSFT() {}
/* 0012b018 0000027c */ static _saeDrawPrim_PRTLN() {}

// *****************************************************************************
// FILE -- g_plane.c
// *****************************************************************************

/* 0012b298 00000014 */ gplInitPlane() {}
/* 0012b2b0 0000016c */ gplInitSprite() {}
/* 0012b420 0000010c */ gplSetSprite() {}
/* 0012b530 0000007c */ gplChangeClutSprite() {}
/* 0012b5b0 000001e4 */ gplInitPolyFt4() {}
/* 0012b798 00000164 */ gplSetPolyFt4() {}
/* 0012b900 000001f4 */ gplInitPolyFt42() {}
/* 0012baf8 00000164 */ gplSetPolyFt42() {}
/* 0012bc60 000001c0 */ gplInitSprite2() {}
/* 0012be20 00000174 */ gplSetSprite2() {}
/* 0012bf98 000000c0 */ gplInitPartLine() {}
/* 0012c058 000000b0 */ gplSetPartLine() {}
/* 0012c108 0000009c */ gplInitTile() {}
/* 0012c1a8 000000b0 */ gplSetTile() {}
/* 0012c258 00000284 */ gplInitPolyGt4() {}
/* 0012c4e0 000001cc */ gplSetPolyGt4() {}
/* 0012c6b0 00000018 */ gplDrawPlane() {}

// *****************************************************************************
// FILE -- g_world.c
// *****************************************************************************

/* 0012c6c8 00000024 */ gsWorldRestoreMipmap() {}
/* 0012c6f0 00000174 */ gsWorldInitWorld() {}
/* 0012c868 00000574 */ gsWorldClipGnd() {}
/* 0012cde0 00000080 */ gsWorldSearchOdvMap() {}
/* 0012ce60 00000064 */ gsWorldSearchLinkObj() {}
/* 0012cec8 00000110 */ gsWorldResetOdvBlockLink() {}
/* 0012cfd8 000000fc */ gsWorldResetOdvAreaLink() {}
/* 0012d0d8 000000e8 */ gsWorldStepFrameObj() {}
/* 0012d1c0 00000ca8 */ gsWorldPutOdvObject() {}
/* 0012de68 00000124 */ gsWorldBuildWorld() {}
/* 0012df90 00000054 */ gsWorldMoveBackObj() {}
/* 0012dfe8 000000cc */ gsWorldCallSpecialEffect() {}
/* 0012e0b8 000000cc */ gsWorldCallSpecialEffect2() {}
/* 0012e188 00000030 */ gsWorldDamageObject() {}
/* 0012e1b8 0000002c */ gsWorldInitReaction() {}
/* 0012e1e8 00000138 */ gsWorldEntryReaction() {}
/* 0012e320 00000054 */ gsWorldCheckEntryReaction() {}
/* 0012e378 000002e4 */ gsWorldPlayReaction() {}
/* 0012e660 0000002c */ gsWorldInitBreakAction() {}
/* 0012e690 000000ac */ static gsWorldBreakAction_SHOCK() {}
/* 0012e740 000013ac */ gsWorldEntryBreakAction() {}
/* 0012faf0 0000031c */ gsWorldPlayBreakAction() {}
/* 0012fe10 00000104 */ gsWorldClearBreakAction() {}
/* 0012ff18 00000168 */ gsWorldGetLineDistance() {}
/* 00130080 00000024 */ gsWorldInitLineSwitch() {}
/* 001300a8 00000238 */ gsWorldTriggerLineSwitch() {}
/* 001302e0 00000008 */ gsWorldLineSwitchDINO_INIT() {}
/* 001302e8 000000e4 */ gsWorldLineSwitchDINO_ENTRY() {}
/* 001303d0 00000300 */ gsWorldTriggerLineSwitch_DINO() {}
/* 001306d0 00000008 */ gsWorldBulletEffectGnd_INIT() {}
/* 001306d8 00000008 */ gsWorldBulletEffectGnd_ENTRY() {}
/* 001306e0 0000001c */ gsWorldBulletEffectGnd_GET_SE_ID() {}
/* 00130700 00000104 */ gsWorldBulletEffectGnd() {}
/* 00130808 0000008c */ gsWorldBulletSeGnd() {}
/* 00130898 00000038 */ gsWorldEntryBulletEffectObj() {}
/* 001308d0 00000038 */ gsWorldEntryBulletSeObj() {}
/* 00130908 00000038 */ gsWorldEntryOBJ_SE_ID() {}
/* 00130940 000000e8 */ gsWorldBulletEffectObj() {}
/* 00130a28 00000088 */ gsWorldBulletSeObj() {}
/* 00130ab0 00000014 */ gsWorldGetOBJ_TYPE() {}
/* 00130ac8 00000024 */ gsWorldEntryOBJ_BREAK_NO() {}
/* 00130af0 00000024 */ gsWorldEntryOBJ_REACT_NO() {}
/* 00130b18 00000038 */ gsWorldEntryOBJ_BREAK_MICRO() {}
/* 00130b50 00000038 */ gsWorldEntryOBJ_BREAK_LIGHT() {}
/* 00130b88 00000024 */ gsWorldEntryOBJ_BREAK_SE() {}
/* 00130bb0 000000c4 */ gsWorldEntryOBJ_LIFE() {}
/* 00130c78 000000ac */ gsWorldEntryBACK_SCALE() {}
/* 00130d28 0000005c */ gsWorldEntryBACK_TRANS() {}
/* 00130d88 00000048 */ gsWorldEntryBACK_COLOR() {}
/* 00130dd0 0000002c */ gsWorldEntryTransGV() {}
/* 00130e00 00000024 */ gsWorldEntryGV_AREA() {}
/* 00130e28 00000024 */ gsWorldEntryODV_AREA() {}
/* 00130e50 00000038 */ gsWorldEntryOBJ_ALPHA() {}
/* 00130e88 00000010 */ gsWorldEntryGND_ALPHA() {}
/* 00130e98 0000002c */ gsWorldEntryGND_COL() {}
/* 00130ec8 00000024 */ gsWorldEntryOBJ_REPLACE() {}
/* 00130ef0 00000044 */ gsWorldEntryOBJ_COLA_OFF() {}
/* 00130f38 00000024 */ gsWorldEntryOBJ_SCORE() {}
/* 00130f60 00000044 */ gsWorldEntryBACK_COLA_OFF() {}
/* 00130fa8 00000024 */ gsWorldSetGV_FLAG() {}
/* 00130fd0 00000028 */ gsWorldResetGV_FLAG() {}
/* 00130ff8 00000024 */ gsWorldSetODV_FLAG() {}
/* 00131020 00000028 */ gsWorldResetODV_FLAG() {}
/* 00131048 0000006c */ gsWorldCheckODV_OBJ_BREAK() {}
/* 001310b8 0000003c */ gsWorldInitOBJ_TREASURE() {}
/* 001310f8 00000024 */ gsWorldEntryOBJ_TREASURE() {}
/* 00131120 00000020 */ gsWorldEntryOBJ_TREASURE2() {}
/* 00131140 00000040 */ gsWorldCheckOBJ_TREASURE() {}
/* 00131180 00000084 */ gsWorldEntryOBJ_ODV_FLAG() {}
/* 00131208 000000f0 */ gsWorldEntryOBJ_CRASH() {}
/* 001312f8 000000ec */ gsWorldCrashOBJ_FLUSH() {}
/* 001313e8 000002ec */ static _gsWorldCrashOBJ() {}
/* 001316d8 00000618 */ gsWorldCrashOBJ() {}
/* 00131cf0 0000065c */ gsWorldCrashOBJ2() {}
/* 00132350 0000068c */ gsWorldCrashOBJ_GUN() {}
/* 001329e0 00000040 */ gsWorldCrashOBJ_SET_CH() {}
/* 00132a20 0000005c */ gsWorldInitMovieManager() {}
/* 00132a80 000003d8 */ gsWorldPlayMovie() {}
/* 00132e58 00000224 */ gsWorldCheckMovieSwitch() {}
/* 00133080 000002d4 */ gsWorldMovieManagement() {}

// *****************************************************************************
// FILE -- g_gun.c
// *****************************************************************************

/* 00133358 00000204 */ gsInitGunManager() {}
/* 00133560 00000088 */ gsInitGunManager_START_GAME() {}
/* 001335e8 00000094 */ gsInitGunManager_LOAD_GAME() {}
/* 00133680 0000014c */ gsGunClearManager() {}
/* 001337d0 000001f8 */ gsTriggerGun() {}
/* 001339c8 00000280 */ gsTriggerGuncon() {}
/* 00133c48 00000278 */ gsTriggerGuncon1() {}
/* 00133ec0 00000324 */ gsManagementGun() {}
/* 001341e8 00001148 */ gsSetGunBullet() {}
/* 00135330 00000138 */ gsGunSetBulletVector() {}
/* 00135468 000000c4 */ static gsGunSetExBomb_SHOCK() {}
/* 00135530 00000140 */ gsGunSetExBomb() {}
/* 00135670 00001d00 */ gsManagementGunBullet() {}
/* 00137370 000000d4 */ gsMngmntBullet_LINE_EFFECT() {}
/* 00137448 00000104 */ gsMngmntBullet_LINE_EFFECT2() {}
/* 00137550 000001c0 */ gsMngmntBullet_BULLET_TRANS() {}
/* 00137710 00000d44 */ gsMngmntBullet_LINE() {}
/* 00138458 00000714 */ gsMngmntBullet_RANGE() {}
/* 00138b70 00000148 */ gsMngmntBullet_LAND_EFFECT() {}
/* 00138cb8 00000338 */ gsMngmntBullet_HIT_LAND_EFFECT() {}
/* 00138ff0 000000ac */ gsMngmntBullet_HIT_ITEM_SHOCK() {}
/* 001390a0 00000b20 */ gsMngmntBullet_HIT() {}
/* 00139bc0 000002e4 */ gsGunRockOnTarget() {}
/* 00139ea8 000002dc */ gsGunAdjustBulletLine() {}
/* 0013a188 00000080 */ gsGunRockOnTarget_OFF() {}
/* 0013a208 0000004c */ gsGunAdjustBulletLine_GRENADE() {}
/* 0013a258 00000100 */ gsGunAdjustBulletLine_PINEAPPLE() {}
/* 0013a358 00000338 */ gsGunAdjustBulletLine_PINEAPPLE2() {}
/* 0013a690 00000014 */ gsGunAdjustBulletLine_BOWGUN() {}
/* 0013a6a8 0000046c */ gsGunAdjustBulletLine_BOWGUN2() {}
/* 0013ab18 000001c0 */ gsGunAdjustBulletLine_BOWGUN3() {}
/* 0013acd8 000000c8 */ gsGunBulletCheckEnd_BOWGUN() {}
/* 0013ada0 00000014 */ gsGunAdjustBulletLine_MINE() {}
/* 0013adb8 00000110 */ gsGunBulletCheckEnd_MINE() {}
/* 0013aec8 0000004c */ gsGunAdjustBulletLine_GAIZAR() {}
/* 0013af18 0000014c */ gsGunAdjustBulletLine_GAIZAR2() {}
/* 0013b068 00000178 */ gsGunAdjustBulletLine_FLAME() {}
/* 0013b1e0 000000c8 */ gsGunBulletCheckEnd_FLAME() {}
/* 0013b2a8 00000080 */ gsGunAdjustBulletLine_SPARK() {}
/* 0013b328 0000040c */ gsGunAdjustBulletLine_SPARK2() {}
/* 0013b738 0000012c */ gsGunAdjustBulletLine_SPARK3() {}
/* 0013b868 000000c8 */ gsGunBulletCheckEnd_SPARK() {}
/* 0013b930 00000090 */ gsGunCheckReload() {}
/* 0013b9c0 00000054 */ gsGunGetReloadBullet() {}
/* 0013ba18 000000d0 */ static _gsGunEntryGun() {}
/* 0013bae8 00000088 */ gsGunEntryGun() {}
/* 0013bb70 0000007c */ gsGunEntryGun_STRONG() {}
/* 0013bbf0 00000080 */ gsGunSpecial_STRONG() {}
/* 0013bc70 00000010 */ gsGunGetExtArmsTypeNo() {}
/* 0013bc80 0000005c */ gsGunPutTreasure() {}
/* 0013bce0 000003cc */ static _gsGunCrashObject() {}
/* 0013c0b0 0000003c */ gsGunCrashObject() {}
/* 0013c0f0 00000034 */ gsGunCrash_FLUSH_CH() {}
/* 0013c128 0000003c */ gsGunCrash_FLUSH_CH_ENE() {}
/* 0013c168 0000019c */ gsInitGunBulletModel() {}
/* 0013c308 000000c4 */ gsInitGunBullet() {}
/* 0013c3d0 00000154 */ gsSetBulletModel() {}
/* 0013c528 000003c4 */ gsSetBulletParam() {}
/* 0013c8f0 000000b0 */ gsGunPlaySE_FIRE() {}
/* 0013c9a0 0000004c */ gsGunPlaySE_LOAD_A() {}
/* 0013c9f0 0000004c */ gsGunPlaySE_LOAD_B() {}
/* 0013ca40 0000006c */ gsGunPlaySE_EMPTY() {}
/* 0013cab0 0000004c */ gsGunPlaySE_RELOAD_A() {}
/* 0013cb00 0000004c */ gsGunPlaySE_RELOAD_B() {}
/* 0013cb50 000000c0 */ gsGunYakkyo_ENTRY() {}
/* 0013cc10 000001a8 */ gsGunYakkyo_EXEC() {}
/* 0013cdb8 000002d8 */ gsGunPlaySE_FIRE_EXTRA() {}
/* 0013d090 00000050 */ gsGunStopEeSE_GUN() {}
/* 0013d0e0 0000009c */ gsGunCheckBombHit_CAMERA() {}
/* 0013d180 000000b4 */ gsGunPlaySE_FLY() {}
/* 0013d238 00000104 */ gsGunTuneVOLUME_FLY() {}
/* 0013d340 0000002c */ gsGunStopSE_FLY() {}
/* 0013d370 000001a8 */ gsGunPlaySE_BOMB() {}

// *****************************************************************************
// FILE -- g_shock.c
// *****************************************************************************

/* 0013d518 00000014 */ gsShockInit() {}
/* 0013d530 00000110 */ gsShockManagement() {}
/* 0013d640 00000008 */ static _us_get_port() {}
/* 0013d648 000000c8 */ gsShockSetSeqVel() {}
/* 0013d710 0000001c */ gsShockSetSeq() {}
/* 0013d730 00000044 */ gsShockSetSeqNo() {}
/* 0013d778 0000003c */ gsShockSetSeqNoVel() {}
/* 0013d7b8 00000008 */ gsShockSetEnable() {}
/* 0013d7c0 0000008c */ gsShockReset() {}

// *****************************************************************************
// FILE -- g_movie.c
// *****************************************************************************

/* 0013d850 00000740 */ gsMovie_Init() {}
/* 0013df90 00000050 */ gsMovie_SetSkipKey() {}
/* 0013dfe0 00000024 */ gsMovie_Play() {}
/* 0013e008 00000084 */ gsMovie_Exec() {}
/* 0013e090 00000068 */ gsMovie_End() {}
/* 0013e0f8 0000005c */ gsMovie_SetStartCol() {}
/* 0013e158 0000005c */ gsMovie_SetEndCol() {}
/* 0013e1b8 00000134 */ MpegFunc() {}
/* 0013e2f0 000000b8 */ movieTest_init() {}
/* 0013e3a8 00000024 */ movieTest_end() {}
/* 0013e3d0 000001f4 */ movieTest() {}

// *****************************************************************************
// FILE -- g_instpacket.c
// *****************************************************************************

/* 0013e5c8 0000005c */ GFSetpkt_MakeInstance() {}
/* 0013e628 0000000c */ GFSetpkt_SetPacket0() {}
/* 0013e638 0000000c */ GFSetpkt_SetPacket1() {}
/* 0013e648 00000020 */ GFSetpkt_SetPacket() {}
/* 0013e668 00000008 */ GFSetpkt_SetRefInst() {}
/* 0013e670 0000001c */ GFSetpkt_Eval() {}
/* 0013e690 00000044 */ GFSetpkt_Draw() {}
/* 0013e6d8 0000005c */ GFDrawenv_MakeInstance() {}
/* 0013e738 00000008 */ GFDrawenv_SetDb() {}
/* 0013e740 00000008 */ GFDrawenv_SetClearZ() {}
/* 0013e748 00000008 */ GFDrawenv_SetClearRGB() {}
/* 0013e750 00000290 */ GFDrawenv_Draw() {}

// *****************************************************************************
// FILE -- g_kyousei.c
// *****************************************************************************

/* 0013e9e0 00000040 */ gsKMInit() {}
/* 0013ea20 000000c0 */ static InterpolateVector() {}
/* 0013eae0 00000450 */ gsKyouseiMove() {}

// *****************************************************************************
// FILE -- g_shocktest.c
// *****************************************************************************

/* 0013ef30 0000002c */ G_SHOCKTEST_Init() {}
/* 0013ef60 00000114 */ G_SHOCKTEST_Exec() {}
/* 0013f078 00000038 */ G_SHOCKTEST_End() {}

// *****************************************************************************
// FILE -- g_world/brk.c
// *****************************************************************************

/* 0013f0b0 00000184 */ gsWorldBreak_00() {}
/* 0013f238 000003fc */ gsWorldBreak_01() {}
/* 0013f638 00000388 */ gsWorldBreak_02() {}
/* 0013f9c0 00000428 */ gsWorldBreak_03() {}
/* 0013fde8 000005a8 */ gsWorldBreak_04() {}
/* 00140390 00000324 */ gsWorldBreak_05() {}
/* 001406b8 00000588 */ gsWorldBreak_07() {}
/* 00140c40 00000668 */ gsWorldBreak_09() {}
/* 001412a8 00000588 */ gsWorldBreak_10() {}
/* 00141830 0000064c */ gsWorldBreak_11() {}
/* 00141e80 00000524 */ gsWorldBreak_12() {}
/* 001423a8 00000544 */ gsWorldBreak_13() {}
/* 001428f0 000004f0 */ gsWorldBreak_14() {}
/* 00142de0 00000430 */ gsWorldBreak_15() {}
/* 00143210 000002f4 */ gsWorldBreak_16() {}

// *****************************************************************************
// FILE -- g_world/st2.c
// *****************************************************************************

/* 00143508 0000368c */ gsWorldInitSt2() {}
/* 00146b98 000006bc */ gsWorldSt2EntryTex_GND() {}
/* 00147258 00000184 */ gsWorldSt2_SpecialEffect() {}
/* 001473e0 000000e0 */ gsWorldSt2_SpecialEffect2() {}
/* 001474c0 0000007c */ gsWorldSt2_Komorebi() {}
/* 00147540 00000174 */ _gsWorldSt2_Wind() {}
/* 001476b8 000001b8 */ gsWorldSt2_Wind() {}
/* 00147870 0000008c */ gsWorldSt2_River() {}
/* 00147900 00000110 */ gsWorldSt2_InitLight() {}
/* 00147a10 000002f8 */ gsWorldSt2_Light() {}
/* 00147d08 0000037c */ gsWorldSt2_dokubana() {}
/* 00148088 000000c8 */ gsWorldBulletEffectGnd_ST2() {}
/* 00148150 00000008 */ gsWorldSt2_InitRapt() {}
/* 00148158 00000020 */ gsWorldSt2_MotiveRapt() {}
/* 00148178 00000058 */ gsWorldSt2_CheckRaptEnd() {}
/* 001481d0 000000a0 */ gsWorldSt2_CheckBossDied() {}
/* 00148270 00000028 */ gsWorldSt2_InitBackSE() {}
/* 00148298 00000554 */ gsWorldSt2_PlayBackSE() {}
/* 001487f0 000000b0 */ gsWorldSt2_TexScroll() {}
/* 001488a0 00000124 */ gsWorldSt2_SkyScale() {}

// *****************************************************************************
// FILE -- g_world/st3.c
// *****************************************************************************

/* 001489c8 00004868 */ gsWorldInitSt3() {}
/* 0014d230 00000c94 */ gsWorldSt3EntryTex_GND() {}
/* 0014dec8 000000ec */ gsWorldSt3_SpecialEffect() {}
/* 0014dfb8 00000064 */ gsWorldSt3_SpecialEffect2() {}
/* 0014e020 00000050 */ gsWorldSt3_BoatInit() {}
/* 0014e070 00000750 */ gsWorldSt3_Boat() {}
/* 0014e7c0 000001c4 */ gsWorldSt3_BoatDirection() {}
/* 0014e988 00000120 */ gsWorldSt3_InitLight() {}
/* 0014eaa8 000003f8 */ gsWorldSt3_Light() {}
/* 0014eea0 0000000c */ gsWorldSt3_InitIwa() {}
/* 0014eeb0 00000020 */ gsWorldSt3_EntryIwa() {}
/* 0014eed0 0000003c */ gsWorldSt3_EntryIwaObj() {}
/* 0014ef10 000006e8 */ gsWorldSt3_Iwa() {}
/* 0014f5f8 000002f8 */ gsWorldSt3_IwaDamage() {}
/* 0014f8f0 000000e4 */ gsWorldSt3_IwaGunHit() {}
/* 0014f9d8 000000e4 */ gsWorldSt3_IwaGunHit_RANGE() {}
/* 0014fac0 000001c8 */ gsWorldSt3_IwaBreak() {}
/* 0014fc88 00000008 */ gsWorldSt3_InitSplash() {}
/* 0014fc90 00000020 */ gsWorldSt3_EntrySplash() {}
/* 0014fcb0 000002f4 */ gsWorldSt3_IwaWater() {}
/* 0014ffa8 00000008 */ gsWorldSt3_InitKoiwa() {}
/* 0014ffb0 00000020 */ gsWorldSt3_EntryKoiwa() {}
/* 0014ffd0 00000404 */ gsWorldSt3_Koiwa() {}
/* 001503d8 00000268 */ gsWorldSt3_SkyScale() {}
/* 00150640 000001e8 */ gsWorldSt3_HikariFade() {}
/* 00150828 000000c8 */ gsWorldBulletEffectGnd_ST3() {}
/* 001508f0 00000054 */ gsWorldSt3_InitDinoCollWater() {}
/* 00150948 000000c4 */ static _gsWorldSt3_DinoCollWater() {}
/* 00150a10 00000110 */ static _st3_DinoCollWater_CRN() {}
/* 00150b20 000000e8 */ static _st3_DinoCollWater_PTR() {}
/* 00150c08 000001ec */ static _st3_DinoCollWater_PRS() {}
/* 00150df8 00000190 */ gsWorldSt3_DinoCollWater() {}
/* 00150f88 00000010 */ gsWorldSt3_initBossDied() {}
/* 00150f98 00000010 */ gsWorldSt3_EntryBossDied() {}
/* 00150fa8 00000058 */ gsWorldSt3_CheckBossDied() {}
/* 00151000 00000014 */ gsWorldSt3_InitBackSE() {}
/* 00151018 000000c8 */ gsWorldSt3_PlayBackSE() {}
/* 001510e0 000000b0 */ gsWorldSt3_TexScroll() {}
/* 00151190 00000010 */ gsWorldSt3_Demo0_Init() {}
/* 001511a0 00000028 */ gsWorldSt3_Demo0_Request() {}
/* 001511c8 00000188 */ gsWorldSt3_Demo0_Exec() {}
/* 00151350 00000068 */ gsWorldSt3_ObjSort() {}

// *****************************************************************************
// FILE -- g_world/st3wave.c
// *****************************************************************************

/* 001513b8 000002b4 */ gsWaveScrollX() {}
/* 00151670 000003ac */ gsWaveScrollZ() {}
/* 00151a20 00000354 */ gsWaveMovePos() {}
/* 00151d78 0000000c */ gsWaveSetScroll() {}
/* 00151d88 00000374 */ gsWaveInit() {}
/* 00152100 00000304 */ gsWaveCalc() {}
/* 00152408 0000029c */ gsMoveWave() {}
/* 001526a8 000000c8 */ gsWaveMakeScrollWave() {}
/* 00152770 00000008 */ gsWaveSetWaveSize() {}
/* 00152778 00000250 */ gsWaveGetHeight() {}
/* 001529c8 0000003c */ gsSetRefTex() {}
/* 00152a08 00000054 */ gsWaveAvoidInit() {}
/* 00152a60 00000060 */ gsWaveAvoidEnd() {}
/* 00152ac0 00000058 */ _gsWaveHandler() {}
/* 00152b18 00000010 */ gsWaveAvoidSetStart() {}
/* 00152b28 0000002c */ gsWaveAvoidSetEnd() {}
/* 00152b58 000001a4 */ static _gsWaveCollisionWater() {}
/* 00152d00 00000380 */ gsWaveCollisionWater() {}
/* 00153080 00000008 */ printVector() {}
/* 00153088 000000e8 */ gsWaveMakeWave() {}
/* 00153170 0000005c */ GFWave_MakeInstance() {}
/* 001531d0 000003d0 */ GFWave_Draw() {}
/* 001535a0 00000078 */ gsSt3WaveChange() {}
/* 00153618 00000010 */ gsWave_ChgColStart() {}
/* 00153628 000000e0 */ gsWave_ChgColExec() {}
/* 00153708 00000028 */ static gsWave_ChgColInit() {}

// *****************************************************************************
// FILE -- g_world/st4.c
// *****************************************************************************

/* 00153730 00001af0 */ gsWorldInitSt4() {}
/* 00155220 00000034 */ gsWorldSt4_SpecialEffect() {}
/* 00155258 00000088 */ gsWorldSt4_SpecialEffect2() {}
/* 001552e0 00000048 */ gsWorldSt4_InitAirRotation() {}
/* 00155328 000002c8 */ gsWorldSt4_AirWingrotation() {}
/* 001555f0 000002b0 */ gsWorldSt4_Ss_PointSet() {}
/* 001558a0 000001c4 */ gsWorldSt4_SandStorm() {}

// *****************************************************************************
// FILE -- g_world/st5.c
// *****************************************************************************

/* 00155a68 00001b48 */ gsWorldInitSt5() {}
/* 001575b0 00000014 */ gsWorldSt5_SpecialEffect() {}
/* 001575c8 0000007c */ gsWorldSt5_SpecialEffect2() {}
/* 00157648 000000a0 */ gsWorldSt5_CheckBossDied() {}

// *****************************************************************************
// FILE -- g_world/st7.c
// *****************************************************************************

/* 001576e8 0000d130 */ gsWorldInitSt7() {}
/* 00164818 00000bb0 */ gsWorldSt7EntryTex_GND() {}
/* 001653c8 0000016c */ gsWorldSt7_SpecialEffect() {}
/* 00165538 00000048 */ gsWorldSt7_SpecialEffect2() {}
/* 00165580 00000094 */ gsWorldSt7_ClearPointLight() {}
/* 00165618 0000029c */ gsWorldSt7_FlushPointLight() {}
/* 001658b8 00000008 */ gsWorldSt7_InitJeepLight() {}
/* 001658c0 00000020 */ gsWorldSt7_EntryJeepLight() {}
/* 001658e0 000001fc */ static _st7_jeep_light_calc() {}
/* 00165ae0 0000058c */ gsWorldSt7_JeepLight() {}
/* 00166070 00000104 */ static _gsWorldSt7_Loop() {}
/* 00166178 0000014c */ gsWorldSt7_Loop() {}
/* 001662c8 0000002c */ gsWorldSt7_JeepInit() {}
/* 001662f8 000001d4 */ gsWorldSt7_Jeep() {}
/* 001664d0 00000250 */ gsWorldSt7_JeepDirection() {}
/* 00166720 00000244 */ gsWorldSt7_GaitoLight() {}
/* 00166968 00000118 */ gsWorldSt7_JeepCrash() {}
/* 00166a80 00000008 */ gsWorldSt7_InitGlow() {}
/* 00166a88 00000020 */ gsWorldSt7_EntryGlow() {}
/* 00166aa8 000000cc */ gsWorldSt7_Glow() {}
/* 00166b78 00000234 */ gsWorldSt7_Neon_Emb() {}
/* 00166db0 00000234 */ gsWorldSt7_Neon_Sca() {}
/* 00166fe8 00000008 */ gsWorldSt7_InitNeon_00() {}
/* 00166ff0 00000020 */ gsWorldSt7_EntryNeon_00() {}
/* 00167010 00000270 */ gsWorldSt7_Neon_00() {}
/* 00167280 00000008 */ gsWorldSt7_InitNeon_01() {}
/* 00167288 00000020 */ gsWorldSt7_EntryNeon_01() {}
/* 001672a8 00000674 */ gsWorldSt7_Neon_01() {}
/* 00167920 00000088 */ gsWorldSt7_Neon_Scroll() {}
/* 001679a8 000000fc */ gsWorldSt7_TV_Storm() {}
/* 00167aa8 00000008 */ gsWorldSt7_InitHasiLight() {}
/* 00167ab0 00000020 */ gsWorldSt7_EntryHasiLight() {}
/* 00167ad0 000001bc */ gsWorldSt7_HasiLight() {}
/* 00167c90 000005f4 */ gsWorldSt7_Fire() {}
/* 00168288 00000040 */ gsWorldSt7_InitFireLight() {}
/* 001682c8 00000020 */ gsWorldSt7_EntryFireLightObj() {}
/* 001682e8 0000003c */ gsWorldSt7_EntryFireLight() {}
/* 00168328 000004d0 */ static _gsWorldSt7_FireLight() {}
/* 001687f8 000005a8 */ gsWorldSt7_FireLight() {}
/* 00168da0 0000021c */ gsWorldSt7_InitTrikera() {}
/* 00168fc0 00000158 */ gsWorldSt7_Trikera() {}
/* 00169118 000007a4 */ gsWorldSt7_GetTrikeraVector() {}
/* 001698c0 000003bc */ gsWorldSt7_BrowDoram() {}
/* 00169c80 000000d4 */ gsWorldSt7_BrowDoramGunHit() {}
/* 00169d58 000000dc */ gsWorldSt7_BrowDoramGunHit_RANGE() {}
/* 00169e38 00000194 */ gsWorldSt7_BrowDoramBreak() {}
/* 00169fd0 000002e8 */ gsWorldSt7_BrowDoramDamage() {}
/* 0016a2b8 000000f0 */ static _gsWorldSt7_TrexHeadColl() {}
/* 0016a3a8 00000074 */ gsWorldSt7_TrexHeadColl() {}
/* 0016a420 00000008 */ gsWorldSt7_InitDinoLight() {}
/* 0016a428 00000050 */ gsWorldSt7_EntryDinoLight() {}
/* 0016a478 00000498 */ static _gsWorldSt7_DinoLight() {}
/* 0016a910 00000100 */ gsWorldSt7_DinoLight() {}
/* 0016aa10 00000074 */ gsWorldSt7_ObjSort_EXT() {}
/* 0016aa88 00000068 */ gsWorldSt7_ObjSort_EXT2() {}
/* 0016aaf0 00000450 */ gsWorldSt7_Frea() {}
/* 0016af40 000006bc */ gsWorldSt7_Kanban() {}
/* 0016b600 00000070 */ gsWorldSt7_CheckBossDied_CALNO() {}
/* 0016b670 0000008c */ gsWorldSt7_CheckBossDied_TREX() {}
/* 0016b700 00000028 */ gsWorldSt7_InitBackSE() {}
/* 0016b728 00000418 */ gsWorldSt7_PlayBackSE() {}
/* 0016bb40 00000160 */ gsWorldSt7_FarAdjust() {}

// *****************************************************************************
// FILE -- g_world/st7_demo.c
// *****************************************************************************

/* 0016bca0 00000044 */ gsWorldSt7_InitDemo() {}
/* 0016bce8 00000220 */ gsWorldSt7_TriggerDemo() {}
/* 0016bf08 000000ec */ gsWorldSt7_Demo() {}
/* 0016bff8 00000214 */ gsWorldSt7_Demo_0() {}
/* 0016c210 000000f4 */ gsWorldSt7_Demo_1() {}
/* 0016c308 00000164 */ gsWorldSt7_Demo_2() {}
/* 0016c470 000000c8 */ gsWorldSt7_Demo_3() {}
/* 0016c538 00000160 */ gsWorldSt7_Demo_4() {}
/* 0016c698 00000168 */ gsWorldSt7_Demo_5() {}

// *****************************************************************************
// FILE -- g_world/st8.c
// *****************************************************************************

/* 0016c800 000020e8 */ gsWorldInitSt8() {}
/* 0016e8e8 000000a8 */ gsWorldSt8_SpecialEffect() {}
/* 0016e990 000000cc */ gsWorldSt8_SpecialEffect2() {}
/* 0016ea60 00000284 */ gsWorldSt8_CirLight_GND() {}
/* 0016ece8 00000034 */ gsWorldSt8_InitCircleLight() {}
/* 0016ed20 00000038 */ gsWorldSt8_EntryCircleLight() {}
/* 0016ed58 00000874 */ gsWorldSt8_CircleLight() {}
/* 0016f5d0 00000098 */ gsWorldSt8_StoneLine() {}
/* 0016f668 0000008c */ gsWorldSt8_SetBackCOLA() {}
/* 0016f6f8 0000007c */ gsWorldSt8_ObjSort_Half() {}
/* 0016f778 00000068 */ gsWorldSt8_KakiTrans() {}
/* 0016f7e0 0000009c */ gsWorldSt8_CheckBossDied() {}
/* 0016f880 00000014 */ gsWorldSt8_Demo0_Init() {}
/* 0016f898 00000034 */ gsWorldSt8_Demo0_Request() {}
/* 0016f8d0 00000178 */ static _st8_demo0_GetTriPos() {}
/* 0016fa48 000001fc */ static _st8_demo0_SetEffect() {}
/* 0016fc48 00000130 */ static _st8_demo0_SetSound() {}
/* 0016fd78 00000078 */ static _st8_demo0_CamVector() {}
/* 0016fdf0 0000006c */ gsWorldSt8_Demo0_CallEnd() {}
/* 0016fe60 00000584 */ gsWorldSt8_Demo0_Exec() {}

// *****************************************************************************
// FILE -- g_world/st7test.c
// *****************************************************************************

/* 001703e8 00000de0 */ gsWorldInitSt7Test() {}
/* 001711c8 00000364 */ gsWorldSt7Test_SpecialEffect() {}
/* 00171530 00000090 */ gsWorldSt7Test_SpecialEffect2() {}
/* 001715c0 00000088 */ gsWorldSt7Test_Neon_00() {}
/* 00171648 0000007c */ gsWorldSt7Test_Neon_01() {}
/* 001716c8 000000d4 */ gsWorldSt7Test_Neon_02() {}
/* 001717a0 00000084 */ gsWorldSt7Test_Neon_10() {}

// *****************************************************************************
// FILE -- g_world/st1.c
// *****************************************************************************

/* 00171828 00000d04 */ gsWorldInitSt1() {}
/* 00172530 00000038 */ gsSt1WorkClear() {}
/* 00172568 00000020 */ gsSt1SwingInit() {}
/* 00172588 00000090 */ gsWorldSt1_SpecialEffect() {}
/* 00172618 000000bc */ gsWorldSt1_SpecialEffect2() {}
/* 001726d8 0000046c */ gsSt1_TimerManagement() {}
/* 00172b48 00000054 */ gsSt1_BgmFadeOut() {}
/* 00172ba0 000000b8 */ gsSt1_GndScroll() {}
/* 00172c58 00000140 */ gsSt1_PreInTheArea2() {}
/* 00172d98 00000328 */ gsSt1_PreInTheArea3() {}
/* 001730c0 00000064 */ gsSt1_AprocGND() {}
/* 00173128 0000029c */ gsSt1_AtCameraManager() {}
/* 001733c8 00000474 */ gsSt1LenflareInit() {}
/* 00173840 000001e4 */ gsSt1LensflareManagement() {}
/* 00173a28 0000007c */ gsSt1LensflareDelete() {}

// *****************************************************************************
// FILE -- g_world/st9.c
// *****************************************************************************

/* 00173aa8 00001c44 */ gsWorldInitSt9() {}
/* 001756f0 00000010 */ gsWorldSt9_WorkInit() {}
/* 00175700 00000080 */ gsWorldSt9_SpecialEffect() {}
/* 00175780 000000ac */ gsWorldSt9_SpecialEffect2() {}
/* 00175830 00000238 */ gsWorldSt9_TREX_Light() {}
/* 00175a68 0000009c */ gsWorldSt9_LavaAnimation() {}
/* 00175b08 00000158 */ gsSt9_SelectLavaPoint() {}
/* 00175c60 00000110 */ gsSt9_LavaSpout() {}
/* 00175d70 000000cc */ gsSt9_MiragePointRand() {}
/* 00175e40 000001b0 */ gsSt9_SetMirage() {}
/* 00175ff0 0000000c */ gsWorldSt9_InitBackSE() {}
/* 00176000 000002ac */ gsWorldSt9_PlayBackSE() {}
/* 001762b0 000000cc */ gsSt9Demo_Cancel() {}
/* 00176380 00000124 */ gsWorldSt9Demo_LavaRise() {}
/* 001764a8 00000260 */ gsWorldSt9Demo_FogBackChange() {}
/* 00176708 00000150 */ gsSt9Demo_ClutAnimation() {}
/* 00176858 00000044 */ ClutCopyBuf() {}
/* 001768a0 000001d0 */ gsCultAnimation() {}
/* 00176a70 00000414 */ gsSt9_RockCrossTREX() {}
/* 00176e88 000001a0 */ gsWorldSt9_IwaBreak() {}
/* 00177028 0000009c */ gsWorldSt9_CheckBossDied() {}
/* 001770c8 00000114 */ static _gsWorldSt9_RockBreakTREX() {}
/* 001771e0 00000074 */ gsWorldSt9_RockBreakTREX() {}

// *****************************************************************************
// FILE -- g_world/st9_demo.c
// *****************************************************************************

/* 00177258 00000020 */ gsWorldST9_DemoInit() {}
/* 00177278 00000034 */ gsWorldSt9_DemoManager() {}
/* 001772b0 00000634 */ gsWorldSt9_Demo() {}
/* 001778e8 0000002c */ gsSt9Demo_EndChack() {}
/* 00177918 000000d8 */ gsSt9Demo_ChancelCheck() {}
/* 001779f0 000001f0 */ gsSt9Demo_CameraWorkManagement() {}
/* 00177be0 00000068 */ gsSt9DemoCW_GetVector() {}
/* 00177c48 000000a0 */ gsSt9DemoCW_RolLookPoint() {}

// *****************************************************************************
// FILE -- benjamin/g_ik.c
// *****************************************************************************

/* 0017c5f8 00000050 */ gsIKinit() {}
/* 0017c648 000000c8 */ gsIKinitOne() {}
/* 0017c710 00000008 */ gsIKprocHead() {}
/* 0017c718 00000208 */ gsIKproc() {}
/* 0017c920 000000c0 */ gsIK_UpdateData() {}
/* 0017c9e0 00000078 */ gsIK_ResetInfo() {}
/* 0017ca58 00000054 */ gsIK_SetHit() {}
/* 0017cab0 00000070 */ static _gsIK_HeadStare() {}
/* 0017cb20 00000044 */ static _gsIK_FootMoveL() {}
/* 0017cb68 00000044 */ static _gsIK_FootMoveR() {}
/* 0017cbb0 00000038 */ static _gsIK_TailSwing() {}
/* 0017cbe8 0000007c */ static _gsIK_HitProc() {}
/* 0017cc68 00000044 */ static _gsIK_AdjustDeadPose() {}
/* 0017ccb0 00000208 */ gsIK_RotDeadBody() {}
/* 0017ceb8 00000034 */ gsIK_RecoverBodyRotXZ() {}
/* 0017cef0 0000009c */ static _gsIK_GetCross() {}
/* 0017cf90 00000130 */ static _gsIK_GetCollision() {}
/* 0017d0c0 0000004c */ static _gsIK_setShapeFlag() {}
/* 0017d110 0000004c */ static _gsIK_clearShapeFlag() {}
/* 0017d160 000000c8 */ static _gsIK_RecordTailPos() {}
/* 0017d228 00000088 */ static _gsIK_CheckDisplay() {}
/* 0017d2b0 00000094 */ static _gsIK_GetEnemyAngle() {}
/* 0017d348 00000040 */ benjaminRand() {}
/* 0017d388 00000038 */ benjaminRandRange() {}

// *****************************************************************************
// FILE -- benjamin/g_ik_sub.c
// *****************************************************************************

/* 00177ce8 0000003c */ static _gsIK_InitDataHead() {}
/* 00177d28 000001d4 */ static _gsIK_HeadStareSub() {}
/* 00177f00 000001fc */ static _gsIK_HeadStareSub2() {}
/* 00178100 0000010c */ static _gsIK_HeadInterpolateSub() {}
/* 00178210 000001a8 */ static _gsIK_FootEffectSub() {}
/* 001783b8 00000174 */ static _gsIK_FootMoveSubOneCollide() {}
/* 00178530 000000e8 */ static _gsIK_TailSwingSub() {}
/* 00178618 000000c8 */ static _gsIK_TailInterpolateSub() {}
/* 001786e0 00000160 */ static _gsIK_ResetHeadInfoSub() {}
/* 00178840 00000110 */ static _gsIK_ResetTailInfoSub() {}
/* 00178950 00000024 */ static _gsIK_ResetHitInfoSub() {}
/* 00178978 00000208 */ static _gsIK_HeadHitSub() {}
/* 00178b80 00000240 */ static _gsIK_ArmHitSub() {}
/* 00178dc0 00000208 */ static _gsIK_TailHitSub() {}
/* 00178fc8 000000a0 */ static _gsIK_RecoverBodyRotXZSub() {}

// *****************************************************************************
// FILE -- benjamin/ik_rapb.c
// *****************************************************************************

/* 00179068 00000040 */ static _gsIK_RaptInit() {}
/* 001790a8 00000070 */ static _gsIK_RaptUpdateData() {}
/* 00179118 000000d0 */ static _gsIK_RaptResetInfo() {}
/* 001791e8 000000fc */ static _gsIK_RaptHeadStare() {}
/* 001792e8 000000f4 */ static _gsIK_RaptFootMoveL() {}
/* 001793e0 000000f4 */ static _gsIK_RaptFootMoveR() {}
/* 001794d8 000000b8 */ static _gsIK_RaptTailSwing() {}
/* 00179590 00000034 */ static _gsIK_RaptSetHit() {}
/* 001795c8 000000f0 */ static _gsIK_RaptHit() {}
/* 001796b8 000000d4 */ static _gsIK_RaptHeadHitPos() {}
/* 00179790 00000048 */ static _gsIK_RaptHeadHit() {}
/* 001797d8 000000e0 */ static _gsIK_RaptLArmHitPos() {}
/* 001798b8 00000050 */ static _gsIK_RaptArmHitL() {}
/* 00179908 000000e0 */ static _gsIK_RaptRArmHitPos() {}
/* 001799e8 00000050 */ static _gsIK_RaptArmHitR() {}
/* 00179a38 000000a0 */ static _gsIK_RaptTailHitPos() {}
/* 00179ad8 00000044 */ static _gsIK_RaptTailHit() {}
/* 00179b20 000002a8 */ static _gsIK_RaptDeadPose() {}

// *****************************************************************************
// FILE -- benjamin/ik_comp.c
// *****************************************************************************

/* 00179dc8 00000030 */ static _gsIK_CompInit() {}
/* 00179df8 0000004c */ static _gsIK_CompUpdateData() {}
/* 00179e48 00000090 */ static _gsIK_CompResetInfo() {}
/* 00179ed8 000000fc */ static _gsIK_CompHeadStare() {}
/* 00179fd8 00000044 */ static _gsIK_CompFootMoveL() {}
/* 0017a020 00000044 */ static _gsIK_CompFootMoveR() {}
/* 0017a068 00000034 */ static _gsIK_CompSetHit() {}

// *****************************************************************************
// FILE -- benjamin/ik_trkr.c
// *****************************************************************************

/* 0017a0a0 00000030 */ static _gsIK_TrkrInit() {}
/* 0017a0d0 00000040 */ static _gsIK_TrkrUpdateData() {}
/* 0017a110 000000b0 */ static _gsIK_TrkrResetInfo() {}
/* 0017a1c0 000000fc */ static _gsIK_TrkrHeadStare() {}
/* 0017a2c0 000000e0 */ static _gsIK_TrkrFootMoveL() {}
/* 0017a3a0 000000e0 */ static _gsIK_TrkrFootMoveR() {}
/* 0017a480 000000b8 */ static _gsIK_TrkrTailSwing() {}
/* 0017a538 00000034 */ static _gsIK_TrkrSetHit() {}
/* 0017a570 00000100 */ static _gsIK_TrkrHit() {}
/* 0017a670 000000c8 */ static _gsIK_TrkrHeadHitPos() {}
/* 0017a738 00000048 */ static _gsIK_TrkrHeadHit() {}
/* 0017a780 000000a0 */ static _gsIK_TrkrTailHitPos() {}
/* 0017a820 00000044 */ static _gsIK_TrkrTailHit() {}

// *****************************************************************************
// FILE -- benjamin/ik_trex.c
// *****************************************************************************

/* 0017a868 00000098 */ static _gsIK_TrexInit() {}
/* 0017a900 00000094 */ static _gsIK_TrexUpdateData() {}
/* 0017a998 000000d0 */ static _gsIK_TrexResetInfo() {}
/* 0017aa68 000001c8 */ static _gsIK_TrexHeadStare() {}
/* 0017ac30 000002bc */ static _gsIK_TrexFootMoveL() {}
/* 0017aef0 0000031c */ static _gsIK_TrexFootMoveR() {}
/* 0017b210 000000b8 */ static _gsIK_TrexTailSwing() {}
/* 0017b2c8 00000034 */ static _gsIK_TrexSetHit() {}
/* 0017b300 000000f0 */ static _gsIK_TrexHit() {}
/* 0017b3f0 00000108 */ static _gsIK_TrexHeadHitPos() {}
/* 0017b4f8 00000048 */ static _gsIK_TrexHeadHit() {}
/* 0017b540 000000e0 */ static _gsIK_TrexLArmHitPos() {}
/* 0017b620 00000084 */ static _gsIK_TrexArmHitL() {}
/* 0017b6a8 000000e0 */ static _gsIK_TrexRArmHitPos() {}
/* 0017b788 00000084 */ static _gsIK_TrexArmHitR() {}
/* 0017b810 000000a0 */ static _gsIK_TrexTailHitPos() {}
/* 0017b8b0 00000044 */ static _gsIK_TrexTailHit() {}

// *****************************************************************************
// FILE -- benjamin/ik_pteb.c
// *****************************************************************************

/* 0017b8f8 00000018 */ static _gsIK_PtebInit() {}
/* 0017b910 00000054 */ static _gsIK_PtebResetInfo() {}
/* 0017b968 00000168 */ static _gsIK_PtebHeadStare() {}
/* 0017bad0 00000034 */ static _gsIK_PtebSetHit() {}
/* 0017bb08 00000080 */ static _gsIK_PtebHit() {}
/* 0017bb88 000000d0 */ static _gsIK_PtebHeadHitPos() {}
/* 0017bc58 00000060 */ static _gsIK_PtebHeadHit() {}
/* 0017bcb8 000000e0 */ static _gsIK_PtebLArmHitPos() {}
/* 0017bd98 00000050 */ static _gsIK_PtebArmHitL() {}
/* 0017bde8 000000e0 */ static _gsIK_PtebRArmHitPos() {}
/* 0017bec8 00000050 */ static _gsIK_PtebArmHitR() {}

// *****************************************************************************
// FILE -- benjamin/ik_prso.c
// *****************************************************************************

/* 0017bf18 00000018 */ static _gsIK_PrsoInit() {}
/* 0017bf30 00000094 */ static _gsIK_PrsoResetInfo() {}
/* 0017bfc8 00000034 */ static _gsIK_PrsoSetHit() {}
/* 0017c000 00000434 */ static _gsIK_PrsoHeadStare() {}

// *****************************************************************************
// FILE -- benjamin/ik_crn.c
// *****************************************************************************

/* 0017c438 00000018 */ static _gsIK_CrnInit() {}
/* 0017c450 00000070 */ static _gsIK_CrnResetInfo() {}
/* 0017c4c0 00000034 */ static _gsIK_CrnSetHit() {}
/* 0017c4f8 000000fc */ static _gsIK_CrnHeadStare() {}

// *****************************************************************************
// FILE -- benjamin/kinematics.c
// *****************************************************************************

/* 0017d3c0 00000314 */ IK_ComputeJoint() {}
/* 0017d6d8 00000100 */ IK_JoinNullShape() {}
/* 0017d7d8 00000088 */ IK_CutNullShape() {}
/* 0017d860 00000178 */ IK_Matrix2Euler() {}
/* 0017d9d8 00000078 */ IK_OpenPmtAnimation() {}
/* 0017da50 00000028 */ static ik_VectorSquareDistance() {}
/* 0017da78 0000002c */ static ik_ApplyMatrix() {}
/* 0017daa8 0000017c */ static ik_AxisAngle2Matrix() {}
/* 0017dc28 0000043c */ static ik_CheckRotateRestriction() {}
/* 0017e068 00000054 */ static ik_UpdateMatrix() {}
/* 0017e0c0 00000070 */ static ik_OffPmtAnimation() {}
/* 0017e130 000001b8 */ IK_Interpolate2Anim() {}
/* 0017e2e8 00000194 */ IK_Interpolate2IK() {}
/* 0017e480 00000178 */ static ik_MakeInterpolateMatrix() {}
/* 0017e5f8 00000280 */ IK_ComputeOneJoint() {}
/* 0017e878 00000230 */ IK_ComputeNullJoint() {}

// *****************************************************************************
// FILE -- benjamin/track.c
// *****************************************************************************

/* 0017eaa8 000003d8 */ GFTrack_Update() {}
/* 0017ee80 00000028 */ GFTrack_MallocMemory() {}
/* 0017eea8 0000004c */ GFTrack_Lifeless() {}
/* 0017eef8 0000004c */ GFTrack_SetTextureID() {}
/* 0017ef48 00000008 */ GFTrack_GetTextureID() {}
/* 0017ef50 000000a0 */ GFTrack_SetStartRGBA() {}
/* 0017eff0 000000a0 */ GFTrack_SetEndRGBA() {}
/* 0017f090 0000004c */ GFTrack_SetStartST() {}
/* 0017f0e0 0000004c */ GFTrack_SetEndST() {}
/* 0017f130 0000004c */ GFTrack_SetStartPos() {}
/* 0017f180 000000c4 */ GFTrack_InitStartPos() {}
/* 0017f248 00000010 */ GFTrack_AddFlag() {}
/* 0017f258 00000014 */ GFTrack_EraseFlag() {}
/* 0017f270 00000490 */ static GFTrack_Draw() {}
/* 0017f700 00000008 */ static GFTrack_Eval() {}
/* 0017f708 00000054 */ GFTrack_MakeInstance() {}
/* 0017f760 00000010 */ GFTrack_OffInstance() {}

// *****************************************************************************
// FILE -- benjamin/g_track.c
// *****************************************************************************

/* 0017f770 00000048 */ gsTrackMicroInit() {}
/* 0017f7b8 00000130 */ static gsTrackInit() {}
/* 0017f8e8 000000b8 */ static gsTrackInitOne() {}
/* 0017f9a0 0000014c */ gsTrackProc() {}
/* 0017faf0 0000007c */ static gsTrackTailPos() {}
/* 0017fb70 00000108 */ gsTrackStart() {}

// *****************************************************************************
// FILE -- benjamin/flare.c
// *****************************************************************************

/* 0017fc78 00000050 */ GFFlare_Update() {}
/* 0017fcc8 00000018 */ GFFlare_SetStartPos() {}
/* 0017fce0 00000018 */ GFFlare_SetEndPos() {}
/* 0017fcf8 00000008 */ GFFlare_SetColorRate() {}
/* 0017fd00 00000050 */ GFFlare_SetTextureID() {}
/* 0017fd50 00000008 */ GFFlare_SetPosScale() {}
/* 0017fd58 00000008 */ GFFlare_SetSize() {}
/* 0017fd60 00000008 */ GFFlare_SetSibling() {}
/* 0017fd68 00000038 */ GFFlare_SetRGBA() {}
/* 0017fda0 0000003c */ GFFlare_SetSTWH() {}
/* 0017fde0 000005cc */ static GFFlare_Draw() {}
/* 001803b0 00000008 */ static GFFlare_Eval() {}
/* 001803b8 0000005c */ GFFlare_MakeInstance() {}

// *****************************************************************************
// FILE -- benjamin/g_shrink.c
// *****************************************************************************

/* 00180418 00000078 */ gsDinoSetDeadShrinkY() {}
/* 00180490 00000070 */ gsDinoSetDeadShrinkXZ() {}
/* 00180500 0000002c */ gsDinoIsShrinking() {}

// *****************************************************************************
// FILE -- benjamin/g_staff.c
// *****************************************************************************

/* 00180da0 00000474 */ gsStaffInit() {}
/* 00181218 000004d4 */ gsStaffExec() {}
/* 001816f0 00000048 */ gsStaffEnd() {}
/* 00181738 00000250 */ static gsStaffDraw() {}
/* 00181988 00000218 */ static gsStaffEval() {}
/* 00181ba0 00000078 */ static staffInstSetFadeIn() {}
/* 00181c18 000000cc */ static staffInitReadFile() {}
/* 00181ce8 00000070 */ static staffSetDefaultValue() {}
/* 00181d58 0000013c */ static staffInitInstance() {}
/* 00181e98 00000b1c */ static staffReadStaffSetting() {}
/* 001829b8 00000094 */ static staffCutCommandString() {}
/* 00182a50 0000003c */ static staffMakeChain() {}
/* 00182a90 00000258 */ static staffUpdate() {}
/* 00182ce8 000002cc */ static staffClipFont() {}
/* 00182fb8 00000254 */ static staffGetScreenInfo() {}
/* 00183210 00000138 */ static staffGetScreen3DPos() {}
/* 00183348 00000114 */ static benjaminInversMatrix() {}
/* 00183460 00000190 */ static benjaminLubksb() {}
/* 001835f0 00000378 */ static benjaminLudcmp() {}
/* 00183968 00000358 */ static staffFontHitProc() {}
/* 00183cc0 00000090 */ static staffFontCheckHit() {}
/* 00183d50 00000060 */ static staffSetJump() {}
/* 00183db0 00000080 */ static staffSetChangeSize() {}

// *****************************************************************************
// FILE -- benjamin/tbl/staffEffect.h
// *****************************************************************************

/* 00180530 00000058 */ static staffInitParticle() {}
/* 00180588 00000114 */ static staffInitOneTypeEffect() {}
/* 001806a0 00000120 */ static staffAddEffect() {}
/* 001807c0 000000f8 */ static staffEffectSearchUsable() {}
/* 001808b8 00000224 */ static staffEffectAddInstance() {}
/* 00180ae0 000000cc */ static staffEffectUpdate() {}
/* 00180bb0 00000128 */ static staffEffectCheckOne() {}
/* 00180cd8 000000c4 */ static staffFlyingMoney() {}

// *****************************************************************************
// FILE -- benjamin/g_footpoint.c
// *****************************************************************************

/* 00183e30 00000080 */ gsFootPoint_Init() {}
/* 00183eb0 0000002c */ gsFootPoint_InitFootPoint() {}
/* 00183ee0 00000040 */ gsFootPoint_LoadTexture() {}
/* 00183f20 00000008 */ gsFootPoint_Eval() {}
/* 00183f28 000000c4 */ gsFootPoint_Draw() {}
/* 00183ff0 00000018 */ gsFootPoint_SetFootPoint() {}
/* 00184008 0000004c */ static gsFootPoint_InitPacket() {}
/* 00184058 000001c0 */ static gsFootPoint_MakePacket() {}
/* 00184218 000000b4 */ static gsFootPoint_SetGsRegs() {}
/* 001842d0 00000104 */ gsFootPoint_PutFootPoint() {}
/* 001843d8 000000f0 */ static gsFootPoint_GetNearTriangles() {}
/* 001844c8 000001c4 */ static gsFootPoint_AddTriList() {}
/* 00184690 00000150 */ static gsFootPoint_GetChangeMatrix() {}
/* 001847e0 000000e8 */ static gsFootPoint_GetTexST() {}
/* 001848c8 00000024 */ gsFootPoint_Remove() {}

// *****************************************************************************
// FILE -- g_enemy/enemain.c
// *****************************************************************************

/* 001848f0 00000338 */ Enemy_Main() {}
/* 00184c28 00000090 */ Enemy_PauseProc() {}
/* 00184cb8 0000007c */ Enemy_AnmStpOrStt() {}
/* 00184d38 00000254 */ Enemy_AllWorkInit() {}
/* 00184f90 0000006c */ Enemy_AllWkIntReLd() {}
/* 00185000 00000358 */ Enemy_WorkInit() {}
/* 00185358 0000003c */ enemy_everydtset() {}
/* 00185398 000000cc */ Enemy_MkObjDt() {}
/* 00185468 0000026c */ Enemy_ObjDtSet() {}
/* 001856d8 00000020 */ Enemy_SeSet00() {}
/* 001856f8 000001bc */ Enemy_Prt() {}
/* 001858b8 00000050 */ Enemy_SarchEmptyWk() {}
/* 00185908 00000108 */ Enemy_RequestSet() {}
/* 00185a10 00000148 */ Enemy_AllReqest() {}
/* 00185b58 00000190 */ Enemy_AllReqest_LvSet() {}
/* 00185ce8 0000004c */ Enemy_HowManySet() {}
/* 00185d38 00000160 */ Enemy_DelCheck() {}
/* 00185e98 0000018c */ Enemy_plbkchk() {}
/* 00186028 00000008 */ ene_mvdummy() {}
/* 00186030 00000048 */ enemy_movemain() {}
/* 00186078 000001fc */ enemy_positionset() {}
/* 00186278 00000104 */ Enemy_AnmChg00() {}
/* 00186380 000000d4 */ Enemy_AnmChg01() {}
/* 00186458 00000044 */ Enemy_ActChg00() {}
/* 001864a0 0000007c */ enemy_rotadd() {}
/* 00186520 00000024 */ enemy_veadd() {}
/* 00186548 0000011c */ Enemy_BltHitPosChk() {}
/* 00186668 00000840 */ Enemy_DmgHitCheck() {}
/* 00186ea8 0000009c */ enemy_blowoffcnt() {}
/* 00186f48 0000019c */ enemy_hitbloodset() {}
/* 001870e8 0000006c */ enemy_obrptitemdrop() {}
/* 00187158 00000474 */ enemy_godmgact() {}
/* 001875d0 00000188 */ Enemy_GoDmgInit() {}
/* 00187758 00000320 */ enemy_hitbkset00() {}
/* 00187a78 00000228 */ enemy_hitbkset01() {}
/* 00187ca0 000002cc */ enemy_hitbkset02() {}
/* 00187f70 00000080 */ Enemy_ObjNeedCheck() {}
/* 00187ff0 000001dc */ Enemy_ObjSort() {}
/* 001881d0 00000044 */ Enemy_RgetByInpd() {}
/* 00188218 00000014 */ Enemy_MakeV() {}
/* 00188230 00000050 */ Enemy_MkUnitV00() {}
/* 00188280 00000044 */ Enemy_Op2Plen00() {}
/* 001882c8 00000058 */ Enemy_OpVInPd00() {}
/* 00188320 00000084 */ Enemy_Op3PInPd00() {}
/* 001883a8 00000124 */ Enemy_OpVLRChk00() {}
/* 001884d0 00000120 */ Enemy_OpVLRChk01() {}
/* 001885f0 00000074 */ Enemy_OpVChlMkR() {}
/* 00188668 00000040 */ Enemy_AttackHitChk() {}
/* 001886a8 000000d0 */ Enemy_OpMkEyeLine() {}
/* 00188778 000000f0 */ Enemy_HighToGnd() {}
/* 00188868 000000e4 */ Enemy_GetClsGnd00() {}
/* 00188950 000000b4 */ Enemy_GetNearGdT00() {}
/* 00188a08 000000e4 */ Enemy_ObstacleCheck00() {}
/* 00188af0 000000f4 */ Enemy_ObstacleCheck01() {}
/* 00188be8 000000d4 */ Enemy_CheckWall() {}
/* 00188cc0 00000284 */ enemy_dinohitchk() {}
/* 00188f48 00000464 */ enemy_gndtouchch() {}
/* 001893b0 00000408 */ enemy_objtouchch() {}
/* 001897b8 000003c0 */ enemy_v0grdchk() {}
/* 00189b78 0000005c */ gsEnemyDelete() {}
/* 00189bd8 00000450 */ Enemy_ShadowChk() {}
/* 0018a028 0000003c */ Enemy_AllDataLoad() {}
/* 0018a068 00000144 */ Enemy_DataLoadExceptPmt() {}
/* 0018a1b0 00000058 */ Enemy_PmtDtLoad() {}
/* 0018a208 00000064 */ Enemy_PmtDataSet() {}
/* 0018a270 00000054 */ Enemy_PmtDataCopy() {}
/* 0018a2c8 00000e64 */ Enemy_EveryStgDtLd() {}
/* 0018b130 00000490 */ Enemy_BossDtLd() {}
/* 0018b5c0 000000f8 */ Enemy_NeedPrtInfSet() {}
/* 0018b6b8 00000088 */ Enemy_ShdFtpSet() {}
/* 0018b740 000000f4 */ Enemy_PoisonMain() {}
/* 0018b838 00000048 */ Enemy_AllPsInfInt() {}
/* 0018b880 00000070 */ Enemy_PsInfInt() {}
/* 0018b8f0 00000040 */ Enemy_SarchEmptyPsInf() {}
/* 0018b930 000000b0 */ enemy_poisonmv() {}
/* 0018b9e0 000003d0 */ Enemy_PoisonShoot() {}
/* 0018bdb0 00000038 */ Enemy_PsGunHit() {}
/* 0018bde8 00000188 */ enemy_psgrdhitchk() {}
/* 0018bf70 00000140 */ enemy_psobjhitchk() {}
/* 0018c0b0 00000208 */ Enemy_GrdSeEffSet() {}
/* 0018c2b8 0000005c */ Enemy_SeWkInit() {}
/* 0018c318 00000080 */ Enemy_SeReq() {}
/* 0018c398 000001e8 */ Enemy_SetSeMain() {}
/* 0018c580 00000300 */ ST9TREX_DmgHitCheck() {}
/* 0018c880 00000084 */ Enemy_SchOkNgSetDel() {}
/* 0018c908 0000048c */ enemy_deadshotmain() {}
/* 0018cd98 00000080 */ Enemy_MaxEneNoChg() {}
/* 0018ce18 00000048 */ enemy_blthitseset() {}
/* 0018ce60 00000288 */ Enemy_DelDethPrcInit() {}
/* 0018d0e8 000000a0 */ Enemy_DelDethPrcMain() {}
/* 0018d188 00000198 */ Enemy_SetSmokeTrkr() {}
/* 0018d320 00000180 */ Enemy_ColAlphaInit() {}
/* 0018d4a0 000000d4 */ Enemy_FlashingInit() {}
/* 0018d578 00000198 */ Enemy_Flashing() {}
/* 0018d710 0000011c */ Enemy_TrntyDethMoveInit() {}
/* 0018d830 00000008 */ VolcanoInit() {}
/* 0018d838 00000008 */ VolcanoMain() {}
/* 0018d840 000000f4 */ enemy_plhitch() {}
/* 0018d938 00000408 */ Enemy_PrtDetails() {}
/* 0018dd40 00000080 */ enemy_joke() {}

// *****************************************************************************
// FILE -- g_enemy/eneatc00.c
// *****************************************************************************

/* 0018ddc0 00000068 */ eneatc00_main() {}
/* 0018de28 00000128 */ enemy_afteratchit() {}
/* 0018df50 000001f0 */ enemy_hiteffset() {}
/* 0018e140 00000008 */ eneatc00_dummy() {}
/* 0018e148 00000224 */ eneatc00_atcbscchk00() {}
/* 0018e370 000000fc */ eneatc00_atcbscchk01() {}
/* 0018e470 000000b0 */ eneatc00_atcbscchk02() {}
/* 0018e520 000001c8 */ eneatc00_atcbscchk03() {}
/* 0018e6e8 0000022c */ eneatc00_holdatchitchk() {}
/* 0018e918 000000f4 */ eneatc00_pshitchk() {}
/* 0018ea10 0000005c */ eneatc00_trexhowling() {}
/* 0018ea70 000002bc */ eneatc00_crntocrnchk() {}

// *****************************************************************************
// FILE -- g_enemy/enethkmn.c
// *****************************************************************************

/* 0018ed30 000000c8 */ enemy_thkmain() {}
/* 0018edf8 00000104 */ enemy_getstate() {}
/* 0018ef00 00000278 */ enemy_getthkwander() {}
/* 0018f178 0000028c */ enemy_getthkattack() {}
/* 0018f408 0000028c */ enemy_getthkescape() {}
/* 0018f698 00000088 */ enemy_setpllenlevel() {}
/* 0018f720 00000008 */ static enemy_modchgdm() {}
/* 0018f728 00000174 */ enemy_modechgmain() {}
/* 0018f8a0 00000050 */ enemy_modchg00() {}
/* 0018f8f0 0000006c */ enemy_modchg01() {}
/* 0018f960 00000028 */ enemy_modchg02() {}
/* 0018f988 00000008 */ enemy_modchg03() {}
/* 0018f990 0000003c */ enemy_modchg04() {}
/* 0018f9d0 000000e8 */ enemy_modchg05() {}
/* 0018fab8 00000050 */ enemy_modchg08() {}
/* 0018fb08 00000024 */ enemy_modchg09() {}

// *****************************************************************************
// FILE -- g_enemy/eneptnmn.c
// *****************************************************************************

/* 0018fb30 00000040 */ enemy_ptnmvmain() {}
/* 0018fb70 000000d4 */ eneptn_goptntbl() {}
/* 0018fc48 00000068 */ eneptn_sarchptn() {}
/* 0018fcb0 00000008 */ eneptn_dummy() {}
/* 0018fcb8 00000104 */ eneptn_onlygetdt() {}
/* 0018fdc0 00000010 */ eneptn_loop00() {}
/* 0018fdd0 00000224 */ eneptn_goleset00() {}
/* 0018fff8 00000080 */ eneptn_tbljump00() {}
/* 00190078 000000f0 */ eneptn_rndjump00() {}
/* 00190168 000000f0 */ eneptn_thkmdchkjmp() {}
/* 00190258 00000110 */ eneptn_vtlchkjmp() {}
/* 00190368 000000f0 */ eneptn_atchitchkjmp() {}
/* 00190458 000001e0 */ eneptn_plwpnchkjmp() {}
/* 00190638 000000b8 */ eneptn_gmleveljmp() {}
/* 001906f0 000000bc */ eneptn_thkmdchg() {}
/* 001907b0 00000018 */ eneptn_rechkptn() {}
/* 001907c8 00000104 */ eneptn_enmtyloop() {}
/* 001908d0 00000054 */ eneptn_delcheck() {}
/* 00190928 00000270 */ obrpt_itemsnatchmain() {}
/* 00190b98 0000021c */ obrpt_itemsarch() {}
/* 00190db8 000001ac */ obrpt_plitemch() {}
/* 00190f68 000000f8 */ obrpt_setstlnitem() {}
/* 00191060 000005a0 */ eneptn_snatchitem00() {}
/* 00191600 00000590 */ eneptn_snatchitem01() {}
/* 00191b90 000002c4 */ eneptn_snatchitem02() {}

// *****************************************************************************
// FILE -- g_enemy/eneptnsb.c
// *****************************************************************************

/* 00191e58 000000d4 */ eneptn_samegoalchk() {}
/* 00191f30 00000058 */ eneptn_elseneatcchk() {}
/* 00191f88 00000054 */ eneptn_glvectorset() {}
/* 00191fe0 00000184 */ eneptn_objrveset00() {}
/* 00192168 000001c0 */ eneptn_atcplposset() {}
/* 00192328 0000016c */ eneptn_glranddecide() {}
/* 00192498 0000013c */ eneptn_circranddecide() {}
/* 001925d8 00000014 */ eneptn_jumpvxset() {}
/* 001925f0 00000024 */ eneptn_jumpvyset() {}
/* 00192618 00000044 */ eneptn_tmchk() {}
/* 00192660 00000078 */ eneptn_maxrotchk() {}
/* 001926d8 00000178 */ eneptn_glarvchmain00() {}
/* 00192850 000000b4 */ eneptn_glarvchmain01() {}
/* 00192908 00000070 */ eneptn_glarvchmain02() {}
/* 00192978 00000180 */ eneptn_glarvchsub00() {}
/* 00192af8 000000c0 */ eneptn_glarvch01() {}
/* 00192bb8 00000060 */ eneptn_glinprdch00() {}
/* 00192c18 00000068 */ eneptn_glrlch00() {}
/* 00192c80 0000006c */ eneptn_glvectorchk() {}
/* 00192cf0 00000124 */ eneptn_chkcliff00() {}
/* 00192e18 0000015c */ eneptn_chkjpwall00() {}
/* 00192f78 000001c4 */ eneptn_ptrhichkfly() {}
/* 00193140 000002d0 */ eneptn_ptrxroleset() {}
/* 00193410 0000004c */ eneptn_plchkxroleset() {}
/* 00193460 000003dc */ eneptn_eyelinech00() {}
/* 00193840 000001ec */ eneptn_eyelinech01() {}
/* 00193a30 000004a4 */ hitobject_chk00() {}
/* 00193ed8 000000fc */ hitgrd_chk00() {}
/* 00193fd8 00000218 */ hitgrd_chk01() {}

// *****************************************************************************
// FILE -- g_enemy/eneptn00.c
// *****************************************************************************

/* 001941f0 000008cc */ eneptn00_wait00() {}
/* 00194ac0 0000066c */ eneptn00_turn00() {}
/* 00195130 00000f20 */ eneptn00_turn01() {}
/* 00196050 000001f8 */ eneptn00_drctstep00() {}
/* 00196248 0000049c */ eneptn00_gotogl00() {}
/* 001966e8 000002e0 */ eneptn00_walk01() {}
/* 001969c8 0000051c */ eneptn00_clscheck00() {}
/* 00196ee8 000005f0 */ eneptn00_gotogl01() {}
/* 001974d8 0000026c */ eneptn00_jump00() {}
/* 00197748 00000110 */ eneptn00_breaking() {}
/* 00197858 000001d4 */ eneptn00_wnd00() {}
/* 00197a30 0000074c */ eneptn00_cls00() {}
/* 00198180 000002fc */ eneptn00_cls01() {}
/* 00198480 000002dc */ eneptn00_cls02() {}
/* 00198760 00000548 */ eneptn00_cls03() {}
/* 00198ca8 00000720 */ eneptn00_cls04() {}
/* 001993c8 00000480 */ eneptn00_cls05() {}
/* 00199848 00000674 */ eneptn00_cls06() {}
/* 00199ec0 00000600 */ eneptn00_cls07() {}
/* 0019a4c0 00000580 */ eneptn00_cls08() {}
/* 0019aa40 00000570 */ eneptn00_cls09() {}
/* 0019afb0 00000464 */ eneptn00_cls0a() {}
/* 0019b418 00000558 */ eneptn00_cls0b() {}
/* 0019b970 000002a4 */ eneptn00_step00() {}
/* 0019bc18 000002ec */ eneptn00_step01() {}
/* 0019bf08 00000108 */ eneptn00_spmove00() {}
/* 0019c010 00000108 */ eneptn00_attack00() {}
/* 0019c118 0000068c */ eneptn00_attack01() {}
/* 0019c7a8 00000250 */ eneptn00_attack02() {}
/* 0019c9f8 000001a4 */ eneptn00_attack03() {}
/* 0019cba0 00000224 */ eneptn00_attack04() {}
/* 0019cdc8 00000068 */ eneptn00_quickdel() {}
/* 0019ce30 00000930 */ eneptn00_attack08() {}
/* 0019d760 00000430 */ eneptn00_attack09() {}

// *****************************************************************************
// FILE -- g_enemy/eneptn01.c
// *****************************************************************************

/* 0019db90 00000120 */ Enemy_RotLRChk00() {}
/* 0019dcb0 000001b4 */ static Enemy_Forming() {}
/* 0019de68 000002b0 */ static Enemy_FormingS() {}
/* 0019e118 0000048c */ eneptn01_turn00() {}
/* 0019e5a8 00000218 */ eneptn01_goleset00() {}
/* 0019e7c0 00000410 */ eneptn01_uturn() {}
/* 0019ebd0 000003a0 */ eneptn01_cturn() {}
/* 0019ef70 000002b4 */ eneptn01_back00() {}
/* 0019f228 00000440 */ eneptn01_updown00() {}
/* 0019f668 00000164 */ eneptn01_downgnd00() {}
/* 0019f7d0 0000039c */ eneptn01_fastdown00() {}
/* 0019fb70 000002a8 */ eneptn01_fastupdown00() {}
/* 0019fe18 00000520 */ eneptn01_fastup00() {}
/* 001a0338 00000458 */ eneptn01_nowrotfly00() {}
/* 001a0790 00000358 */ eneptn01_rotchange00() {}
/* 001a0ae8 00000274 */ eneptn01_escape00() {}
/* 001a0d60 000003dc */ eneptn01_circfly00() {}
/* 001a1140 000002a4 */ eneptn01_cls00() {}
/* 001a13e8 0000016c */ static obj_check() {}
/* 001a1558 00000538 */ eneptn01_cls01() {}
/* 001a1a90 000002d8 */ eneptn01_cls02() {}
/* 001a1d68 00000104 */ static leader_getinfo() {}
/* 001a1e70 00000054 */ static leader_check() {}
/* 001a1ec8 000003c0 */ static leader_set() {}
/* 001a2288 000000b4 */ static eneptn01_NowVecGLSET() {}
/* 001a2340 000000ac */ static eneptn01_NowPointRotGLSET() {}
/* 001a23f0 000001c0 */ static eneptn01_xzZeroRVSET() {}
/* 001a25b0 000000e0 */ static eneptn01_inCircleOrien() {}
/* 001a2690 000000a4 */ static eneptn01_inCircleRVSET() {}
/* 001a2738 000000c4 */ static eneptn01_playerVecROTSET() {}
/* 001a2800 000000fc */ static eneptn01_mureCenterSET() {}
/* 001a2900 000000a4 */ static eneptn01_AtackAfterGLSET() {}
/* 001a29a8 00000120 */ static eneptn01_HighSet() {}
/* 001a2ac8 00000088 */ static GetOrderNo() {}
/* 001a2b50 00000138 */ static eneptn01_BoidMainProc() {}
/* 001a2c88 0000049c */ static eneptn01_BoidCopyNear() {}
/* 001a3128 000002f4 */ static eneptn01_BoidAcSet() {}
/* 001a3420 00000090 */ static eneptn01_BoidHighMove() {}
/* 001a34b0 0000009c */ static AllCircleLoop() {}
/* 001a3550 00000024 */ eneptn01_st1bossinit() {}
/* 001a3578 00000070 */ eneptn01_cls03() {}
/* 001a35e8 00000f4c */ static eneptn01_ST1PuteraLeaderPtn() {}
/* 001a4538 00000044 */ static AttackCheck() {}
/* 001a4580 000012d0 */ static eneptn01_ST1PuteraNonLeaderPtn() {}
/* 001a5850 0000054c */ eneptn01_cls04() {}
/* 001a5da0 00000620 */ eneptn01_cls05() {}
/* 001a63c0 000007d0 */ eneptn01_cls06() {}
/* 001a6b90 00000548 */ eneptn01_cls07() {}
/* 001a70d8 000002e4 */ eneptn01_cls08() {}
/* 001a73c0 000004cc */ eneptn01_cls09() {}
/* 001a7890 00000d20 */ eneptn01_cls10() {}
/* 001a85b0 0000051c */ eneptn01_cls11() {}
/* 001a8ad0 000002b8 */ eneptn01_cls12() {}
/* 001a8d88 000000c8 */ eneptn01_spmove00() {}
/* 001a8e50 00000318 */ eneptn01_attack01() {}
/* 001a9168 0000036c */ eneptn01_attack02() {}
/* 001a94d8 00000250 */ eneptn01_attack02b() {}
/* 001a9728 000004c0 */ eneptn01_attack03() {}
/* 001a9be8 0000034c */ eneptn01_attack04() {}
/* 001a9f38 00000428 */ eneptn01_attack05() {}
/* 001aa360 00000500 */ eneptn01_attack06() {}
/* 001aa860 00000384 */ eneptn01_attack07() {}

// *****************************************************************************
// FILE -- g_enemy/eneptn02.c
// *****************************************************************************

/* 001aabe8 00000204 */ eneptn02_back00() {}
/* 001aadf0 00000164 */ eneptn02_dvorup() {}
/* 001aaf58 00000564 */ eneptn02_dvoruprot() {}
/* 001ab4c0 00000160 */ eneptn02_updown() {}
/* 001ab620 0000015c */ eneptn02_swimup() {}
/* 001ab780 000000d0 */ eneptn02_heisourun() {}
/* 001ab850 00000158 */ eneptn01_quickdel() {}
/* 001ab9a8 00000350 */ eneptn02_cls00() {}
/* 001abcf8 000002f8 */ eneptn02_cls01() {}
/* 001abff0 00000b18 */ eneptn02_cls02() {}
/* 001acb08 000002a8 */ eneptn02_cls03() {}
/* 001acdb0 00000554 */ eneptn02_cls04() {}
/* 001ad308 0000044c */ eneptn02_cls05() {}
/* 001ad758 00000368 */ eneptn02_cls06() {}
/* 001adac0 000000c8 */ eneptn02_spmove00() {}
/* 001adb88 00000160 */ eneptn02_attack00() {}
/* 001adce8 0000030c */ eneptn02_attack01() {}
/* 001adff8 00000218 */ eneptn02b_jump00() {}
/* 001ae210 000000c8 */ eneptn02b_quickdel() {}
/* 001ae2d8 00000184 */ eneptn02b_dvorup() {}
/* 001ae460 00000360 */ eneptn02b_cls00() {}
/* 001ae7c0 000003ec */ eneptn02b_cls01() {}
/* 001aebb0 00000b78 */ eneptn02b_cls02() {}
/* 001af728 000007d4 */ eneptn02b_cls03() {}
/* 001aff00 000004c0 */ eneptn02b_cls04() {}
/* 001b03c0 00000600 */ eneptn02b_cls05() {}
/* 001b09c0 000003d0 */ eneptn02b_attack00() {}
/* 001b0d90 000002dc */ eneptn02b_attack01() {}
/* 001b1070 00000118 */ eneptn02b_attack02() {}

// *****************************************************************************
// FILE -- g_enemy/eneptn03.c
// *****************************************************************************

/* 001b1188 00000030 */ eneptn03_ST2carno_main() {}
/* 001b11b8 00000378 */ static eneptn03_ST2carno_manage() {}
/* 001b1530 00000090 */ static eneptn03_ST2carno_stopchk() {}
/* 001b15c0 000000f8 */ static eneptn03_ST2carno_getstate() {}
/* 001b16b8 000001a0 */ static eneptn03_ST2carno_chkarea() {}
/* 001b1858 00000308 */ static eneptn03_ST2carno_chk4head00() {}
/* 001b1b60 0000038c */ static eneptn03_ST2carno_chk4head01() {}
/* 001b1ef0 00000310 */ static eneptn03_ST2carno_chk4head02() {}
/* 001b2200 000000d4 */ static eneptn03_ST2carno_chkescgnd() {}
/* 001b22d8 00000294 */ static eneptn03_ST2carno_movechk() {}
/* 001b2570 00000b10 */ static eneptn03_ST2carno_sub00() {}
/* 001b3080 00000d24 */ static eneptn03_ST2carno_sub01() {}
/* 001b3da8 00000ae0 */ static eneptn03_ST2carno_sub02() {}
/* 001b4888 000008d8 */ static eneptn03_ST2carno_thkchg() {}
/* 001b5160 0000124c */ static eneptn03_ST2carno_headatk00() {}
/* 001b63b0 00001460 */ static eneptn03_ST2carno_headatk01() {}
/* 001b7810 0000125c */ static eneptn03_ST2carno_headatk02() {}
/* 001b8a70 00000734 */ static eneptn03_ST2carno_missatk() {}
/* 001b91a8 00000030 */ eneptn03_ST5carno_main() {}
/* 001b91d8 00000428 */ static eneptn03_ST5carno_manage() {}
/* 001b9600 00000090 */ static eneptn03_ST5carno_stopchk() {}
/* 001b9690 00000098 */ static eneptn03_ST5carno_areacheck() {}
/* 001b9728 00000278 */ static eneptn03_ST5carno_judgeptrn() {}
/* 001b99a0 000000b0 */ static eneptn03_ST5carno_headcheck() {}
/* 001b9a50 00000144 */ static eneptn03_ST5carno_jumpcheck() {}
/* 001b9b98 000001a8 */ static eneptn03_ST5carno_collwall() {}
/* 001b9d40 000001b0 */ static eneptn03_ST5carno_extchk() {}
/* 001b9ef0 000001a4 */ static eneptn03_ST5carno_escchk() {}
/* 001ba098 000002c0 */ static eneptn03_ST5carno_movechk() {}
/* 001ba358 00000084 */ static eneptn03_ST5carno_setgoalflag() {}
/* 001ba3e0 00000134 */ static eneptn03_ST5carno_setneargoalflag() {}
/* 001ba518 0000038c */ static eneptn03_ST5carno_thkchg() {}
/* 001ba8a8 0000028c */ static eneptn03_ST5carno_first() {}
/* 001bab38 00000780 */ static eneptn03_ST5carno_areachg() {}
/* 001bb2b8 00000630 */ static eneptn03_ST5carno_territory() {}
/* 001bb8e8 000006ac */ static eneptn03_ST5carno_head00() {}
/* 001bbf98 00000768 */ static eneptn03_ST5carno_head01() {}
/* 001bc700 000006f0 */ static eneptn03_ST5carno_head02() {}
/* 001bcdf0 000005b8 */ static eneptn03_ST5carno_free() {}
/* 001bd3a8 000003fc */ static eneptn03_ST5carno_missatk() {}
/* 001bd7a8 00000368 */ static eneptn03_ST5carno_return() {}
/* 001bdb10 00000460 */ static eneptn03_ST5carno_runaway() {}
/* 001bdf70 00000030 */ eneptn03_ST7carno_main() {}
/* 001bdfa0 000004e8 */ static eneptn03_ST7carno_manage() {}
/* 001be488 000001e4 */ static eneptn03_ST7carno_objbreaking() {}
/* 001be670 00000100 */ static eneptn03_ST7carno_stopchk() {}
/* 001be770 00000194 */ static eneptn03_ST7carno_movechk() {}
/* 001be908 0000004c */ static eneptn03_ST7carno_wait() {}
/* 001be958 00000038 */ static eneptn03_ST7carno_wait00() {}
/* 001be990 00000184 */ static eneptn03_ST7carno_wait01() {}
/* 001beb18 000000c4 */ static eneptn03_ST7carno_wait02() {}
/* 001bebe0 00000050 */ static eneptn03_ST7carno_straight() {}
/* 001bec30 00000034 */ static eneptn03_ST7carno_straight00() {}
/* 001bec68 000000a8 */ static eneptn03_ST7carno_straight01() {}
/* 001bed10 00000084 */ static eneptn03_ST7carno_straight02() {}
/* 001bed98 00000098 */ static eneptn03_ST7carno_straight03() {}
/* 001bee30 00000014 */ static eneptn03_ST7carno_straight04() {}
/* 001bee48 00000050 */ static eneptn03_ST7carno_head() {}
/* 001bee98 00000038 */ static eneptn03_ST7carno_head00() {}
/* 001beed0 0000005c */ static eneptn03_ST7carno_head01() {}
/* 001bef30 00000024 */ static eneptn03_ST7carno_head02() {}
/* 001bef58 00000084 */ static eneptn03_ST7carno_head03() {}
/* 001befe0 000000b8 */ static eneptn03_ST7carno_head04() {}
/* 001bf098 00000028 */ static eneptn03_ST7carno_head05() {}
/* 001bf0c0 00000014 */ static eneptn03_ST7carno_head06() {}
/* 001bf0d8 00000050 */ static eneptn03_ST7carno_wave() {}
/* 001bf128 000000fc */ static eneptn03_ST7carno_wave00() {}
/* 001bf228 000000c0 */ static eneptn03_ST7carno_wave01() {}
/* 001bf2e8 000000c0 */ static eneptn03_ST7carno_wave02() {}
/* 001bf3a8 000000f4 */ static eneptn03_ST7carno_wave03() {}
/* 001bf4a0 0000007c */ static eneptn03_ST7carno_wave04() {}
/* 001bf520 00000014 */ static eneptn03_ST7carno_wave05() {}
/* 001bf538 00000050 */ static eneptn03_ST7carno_jump() {}
/* 001bf588 00000034 */ static eneptn03_ST7carno_jump00() {}
/* 001bf5c0 000000a0 */ static eneptn03_ST7carno_jump01() {}
/* 001bf660 00000080 */ static eneptn03_ST7carno_jump02() {}
/* 001bf6e0 00000050 */ static eneptn03_ST7carno_jump03() {}
/* 001bf730 00000028 */ static eneptn03_ST7carno_jump04() {}
/* 001bf758 00000090 */ static eneptn03_ST7carno_jump05() {}
/* 001bf7e8 00000078 */ static eneptn03_ST7carno_jump06() {}
/* 001bf860 00000034 */ static eneptn03_ST7carno_jump07() {}
/* 001bf898 00000098 */ static eneptn03_ST7carno_jump08() {}
/* 001bf930 00000014 */ static eneptn03_ST7carno_jump09() {}
/* 001bf948 00000050 */ static eneptn03_ST7carno_jumphead() {}
/* 001bf998 00000034 */ static eneptn03_ST7carno_jumphead00() {}
/* 001bf9d0 000000a0 */ static eneptn03_ST7carno_jumphead01() {}
/* 001bfa70 00000080 */ static eneptn03_ST7carno_jumphead02() {}
/* 001bfaf0 00000050 */ static eneptn03_ST7carno_jumphead03() {}
/* 001bfb40 00000028 */ static eneptn03_ST7carno_jumphead04() {}
/* 001bfb68 00000044 */ static eneptn03_ST7carno_jumphead05() {}
/* 001bfbb0 00000090 */ static eneptn03_ST7carno_jumphead06() {}
/* 001bfc40 00000094 */ static eneptn03_ST7carno_jumphead07() {}
/* 001bfcd8 00000028 */ static eneptn03_ST7carno_jumphead08() {}
/* 001bfd00 00000050 */ static eneptn03_ST7carno_step() {}
/* 001bfd50 00000038 */ static eneptn03_ST7carno_step00() {}
/* 001bfd88 00000124 */ static eneptn03_ST7carno_step01() {}
/* 001bfeb0 00000098 */ static eneptn03_ST7carno_step02() {}
/* 001bff48 00000094 */ static eneptn03_ST7carno_step03() {}
/* 001bffe0 00000028 */ static eneptn03_ST7carno_step04() {}
/* 001c0008 00000088 */ static eneptn03_ST7carno_step05() {}
/* 001c0090 00000078 */ static eneptn03_ST7carno_step06() {}
/* 001c0108 000000f4 */ static eneptn03_ST7carno_step07() {}
/* 001c0200 00000098 */ static eneptn03_ST7carno_step08() {}
/* 001c0298 00000014 */ static eneptn03_ST7carno_step09() {}
/* 001c02b0 00000050 */ static eneptn03_ST7carno_escape() {}
/* 001c0300 00000160 */ static eneptn03_ST7carno_escape00() {}
/* 001c0460 00000088 */ static eneptn03_ST7carno_escape01() {}
/* 001c04e8 00000148 */ static eneptn03_ST7carno_escape02() {}
/* 001c0630 00000050 */ static eneptn03_ST7carno_thkchg() {}
/* 001c0680 00000044 */ static eneptn03_ST7carno_thkchg00() {}
/* 001c06c8 000000b4 */ static eneptn03_ST7carno_thkchg01() {}
/* 001c0780 00000130 */ static eneptn03_ST7carno_thkchg02() {}
/* 001c08b0 00000050 */ static eneptn03_ST7carno_combi00() {}
/* 001c0900 00000138 */ static eneptn03_ST7carno_combi00_00() {}
/* 001c0a38 000000a8 */ static eneptn03_ST7carno_combi00_01() {}
/* 001c0ae0 00000028 */ static eneptn03_ST7carno_combi00_02() {}
/* 001c0b08 00000100 */ static eneptn03_ST7carno_combi00_03() {}
/* 001c0c08 00000098 */ static eneptn03_ST7carno_combi00_04() {}
/* 001c0ca0 00000024 */ static eneptn03_ST7carno_combi00_05() {}
/* 001c0cc8 00000094 */ static eneptn03_ST7carno_combi00_06() {}
/* 001c0d60 000000ec */ static eneptn03_ST7carno_combi00_07() {}
/* 001c0e50 000000bc */ static eneptn03_ST7carno_combi00_08() {}
/* 001c0f10 000000c0 */ static eneptn03_ST7carno_combi00_09() {}
/* 001c0fd0 00000020 */ static eneptn03_ST7carno_combi00_10() {}
/* 001c0ff0 00000058 */ static eneptn03_ST7carno_combi00_11() {}
/* 001c1048 00000014 */ static eneptn03_ST7carno_combi00_12() {}
/* 001c1060 00000094 */ static eneptn03_ST7carno_combi01() {}
/* 001c10f8 00000138 */ static eneptn03_ST7carno_combi01_00() {}
/* 001c1230 000000a8 */ static eneptn03_ST7carno_combi01_01() {}
/* 001c12d8 00000028 */ static eneptn03_ST7carno_combi01_02() {}
/* 001c1300 00000100 */ static eneptn03_ST7carno_combi01_03() {}
/* 001c1400 00000098 */ static eneptn03_ST7carno_combi01_04() {}
/* 001c1498 00000024 */ static eneptn03_ST7carno_combi01_05() {}
/* 001c14c0 000000b4 */ static eneptn03_ST7carno_combi01_06() {}
/* 001c1578 000000d8 */ static eneptn03_ST7carno_combi01_07() {}
/* 001c1650 000000b8 */ static eneptn03_ST7carno_combi01_08() {}
/* 001c1708 000000f4 */ static eneptn03_ST7carno_combi01_09() {}
/* 001c1800 000000a8 */ static eneptn03_ST7carno_combi01_10() {}
/* 001c18a8 00000064 */ static eneptn03_ST7carno_combi01_11() {}
/* 001c1910 00000048 */ static eneptn03_ST7carno_combi01_12() {}
/* 001c1958 00000014 */ static eneptn03_ST7carno_combi01_13() {}
/* 001c1970 00000050 */ static eneptn03_ST7carno_combi02() {}
/* 001c19c0 00000138 */ static eneptn03_ST7carno_combi02_00() {}
/* 001c1af8 000000d8 */ static eneptn03_ST7carno_combi02_01() {}
/* 001c1bd0 00000028 */ static eneptn03_ST7carno_combi02_02() {}
/* 001c1bf8 000000d0 */ static eneptn03_ST7carno_combi02_03() {}
/* 001c1cc8 00000098 */ static eneptn03_ST7carno_combi02_04() {}
/* 001c1d60 000000e8 */ static eneptn03_ST7carno_combi02_05() {}
/* 001c1e48 000000b0 */ static eneptn03_ST7carno_combi02_06() {}
/* 001c1ef8 00000030 */ static eneptn03_ST7carno_combi02_07() {}
/* 001c1f28 000000f4 */ static eneptn03_ST7carno_combi02_08() {}
/* 001c2020 00000094 */ static eneptn03_ST7carno_combi02_09() {}
/* 001c20b8 0000007c */ static eneptn03_ST7carno_combi02_10() {}
/* 001c2138 00000028 */ static eneptn03_ST7carno_combi02_11() {}
/* 001c2160 00000050 */ static eneptn03_ST7carno_combi03() {}
/* 001c21b0 00000138 */ static eneptn03_ST7carno_combi03_00() {}
/* 001c22e8 000000d8 */ static eneptn03_ST7carno_combi03_01() {}
/* 001c23c0 00000028 */ static eneptn03_ST7carno_combi03_02() {}
/* 001c23e8 00000100 */ static eneptn03_ST7carno_combi03_03() {}
/* 001c24e8 00000098 */ static eneptn03_ST7carno_combi03_04() {}
/* 001c2580 00000024 */ static eneptn03_ST7carno_combi03_05() {}
/* 001c25a8 000000ec */ static eneptn03_ST7carno_combi03_06() {}
/* 001c2698 00000078 */ static eneptn03_ST7carno_combi03_07() {}
/* 001c2710 00000134 */ static eneptn03_ST7carno_combi03_08() {}
/* 001c2848 00000094 */ static eneptn03_ST7carno_combi03_09() {}
/* 001c28e0 00000080 */ static eneptn03_ST7carno_combi03_10() {}
/* 001c2960 00000028 */ static eneptn03_ST7carno_combi03_11() {}
/* 001c2988 00000050 */ static eneptn03_ST7carno_breakobj() {}
/* 001c29d8 000000ec */ static eneptn03_ST7carno_breakobj00() {}
/* 001c2ac8 000000f0 */ static eneptn03_ST7carno_breakobj01() {}
/* 001c2bb8 0000004c */ static eneptn03_ST7carno_breakobj02() {}
/* 001c2c08 0000010c */ static eneptn03_ST7carno_breakobj03() {}
/* 001c2d18 00000030 */ eneptn03_ST7trex_main() {}
/* 001c2d48 00000234 */ static eneptn03_ST7trex_manage() {}
/* 001c2f80 00000770 */ static eneptn03_ST7trex_sub00() {}
/* 001c36f0 00000920 */ static eneptn03_ST7trex_sub01() {}
/* 001c4010 000004d8 */ static eneptn03_ST7trex_sub02() {}
/* 001c44e8 00000504 */ static eneptn03_ST7trex_thkchg() {}
/* 001c49f0 00000030 */ eneptn03_ST9trex_main() {}
/* 001c4a20 00000384 */ static eneptn03_ST9trex_manage() {}
/* 001c4da8 000000ec */ static eneptn03_ST9trex_chkdemostart() {}
/* 001c4e98 0000003c */ static eneptn03_ST9trex_chkdemoend() {}
/* 001c4ed8 00000050 */ static eneptn03_ST9trex_stopchk() {}
/* 001c4f28 000002c8 */ static eneptn03_ST9trex_collwall() {}
/* 001c51f0 00000148 */ static eneptn03_ST9trex_collsidewall() {}
/* 001c5338 0000022c */ static eneptn03_ST9trex_collwallex() {}
/* 001c5568 000001cc */ static eneptn03_ST9trex_escplayer() {}
/* 001c5738 000000f8 */ static eneptn03_ST9trex_chkmeteo() {}
/* 001c5830 000001e0 */ static eneptn03_ST9trex_extchk() {}
/* 001c5a10 000000e8 */ static eneptn03_ST9trex_turnchk() {}
/* 001c5af8 000005b8 */ static eneptn03_ST9trex_movechk() {}
/* 001c60b0 000003c8 */ static eneptn03_ST9trex_thkchg() {}
/* 001c6478 00000d18 */ static eneptn03_ST9trex_first() {}
/* 001c7190 00000e6c */ static eneptn03_ST9trex_second() {}
/* 001c8000 00000e5c */ static eneptn03_ST9trex_third() {}
/* 001c8e60 00000ea4 */ static eneptn03_ST9trex_semifinal() {}
/* 001c9d08 000007a8 */ static eneptn03_ST9trex_final() {}
/* 001ca4b0 00000988 */ static eneptn03_ST9trex_head() {}
/* 001cae38 00000328 */ static eneptn03_ST9trex_demo() {}
/* 001cb160 000002f0 */ static eneptn03_ST9trex_return() {}
/* 001cb450 000002cc */ static eneptn03_ST9trex_inoutwall() {}
/* 001cb720 000001d8 */ static eneptn03_ST9trex_turn() {}
/* 001cb8f8 000000f0 */ static eneptn03_ST9trex_meteo() {}
/* 001cb9e8 00000070 */ eneptn03_getothercarno() {}
/* 001cba58 00000118 */ Enemy_eneptn03_Init() {}
/* 001cbb70 00000090 */ Enemy_eneptn03_Exec() {}

// *****************************************************************************
// FILE -- g_enemy/eneptn04.c
// *****************************************************************************

/* 001cbc00 000000d0 */ eneptn04_walk00() {}
/* 001cbcd0 000002b4 */ eneptn04_run00() {}
/* 001cbf88 00000328 */ eneptn04_run01() {}
/* 001cc2b0 00000158 */ eneptn04_breaking() {}
/* 001cc408 00000138 */ eneptn04_spmove00() {}
/* 001cc540 000002c8 */ eneptn04b_gotogl00() {}
/* 001cc808 00000208 */ eneptn04b_jump00() {}
/* 001cca10 000003ac */ eneptn04b_clscheck00() {}
/* 001ccdc0 00000144 */ static eneptn04b_wallcheck() {}
/* 001ccf08 00000530 */ eneptn04b_wnd00() {}
/* 001cd438 00000110 */ eneptn04b_spmove00() {}

// *****************************************************************************
// FILE -- g_enemy/eneptntr.c
// *****************************************************************************

/* 001cd548 00000044 */ trnty_ptnmain() {}
/* 001cd590 00000130 */ static trnty_glarvchk() {}
/* 001cd6c0 000000a8 */ static trnty_trnchk() {}
/* 001cd768 0000041c */ static trnty_sarchstone() {}
/* 001cdb88 00000074 */ static trnty_chkptnlevel() {}
/* 001cdc00 00000008 */ static trnty_ptndummy() {}
/* 001cdc08 0000015c */ static trnty_ptn00() {}
/* 001cdd68 000000e8 */ static trnty_ptn08() {}
/* 001cde50 00000350 */ static trnty_ptn09() {}
/* 001ce1a0 00000128 */ static trnty_ptn0a() {}
/* 001ce2c8 000001b8 */ static trnty_ptn0b() {}
/* 001ce480 000002ec */ static trnty_ptn0c() {}
/* 001ce770 00000410 */ static trnty_ptn0d() {}
/* 001ceb80 0000020c */ static trnty_ptn0e() {}
/* 001ced90 000003ac */ static trnty_ptn0f() {}
/* 001cf140 0000012c */ static trnty_ptn20() {}
/* 001cf270 00000234 */ static trnty_ptn21() {}
/* 001cf4a8 00000a8c */ static trnty_ptn30() {}
/* 001cff38 00000390 */ static trnty_ptn31() {}
/* 001d02c8 00000580 */ static trnty_ptn32() {}
/* 001d0848 000003f0 */ static trnty_ptn33() {}
/* 001d0c38 0000052c */ static trnty_ptn38() {}
/* 001d1168 000005f0 */ static trnty_ptn39() {}
/* 001d1758 000003fc */ static trnty_ptn3a() {}

// *****************************************************************************
// FILE -- g_enemy/enetest.c
// *****************************************************************************

/* 001d1b58 000004c8 */ enetest_init() {}
/* 001d2020 00000220 */ enetest_main() {}
/* 001d2240 00000074 */ enetest_end() {}
/* 001d22b8 00000280 */ enetestinfoprt() {}
/* 001d2538 00000118 */ enetest_mkcammatrix() {}
/* 001d2650 00000188 */ enetest_joy() {}
/* 001d27d8 000002ac */ enetest_joysub00() {}
/* 001d2a88 000000e4 */ enetest_joysub01() {}
/* 001d2b70 00000028 */ enetest_reload() {}

// *****************************************************************************
// FILE -- g_enemy/ene00pro/ene00mv.c
// *****************************************************************************

/* 001d2b98 00000074 */ ene00move_main() {}
/* 001d2c10 00000008 */ static enedummymv() {}
/* 001d2c18 000001b4 */ static ene00move00() {}
/* 001d2dd0 000001bc */ static ene00move02() {}
/* 001d2f90 000000b0 */ static ene00move05() {}
/* 001d3040 000001fc */ static ene00move09() {}
/* 001d3240 00000328 */ static ene00move0d() {}
/* 001d3568 000000c0 */ static ene00move0f() {}
/* 001d3628 000001d8 */ static ene00move10() {}
/* 001d3800 000002f4 */ static ene00move14() {}
/* 001d3af8 00000340 */ static ene00move15() {}
/* 001d3e38 000001e0 */ static ene00move16() {}
/* 001d4018 000004b0 */ static ene00move18() {}
/* 001d44c8 00000120 */ static ene00move1c() {}
/* 001d45e8 00000128 */ static ene00move20() {}
/* 001d4710 000001d8 */ static ene00move21() {}
/* 001d48e8 0000013c */ static ene00move22() {}
/* 001d4a28 000001fc */ static ene00move23() {}
/* 001d4c28 00000328 */ static ene00move24() {}
/* 001d4f50 00000648 */ static ene00move27() {}
/* 001d5598 00000194 */ static ene00move28() {}
/* 001d5730 000006bc */ static ene00move2d() {}
/* 001d5df0 00000550 */ static ene00move2e() {}
/* 001d6340 00000388 */ static ene00move2f() {}
/* 001d66c8 000001f4 */ static ene00move30() {}
/* 001d68c0 000003b8 */ static ene00move38() {}
/* 001d6c78 0000031c */ static ene00move39() {}
/* 001d6f98 00000358 */ static ene00move3a() {}
/* 001d72f0 00000090 */ static ene00move3d() {}
/* 001d7380 000000dc */ static ene00move3e() {}
/* 001d7460 000001fc */ static ene00move3f() {}

// *****************************************************************************
// FILE -- g_enemy/ene00pro/ene00joy.c
// *****************************************************************************

/* 001d7660 00000760 */ ene00joy_plmain() {}

// *****************************************************************************
// FILE -- g_enemy/ene01pro/ene01mv.c
// *****************************************************************************

/* 001d7dc0 00000074 */ ene01move_main() {}
/* 001d7e38 00000148 */ static ene01posecntl() {}
/* 001d7f80 00000008 */ static enedummymv() {}
/* 001d7f88 000001a0 */ static ene01move00() {}
/* 001d8128 000000d4 */ static ene01move01() {}
/* 001d8200 00000104 */ static ene01move02() {}
/* 001d8308 00000190 */ static ene01move04() {}
/* 001d8498 000000fc */ static ene01move05() {}
/* 001d8598 000000dc */ static ene01move07() {}
/* 001d8678 00000158 */ static ene01move09() {}
/* 001d87d0 0000017c */ static ene01move0a() {}
/* 001d8950 0000023c */ static ene01move0d() {}
/* 001d8b90 0000034c */ static ene01move18() {}
/* 001d8ee0 000001a4 */ static ene01move20() {}
/* 001d9088 00000344 */ static ene01move24() {}
/* 001d93d0 0000035c */ static ene01move25() {}
/* 001d9730 000005d4 */ static ene01move28() {}
/* 001d9d08 0000019c */ static ene01move2c() {}

// *****************************************************************************
// FILE -- g_enemy/ene01pro/ene01joy.c
// *****************************************************************************

/* 001d9ea8 00000378 */ ene01joy_plmain() {}

// *****************************************************************************
// FILE -- g_enemy/ene02pro/ene02mv.c
// *****************************************************************************

/* 001da220 00000074 */ ene02move_main() {}
/* 001da298 00000008 */ static enedummymv() {}
/* 001da2a0 00000078 */ static ene02move00() {}
/* 001da318 0000005c */ static ene02move01() {}
/* 001da378 000000fc */ static ene02move02() {}
/* 001da478 00000108 */ static ene02move04() {}
/* 001da580 000000b0 */ static ene02move07() {}
/* 001da630 00000118 */ static ene02move09() {}
/* 001da748 00000100 */ static ene02move0d() {}
/* 001da848 00000148 */ static ene02move1c() {}
/* 001da990 00000138 */ static ene02move20() {}
/* 001daac8 0000018c */ static ene02move23() {}
/* 001dac58 000001b4 */ static ene02move2c() {}
/* 001dae10 00000074 */ ene02B_move_main() {}
/* 001dae88 0000004c */ static ene02B_move00() {}
/* 001daed8 00000114 */ static ene02B_move02() {}
/* 001daff0 00000378 */ static ene02B_move04() {}
/* 001db368 000003a4 */ static ene02B_move14() {}
/* 001db710 00000448 */ static ene02B_move18() {}
/* 001dbb58 00000454 */ static ene02B_move21() {}
/* 001dbfb0 00000414 */ static ene02B_move24() {}
/* 001dc3c8 000001b4 */ static ene02B_move2c() {}

// *****************************************************************************
// FILE -- g_enemy/ene02pro/ene02joy.c
// *****************************************************************************

/* 001dc580 000002c4 */ ene02joy_plmain() {}
/* 001dc848 000003e0 */ ene02B_joy_plmain() {}

// *****************************************************************************
// FILE -- g_enemy/ene03pro/ene03mv.c
// *****************************************************************************

/* 001dcc28 00000080 */ ene03move_main() {}
/* 001dcca8 00000090 */ static bigdino_vbrset() {}
/* 001dcd38 00000008 */ static enedummyElem() {}
/* 001dcd40 000000ac */ static ene03moveElem000() {}
/* 001dcdf0 000000b4 */ static ene03moveElem001() {}
/* 001dcea8 000000ac */ static ene03moveElem020() {}
/* 001dcf58 00000044 */ static ene03moveElem021() {}
/* 001dcfa0 00000048 */ static ene03moveElem022() {}
/* 001dcfe8 00000044 */ static ene03moveElem023() {}
/* 001dd030 00000048 */ static ene03moveElem024() {}
/* 001dd078 00000054 */ static ene03moveNewTurn00() {}
/* 001dd0d0 00000078 */ static ene03moveNewTurn01() {}
/* 001dd148 00000074 */ static ene03moveMeteoAtc00() {}
/* 001dd1c0 000001c0 */ static ene03moveMeteoAtc01() {}
/* 001dd380 000000f8 */ static ene03moveElem0a0() {}
/* 001dd478 00000124 */ static ene03moveElem0a1() {}
/* 001dd5a0 00000060 */ static ene03moveElem0e0() {}
/* 001dd600 00000098 */ static ene03moveElem0e1() {}
/* 001dd698 00000044 */ static ene03moveElem0e2() {}
/* 001dd6e0 0000004c */ static ene03moveElem0e3() {}
/* 001dd730 000000f4 */ static ene03moveElem0e4() {}
/* 001dd828 00000050 */ static ene03moveElem100() {}
/* 001dd878 00000104 */ static ene03moveElem101() {}
/* 001dd980 000000f0 */ static ene03moveElem102() {}
/* 001dda70 00000078 */ static ene03moveElem103() {}
/* 001ddae8 000000a8 */ static ene03moveElem141() {}
/* 001ddb90 000000b4 */ static ene03moveElem142() {}
/* 001ddc48 00000070 */ static ene03moveElem143() {}
/* 001ddcb8 00000024 */ static ene03moveElem144() {}
/* 001ddce0 00000090 */ static ene03moveElem145() {}
/* 001ddd70 0000007c */ static ene03moveElem1c0() {}
/* 001dddf0 00000078 */ static ene03moveElem1c1() {}
/* 001dde68 00000084 */ static ene03moveElem200() {}
/* 001ddef0 00000098 */ static ene03moveElem201() {}
/* 001ddf88 00000078 */ static ene03moveElem202() {}
/* 001de000 000000b0 */ static ene03moveElem210() {}
/* 001de0b0 000001a0 */ static ene03moveElem211() {}
/* 001de250 0000006c */ static ene03moveElem220() {}
/* 001de2c0 000000f4 */ static ene03moveElem221() {}
/* 001de3b8 00000058 */ static ene03moveElem222() {}
/* 001de410 00000188 */ static ene03moveElem223() {}
/* 001de598 00000084 */ static ene03moveElem230() {}
/* 001de620 00000074 */ static ene03moveElem231() {}
/* 001de698 000001fc */ static ene03moveElem232() {}
/* 001de898 00000068 */ static ene03moveElem233() {}
/* 001de900 00000084 */ static ene03moveElem240() {}
/* 001de988 00000070 */ static ene03moveElem241() {}
/* 001de9f8 000000f8 */ static ene03moveElem242() {}
/* 001deaf0 000000ac */ static ene03moveElem243() {}
/* 001deba0 00000098 */ static ene03moveElem250() {}
/* 001dec38 00000134 */ static ene03moveElem251() {}
/* 001ded70 0000004c */ static ene03moveElem252() {}
/* 001dedc0 00000050 */ static ene03moveElem253() {}
/* 001dee10 000000f4 */ static ene03moveElem254() {}
/* 001def08 0000005c */ static ene03moveElem270() {}
/* 001def68 000000d8 */ static ene03moveElem271() {}
/* 001df040 000000c4 */ static ene03moveElem272() {}
/* 001df108 0000007c */ static ene03moveElem273() {}
/* 001df188 00000078 */ static ene03moveElem274() {}
/* 001df200 000000a4 */ static ene03moveElem280() {}
/* 001df2a8 00000098 */ static ene03moveElem281() {}
/* 001df340 000000d4 */ static ene03moveElem282() {}
/* 001df418 0000005c */ static ene03btatcsp00() {}
/* 001df478 00000094 */ static ene03btatcsp01() {}
/* 001df510 00000074 */ static ene03btatcsp02() {}
/* 001df588 00000060 */ static ene03btatcsp03() {}
/* 001df5e8 00000068 */ static ene03dmgmvsp00() {}
/* 001df650 000000e0 */ static ene03dmgmvsp01() {}
/* 001df730 0000014c */ static ene03moveDeadElem00() {}
/* 001df880 0000018c */ static ene03moveDeadElem01() {}
/* 001dfa10 000001a8 */ static ene03moveDeadElem02() {}
/* 001dfbb8 000001b0 */ static ene03moveDeadElem03() {}
/* 001dfd68 000001a8 */ static ene03moveDeadElem04() {}
/* 001dff10 000001b8 */ static ene03moveDeadElem05() {}
/* 001e00c8 000000dc */ static ene03moveDeadElem06() {}

// *****************************************************************************
// FILE -- g_enemy/ene03pro/ene03joy.c
// *****************************************************************************

/* 001e01a8 00000810 */ ene03joy_plmain() {}

// *****************************************************************************
// FILE -- g_enemy/ene04pro/ene04mv.c
// *****************************************************************************

/* 001e09b8 000000b8 */ ene04move_main() {}
/* 001e0a70 00000008 */ static enedummyElem() {}
/* 001e0a78 00000070 */ static ene04moveElem000() {}
/* 001e0ae8 0000008c */ static ene04moveElem001() {}
/* 001e0b78 00000070 */ static ene04moveElem020() {}
/* 001e0be8 0000008c */ static ene04moveElem021() {}
/* 001e0c78 00000074 */ static ene04moveElem030() {}
/* 001e0cf0 00000054 */ static ene04moveElem050() {}
/* 001e0d48 00000060 */ static ene04moveElem051() {}
/* 001e0da8 00000078 */ static ene04moveElem070() {}
/* 001e0e20 00000058 */ static ene04moveElem090() {}
/* 001e0e78 000000b8 */ static ene04moveElem091() {}
/* 001e0f30 00000058 */ static ene04moveElem0f0() {}
/* 001e0f88 00000060 */ static ene04moveElem0f1() {}
/* 001e0fe8 0000005c */ static ene04moveElem1c0() {}
/* 001e1048 00000060 */ static ene04moveElem1c1() {}
/* 001e10a8 00000080 */ ene04Bmove_main() {}
/* 001e1128 00000008 */ static enedummyElemB() {}
/* 001e1130 00000094 */ static ene04BmoveElem000() {}
/* 001e11c8 000000bc */ static ene04BmoveElem001() {}
/* 001e1288 0000009c */ static ene04BmoveElem021() {}
/* 001e1328 000000c0 */ static ene04BmoveElem022() {}
/* 001e13e8 00000098 */ static ene04BmoveElem023() {}
/* 001e1480 00000050 */ static ene04BmoveElem026() {}
/* 001e14d0 0000006c */ static ene04BmoveElem090() {}
/* 001e1540 00000078 */ static ene04BmoveElem091() {}
/* 001e15b8 0000009c */ static ene04BmoveElem140() {}
/* 001e1658 0000007c */ static ene04BmoveElem141() {}
/* 001e16d8 000000c0 */ static ene04BmoveElem142() {}
/* 001e1798 00000098 */ static ene04BmoveElem143() {}
/* 001e1830 00000054 */ static ene04BmoveElem144() {}
/* 001e1888 00000070 */ static ene04BmoveElem145() {}
/* 001e18f8 00000078 */ static ene04BmoveElem146() {}
/* 001e1970 00000074 */ static ene04BmoveElem1c0() {}
/* 001e19e8 000000cc */ static ene04BmoveElem1c1() {}
/* 001e1ab8 00000160 */ static ene04BmoveElem1c2() {}
/* 001e1c18 000000b4 */ static ene04BmoveElem2c0() {}
/* 001e1cd0 00000078 */ static ene04BmoveElem2c1() {}
/* 001e1d48 00000074 */ static ene04BmoveElem2c2() {}

// *****************************************************************************
// FILE -- g_enemy/ene04pro/ene04joy.c
// *****************************************************************************

/* 001e1dc0 00000278 */ ene04joy_plmain() {}
/* 001e2038 000006a4 */ ene04Bjoy_plmain() {}

// *****************************************************************************
// FILE -- g_enemy/ene_elsp/ene_elsm.c
// *****************************************************************************

/* 001e26e0 000001fc */ eneels_dmghitchk() {}
/* 001e28e0 00000424 */ eneels_shpbrowoffinit00() {}
/* 001e2d08 00000274 */ static eneels_shpbrowoff() {}
/* 001e2f80 000000d4 */ ene_elsmove_main() {}
/* 001e3058 00000100 */ static eneels_fireset() {}
/* 001e3158 000001d0 */ static eneelsmvdtset() {}
/* 001e3328 00000008 */ static enedummymv() {}
/* 001e3330 000000b0 */ static eneelsmove00() {}
/* 001e33e0 00000224 */ static eneelsmove10() {}
/* 001e3608 000002b0 */ static eneelsmove12() {}
/* 001e38b8 00000708 */ static eneelsmove18() {}
/* 001e3fc0 00000588 */ static eneelsmove19() {}
/* 001e4548 000005cc */ static eneelsmove1a() {}

// *****************************************************************************
// FILE -- g_enemy/ene_elsp/ene_elsj.c
// *****************************************************************************

/* 001e4b18 00000240 */ ene_elsjoy_plmain() {}

// *****************************************************************************
// FILE -- air/air.c
// *****************************************************************************

/* 001e4d58 00000030 */ gsGetFixFarZ() {}
/* 001e4d88 000000b4 */ gsWorldTexAnimation() {}

// *****************************************************************************
// FILE -- air/a_event.c
// *****************************************************************************

/* 001e4e40 00000088 */ gsEventInit() {}
/* 001e4ec8 0000006c */ gsReadEventMatrix() {}
/* 001e4f38 0000006c */ gsReadSwlEventMatrix() {}
/* 001e4fa8 000000d0 */ gsReadEventObject() {}
/* 001e5078 00000060 */ gsEnemySet_MovieInit() {}
/* 001e50d8 000001b0 */ _gsEnemySet_MovieInit() {}
/* 001e5288 00000050 */ gsSearchEventNo() {}
/* 001e52d8 00000168 */ gsEventMatrixCtrl() {}
/* 001e5440 0000011c */ gsSetEventObject() {}
/* 001e5560 000000b0 */ gsGetTransRelative() {}
/* 001e5610 00000294 */ gsSetObject_Dino() {}
/* 001e58a8 00000048 */ gsDinoIdSameCheck() {}
/* 001e58f0 000001ac */ gsSetEventItem() {}
/* 001e5aa0 00000048 */ gsItemIdSameCheck() {}
/* 001e5ae8 0000010c */ gsReadFixData() {}
/* 001e5bf8 000001a8 */ gsFixDinoCtrl() {}
/* 001e5da0 000001a8 */ gsFixDinoSet() {}
/* 001e5f48 000000b0 */ gsGetFieldObjCross() {}
/* 001e5ff8 000000c0 */ gsGetFieldCross() {}
/* 001e60b8 00000078 */ gsEnemyPictureLoad() {}

// *****************************************************************************
// FILE -- air/a_item.c
// *****************************************************************************

/* 001e6130 00000090 */ gsItemInit() {}
/* 001e61c0 000001d8 */ gsEventObjItemDataLoad() {}
/* 001e6398 000000fc */ gsMake_AllItemObjPacket() {}
/* 001e6498 000000e4 */ gsMake_ItemObjPacket() {}
/* 001e6580 000000b8 */ gsObjSet_FixItem() {}
/* 001e6638 000000c8 */ gsObjSet_AnotherItem() {}
/* 001e6700 000002c0 */ gsMakeSet_AllFixItem() {}
/* 001e69c0 000001a8 */ gsEventObjSetItemMain() {}
/* 001e6b68 00000024 */ gsSt1_ItemManagement() {}
/* 001e6b90 0000010c */ gsDistCheckItemSet() {}
/* 001e6ca0 000000dc */ gsBomb2AreaCheck() {}
/* 001e6d80 000001b4 */ gsItem_FixBombFunc() {}
/* 001e6f38 00000288 */ gsSetItemFromBreakObject() {}
/* 001e71c0 0000012c */ gsDeleteEnemySetItemObj() {}
/* 001e72f0 0000026c */ gsItem_BombFunc() {}
/* 001e7560 000000d0 */ gsAppearAnotherItem() {}
/* 001e7630 00000088 */ gsRotateAnotherItem() {}
/* 001e76b8 00000118 */ gsFlashAnotherItem() {}
/* 001e77d0 000000b8 */ gsDeleteAnotherItem() {}
/* 001e7888 00000040 */ gsHagAnotherItem() {}
/* 001e78c8 00000130 */ gsObjectSetFixItem() {}
/* 001e79f8 0000012c */ gsObjectSetAnotherItem() {}
/* 001e7b28 00000060 */ gsAllItemInfosClear() {}
/* 001e7b88 00000064 */ gsFieldItemInfosClear() {}
/* 001e7bf0 00000084 */ gsEnemyItemInfosClear() {}
/* 001e7c78 000000dc */ gsAllItemReset() {}
/* 001e7d58 00000040 */ gsFixItemFreeInfosSearch() {}
/* 001e7d98 00000040 */ gsAnotherItemFreeInfosSearch() {}
/* 001e7dd8 00000040 */ gsAnotherItemFreeInfosSearch2() {}
/* 001e7e18 000001b8 */ gfShape_AttachObject2_item() {}
/* 001e7fd0 00000030 */ GFShape_AttachObject_item() {}
/* 001e8000 00000090 */ gsItem_SizeRot_Change() {}
/* 001e8090 00000040 */ gsItem_SizeRot_Return() {}
/* 001e80d0 00000070 */ gsClearFixItem() {}
/* 001e8140 000001f4 */ gsMakeAddFixItem() {}
/* 001e8338 00000080 */ gsAddFixItem() {}
/* 001e83b8 00000140 */ gsItemReset_ForMovie() {}
/* 001e84f8 0000005c */ gsInit_ThrowWeapon() {}
/* 001e8558 00000070 */ gsClear_ThrowWeapon_Infos() {}
/* 001e85c8 00000040 */ gsSearch_ThrowWeapon_FreeInfos() {}
/* 001e8608 000000f0 */ gsMake_ThrowWeapon() {}
/* 001e86f8 000001a8 */ gsManagement_ThrowWeapon() {}
/* 001e88a0 000001e8 */ gsThrowWeapon() {}
/* 001e8a88 000000e0 */ gsSetMatrix_ThrowWeapon() {}
/* 001e8b68 00000070 */ gsThrowWeaponReset() {}

// *****************************************************************************
// FILE -- air/a_evtthk.c
// *****************************************************************************

/* 001e8bd8 00000034 */ gsEventMatrixThinkMain() {}
/* 001e8c10 000002c0 */ gsThinkMatrixDataCheck() {}
/* 001e8ed0 000002c0 */ gsThinkMatrixDataCheck2() {}
/* 001e9190 00000064 */ gsEventMatrixCmpDataINT() {}
/* 001e91f8 00000094 */ gsEventMatrixCmpDataFLOAT() {}
/* 001e9290 00000048 */ gsGetRandINT() {}
/* 001e92d8 00000068 */ gsRotChange() {}

// *****************************************************************************
// FILE -- air/a_evtflg.c
// *****************************************************************************

/* 001e9340 0000004c */ gsEventFlagOnOffCheck() {}
/* 001e9390 00000050 */ gsEventFlagOn() {}
/* 001e93e0 00000050 */ gsEventFlagOff() {}
/* 001e9430 00000084 */ gsEventFlagCtrlOfSwitchLine() {}
/* 001e94b8 0000003c */ gsEvtFlag255Clear() {}

// *****************************************************************************
// FILE -- air/a_itmthk.c
// *****************************************************************************

/* 001e94f8 00000140 */ gsReadItemThkMatrix() {}
/* 001e9638 000000a0 */ gsAppearItemSelect() {}
/* 001e96d8 00000068 */ gsAppearItemSelect2() {}

// *****************************************************************************
// FILE -- air/a_rdcscn.c
// *****************************************************************************

/* 001e9740 00000064 */ gsInitScreenReduce() {}
/* 001e97a8 00000038 */ gsSetScreenReduce() {}
/* 001e97e0 00000170 */ tgsCtrlScreenReduce() {}
/* 001e9950 00000090 */ BlackLineSet() {}

// *****************************************************************************
// FILE -- air/insect/a_insect.c
// *****************************************************************************

/* 001e99e0 00000040 */ gsIscInfosAllClear() {}
/* 001e9a20 000000dc */ gsIscInfosClear() {}
/* 001e9b00 000000b8 */ gsFreeIscInfosSearch() {}
/* 001e9bb8 000000e0 */ gsIscPictureLoad() {}
/* 001e9c98 000000d8 */ gsIscAnimLoad() {}
/* 001e9d70 000000a0 */ gsMake_IscObjPacket() {}
/* 001e9e10 00000088 */ gsObjSet_Insect() {}
/* 001e9e98 000000f0 */ gsMake_AllIscObj() {}
/* 001e9f88 0000006c */ gsInitInsect() {}
/* 001e9ff8 0000019c */ gsManagementInsect() {}
/* 001ea198 00000090 */ gsInsectAnimSet() {}
/* 001ea228 00000124 */ gsMakeIscLocalMatrix() {}
/* 001ea350 000000a8 */ gsFixIscSetIdCheck() {}
/* 001ea3f8 000000f0 */ gsInsectAddBreakVe() {}
/* 001ea4e8 000000bc */ gsInsectDead() {}
/* 001ea5a8 00000090 */ gsInsect_DeadDisp00() {}
/* 001ea638 00000078 */ gsInsect_DeadDisp01() {}
/* 001ea6b0 00000164 */ gsInsectInfoCheck() {}
/* 001ea818 00000064 */ gsIscInit_AfterMovie() {}
/* 001ea880 00000014 */ gsInit_IscSe() {}
/* 001ea898 000002a4 */ gsIscSe_VolumeAdjust() {}

// *****************************************************************************
// FILE -- air/insect/a_iscsub.c
// *****************************************************************************

/* 001eab40 00000134 */ gsGetPurPosRot() {}
/* 001eac78 00000054 */ gsIscRotToVector() {}
/* 001eacd0 00000154 */ gsIscGetPurPosRot() {}
/* 001eae28 000001f0 */ gsInsectBreakVeSet() {}

// *****************************************************************************
// FILE -- air/insect/a_goki.c
// *****************************************************************************

/* 001eb018 000000cc */ gsSetInsect_GOKI() {}
/* 001eb0e8 000001d8 */ gsSetInsectPos_GOKI() {}
/* 001eb2c0 00000134 */ gsInsectSetPurPosVeY() {}
/* 001eb3f8 00000008 */ gsInsect00_DummyAct() {}
/* 001eb400 00000040 */ gsInsectCtrl_GOKI() {}
/* 001eb440 000000b8 */ gsInsect00_Act00() {}
/* 001eb4f8 00000134 */ gsInsect00_Act01() {}
/* 001eb630 00000124 */ gsInsect00_Act02() {}
/* 001eb758 000001e8 */ gsInsect00_Act08() {}
/* 001eb940 000000ac */ gsInsect00_Act09() {}
/* 001eb9f0 000001f4 */ gsInsect00_Act10() {}
/* 001ebbe8 000000bc */ gsInsect00_Act11() {}
/* 001ebca8 00000098 */ gsInsect00_Act12() {}
/* 001ebd40 00000060 */ gsInsect00_Act13() {}
/* 001ebda0 00000124 */ gsInsectGndCheck_GOKI() {}
/* 001ebec8 000001c0 */ gsInsectFrontCheck_GOKI() {}
/* 001ec088 0000009c */ gsEyesAreaCheck_GOKI() {}
/* 001ec128 00000028 */ gsInsectCling_GOKI() {}
/* 001ec150 00000048 */ gsInsectClingCheck_GOKI() {}
/* 001ec198 000000a0 */ gsInsectPlEyesRolCheck_GOKI() {}
/* 001ec238 00000150 */ gsInsectDropGndCheck_GOKI() {}

// *****************************************************************************
// FILE -- air/insect/a_sany.c
// *****************************************************************************

/* 001ec388 0000021c */ gsFixSetCheck_SANY() {}
/* 001ec5a8 00000124 */ gsGetSanyGndCross() {}
/* 001ec6d0 000000a0 */ gsInsectCtrl_SANY() {}
/* 001ec770 000000dc */ gsInsect01_Act00() {}
/* 001ec850 000000bc */ gsInsect01_Act01() {}
/* 001ec910 00000058 */ gsInsect01_Act02() {}

// *****************************************************************************
// FILE -- air/insect/a_tomb.c
// *****************************************************************************

/* 001ec968 000001ec */ gsFixSetCheck_TOMB() {}
/* 001ecb58 000000a8 */ gsInsectCtrl_TOMB() {}
/* 001ecc00 00000050 */ gsInsect02_Act00() {}
/* 001ecc50 0000011c */ gsInsect02_Act01() {}
/* 001ecd70 00000090 */ gsInsect02_Act02() {}
/* 001ece00 00000184 */ gsGetInsectRotPurPos_TOMB() {}
/* 001ecf88 00000068 */ gsRandCountSet_TOMB() {}

// *****************************************************************************
// FILE -- air/test/i_test.c
// *****************************************************************************

/* 001ecff0 00000430 */ I_SHOW_Init() {}
/* 001ed420 0000024c */ I_SHOW_Exec() {}
/* 001ed670 00000030 */ I_SHOW_End() {}
/* 001ed6a0 00000260 */ ISHOW_PictureLoad() {}
/* 001ed900 00000090 */ ISHOW_CreateItem() {}
/* 001ed990 000000a0 */ ISHOW_CreateObjectPacket() {}
/* 001eda30 000000c4 */ ISHOW_ItemObjectSet() {}
/* 001edaf8 00000330 */ ISHOW_JoyCheck() {}
/* 001ede28 0000011c */ ISHOW_ItemSet() {}
/* 001edf48 00000054 */ ISHOW_InfosClear() {}
/* 001edfa0 000000fc */ gsIWNamePrint() {}

// *****************************************************************************
// FILE -- air/a_spbtl.c
// *****************************************************************************

/* 001ee0a0 00000044 */ gsSt1BossInit() {}
/* 001ee0e8 00000138 */ gsSt1BossManagement() {}
/* 001ee220 0000002c */ gsSt2_BattleInit_RAPT() {}
/* 001ee250 00000060 */ gsSt2_DieCheck_RAPT() {}
/* 001ee2b0 0000003c */ gsSt3BossInit() {}
/* 001ee2f0 00000210 */ gsSt3BossManagement() {}
/* 001ee500 00000244 */ gsSt3BossReqCheck() {}
/* 001ee748 00000048 */ gsBossNumCount() {}
/* 001ee790 00000024 */ gsSt7_BattleInit_OBRAPT() {}
/* 001ee7b8 00000064 */ gsSt7_DieCheck_OBRAPT() {}
/* 001ee820 00000040 */ gsGetCheckIdEnemyNum() {}
/* 001ee860 000000b0 */ gsSt3GetSetBossNum() {}
/* 001ee910 000001ac */ gsSpBattleBossSet() {}
/* 001eeac0 00000028 */ gsSt4_ExpInit() {}
/* 001eeae8 000000d8 */ gsSt4_ExpManage() {}

// *****************************************************************************
// FILE -- sound/g_sound.c
// *****************************************************************************

/* 001eebc0 00000208 */ gsSoundInitModule() {}
/* 001eedc8 000000e4 */ gsSoundInitAll() {}
/* 001eeeb0 00000024 */ gsSoundReadSe() {}
/* 001eeed8 00000054 */ gsSoundReadBgm() {}
/* 001eef30 00000064 */ gsSoundReadWait() {}
/* 001eef98 00000070 */ gsSoundComWait() {}
/* 001ef008 00000008 */ gsSoundReset() {}
/* 001ef010 00000044 */ gsSoundSeMePlay() {}
/* 001ef058 0000008c */ gsSoundSeMePlayDir() {}
/* 001ef0e8 00000068 */ gsSoundSeMePlay3D() {}
/* 001ef150 00000044 */ gsSoundSeMeStop() {}
/* 001ef198 00000064 */ gsSoundSeMeStop2() {}
/* 001ef200 00000020 */ gsSoundStopVoice() {}
/* 001ef220 0000002c */ gsSoundBgmPlay() {}
/* 001ef250 00000034 */ gsSoundBgmReplay() {}
/* 001ef288 00000028 */ gsSoundBgmStop() {}
/* 001ef2b0 00000028 */ gsSoundBgmCrossFade() {}
/* 001ef2d8 000000cc */ gsSoundClose() {}
/* 001ef3a8 00000008 */ gsSoundSetEffect() {}
/* 001ef3b0 00000008 */ gsSoundGetEffect() {}
/* 001ef3b8 00000020 */ gsSoundSeMain() {}
/* 001ef3d8 00000020 */ gsSoundMasterVol() {}
/* 001ef3f8 00000020 */ gsSoundBgmVol() {}
/* 001ef418 00000080 */ gsSoundReboot() {}
/* 001ef498 00000020 */ gsSoundOff() {}
/* 001ef4b8 000000c0 */ static _gsSoundEE_LoadFreePort() {}
/* 001ef578 0000003c */ static _gsSoundEE_EntryChBuf() {}
/* 001ef5b8 00000050 */ static _gsSoundEE_DeleteChBuf() {}
/* 001ef608 000001dc */ static _gsSound3D_GetPos() {}
/* 001ef7e8 000000d4 */ gsSoundPlaySE_WORLD() {}
/* 001ef8c0 000000a4 */ gsSoundEeSE_ALL_CLEAR() {}
/* 001ef968 0000006c */ gsSoundEeSE_ALL_SLEEP() {}
/* 001ef9d8 0000003c */ gsSoundEeSE_ALL_WAKE() {}
/* 001efa18 00000018 */ gsSoundEeSE_PLAY() {}
/* 001efa30 000000ac */ gsSoundEeSE_PLAY2() {}
/* 001efae0 000000f0 */ gsSoundEeSE_PLAY_WORLD() {}
/* 001efbd0 00000050 */ gsSoundEeSE_STOP() {}
/* 001efc20 00000038 */ gsSoundEeSE_VOLUME() {}
/* 001efc58 00000034 */ gsSoundEeSE_PITCH() {}
/* 001efc90 00000184 */ gsSoundEeSE_VOLUME_WORLD() {}

// *****************************************************************************
// FILE -- sound/g_cdv.c
// *****************************************************************************

/* 001efe18 0000003c */ gsCdvInit() {}
/* 001efe58 00000014 */ gsCdvMain() {}
/* 001efe70 00000020 */ gsCdvSync() {}
/* 001efe90 0000005c */ gsCdvFlushWait() {}
/* 001efef0 00000028 */ gsCdvDiscReady() {}

// *****************************************************************************
// FILE -- hoya/bmp.c
// *****************************************************************************

/* 001eff18 000001cc */ gs_frameGetterOne() {}
/* 001f00e8 00000248 */ gs_frameGetterTwo() {}
/* 001f0330 00000120 */ gs_FrameGetterOne() {}
/* 001f0450 000001b0 */ gs_FrameGetterTwo() {}

// *****************************************************************************
// FILE -- hoya/g_2d.c
// *****************************************************************************

/* 001f0600 00000034 */ hyInitDrawPoint() {}
/* 001f0638 000000f8 */ hyDrawPoint() {}
/* 001f0730 00000050 */ hyInitDrawLine() {}
/* 001f0780 00000160 */ hyDrawLine() {}
/* 001f08e0 00000050 */ hyInitDrawLineStrip() {}
/* 001f0930 00000128 */ hyDrawLineStrip() {}
/* 001f0a58 000000c0 */ hyInitDrawSprite() {}
/* 001f0b18 00000228 */ hyDrawSprite() {}
/* 001f0d40 000000fc */ hyInitDrawSprites() {}
/* 001f0e40 0000026c */ hyDrawSprites() {}
/* 001f10b0 00000118 */ hyInitDrawPolySprite() {}
/* 001f11c8 00000374 */ hyDrawPolySprite() {}

// *****************************************************************************
// FILE -- hoya/g_ezipu.c
// *****************************************************************************

/* 001f1540 00000028 */ gsEzIpuChangeDraw() {}
/* 001f1568 00000078 */ gsEzIpuInitSpr() {}
/* 001f15e0 000000bc */ gsEzIpuDraw() {}
/* 001f16a0 00000034 */ gsEzIpuSetLoadImageTags() {}
/* 001f16d8 00000270 */ static gsEzIpuSetLoadImageTagsGeneral() {}
/* 001f1948 0000004c */ static setDMAscTag() {}
/* 001f1998 00000050 */ static setGIFtag() {}
/* 001f19e8 0000002c */ static setGIFad() {}
/* 001f1a18 0000002c */ static setBITBLTBUF() {}
/* 001f1a48 0000002c */ static setTRXPOS() {}
/* 001f1a78 00000028 */ static setTRXREG() {}
/* 001f1aa0 00000020 */ static setTRXDIR() {}
/* 001f1ac0 00000038 */ gsEzIpuLoadImage() {}
/* 001f1af8 0000008c */ static gsEzIpuSetToIPUtags() {}
/* 001f1b88 00000038 */ static gsEzIpuSetDMAtoIPU() {}
/* 001f1bc0 0000003c */ static gsEzIpuSetDMAfromIPU() {}
/* 001f1c00 00000070 */ static gsEzIpuGetFlags() {}
/* 001f1c70 00000074 */ gsEzIpuLoadData() {}
/* 001f1ce8 00000178 */ gsReadEzIpuHeader() {}
/* 001f1e60 000000d0 */ gsEzIpuSet() {}
/* 001f1f30 00000034 */ gsEzIpuInit() {}
/* 001f1f68 000001b4 */ gsEzIpuMain() {}
/* 001f2120 0000004c */ gsEzIpuEnd() {}
/* 001f2170 00000024 */ scTag() {}

// *****************************************************************************
// FILE -- hoya/g_pman.c
// *****************************************************************************

/* 001f2198 00000008 */ InitDummy() {}
/* 001f21a0 00000008 */ MainDummy() {}
/* 001f21a8 00000008 */ EndDummy() {}

// *****************************************************************************
// FILE -- hoya/g_string.c
// *****************************************************************************

/* 001f21b0 00000014 */ LoadLetterPig() {}
/* 001f21c8 00000080 */ InitLetter() {}
/* 001f2248 0000001c */ InitLetterAll() {}
/* 001f2268 00000048 */ DeleteEntryNumSprite() {}
/* 001f22b0 00000024 */ GetFontInfo() {}
/* 001f22d8 000001c8 */ GetUV() {}
/* 001f24a0 0000012c */ GetUV2() {}
/* 001f25d0 00000048 */ ChangeDrawFlag() {}
/* 001f2618 000000a4 */ EntryFontOne() {}
/* 001f26c0 00000298 */ DrawFontAll() {}
/* 001f2958 00000054 */ ClearPigPixelData() {}
/* 001f29b0 000000e0 */ makeTexArea4Font() {}
/* 001f2a90 000000f0 */ makeHyTexArea4Font() {}
/* 001f2b80 00000120 */ GetFontAdr() {}
/* 001f2ca0 000001fc */ PutChar4Font() {}
/* 001f2ea0 000001fc */ PutChar4Font2() {}
/* 001f30a0 00000018 */ EndLetterAll() {}
/* 001f30b8 00000098 */ strInitStringManager() {}
/* 001f3150 00000098 */ strInitStringManager2() {}
/* 001f31e8 0000003c */ strAddSentence() {}
/* 001f3228 00000050 */ strAddShortSentence1() {}
/* 001f3278 00000044 */ strAddShortSentence2() {}
/* 001f32c0 000000a0 */ strRemoveSentence1() {}
/* 001f3360 00000090 */ strRemoveSentence2() {}
/* 001f33f0 00000128 */ strChangeColSentence1() {}
/* 001f3518 00000110 */ strChangeColSentence2() {}
/* 001f3628 00000048 */ strChangeDrawFlag() {}
/* 001f3670 00000278 */ strDrawSentence() {}
/* 001f38e8 0000026c */ strDrawSentence2() {}
/* 001f3b58 000000a8 */ strEraseSentence() {}
/* 001f3c00 000000a0 */ strGetOneFontData() {}
/* 001f3ca0 0000002c */ strManagementFunc() {}
/* 001f3cd0 00000014 */ strEndStringManager() {}
/* 001f3ce8 0000002c */ AddMessageData() {}
/* 001f3d18 00000024 */ AddMessageData2() {}
/* 001f3d40 0000002c */ DrawMessageData() {}
/* 001f3d70 00000028 */ DrawMessageData2() {}
/* 001f3d98 00000054 */ InitShortSentence() {}
/* 001f3df0 00000018 */ AddShortSentence() {}
/* 001f3e08 00000174 */ static PutShortStr4Font() {}
/* 001f3f80 0000018c */ static PutShortStr4Font2() {}
/* 001f4110 00000150 */ PutStr4Font() {}
/* 001f4260 00000170 */ PutStr4Font2() {}
/* 001f43d0 00000090 */ hyPutLumpsOfStr() {}
/* 001f4460 0000015c */ hyStrConvHex2Bcd() {}

// *****************************************************************************
// FILE -- hoya/g_test2.c
// *****************************************************************************

/* 001f45c0 0000017c */ hySetVram() {}
/* 001f4740 00000204 */ G_TTL_Init() {}
/* 001f4948 00000508 */ G_TTL_Exec() {}
/* 001f4e50 00000040 */ G_TTL_End() {}
/* 001f4e90 00000014 */ G_RESULT_Init() {}
/* 001f4ea8 00000014 */ G_RESULT_Exec() {}
/* 001f4ec0 00000038 */ G_RESULT_End() {}
/* 001f4ef8 00000014 */ G_FRESULT_Init() {}
/* 001f4f10 00000014 */ G_FRESULT_Exec() {}
/* 001f4f28 00000084 */ G_FRESULT_End() {}
/* 001f4fb0 00000014 */ G_OPTION_Init() {}
/* 001f4fc8 00000014 */ G_OPTION_Exec() {}
/* 001f4fe0 00000038 */ G_OPTION_End() {}
/* 001f5018 00000014 */ G_CONTINUE_Init() {}
/* 001f5030 00000014 */ G_CONTINUE_Exec() {}
/* 001f5048 00000038 */ G_CONTINUE_End() {}
/* 001f5080 00000014 */ G_PAUSE_Init() {}
/* 001f5098 00000014 */ G_PAUSE_Exec() {}
/* 001f50b0 00000088 */ G_PAUSE_End() {}
/* 001f5138 00000014 */ G_NAME_Init() {}
/* 001f5150 00000014 */ G_NAME_Exec() {}
/* 001f5168 00000084 */ G_NAME_End() {}
/* 001f51f0 00000014 */ G_MEMC_Init() {}
/* 001f5208 00000014 */ G_MEMC_Exec() {}
/* 001f5220 00000084 */ G_MEMC_End() {}
/* 001f52a8 00000014 */ G_MODESEL_Init() {}
/* 001f52c0 00000014 */ G_MODESEL_Exec() {}
/* 001f52d8 00000084 */ G_MODESEL_End() {}
/* 001f5360 00000014 */ G_STARTGS3_Init() {}
/* 001f5378 00000014 */ G_STARTGS3_Exec() {}
/* 001f5390 0000003c */ G_STARTGS3_End() {}
/* 001f53d0 000000ec */ gsHoyaPause_Init() {}
/* 001f54c0 00000294 */ gsHoyaPause_Exec() {}
/* 001f5758 00000210 */ gsHoyaPause_Init2() {}
/* 001f5968 00000028 */ gsHoyaPause_End() {}
/* 001f5990 0000020c */ gsHoyaObjItemDataLoad() {}
/* 001f5ba0 000000e4 */ gsHoyaOption_Init() {}
/* 001f5c88 0000029c */ gsHoyaOption_Exec() {}
/* 001f5f28 00000220 */ gsHoyaOption_Init2() {}
/* 001f6148 00000028 */ gsHoyaOption_End() {}

// *****************************************************************************
// FILE -- hoya/hoya.c
// *****************************************************************************

/* 001f6170 0000002c */ hyGun1CheckScreenOut() {}
/* 001f61a0 00000008 */ hySetBgCol() {}
/* 001f61a8 00000084 */ hyInitEzSprite() {}
/* 001f6230 0000037c */ hySetEzSprite() {}
/* 001f65b0 00000174 */ MakeTextureAreaOnMemory() {}
/* 001f6728 00000024 */ hyCreateTexture() {}
/* 001f6750 00000028 */ hyCreateTexture2() {}
/* 001f6778 0000000c */ hyInitTextureManager() {}
/* 001f6788 0000000c */ hyGetEntryNo() {}
/* 001f6798 0000000c */ hySetEntryNo() {}
/* 001f67a8 0000001c */ hyGetTexUv() {}
/* 001f67c8 00000018 */ hyGetTexId() {}
/* 001f67e0 00000078 */ hyLoadTexture() {}
/* 001f6858 00000078 */ hyEntryTexture() {}
/* 001f68d0 00000060 */ hyTexAdd() {}
/* 001f6930 000000d8 */ hyLoadPigCptSight() {}
/* 001f6a08 000000b0 */ hyLoadPigCptSetu() {}
/* 001f6ab8 00000634 */ hyLoadPig() {}
/* 001f70f0 000000ac */ hyLoadPigTitle() {}
/* 001f71a0 00000120 */ hyLoadPigResult() {}
/* 001f72c0 00000120 */ hyLoadPigFResult() {}
/* 001f73e0 00000140 */ hyLoadPigOptionPart() {}
/* 001f7520 0000017c */ hyLoadPigOption2Part() {}
/* 001f76a0 000000ac */ hyLoadPigPause() {}
/* 001f7750 000000e4 */ hyLoadPigPause2() {}
/* 001f7838 00000058 */ hyLoadPigContinue() {}
/* 001f7890 000000ac */ hyLoadPigName() {}
/* 001f7940 00000034 */ hyLoadPigFont() {}
/* 001f7978 00000080 */ hyLoadPigFont2() {}
/* 001f79f8 00000098 */ hyLoadPigMemory() {}
/* 001f7a90 00000098 */ hyLoadPigStartgs3() {}
/* 001f7b28 00000020 */ hyLoadIcon() {}
/* 001f7b48 000001ac */ KeyStateUpdate() {}
/* 001f7cf8 0000003c */ getkeyPush() {}
/* 001f7d38 0000003c */ getkeyPress() {}
/* 001f7d78 00000008 */ getkeyRelease() {}
/* 001f7d80 0000003c */ getkeyState() {}
/* 001f7dc0 00000088 */ GunStateUpdate() {}
/* 001f7e48 00000028 */ getGunPush() {}
/* 001f7e70 00000028 */ getGunPress() {}
/* 001f7e98 00000020 */ getGunRelease() {}
/* 001f7eb8 00000028 */ getGunState() {}
/* 001f7ee0 00000024 */ hyInitEearthQuake() {}
/* 001f7f08 00000134 */ hyFeelEearthQuake() {}
/* 001f8040 00000024 */ hyInitSpriteManager() {}
/* 001f8068 00000034 */ hyInitSpriteInfo() {}
/* 001f80a0 0000004c */ hySearchSMSpriteInfo() {}
/* 001f80f0 00000524 */ static hyDrawSMSpriteSub() {}
/* 001f8618 0000001c */ hyDrawSMSprite() {}
/* 001f8638 00000094 */ hyEntrySMSprite() {}
/* 001f86d0 00000030 */ static hyDestroySMSpriteInfoSub() {}
/* 001f8700 0000002c */ hyDestroySMSpriteInfo() {}
/* 001f8730 0000019c */ hyEntryObj() {}
/* 001f88d0 0000017c */ hyEntryObj2() {}
/* 001f8a50 000000c0 */ static CreateBmpHead() {}
/* 001f8b10 00000230 */ PutBmpFrame() {}
/* 001f8d40 00000254 */ PutBmpZ() {}
/* 001f8f98 00000008 */ hyDumpVector() {}
/* 001f8fa0 00000014 */ hyCheckReed() {}
/* 001f8fb8 000000b0 */ hyHex2Bcd() {}
/* 001f9068 000000dc */ sceVu0RotCameraMatrix() {}
/* 001f9148 0000002c */ hyInitFadeMng() {}
/* 001f9178 000000a8 */ hySetFadePara() {}
/* 001f9220 000000e8 */ hyCalcFade() {}
/* 001f9308 00000048 */ hyInitFadeMng2() {}
/* 001f9350 00000014 */ hySetFadePara2() {}
/* 001f9368 0000020c */ hyCalcFade2() {}
/* 001f9578 00000028 */ hySwitchFadeTimer() {}
/* 001f95a0 00000014 */ hyCheckFadeFinishFlag() {}
/* 001f95b8 000003b0 */ ClipLine2D() {}
/* 001f9968 0000000c */ hyWait() {}
/* 001f9978 00000024 */ hyGetTimeSync() {}
/* 001f99a0 00000034 */ hyGetTimeSecond() {}
/* 001f99d8 00000038 */ hyGetTimeMinute() {}
/* 001f9a10 0000003c */ hyGetTimeHour() {}
/* 001f9a50 0000002c */ hyConvTimePercentage() {}
/* 001f9a80 00000024 */ hyGetTimeSyncPercentage() {}
/* 001f9aa8 00000038 */ hyGetTimeSecondPercentage() {}
/* 001f9ae0 00000038 */ hyGetTimeMinutePercentage() {}
/* 001f9b18 0000003c */ hyGetTimeHourPercentage() {}

// *****************************************************************************
// FILE -- hoya/hyopen.c
// *****************************************************************************

/* 001f9b58 00000040 */ hyWepRankGetWeaponRank() {}
/* 001f9b98 00000024 */ hyWepRankGetWeaponNo() {}
/* 001f9bc0 00000014 */ hyGetStageNumber() {}
/* 001f9bd8 00000070 */ gsResultInit() {}
/* 001f9c48 00000080 */ gsResultAllInit() {}
/* 001f9cc8 000002b4 */ hyReflectResultData() {}
/* 001f9f80 00000058 */ hyReflectResultData_FROM_CONTINUE() {}
/* 001f9fd8 000000e4 */ gsOptionInit() {}
/* 001fa0c0 0000001c */ gsPauseResetProc() {}
/* 001fa0e0 0000007c */ SetOptionScreenAdjust() {}
/* 001fa160 00000044 */ hyGetLimitTime() {}
/* 001fa1a8 000000f4 */ GetResultRank() {}
/* 001fa2a0 00000064 */ GetResultStandardTimeBonus() {}
/* 001fa308 00000024 */ GetResultStandardDinoBonus() {}
/* 001fa330 00000024 */ GetResultStandardNoDamageBonus() {}

// *****************************************************************************
// FILE -- hoya/cockpit/g_ckt2.c
// *****************************************************************************

/* 001fa358 00000254 */ gsCOCKPIT_InitCocpit2() {}
/* 001fa5b0 000000ac */ gsCOCKPIT_takiEffOptInit() {}
/* 001fa660 00000238 */ static gsCOCKPIT_takiEffInit() {}
/* 001fa898 0000003c */ FreeDataSearchOpt() {}
/* 001fa8d8 0000003c */ OrderChangeOpt() {}
/* 001fa918 000001bc */ gsCOCKPIT_takiEffMakeOptData() {}
/* 001faad8 00000074 */ ClipJudge() {}
/* 001fab50 00000508 */ gsCOCKPIT_takiEffOptDraw() {}
/* 001fb058 00000710 */ gsCOCKPIT_AddSecDraw() {}
/* 001fb768 00000618 */ gsCOCKPIT_TakionGetEffect() {}
/* 001fbd80 00000180 */ gsCOCKPIT_InitData() {}
/* 001fbf00 00000044 */ FreeDataSearch() {}
/* 001fbf48 00000048 */ NextItemData() {}
/* 001fbf90 00000054 */ OrderChange() {}
/* 001fbfe8 0000007c */ AddShowStockData() {}
/* 001fc068 00000098 */ gsCOCKPIT_ReqItemText() {}
/* 001fc100 0000042c */ gsCOCKPIT_PutItemText() {}
/* 001fc530 000003a0 */ static gsCOCKPIT_NormalItemText() {}
/* 001fc8d0 0000037c */ gsCOCKPIT_PutStockItemText() {}
/* 001fcc50 00000388 */ static gsCOCKPIT_PutItemDropText() {}
/* 001fcfd8 00000044 */ gsCOCKPIT_MakeDammyScene() {}
/* 001fd020 000001a8 */ gsCOCKPIT_LoadItem() {}
/* 001fd1c8 000000a4 */ static gsCOCKPIT_NowLoadItem() {}
/* 001fd270 00000230 */ static gsCOCKPIT_ItemSetMatrix() {}
/* 001fd4a0 000000cc */ static gsCOCKPIT_ItemEval() {}
/* 001fd570 00000080 */ static gsCOCKPIT_ItemShapeEval() {}
/* 001fd5f0 00000304 */ gsCOCKPIT_ItemDraw() {}
/* 001fd8f8 00000154 */ static gsCOCKPIT_ItemBefore() {}
/* 001fda50 00000050 */ static InitItemTextTex() {}
/* 001fdaa0 000000fc */ static PermittoSend2dItemTextTex() {}
/* 001fdba0 00000060 */ static SendItemTextTex() {}
/* 001fdc00 000000dc */ gsCOCKPIT_TakionGetInit() {}
/* 001fdce0 00000608 */ static gsCOCKPIT_TakionShowEffect() {}

// *****************************************************************************
// FILE -- hoya/cockpit/g_cockpt.c
// *****************************************************************************

/* 001fe2e8 000000f4 */ gsCOCKPIT_InitCocpit() {}
/* 001fe3e0 00000020 */ Send2dCockpitTex() {}

// *****************************************************************************
// FILE -- hoya/cockpit/g_cpblt.c
// *****************************************************************************

/* 001fe400 00000008 */ gsCOCKPIT_InitBulletSendTex() {}
/* 001fe408 00000204 */ PermittoSend2dWeaponTex() {}
/* 001fe610 0000003c */ PermittoSend2dWeaponTex2() {}
/* 001fe650 00000184 */ Send2dWeaponTex() {}
/* 001fe7d8 000001fc */ hyEntryObj4Blt() {}
/* 001fe9d8 00000174 */ gsCOCKPIT_InitBullet() {}
/* 001feb50 000000c0 */ gsCOCKPIT_InitBulletRifleSc() {}
/* 001fec10 000000c0 */ gsCOCKPIT_InitBulletRifle() {}
/* 001fecd0 00000124 */ gsCOCKPIT_InitBulletMachine() {}
/* 001fedf8 0000011c */ gsCOCKPIT_InitBulletHandgun() {}
/* 001fef18 00000124 */ gsCOCKPIT_InitBulletMissile() {}
/* 001ff040 000001d0 */ gsCOCKPIT_InitBulletMagnum() {}
/* 001ff210 00000238 */ gsCOCKPIT_InitBulletFire() {}
/* 001ff448 00000140 */ gsCOCKPIT_InitBulletHandGrenade() {}
/* 001ff588 000001ac */ gsCOCKPIT_InitBulletGutoring() {}
/* 001ff738 00000124 */ gsCOCKPIT_InitBulletMissilePod() {}
/* 001ff860 0000011c */ gsCOCKPIT_InitBulletGrenade() {}
/* 001ff980 0000011c */ gsCOCKPIT_InitBulletBowgun() {}
/* 001ffaa0 0000011c */ gsCOCKPIT_InitBulletPlasma() {}
/* 001ffbc0 0000011c */ gsCOCKPIT_InitBulletRocket() {}
/* 001ffce0 00000124 */ gsCOCKPIT_InitBulletShotgun() {}
/* 001ffe08 000002ac */ gsCOCKPIT_InitBulletSpark() {}
/* 002000b8 0000011c */ gsCOCKPIT_InitBulletFGrenade() {}
/* 002001d8 00000250 */ gsCOCKPIT_InitBulletLaser() {}
/* 00200428 00000124 */ gsCOCKPIT_InitBulletMineThrower() {}
/* 00200550 00000104 */ gsCOCKPIT_InitBulletBallet() {}
/* 00200658 000002bc */ static SetBullet_BulletBallet() {}
/* 00200918 00000350 */ static PutBullet_BulletBallet() {}
/* 00200c68 00000994 */ static PutBullet_BulletMagnum() {}
/* 00201600 0000035c */ static PutBullet_BulletFire() {}
/* 00201960 00000518 */ static PutBullet_BulletSpark() {}
/* 00201e78 00000678 */ static PutBullet_BulletMissile() {}
/* 002024f0 000007f8 */ static PutBullet_BulletMissilePod() {}
/* 00202ce8 0000065c */ static PutBullet_BulletHandgun() {}
/* 00203348 000006c8 */ static PutBullet_BulletGrenade() {}
/* 00203a10 000006c8 */ static PutBullet_BulletFGrenade() {}
/* 002040d8 000006c0 */ static PutBullet_BulletBowgun() {}
/* 00204798 000006e4 */ static PutBullet_BulletRocket() {}
/* 00204e80 00000738 */ static PutBullet_BulletPlasma() {}
/* 002055b8 00000770 */ static PutBullet_BulletMachine() {}
/* 00205d28 000009e0 */ static PutBullet_BulletHandGrenade() {}
/* 00206708 0000067c */ static PutBullet_BulletRifle() {}
/* 00206d88 000005ec */ static PutBullet_BulletRifleSc() {}
/* 00207378 000007b4 */ static PutBullet_BulletGutoring() {}
/* 00207b30 00000608 */ static PutBullet_BulletShotGun() {}
/* 00208138 0000035c */ static PutBullet_BulletLaser() {}
/* 00208498 000005b8 */ static PutBullet_BulletMineThrower() {}
/* 00208a50 00000174 */ static PutBullet_Bullet() {}
/* 00208bc8 0000015c */ gsCOCKPIT_PutBullet() {}

// *****************************************************************************
// FILE -- hoya/cockpit/g_cpboss.c
// *****************************************************************************

/* 00208d28 000004c4 */ static BossInitSprName() {}
/* 002091f0 000001b4 */ static BossDrawSprName() {}
/* 002093a8 00000410 */ static BossInitSprRest() {}
/* 002097b8 00000068 */ static BossDrawSprRest() {}
/* 00209820 00000258 */ static BossInitSprGauge() {}
/* 00209a78 0000007c */ static CalcAnmRest() {}
/* 00209af8 00000724 */ static BossCalcRest() {}
/* 0020a220 000000c8 */ static CalcAnmName() {}
/* 0020a2e8 00000240 */ static BossCalcName() {}
/* 0020a528 0000007c */ gsCOCKPIT_InitBossInfo2() {}
/* 0020a5a8 000000e4 */ gsCOCKPIT_InitBossInfo() {}
/* 0020a690 000000a4 */ SetBossInfo() {}
/* 0020a738 00000090 */ SetBossInfoLife() {}
/* 0020a7c8 00000094 */ SetBossInfoNum() {}
/* 0020a860 00000070 */ SetBossInfoOld() {}
/* 0020a8d0 00000018 */ CleartBossInfo() {}
/* 0020a8e8 00000394 */ CalcCommon() {}
/* 0020ac80 000006e0 */ PutBInfo_DinoLifeGauge() {}
/* 0020b360 000000ac */ gsCOCKPIT_PutBossInfo() {}

// *****************************************************************************
// FILE -- hoya/cockpit/g_cpcmb.c
// *****************************************************************************

/* 0020b410 000000b0 */ static SetComboColFlash() {}
/* 0020b4c0 000002a0 */ gsCOCKPIT_InitCombo() {}
/* 0020b760 000011e8 */ static PutCombo_Type00() {}
/* 0020c948 000003f4 */ static PutCombo_Type01() {}
/* 0020cd40 00000764 */ static PutCombo_Type02() {}
/* 0020d4a8 000011a8 */ static PutCombo_Type03() {}
/* 0020e650 000002e8 */ static PutCombo_Gauge() {}
/* 0020e938 00000498 */ gsCOCKPIT_PutCombo() {}

// *****************************************************************************
// FILE -- hoya/cockpit/g_cpgswc.c
// *****************************************************************************

/* 0020edd0 00000284 */ gsCOCKPIT_InitArms() {}
/* 0020f058 000005c8 */ static PutArms_DIcon() {}
/* 0020f620 000000e8 */ static PutArms_MainBody() {}
/* 0020f708 000005f8 */ static PutArms_Choice() {}
/* 0020fd00 000003ec */ static PutArms_Reload() {}
/* 002100f0 000007f0 */ static PutArms_Light() {}
/* 002108e0 00000098 */ gsCOCKPIT_PutArms() {}

// *****************************************************************************
// FILE -- hoya/cockpit/g_cplife.c
// *****************************************************************************

/* 00210978 00000288 */ gsCOCKPIT_InitVitality() {}
/* 00210c00 00000108 */ gsCOCKPIT_PutVitalityProcPoison() {}
/* 00210d08 00000168 */ gsCOCKPIT_PutVitalityProcLife() {}
/* 00210e70 000002c8 */ gsCOCKPIT_PutVitalityHead() {}
/* 00211138 00000354 */ gsCOCKPIT_PutVitalityLife() {}
/* 00211490 00000074 */ gsCOCKPIT_PutVitality() {}

// *****************************************************************************
// FILE -- hoya/cockpit/g_cprdr.c
// *****************************************************************************

/* 00211508 000001c4 */ gsCOCKPIT_InitRadar() {}
/* 002116d0 000002d0 */ static PutRader_Direction() {}
/* 002119a0 000006b0 */ static PutRader_Enemy() {}
/* 00212050 000006e0 */ static PutRader_Goal() {}
/* 00212730 0000022c */ static PutRader_Line() {}
/* 00212960 00000180 */ static PutRader_MainBody() {}
/* 00212ae0 000000a4 */ gsCOCKPIT_PutRader() {}

// *****************************************************************************
// FILE -- hoya/cockpit/g_cprlod.c
// *****************************************************************************

/* 00212b88 0000021c */ gsCOCKPIT_InitReload() {}
/* 00212da8 00000260 */ static CheckReload() {}
/* 00213008 000003b4 */ static PutReload_Reload() {}
/* 002133c0 0000043c */ static PutReload_Gun() {}
/* 00213800 00000048 */ gsCOCKPIT_PutReload() {}

// *****************************************************************************
// FILE -- hoya/cockpit/g_cpscor.c
// *****************************************************************************

/* 00213848 000001e8 */ gsCOCKPIT_InitScore() {}
/* 00213a30 00000460 */ static PutScScore() {}
/* 00213e90 00000008 */ static PutScFixChar() {}
/* 00213e98 0000002c */ gsCOCKPIT_PutScore() {}

// *****************************************************************************
// FILE -- hoya/cockpit/g_cpsight.c
// *****************************************************************************

/* 00213ec8 00000198 */ hyEntryObj4Sight() {}
/* 00214060 00000008 */ gsCOCKPIT_InitSightSendTex() {}
/* 00214068 0000011c */ PermittoSend2dSightTex() {}
/* 00214188 000000bc */ Send2dSightTex() {}
/* 00214248 0000011c */ gsCOCKPIT_InitSightMachine() {}
/* 00214368 00000074 */ gsCOCKPIT_InitSightRifle() {}
/* 002143e0 0000009c */ gsCOCKPIT_InitSightMissile() {}
/* 00214480 00000074 */ gsCOCKPIT_InitSightHandgun() {}
/* 002144f8 00000074 */ gsCOCKPIT_InitSightMagnum() {}
/* 00214570 0000011c */ gsCOCKPIT_InitSightFire() {}
/* 00214690 00000074 */ gsCOCKPIT_InitSightHandGrenade() {}
/* 00214708 0000019c */ gsCOCKPIT_InitSightGutoring() {}
/* 002148a8 00000160 */ gsCOCKPIT_InitSightMissilePod() {}
/* 00214a08 00000074 */ gsCOCKPIT_InitSightGrenade() {}
/* 00214a80 00000074 */ gsCOCKPIT_InitSightBowgun() {}
/* 00214af8 00000074 */ gsCOCKPIT_InitSightPlasma() {}
/* 00214b70 00000074 */ gsCOCKPIT_InitSightRocket() {}
/* 00214be8 0000011c */ gsCOCKPIT_InitSightShotgun() {}
/* 00214d08 00000074 */ gsCOCKPIT_InitSightSpark() {}
/* 00214d80 00000014 */ gsCOCKPIT_InitSightFGrenade() {}
/* 00214d98 000000dc */ gsCOCKPIT_InitSightLaser() {}
/* 00214e78 00000074 */ gsCOCKPIT_InitSightMineThrower() {}
/* 00214ef0 0000015c */ gsCOCKPIT_InitSights() {}
/* 00215050 00000094 */ gsCOCKPIT_InitSightFirst() {}
/* 002150e8 00000040 */ gsCOCKPIT_PutSightMachine() {}
/* 00215128 0000018c */ gsCOCKPIT_PutSightRifle() {}
/* 002152b8 00000308 */ gsCOCKPIT_PutSightMissile() {}
/* 002155c0 0000018c */ gsCOCKPIT_PutSightHandgun() {}
/* 00215750 0000018c */ gsCOCKPIT_PutSightMagnum() {}
/* 002158e0 00000040 */ gsCOCKPIT_PutSightFire() {}
/* 00215920 0000018c */ gsCOCKPIT_PutSightHandGrenade() {}
/* 00215ab0 00000518 */ gsCOCKPIT_PutSightGutoring() {}
/* 00215fc8 0000014c */ gsCOCKPIT_PutSightMissilePod() {}
/* 00216118 0000018c */ gsCOCKPIT_PutSightGrenade() {}
/* 002162a8 0000018c */ gsCOCKPIT_PutSightBowgun() {}
/* 00216438 0000018c */ gsCOCKPIT_PutSightPlasma() {}
/* 002165c8 0000018c */ gsCOCKPIT_PutSightRocket() {}
/* 00216758 00000040 */ gsCOCKPIT_PutSightShotgun() {}
/* 00216798 0000018c */ gsCOCKPIT_PutSightSpark() {}
/* 00216928 00000014 */ gsCOCKPIT_PutSightFGrenade() {}
/* 00216940 00000454 */ gsCOCKPIT_PutSightLaser() {}
/* 00216d98 0000018c */ gsCOCKPIT_PutSightMineThrower() {}
/* 00216f28 00000154 */ PutSights() {}
/* 00217080 000000d4 */ gsCOCKPIT_PutSights() {}

// *****************************************************************************
// FILE -- hoya/cockpit/g_efdmg.c
// *****************************************************************************

/* 00217158 000000fc */ static gsCOCKPIT_InitEfDamagePoison() {}
/* 00217258 0000018c */ static gsCOCKPIT_InitEfDamageBitingB() {}
/* 002173e8 0000018c */ static gsCOCKPIT_InitEfDamageBitingS() {}
/* 00217578 000000ac */ static gsCOCKPIT_InitEfDamageCutting() {}
/* 00217628 00000124 */ static gsCOCKPIT_InitEfDamageBlood() {}
/* 00217750 0000005c */ gsCOCKPIT_InitEfDamage() {}
/* 002177b0 00000378 */ gsCOCKPIT_PutEfDamagePoison() {}
/* 00217b28 00000764 */ gsCOCKPIT_PutEfDamageBitingB() {}
/* 00218290 00000778 */ gsCOCKPIT_PutEfDamageBitingS() {}
/* 00218a08 00000560 */ gsCOCKPIT_PutEfDamageCutting() {}
/* 00218f68 00000330 */ gsCOCKPIT_PutEfDamageBlood() {}
/* 00219298 00000184 */ gsCOCKPIT_PutEfDamage() {}
/* 00219420 000000f0 */ gsCOCKPIT_SetEfDamage() {}

// *****************************************************************************
// FILE -- hoya/cockpit/g_other.c
// *****************************************************************************

/* 00219510 000000b0 */ gsCOCKPIT_InitLockOn() {}
/* 002195c0 0000009c */ gsCOCKPIT_CheckLockOn() {}
/* 00219660 00000420 */ PutLockOn() {}
/* 00219a80 000001a0 */ static gsTimerPassTime() {}
/* 00219c20 00000028 */ gsTimerInit() {}
/* 00219c48 000000ac */ gsTimerSetTime() {}
/* 00219cf8 00000034 */ gsTimerGetTime() {}
/* 00219d30 00000074 */ gsTimerSetFrame() {}
/* 00219da8 0000000c */ gsTimerGetFrame() {}
/* 00219db8 0000000c */ gsTimerGetPathTime() {}
/* 00219dc8 0000003c */ gsTimerCntTime() {}
/* 00219e08 0000003c */ gsTimerPauseTime() {}
/* 00219e48 0000003c */ gsTimerPauseTimeEx() {}
/* 00219e88 0000003c */ gsTimerPassDirecTime() {}
/* 00219ec8 000000d4 */ gsTimerCntroler() {}
/* 00219fa0 000000b8 */ gsCOCKPIT_InitTime() {}
/* 0021a058 000000b4 */ gsCOCKPIT_InitTime2() {}
/* 0021a110 000004e0 */ static PutTimeTime() {}
/* 0021a5f0 00000008 */ static PutTimeFixChar() {}
/* 0021a5f8 00000030 */ gsCOCKPIT_PutTime() {}

// *****************************************************************************
// FILE -- hoya/mem_card/g_memc.c
// *****************************************************************************

/* 0021a628 0000001c */ LetsGotoMemcScene() {}
/* 0021a648 00000020 */ LetsGotoMemcScene4Continue() {}
/* 0021a668 00000024 */ PermittoSendMcTex() {}
/* 0021a690 00000098 */ Send2McTex() {}
/* 0021a728 0000001c */ gsMEMC_Draw1() {}
/* 0021a748 00000008 */ gsMEMC_Draw2() {}
/* 0021a750 00000234 */ gsStageInit_MEMC() {}
/* 0021a988 000000d0 */ gsStageExec_MEMC() {}

// *****************************************************************************
// FILE -- hoya/mem_card/g_savlod.c
// *****************************************************************************

/* 0021aa58 0000024c */ CreateIconSys() {}
/* 0021aca8 000000a0 */ InitMemcManager() {}
/* 0021ad48 00000024 */ CheckMemcType() {}
/* 0021ad70 00000024 */ CheckMemcFormat() {}
/* 0021ad98 00000024 */ CheckMemcCapacityDir() {}
/* 0021adc0 00000024 */ CheckMemcEntryNum() {}
/* 0021ade8 00000064 */ CheckMemcErrorFile() {}
/* 0021ae50 0000003c */ SetSumValueSystemData() {}
/* 0021ae90 00000054 */ SetSumValueGameData() {}
/* 0021aee8 00000008 */ SetSystemData2Box() {}
/* 0021aef0 00000008 */ SetGameData2Box() {}
/* 0021aef8 00000008 */ GetSystemData2Box() {}
/* 0021af00 00000008 */ GetGameData2Box() {}
/* 0021af08 00000014 */ GetQueCondition() {}
/* 0021af20 00000024 */ GetResultValue() {}
/* 0021af48 0000000c */ GetErr() {}
/* 0021af58 00000054 */ CheckSystemDataVersion() {}
/* 0021afb0 00000070 */ CheckGameDataVersion() {}
/* 0021b020 0000005c */ CheckSystemDataId() {}
/* 0021b080 00000070 */ CheckGameDataId() {}
/* 0021b0f0 00000088 */ CheckSystemDataSum() {}
/* 0021b178 00000058 */ CheckGameDataSum() {}
/* 0021b1d0 000000b0 */ CheckMemcStatus() {}
/* 0021b280 0000003c */ FormatMemc() {}
/* 0021b2c0 00000024 */ FormatMemc2() {}
/* 0021b2e8 00000108 */ GetMemcFIleList() {}
/* 0021b3f0 00000108 */ GetMemcDir() {}
/* 0021b4f8 00000024 */ ClearMemcDirCreateData() {}
/* 0021b520 00000054 */ GetMemcDirCreateData() {}
/* 0021b578 00000018 */ SetMemcDirCreateData() {}
/* 0021b590 00000058 */ CmpMemcDirCreateData() {}
/* 0021b5e8 00000110 */ GetMemcSaveFIle() {}
/* 0021b6f8 000000d8 */ MemcMakeDir() {}
/* 0021b7d0 000000bc */ MemcMakeDir2() {}
/* 0021b890 000000d0 */ DeleteMemcSaveFile() {}
/* 0021b960 000000d4 */ OpenSaveData() {}
/* 0021ba38 00000020 */ WriteSaveData() {}
/* 0021ba58 00000020 */ ReadSaveData() {}
/* 0021ba78 00000014 */ CloseSaveData() {}
/* 0021ba90 000000c8 */ OpenIconSys() {}
/* 0021bb58 00000020 */ WriteIconSys() {}
/* 0021bb78 00000014 */ CloseIconSys() {}
/* 0021bb90 000000d0 */ OpenIconIco() {}
/* 0021bc60 00000020 */ WriteIconIco() {}
/* 0021bc80 00000014 */ CloseIconIco() {}
/* 0021bc98 00000124 */ LoadSaveData() {}
/* 0021bdc0 00000114 */ SaveSaveData() {}
/* 0021bed8 00000114 */ SaveIconSys() {}
/* 0021bff0 00000114 */ SaveIconIco() {}
/* 0021c108 00000038 */ ClearSystemData() {}
/* 0021c140 00000064 */ ClearGameData() {}
/* 0021c1a8 000000b0 */ SetDefaultSystemData() {}
/* 0021c258 000001a0 */ SetDefaultGameData() {}
/* 0021c3f8 00000294 */ SetDefaultPlayerSystemData() {}
/* 0021c690 000001c0 */ SetDefaultPlayerGameData() {}
/* 0021c850 000000d8 */ SetPlyerSystemData2SaveDataBox() {}
/* 0021c928 000000d8 */ SetPlyerSystemDataFromSaveDataBox() {}
/* 0021ca00 000000f8 */ SetPlyerGameData2SaveDataBox() {}
/* 0021caf8 000000f8 */ SetPlyerGameDataFromSaveDataBox() {}
/* 0021cbf0 000000f8 */ SetPlyerData2SaveDataBox() {}
/* 0021cce8 000001d0 */ SetPlyerDataFromSaveDataBox() {}
/* 0021ceb8 00000008 */ CollectAllSystemData() {}
/* 0021cec0 00000008 */ SetAllSystemData() {}
/* 0021cec8 0000029c */ CollectAllGameData() {}
/* 0021d168 0000028c */ SetAllGameData() {}
/* 0021d3f8 00000014 */ EndMemcManager() {}
/* 0021d410 0000005c */ gsMemryCard_LoadModule() {}

// *****************************************************************************
// FILE -- hoya/mem_card/mcduse.c
// *****************************************************************************

/* 0021d470 0000003c */ mcdFlushQue() {}
/* 0021d4b0 00000094 */ mcdInit() {}
/* 0021d548 00000030 */ mcdQuit() {}
/* 0021d578 00000054 */ mcdCheckEoq() {}
/* 0021d5d0 00000008 */ mcdGetStepQue() {}
/* 0021d5d8 00000008 */ mcdGetWriteQue() {}
/* 0021d5e0 00000014 */ mcdGetQueCondition() {}
/* 0021d5f8 00000008 */ mcdGetErrorFunc() {}
/* 0021d600 00000008 */ mcdGetErrorCause() {}
/* 0021d608 00000024 */ mcdSetPause() {}
/* 0021d630 00000040 */ mcdStartChk() {}
/* 0021d670 0000001c */ mcdEndChk() {}
/* 0021d690 00000018 */ mcdGetChkType() {}
/* 0021d6a8 00000018 */ mcdGetChkFree() {}
/* 0021d6c0 00000018 */ mcdGetChkFormat() {}
/* 0021d6d8 000000ec */ mcdUsrFuncSet() {}
/* 0021d7c8 00000080 */ mcdErrProcSet() {}
/* 0021d848 00000094 */ mcdWaitSet() {}
/* 0021d8e0 000000c4 */ mcdCardInfoSet() {}
/* 0021d9a8 000000b4 */ mcdOpenSet() {}
/* 0021da60 00000084 */ mcdCloseSet() {}
/* 0021dae8 000000a4 */ mcdSeekSet() {}
/* 0021db90 000000a4 */ mcdReadSet() {}
/* 0021dc38 000000a4 */ mcdWriteSet() {}
/* 0021dce0 00000088 */ mcdFlushSet() {}
/* 0021dd68 000000a4 */ mcdMkdirSet() {}
/* 0021de10 000000b4 */ mcdChDirSet() {}
/* 0021dec8 000000d4 */ mcdGetDirSet() {}
/* 0021dfa0 000000c4 */ mcdFileInfoSet() {}
/* 0021e068 000000a4 */ mcdDeleteSet() {}
/* 0021e110 00000094 */ mcdFormatSet() {}
/* 0021e1a8 00000094 */ mcdUnformatSet() {}
/* 0021e240 000000a4 */ mcdEntSpaceSet() {}
/* 0021e2e8 000000cc */ mcdRenameSet() {}
/* 0021e3b8 00000084 */ mcdSlotMaxSet() {}
/* 0021e440 00000030 */ static mcdPauseExe() {}
/* 0021e470 00000008 */ static mcdErrMess2Console() {}
/* 0021e478 00000260 */ static mcdSetErrorCause() {}
/* 0021e6d8 0000076c */ mcdMain() {}

// *****************************************************************************
// FILE -- hoya/mem_card/memcsub0.c
// *****************************************************************************

/* 0021ee48 00000058 */ static McConnectCheck() {}
/* 0021eea0 00000054 */ static McDisconnectCheck() {}
/* 0021eef8 0000001c */ static SetFadePara() {}
/* 0021ef18 0000001c */ static SwitchFadeTimer() {}
/* 0021ef38 0000001c */ static CheckFadeFinishFlag() {}
/* 0021ef58 00000244 */ static Draw2dObject() {}
/* 0021f1a0 00000008 */ static Calculation() {}
/* 0021f1a8 00000020 */ static GotoNextStage() {}
/* 0021f1c8 000000d4 */ static ProcFade() {}
/* 0021f2a0 00000220 */ static ProcMemcConnectCheck() {}
/* 0021f4c0 00000218 */ static ProcMemcFsizeCheck() {}
/* 0021f6d8 00000014 */ static ProcEnd() {}
/* 0021f6f0 00000028 */ static ProcEnd2() {}
/* 0021f718 000001f4 */ InitMemcFsize() {}
/* 0021f910 000003a8 */ MainMemcFsize() {}
/* 0021fcb8 00000014 */ EndMemcFsize() {}

// *****************************************************************************
// FILE -- hoya/mem_card/memcsub1.c
// *****************************************************************************

/* 0021fcd0 00000058 */ static McConnectCheck() {}
/* 0021fd28 00000054 */ static McDisconnectCheck() {}
/* 0021fd80 00000300 */ static SaveInitSprFileNum() {}
/* 00220080 000000bc */ static SaveDrawSprOther() {}
/* 00220140 000001f0 */ static SaveCalcSprOther() {}
/* 00220330 00000064 */ static GotoNextStage() {}
/* 00220398 00000360 */ static makeAllFileListTex() {}
/* 002206f8 0000001c */ static SetFadeParaPause() {}
/* 00220718 0000001c */ static SwitchFadeTimerPause() {}
/* 00220738 0000001c */ static CheckFadeFinishFlagPause() {}
/* 00220758 000001fc */ static Draw2dObject() {}
/* 00220958 00000008 */ static Calculation() {}
/* 00220960 000000d4 */ static ProcFade() {}
/* 00220a38 0000003c */ static ProcMemcChecking() {}
/* 00220a78 000002f8 */ static ProcSlotCheck() {}
/* 00220d70 00000360 */ static ProcFormatCheck() {}
/* 002210d0 000007ec */ static ProcSaveDataCheck() {}
/* 002218c0 000004f8 */ static ProcSaveDataLoad() {}
/* 00221db8 000004f4 */ static ProcSaveDataChoice() {}
/* 002222b0 00000354 */ static ProcSaveDataNowSaving() {}
/* 00222608 00000254 */ static ProcMcBroakenFile() {}
/* 00222860 000000fc */ static ProcMcErrConnect() {}
/* 00222960 000001f0 */ static ProcCancel() {}
/* 00222b50 00000028 */ static ProcEnd() {}
/* 00222b78 000002b0 */ InitMemcSave() {}
/* 00222e28 000000fc */ static ProcDebug() {}
/* 00222f28 00000530 */ MainMemcSave() {}
/* 00223458 00000014 */ EndMemcSave() {}

// *****************************************************************************
// FILE -- hoya/mem_card/memcsub2.c
// *****************************************************************************

/* 00223470 00000300 */ static LoadInitSprFileNum() {}
/* 00223770 000000bc */ static LoadDrawSprOther() {}
/* 00223830 000001f0 */ static LoadCalcSprOther() {}
/* 00223a20 00000078 */ static GotoNextStage() {}
/* 00223a98 0000001c */ static GotoModeSelect() {}
/* 00223ab8 00000360 */ static makeAllFileListTex() {}
/* 00223e18 00000058 */ static McConnectCheck() {}
/* 00223e70 00000054 */ static McDisconnectCheck() {}
/* 00223ec8 0000001c */ static SetFadeParaPause() {}
/* 00223ee8 0000001c */ static SwitchFadeTimerPause() {}
/* 00223f08 0000001c */ static CheckFadeFinishFlagPause() {}
/* 00223f28 00000220 */ static Draw2dObject() {}
/* 00224148 00000008 */ static Calculation() {}
/* 00224150 000000d4 */ static ProcFade() {}
/* 00224228 0000003c */ static ProcMemcChecking() {}
/* 00224268 0000020c */ static ProcSlotCheck() {}
/* 00224478 000000d0 */ static ProcFormatCheck() {}
/* 00224548 00000174 */ static ProcSaveDataCheck() {}
/* 002246c0 000004c8 */ static ProcSaveDataLoad() {}
/* 00224b88 0000048c */ static ProcSaveDataChoice() {}
/* 00225018 00000200 */ static ProcMcBroakenFile() {}
/* 00225218 000000b8 */ static ProcMcErrConnect() {}
/* 002252d0 000001f0 */ static ProcCancel() {}
/* 002254c0 00000028 */ static ProcEnd() {}
/* 002254e8 00000028 */ static ProcEnd2() {}
/* 00225510 000002b0 */ InitMemcLoad() {}
/* 002257c0 000000fc */ static ProcDebug() {}
/* 002258c0 00000578 */ MainMemcLoad() {}
/* 00225e38 00000014 */ EndMemcLoad() {}

// *****************************************************************************
// FILE -- hoya/mem_card/memcsub3.c
// *****************************************************************************

/* 00225e50 00000058 */ static McConnectCheck() {}
/* 00225ea8 00000054 */ static McDisconnectCheck() {}
/* 00225f00 0000001c */ static SetFadePara() {}
/* 00225f20 0000001c */ static SwitchFadeTimer() {}
/* 00225f40 0000001c */ static CheckFadeFinishFlag() {}
/* 00225f60 00000228 */ static Draw2dObject() {}
/* 00226188 00000008 */ static Calculation() {}
/* 00226190 000000d4 */ static ProcFadeIn() {}
/* 00226268 0000003c */ static ProcMemcChecking() {}
/* 002262a8 00000318 */ static ProcSlotCheck() {}
/* 002265c0 00000358 */ static ProcFormatCheck() {}
/* 00226918 0000099c */ static ProcSaveDataCheck() {}
/* 002272b8 00000318 */ static ProcSaveDataLoad() {}
/* 002275d0 000004bc */ static ProcSave() {}
/* 00227a90 00000254 */ static ProcMcBroakenFile() {}
/* 00227ce8 000001f0 */ static ProcCancel() {}
/* 00227ed8 00000054 */ static ProcEnd() {}
/* 00227f30 000001f4 */ InitMemcSysSave() {}
/* 00228128 000000e4 */ static ProcDebug() {}
/* 00228210 00000508 */ MainMemcSysSave() {}
/* 00228718 00000014 */ EndMemcSysSave() {}

// *****************************************************************************
// FILE -- hoya/mem_card/memcsub4.c
// *****************************************************************************

/* 00228730 00000058 */ static McConnectCheck() {}
/* 00228788 00000054 */ static McDisconnectCheck() {}
/* 002287e0 0000001c */ static SetFadePara() {}
/* 00228800 0000001c */ static SwitchFadeTimer() {}
/* 00228820 0000001c */ static CheckFadeFinishFlag() {}
/* 00228840 00000228 */ static Draw2dObject() {}
/* 00228a68 00000008 */ static Calculation() {}
/* 00228a70 00000020 */ static GotoNextStage() {}
/* 00228a90 000000d4 */ static ProcFadeIn() {}
/* 00228b68 0000003c */ static ProcMemcChecking() {}
/* 00228ba8 00000294 */ static ProcSlotCheck() {}
/* 00228e40 000001f8 */ static ProcFormatCheck() {}
/* 00229038 000007e4 */ static ProcSaveDataCheck() {}
/* 00229820 000003d0 */ static ProcLoad() {}
/* 00229bf0 000001c8 */ static ProcMcBroakenFile() {}
/* 00229db8 000001f0 */ static ProcCancel() {}
/* 00229fa8 000001f0 */ static ProcCancel2() {}
/* 0022a198 000000c0 */ static ProcSystemLoadKeikoku() {}
/* 0022a258 00000028 */ static ProcEnd() {}
/* 0022a280 000000e4 */ static ProcDebug() {}
/* 0022a368 000000e8 */ static ProcDebug2() {}
/* 0022a450 000001f4 */ InitMemcSysLoad() {}
/* 0022a648 00000538 */ MainMemcSysLoad() {}
/* 0022ab80 00000014 */ EndMemcSysLoad() {}

// *****************************************************************************
// FILE -- hoya/score/g_scman.c
// *****************************************************************************

/* 0022ab98 00000020 */ addNumber() {}
/* 0022abb8 0000006c */ addScore2() {}
/* 0022ac28 00000020 */ addScore() {}
/* 0022ac48 000000d0 */ addScoreWorld() {}
/* 0022ad18 000001cc */ addScoreEnemy() {}
/* 0022aee8 000000e8 */ addScoreItem() {}
/* 0022afd0 000000e8 */ addScoreInsect() {}

// *****************************************************************************
// FILE -- hoya/title/g_title.c
// *****************************************************************************

/* 0022b0b8 0000001c */ LetsGotoTitle() {}
/* 0022b0d8 00000020 */ LetsGotoStart() {}
/* 0022b0f8 00000008 */ LetsGotoDaisakusen() {}
/* 0022b100 00000020 */ LetsGotoOpening() {}
/* 0022b120 00000128 */ gsStageInit_TITLE() {}
/* 0022b248 000000d0 */ gsStageExec_TITLE() {}
/* 0022b318 00000008 */ gsStageEnd_TITLE() {}
/* 0022b320 00000008 */ gsTITLE_Draw1() {}
/* 0022b328 00000044 */ gsTITLE_Draw2() {}

// *****************************************************************************
// FILE -- hoya/title/g_tmenu.c
// *****************************************************************************

/* 0022b370 00000008 */ InitTMenu() {}
/* 0022b378 00000008 */ MainTMenu() {}
/* 0022b380 00000008 */ EndTMenu() {}

// *****************************************************************************
// FILE -- hoya/title/ttlsub01.c
// *****************************************************************************

/* 0022b388 0000001c */ static SetFadePara() {}
/* 0022b3a8 0000001c */ static SwitchFadeTimer() {}
/* 0022b3c8 0000001c */ static CheckFadeFinishFlag() {}
/* 0022b3e8 00000154 */ static Calculation() {}
/* 0022b540 00000028 */ static Draw2dObjectTitle() {}
/* 0022b568 000000dc */ InitTitle() {}
/* 0022b648 0000015c */ InitTtlTtl00() {}
/* 0022b7a8 000000d4 */ static ProcFade() {}
/* 0022b880 000000d4 */ static ProcFade2() {}
/* 0022b958 000006a0 */ MainTitle() {}
/* 0022bff8 00000048 */ Draw2dObject2() {}
/* 0022c040 00000008 */ EndTitle() {}

// *****************************************************************************
// FILE -- hoya/title/ttlsub02.c
// *****************************************************************************

/* 0022c048 00000024 */ InitOpening() {}
/* 0022c070 000000dc */ MainOpening() {}
/* 0022c150 00000008 */ EndOpening() {}

// *****************************************************************************
// FILE -- hoya/title/ttlsub03.c
// *****************************************************************************

/* 0022c158 0000001c */ static SetFadePara() {}
/* 0022c178 0000001c */ static SwitchFadeTimer() {}
/* 0022c198 0000001c */ static CheckFadeFinishFlag() {}
/* 0022c1b8 0000008c */ static Draw2dSprite() {}
/* 0022c248 000000b4 */ InitLogo() {}
/* 0022c300 000000d4 */ static ProcFadeIn() {}
/* 0022c3d8 000000d4 */ static ProcFadeOut() {}
/* 0022c4b0 00000368 */ MainLogo() {}
/* 0022c818 00000008 */ EndLogo() {}

// *****************************************************************************
// FILE -- hoya/title/ttlsub04.c
// *****************************************************************************

/* 0022c820 0000001c */ static SetFadePara() {}
/* 0022c840 0000001c */ static SwitchFadeTimer() {}
/* 0022c860 0000001c */ static CheckFadeFinishFlag() {}
/* 0022c880 00000098 */ static Draw2dSprite() {}
/* 0022c918 000000f4 */ InitDaisakusen() {}
/* 0022ca10 000000d0 */ static ProcFadeIn() {}
/* 0022cae0 000000d0 */ static ProcFadeOut() {}
/* 0022cbb0 000003c4 */ MainDaisakusen() {}
/* 0022cf78 00000008 */ EndDaisakusen() {}

// *****************************************************************************
// FILE -- hoya/result/frsltsb1.c
// *****************************************************************************

/* 0022cf80 00000544 */ static MakeAllNumberTex() {}
/* 0022d4c8 00000234 */ static RsltInitSprOther() {}
/* 0022d700 00000138 */ static RsltDrawSprOther() {}
/* 0022d838 0000017c */ static RsltInitSprNumberPlay() {}
/* 0022d9b8 000000c0 */ static RsltDrawSprNumberPlay() {}
/* 0022da78 00000160 */ static RsltInitSprStageRankPlay() {}
/* 0022dbd8 000000b0 */ static RsltDrawSprStageRankPlay() {}
/* 0022dc88 000000fc */ static RsltInitSprTotalRank() {}
/* 0022dd88 00000048 */ static RsltDrawSprTotalRank() {}
/* 0022ddd0 00000130 */ static RsltInitSprArrow() {}
/* 0022df00 000000a8 */ static RsltDrawSprArrow() {}
/* 0022dfa8 000001b4 */ static RsltInitSprSubWeaponIcon() {}
/* 0022e160 00000168 */ static RsltDrawSprSubWeaponIcon() {}
/* 0022e2c8 0000028c */ static RsltInitSprSubWeaponFrame() {}
/* 0022e558 000000a8 */ static RsltDrawSprSubWeaponFrame() {}
/* 0022e600 000001b4 */ static RsltInitSprSubWeaponName() {}
/* 0022e7b8 000001f0 */ static RsltDrawSprSubWeaponName() {}
/* 0022e9a8 00000178 */ static CalcDirectStringAction() {}
/* 0022eb20 000000d4 */ static CalcMoveWeapon() {}
/* 0022ebf8 0000001c */ static SetFadePara() {}
/* 0022ec18 0000001c */ static SwitchFadeTimer() {}
/* 0022ec38 0000001c */ static CheckFadeFinishFlag() {}
/* 0022ec58 00000344 */ static Draw2dObjectFResult() {}
/* 0022efa0 00000070 */ static Calculation() {}
/* 0022f010 000000d4 */ static ProcFadeIn() {}
/* 0022f0e8 000000d4 */ static ProcFadeOut() {}
/* 0022f1c0 000001b8 */ static ProcDrawFirstPlay() {}
/* 0022f378 000001bc */ static ProcDrawSecondPlay() {}
/* 0022f538 00000114 */ static ProcDrawThirdPlay() {}
/* 0022f650 0000015c */ static ProcDrawFirstTotal() {}
/* 0022f7b0 00000108 */ static ProcDrawThirdTotal() {}
/* 0022f8b8 00000254 */ static ProcDrawSecondTotal() {}
/* 0022fb10 00000534 */ InitFResult() {}
/* 00230048 00000168 */ InitFresultResult00() {}
/* 002301b0 00000598 */ MainFResult() {}
/* 00230748 00000008 */ EndFResult() {}

// *****************************************************************************
// FILE -- hoya/result/g_frslt.c
// *****************************************************************************

/* 00230750 000008a8 */ LetsGotoFinalResultScene() {}
/* 00230ff8 00000018 */ PermittoSendFrsltTex() {}
/* 00231010 00000090 */ Send2FrsltTex() {}
/* 002310a0 00000008 */ ReleaseFResultScene() {}
/* 002310a8 000001f8 */ FRsltItemSet() {}
/* 002312a0 00000080 */ FRsltInfosClear() {}
/* 00231320 000000a0 */ FRsltCreateObjectPacket() {}
/* 002313c0 000000d4 */ FRsltItemObjectSet() {}
/* 00231498 0000029c */ FRsltMakeItemInfo() {}
/* 00231738 0000016c */ FRsltItemSetItems() {}
/* 002318a8 0000001c */ gsFRESULT_Draw1() {}
/* 002318c8 00000008 */ gsFRESULT_Draw2() {}
/* 002318d0 00000460 */ gsStageInit_FRESULT() {}
/* 00231d30 00000154 */ gsStageExec_FRESULT() {}

// *****************************************************************************
// FILE -- hoya/result/g_rslt.c
// *****************************************************************************

/* 00231e88 0000026c */ LetsGotoResultScene() {}
/* 002320f8 00000018 */ PermittoSendRsltTex() {}
/* 00232110 00000090 */ Send2RsltTex() {}
/* 002321a0 0000001c */ gsRESULT_Draw1() {}
/* 002321c0 00000008 */ gsRESULT_Draw2() {}
/* 002321c8 00000150 */ gsStageInit_RESULT() {}
/* 00232318 000000d0 */ gsStageExec_RESULT() {}

// *****************************************************************************
// FILE -- hoya/result/rsltsub1.c
// *****************************************************************************

/* 002323e8 0000041c */ static MakeAllNumberTex() {}
/* 00232808 00000130 */ static RsltInitSprOther() {}
/* 00232938 00000068 */ static RsltDrawSprOther() {}
/* 002329a0 00000140 */ static RsltInitSprStageNo() {}
/* 00232ae0 00000060 */ static RsltDrawSprStageNo() {}
/* 00232b40 00000164 */ static RsltInitSprBonus() {}
/* 00232ca8 00000060 */ static RsltDrawSprBonus() {}
/* 00232d08 000001b8 */ static RsltInitSprDino() {}
/* 00232ec0 00000150 */ static RsltDrawSprDino() {}
/* 00233010 0000017c */ static RsltInitSprRank() {}
/* 00233190 00000174 */ static RsltDrawSprRank() {}
/* 00233308 00000150 */ static RsltInitSprNumber() {}
/* 00233458 00000060 */ static RsltDrawSprNumber() {}
/* 002334b8 000000f8 */ static RsltInitSprYN() {}
/* 002335b0 000002c4 */ static RsltDrawSprYN() {}
/* 00233878 000001e4 */ static ConvTime2Score() {}
/* 00233a60 00000028 */ static ConvTimeBonus2Score() {}
/* 00233a88 00000028 */ static ConvDinoBonus2Score() {}
/* 00233ab0 00000028 */ static NoDamageBonus2Score() {}
/* 00233ad8 0000001c */ static SetFadeParaRslt() {}
/* 00233af8 0000001c */ static SwitchFadeTimerRslt() {}
/* 00233b18 0000001c */ static CheckFadeFinishFlagRslt() {}
/* 00233b38 000000ac */ static ProcFadeIn() {}
/* 00233be8 000000d8 */ static ProcFadeOut() {}
/* 00233cc0 00000258 */ static ProcDrawFirstTimeBonus() {}
/* 00233f18 000002e8 */ static ProcDrawFirstDinoBonus() {}
/* 00234200 000001a8 */ static ProcDrawFirstNoDamageBonus() {}
/* 002343a8 000002b8 */ static ProcDrawSecondConvert() {}
/* 00234660 00000208 */ static ProcDrawThirdFixRank() {}
/* 00234868 0000027c */ static ProcDrawSaveWindow() {}
/* 00234ae8 00000018 */ static GotoNextScene() {}
/* 00234b00 0000003c */ static Return2Game() {}
/* 00234b40 0000006c */ static InitResultResult00() {}
/* 00234bb0 00000180 */ InitResult() {}
/* 00234d30 0000008c */ static Draw2dObjectRslt() {}
/* 00234dc0 000005d0 */ MainResult() {}
/* 00235390 00000014 */ EndResult() {}

// *****************************************************************************
// FILE -- hoya/continue/cntsub1.c
// *****************************************************************************

/* 002353a8 0000001c */ static SetFadePara() {}
/* 002353c8 0000001c */ static SwitchFadeTimer() {}
/* 002353e8 0000001c */ static CheckFadeFinishFlag() {}
/* 00235408 00000264 */ static continueGameOver() {}
/* 00235670 0000007c */ static continueContinue() {}
/* 002356f0 0000007c */ static InitRipple() {}
/* 00235770 000000b8 */ static setRipple() {}
/* 00235828 00000184 */ static calcRippleMovement() {}
/* 002359b0 000000bc */ DecideRippleSpace() {}
/* 00235a70 00000130 */ static calcLightMovement() {}
/* 00235ba0 000000d4 */ static calcNumber() {}
/* 00235c78 0000009c */ calcGameOver() {}
/* 00235d18 00000008 */ calcContinue() {}
/* 00235d20 00000238 */ static InitContinueContinue00() {}
/* 00235f58 00000224 */ InitContinue() {}
/* 00236180 00000c08 */ Draw2dObject2Cnt() {}
/* 00236d88 00000008 */ Draw2dObjectCnt() {}
/* 00236d90 000000bc */ static continueTest() {}
/* 00236e50 000000c8 */ static ProcFadeIn() {}
/* 00236f18 000000c8 */ static ProcFadeOut() {}
/* 00236fe0 00000224 */ static ProcContinue() {}
/* 00237208 00000280 */ static ProcContinueCount() {}
/* 00237488 00000148 */ static ProcContinueContinue() {}
/* 002375d0 00000158 */ static ProcContinueGameOver() {}
/* 00237728 00000090 */ static ProcContinueGameOverWait() {}
/* 002377b8 000004c4 */ MainContinue() {}
/* 00237c80 00000014 */ EndContinue() {}

// *****************************************************************************
// FILE -- hoya/continue/g_cnt.c
// *****************************************************************************

/* 00237c98 00000008 */ LetsGotoContinueScene() {}
/* 00237ca0 00000008 */ gsCONTINUE_Draw1() {}
/* 00237ca8 00000030 */ gsCONTINUE_Draw2() {}
/* 00237cd8 000000a0 */ gsStageInit_CONTINUE() {}
/* 00237d78 000000f8 */ gsStageExec_CONTINUE() {}

// *****************************************************************************
// FILE -- hoya/option/g_option.c
// *****************************************************************************

/* 00237e70 00000040 */ LetsGotoOptionScene() {}
/* 00237eb0 00000008 */ ReleaseOptionScene() {}
/* 00237eb8 00000008 */ gsOPTION_Draw1() {}
/* 00237ec0 00000008 */ gsOPTION_Draw2() {}
/* 00237ec8 000003a8 */ gsStageInit_OPTION() {}
/* 00238270 00000134 */ gsStageExec_OPTION() {}
/* 002383a8 00000130 */ gsStageInit_OPTION_STAGE() {}
/* 002384d8 000000d0 */ gsStageExec_OPTION_STAGE() {}

// *****************************************************************************
// FILE -- hoya/option/gun1_ajst.c
// *****************************************************************************

/* 002385a8 00000008 */ Gun1AjstGetViewScene() {}
/* 002385b0 00000008 */ Gun1AjstGetProgNo() {}
/* 002385b8 00000014 */ Gun1AjstCheckGun1ScreenOut() {}
/* 002385d0 00000008 */ Gun1AjstCheckFinish() {}
/* 002385d8 00000050 */ Gun1AdjustInit() {}
/* 00238628 00000024 */ static AdjustInit() {}
/* 00238650 000000a8 */ Gun1AdjustMain() {}
/* 002386f8 00000054 */ static Gun1AdjustProcInit() {}
/* 00238750 00000030 */ static Gun1AdjustProcGunTeaching() {}
/* 00238780 00000080 */ static Gun1AdjustProcGunAdjustFirst() {}
/* 00238800 0000006c */ static Gun1AdjustProcGunDelayTime() {}
/* 00238870 0000001c */ static Gun1AdjustProcGunSetDeleyTime() {}
/* 00238890 00000070 */ static Gun1AdjustProcGunAdjustSecond() {}
/* 00238900 000000e0 */ static Gun1AdjustProcGunAdjustSecondCheck() {}
/* 002389e0 0000006c */ static Gun1AdjustProcGunAdjustFinish() {}
/* 00238a50 00000090 */ static Gun1AdjustProcFinish() {}
/* 00238ae0 00000014 */ static Gun1AdjustProcExit() {}
/* 00238af8 000001d8 */ static Gun1Adjust() {}

// *****************************************************************************
// FILE -- hoya/option/gun_ajst.c
// *****************************************************************************

/* 00238cd0 00000030 */ CheckGunScreenOut() {}
/* 00238d00 00000008 */ GetScreenOffSw() {}
/* 00238d08 00000008 */ GetAdjustMode() {}
/* 00238d10 00000008 */ GetWideModeFlag() {}
/* 00238d18 0000000c */ GetTvType() {}
/* 00238d28 00000054 */ GunAdjustInit() {}
/* 00238d80 0000007c */ InitGunAdjustPara() {}
/* 00238e00 00000104 */ GunAdjustMain() {}
/* 00238f08 00000020 */ static AdjustInit() {}
/* 00238f28 0000027c */ static GunAdjust() {}
/* 002391a8 00000038 */ static change_wide() {}
/* 002391e0 00000024 */ static change_wide_mode() {}
/* 00239208 00000048 */ static change_normal_mode() {}
/* 00239250 00000094 */ static change_monitor() {}
/* 002392e8 00000014 */ static gun_adjust0() {}
/* 00239300 00000044 */ static gun_adjust1() {}
/* 00239348 00000044 */ static gun_adjust2() {}
/* 00239390 00000014 */ static gun_adjust3() {}
/* 002393a8 00000014 */ static gun_adjust_W0() {}
/* 002393c0 00000044 */ static gun_adjust_W1() {}
/* 00239408 00000044 */ static gun_adjust_W2() {}
/* 00239450 00000014 */ static gun_adjust_W3() {}
/* 00239468 000000c0 */ static gun_teaching() {}
/* 00239528 00000208 */ static adjust_center() {}
/* 00239730 000000b4 */ static adjust_wide() {}
/* 002397e8 00000044 */ static adjust_check() {}
/* 00239830 00000044 */ static set_adjustX() {}
/* 00239878 00000054 */ static set_adjustY() {}

// *****************************************************************************
// FILE -- hoya/option/optsub01.c
// *****************************************************************************

/* 002398d0 0000001c */ static SetFadeParaOpt() {}
/* 002398f0 0000001c */ static SwitchFadeTimerOpt() {}
/* 00239910 0000001c */ static CheckFadeFinishFlagOpt() {}
/* 00239930 00000148 */ static OptInitSprOther() {}
/* 00239a78 00000064 */ static OptDrawSprOther() {}
/* 00239ae0 00000900 */ static OptInitSprMenu() {}
/* 0023a3e0 0000042c */ static OptDrawSprMenu() {}
/* 0023a810 000003a4 */ static OptCalcSprMenu() {}
/* 0023abb8 000005f8 */ static OptInitSprMenuLight() {}
/* 0023b1b0 000001c8 */ static OptDrawSprMenuLight() {}
/* 0023b378 000002cc */ static OptCalcSprMenuLight() {}
/* 0023b648 00000400 */ static OptInitSprButtonPad() {}
/* 0023ba48 0000012c */ static OptDrawSprButtonPad() {}
/* 0023bb78 000001f0 */ static OptCalcSprButtonPad() {}
/* 0023bd68 000003fc */ static OptInitSprButtonGun() {}
/* 0023c168 0000012c */ static OptDrawSprButtonGun() {}
/* 0023c298 000001e8 */ static OptCalcSprButtonGun() {}
/* 0023c480 0000036c */ static OptInitSprButtonGun1() {}
/* 0023c7f0 00000148 */ static OptDrawSprButtonGun1() {}
/* 0023c938 000001b4 */ static OptCalcSprButtonGun1() {}
/* 0023caf0 00000008 */ static Draw2dObjectOpt() {}
/* 0023caf8 00000098 */ static Draw2dObjectOptMonitor() {}
/* 0023cb90 00000410 */ static Draw2dObjectOptAjstScn() {}
/* 0023cfa0 00000638 */ static Draw2dObjectOptAjstGunGuncon1() {}
/* 0023d5d8 00000654 */ static Draw2dObjectOptAjstGunGuncon2() {}
/* 0023dc30 0000002c */ static Draw2dObjectOptAjstGun() {}
/* 0023dc60 00000048 */ static Draw2dObjectOptKeyConfig() {}
/* 0023dca8 00000030 */ static Draw2dObjectOptMenu() {}
/* 0023dcd8 00000038 */ InitSpriteKeyConfig() {}
/* 0023dd10 00000564 */ InitSpriteOther() {}
/* 0023e278 000000c0 */ static OptReloadTexture() {}
/* 0023e338 0000013c */ static CalcNum2Char() {}
/* 0023e478 000000fc */ static ProcFadeIn() {}
/* 0023e578 000000fc */ static ProcFadeOut() {}
/* 0023e678 00000508 */ static ProcMenu() {}
/* 0023eb80 0000019c */ static ProcKeyConfigPad() {}
/* 0023ed20 0000019c */ static ProcKeyConfigGun() {}
/* 0023eec0 00000150 */ static ProcKeyConfigGun1() {}
/* 0023f010 0000025c */ static ProcAjstScreen() {}
/* 0023f270 00000160 */ static ProcAjstGun() {}
/* 0023f3d0 00000294 */ InitOpt() {}
/* 0023f668 0000079c */ MainOpt() {}
/* 0023fe08 00000008 */ EndOpt() {}
/* 0023fe10 00000060 */ enableOption() {}

// *****************************************************************************
// FILE -- hoya/pause/g_pause.c
// *****************************************************************************

/* 0023fe70 00000030 */ LetsGotoPauseScene() {}
/* 0023fea0 00000214 */ PauseItemSet() {}
/* 002400b8 00000058 */ PauseInfosClear() {}
/* 00240110 000000a0 */ PauseCreateObjectPacket() {}
/* 002401b0 000000d4 */ PauseItemObjectSet() {}
/* 00240288 00000270 */ PauseMakeItemInfo() {}
/* 002404f8 000001cc */ PauseItemSetItems() {}
/* 002406c8 00000008 */ gsPAUSE_Draw1() {}
/* 002406d0 00000008 */ gsPAUSE_Draw2() {}
/* 002406d8 0000040c */ gsStageInit_PAUSE() {}
/* 00240ae8 000003fc */ static gsMoveCamera2() {}
/* 00240ee8 0000015c */ gsStageExec_PAUSE() {}
/* 00241048 00000348 */ gsStageInit_PAUSE_STAGE() {}
/* 00241390 00000110 */ gsStageExec_PAUSE_STAGE() {}

// *****************************************************************************
// FILE -- hoya/pause/pausesub.c
// *****************************************************************************

/* 002414a0 00000308 */ gsPAUSE_InitVitality() {}
/* 002417a8 000002a0 */ gsPAUSE_PutVitalityUnder() {}
/* 00241a48 000002c8 */ gsPAUSE_PutVitalityHead() {}
/* 00241d10 00000354 */ gsPAUSE_PutVitalityLife() {}
/* 00242068 00000030 */ gsPAUSE_PutVitality() {}
/* 00242098 00000040 */ static GetExplain() {}
/* 002420d8 00000094 */ static InitExplain() {}
/* 00242170 000000c4 */ static GetExpCur() {}
/* 00242238 0000001c */ static SetFadeParaPause() {}
/* 00242258 0000001c */ static SwitchFadeTimerPause() {}
/* 00242278 0000001c */ static CheckFadeFinishFlagPause() {}
/* 00242298 00000a1c */ gsPAUSE_PutLife() {}
/* 00242cb8 00000cc8 */ static Draw2dObjectPause() {}
/* 00243980 00000480 */ static Calculation() {}
/* 00243e00 000000d4 */ static ProcFadeIn() {}
/* 00243ed8 000000d4 */ static ProcFadeOut() {}
/* 00243fb0 000001b0 */ static ProcLMenu() {}
/* 00244160 000002e8 */ static ProcRMenu() {}
/* 00244448 0000033c */ static ProcReset00() {}
/* 00244788 00000338 */ InitPausePause00() {}
/* 00244ac0 000004b8 */ InitPausePause01() {}
/* 00244f78 00000304 */ InitPause() {}
/* 00245280 00000608 */ MainPause() {}
/* 00245888 00000008 */ EndPause() {}

// *****************************************************************************
// FILE -- hoya/name/g_name.c
// *****************************************************************************

/* 00245890 00000024 */ LetsGotoNameScene() {}
/* 002458b8 00000028 */ LetsGotoNameEntryScene() {}
/* 002458e0 00000008 */ gsNAME_Draw1() {}
/* 002458e8 00000008 */ gsNAME_Draw2() {}
/* 002458f0 00000428 */ gsStageInit_NAME() {}
/* 00245d18 00000134 */ gsStageExec_NAME() {}

// *****************************************************************************
// FILE -- hoya/name/namesub.c
// *****************************************************************************

/* 00245e50 0000001c */ static SetFadeParaPause() {}
/* 00245e70 0000001c */ static SwitchFadeTimerPause() {}
/* 00245e90 0000001c */ static CheckFadeFinishFlagPause() {}
/* 00245eb0 00000228 */ static Draw2dObjectName() {}
/* 002460d8 00000068 */ static Calculation() {}
/* 00246140 00000078 */ static semiProcChangeTexId() {}
/* 002461b8 0000017c */ static ProcMakeHiscoreTex() {}
/* 00246338 00000510 */ static ProcMakeHiscoreTex2() {}
/* 00246848 000004bc */ static ProcCursol() {}
/* 00246d08 00000328 */ static ProcPutChar() {}
/* 00247030 0000004c */ static semiProcOpenDialog00() {}
/* 00247080 00000088 */ static semiProcOpenDialog01() {}
/* 00247108 00000074 */ static semiProcOpenDialog02() {}
/* 00247180 000000b4 */ static semiProcOpenDialog03() {}
/* 00247238 0000014c */ static semiProcDialogCursol() {}
/* 00247388 000002a0 */ static semiProcMakeSavedata() {}
/* 00247628 00000190 */ static semiProcScrollObj() {}
/* 002477b8 00000030 */ static semiProcSetStorngBar() {}
/* 002477e8 000000d4 */ static ProcFadeIn() {}
/* 002478c0 000000d4 */ static ProcFadeOut() {}
/* 00247998 00000264 */ InitNameName00() {}
/* 00247c00 000004bc */ static InitNameName01() {}
/* 002480c0 000000e0 */ InitName() {}
/* 002481a0 00000940 */ MainName() {}
/* 00248ae0 0000001c */ EndName() {}

// *****************************************************************************
// FILE -- hoya/modesel/gsModeselect.c
// *****************************************************************************

/* 00248b00 00000204 */ gsStageInit_ModeSelect() {}
/* 00248d08 00000130 */ _gsMSLoadPigModeSelect() {}
/* 00248e38 000002f8 */ gsStageExec_ModeSelect() {}
/* 00249130 00000140 */ static _gsDrawPrimitive() {}
/* 00249270 00000124 */ _gsMSDrawAllPrimitive() {}
/* 00249398 0000008c */ _gsExtraFade() {}
/* 00249428 000000f4 */ _gsMSFadePrimitive() {}
/* 00249520 00000088 */ static _gsMSInitMSPrim() {}
/* 002495a8 000000f8 */ static _gsMSInitMSObject() {}
/* 002496a0 000000dc */ static _gsMSInitGeneral() {}
/* 00249780 0000010c */ static _gsMSInitTittle() {}
/* 00249890 0000010c */ static _gsMSInitBG() {}
/* 002499a0 00000180 */ static _gsMSInitLight() {}
/* 00249b20 000001fc */ static _gsMSInitWaku() {}
/* 00249d20 000001c4 */ static _gsMSInitLevel() {}
/* 00249ee8 0000025c */ static _gsMSInitExtra() {}
/* 0024a148 00000140 */ static _gsMSInitTile() {}
/* 0024a288 00000174 */ static _gsMSInitExplain() {}
/* 0024a400 000000e4 */ static _gsMSInitExplainBack() {}
/* 0024a4e8 00000090 */ static _gsMSsetTile() {}
/* 0024a578 00000160 */ static _gsMSSetXY() {}
/* 0024a6d8 00000084 */ static _gsMSSetUV() {}
/* 0024a760 00000024 */ static _gsMSSequencePrimitive() {}
/* 0024a788 000000b0 */ _gsMSWakuColorJudge() {}
/* 0024a838 00000fdc */ static _gsMSSequenceWaku() {}
/* 0024b818 00000230 */ static _gsMSSequenceBG() {}
/* 0024ba48 00000250 */ static _gsMSSequenceFade() {}
/* 0024bc98 00000160 */ static _gsMSWindowOpCl() {}
/* 0024bdf8 00000164 */ static _gsMSupdateCursol() {}
/* 0024bf60 00000330 */ static _gsMSDecide() {}
/* 0024c290 00000138 */ static _gsMSCancel() {}

// *****************************************************************************
// FILE -- hoya/startgs3/g_stgs.c
// *****************************************************************************

/* 0024c3c8 00000010 */ LetsGotoStartgs3() {}
/* 0024c3d8 000000d0 */ gsStageInit_STARTGS3() {}
/* 0024c4a8 000000d0 */ gsStageExec_STARTGS3() {}
/* 0024c578 00000008 */ gsStageEnd_STARTGS3() {}
/* 0024c580 0000000c */ InitStgsWait() {}
/* 0024c590 00000030 */ MainStgsWait() {}
/* 0024c5c0 00000008 */ EndStgsWait() {}

// *****************************************************************************
// FILE -- hoya/startgs3/stgssub1.c
// *****************************************************************************

/* 0024c5c8 00000008 */ InitStgsStart() {}
/* 0024c5d0 00000018 */ MainStgsStart() {}
/* 0024c5e8 00000008 */ EndStgsStart() {}

// *****************************************************************************
// FILE -- hoya/startgs3/stgssub2.c
// *****************************************************************************

/* 0024c5f0 00000008 */ InitStgsGunAdjust() {}
/* 0024c5f8 0000004c */ MainStgsGunAdjust() {}
/* 0024c648 00000008 */ EndStgsGunAdjust() {}

// *****************************************************************************
// FILE -- hoya/startgs3/stgssub3.c
// *****************************************************************************

/* 0024c650 00000030 */ static SetFadeParaFadeIn() {}
/* 0024c680 00000030 */ static SetFadeParaFadeOut() {}
/* 0024c6b0 0000001c */ static SetFadePara() {}
/* 0024c6d0 0000001c */ static SwitchFadeTimer() {}
/* 0024c6f0 0000001c */ static CheckFadeFinishFlag() {}
/* 0024c710 0000006c */ static Draw2dObject() {}
/* 0024c780 00000008 */ static Calculation() {}
/* 0024c788 000000d4 */ static ProcFade() {}
/* 0024c860 00000070 */ InitStgsKeikoku() {}
/* 0024c8d0 000003d8 */ MainStgsKeikoku() {}
/* 0024cca8 00000008 */ EndStgsKeikoku() {}

// *****************************************************************************
// FILE -- hoya/startgs3/stgssub4.c
// *****************************************************************************

/* 0024ccb0 00000008 */ InitStgsEnd() {}
/* 0024ccb8 00000018 */ MainStgsEnd() {}
/* 0024ccd0 00000008 */ EndStgsEnd() {}

// *****************************************************************************
// FILE -- hoya/startgs3/stgssub5.c
// *****************************************************************************

/* 0024ccd8 00000030 */ static SetFadeParaFadeIn() {}
/* 0024cd08 00000030 */ static SetFadeParaFadeOut() {}
/* 0024cd38 0000001c */ static SetFadePara() {}
/* 0024cd58 0000001c */ static SwitchFadeTimer() {}
/* 0024cd78 0000001c */ static CheckFadeFinishFlag() {}
/* 0024cd98 0000006c */ static Draw2dObject() {}
/* 0024ce08 00000008 */ static Calculation() {}
/* 0024ce10 000000d4 */ static ProcFade() {}
/* 0024cee8 00000070 */ InitStgsTaikenTyuui() {}
/* 0024cf58 00000344 */ MainStgsTaikenTyuui() {}
/* 0024d2a0 00000008 */ EndStgsTaikenTyuui() {}

// *****************************************************************************
// FILE -- hoya/playdemo/demosub0.c
// *****************************************************************************

/* 0024d2a8 000000dc */ gsInitDemo() {}
/* 0024d388 0000003c */ gsDemoLoadPig() {}
/* 0024d3c8 0000019c */ gsDemoInitSprite() {}
/* 0024d568 0000068c */ gsPutDemoObjects() {}
/* 0024dbf8 0000002c */ gsDemoRecPlayPad() {}
/* 0024dc28 00000878 */ gsManagementDemoCamera() {}
/* 0024e4a0 000002a0 */ gsTriggerDemoGuncon() {}
/* 0024e740 00000198 */ gsGuncon2_DemoGetGunPos() {}
/* 0024e8d8 00000354 */ gsGetCameraDemoRot_SCP() {}
/* 0024ec30 00000044 */ gsDemoPause() {}

// *****************************************************************************
// FILE -- hoya/playdemo/playdemo.c
// *****************************************************************************

/* 0024ec78 000000e4 */ gsRecordPadInit() {}
/* 0024ed60 00000040 */ gsRecordPadMain() {}
/* 0024eda0 000002b8 */ gsRecordPadMain2() {}
/* 0024f058 00000038 */ gsRecordPadEnd() {}
/* 0024f090 00000098 */ gsRecordPadFPutData() {}
/* 0024f128 00000020 */ gsPlayPadInit() {}
/* 0024f148 00000078 */ gsPlayPadMain() {}
/* 0024f1c0 00000208 */ gsPlayPadMain2() {}
/* 0024f3c8 0000003c */ gsPlayPadEnd() {}
/* 0024f408 00000030 */ gsPlayPadFGetData() {}
/* 0024f438 0000003c */ gsPlayDemoPadSwitch() {}
/* 0024f478 0000000c */ retGunActTaddr() {}
/* 0024f488 0000000c */ IsRecordHeaderExists() {}
/* 0024f498 00000020 */ gsPlayDemoInit() {}
/* 0024f4b8 0000001c */ gsRecDemoInit() {}
/* 0024f4d8 00000030 */ gsPad_GetGuncon2BuckUp() {}

// *****************************************************************************
// FILE -- sound/se_rpc.c
// *****************************************************************************

/* 0024f508 00000008 */ get_SE_MAX() {}
/* 0024f510 00000008 */ get_BGM_MAX() {}
/* 0024f518 00000008 */ get_STRM_MAX() {}
/* 0024f520 00000008 */ get_BGM_VAB_MAX() {}
/* 0024f528 00000008 */ get_SE_VAB_MAX() {}
/* 0024f530 00000064 */ SeSpu2AllocInit() {}
/* 0024f598 0000007c */ static SeAllocInit() {}
/* 0024f618 00000014 */ SeComNow() {}
/* 0024f630 00000014 */ SeIopLoadStatus() {}
/* 0024f648 00000008 */ SeSetDiscMode() {}
/* 0024f650 000000a8 */ ezSeInit() {}
/* 0024f6f8 00000048 */ SeRpcCom() {}
/* 0024f740 00000090 */ ezSeL() {}
/* 0024f7d0 00000048 */ ezSe() {}
/* 0024f818 00000188 */ SeTest() {}
/* 0024f9a0 00000030 */ SeReadNow() {}
/* 0024f9d0 00000014 */ IOPDevReadNow() {}
/* 0024f9e8 00000014 */ IOPReadNow() {}
/* 0024fa00 00000014 */ SeTransNow() {}
/* 0024fa18 00000028 */ SeReqQueInc() {}
/* 0024fa40 00000028 */ SeReqQueDec() {}
/* 0024fa68 00000028 */ SeJobQueInc() {}
/* 0024fa90 00000038 */ SeTjobStart() {}
/* 0024fac8 000000c8 */ SeTjobTrans() {}
/* 0024fb90 00000014 */ SeTjobTransStatus() {}
/* 0024fba8 00000148 */ SeTjobRead() {}
/* 0024fcf0 000000a4 */ SeTjobOpen() {}
/* 0024fd98 0000011c */ SeTjobLoad() {}
/* 0024feb8 00000074 */ SeTjobLoadStatus() {}
/* 0024ff30 000000e0 */ SeTjobEnd() {}
/* 00250010 00000064 */ SeTjobError() {}
/* 00250078 00000204 */ SeTransMain() {}
/* 00250280 000000e0 */ SeMain() {}
/* 00250360 000000e0 */ SeIopStatus() {}
/* 00250440 00000034 */ SeGetPort() {}
/* 00250478 0000005c */ SeGetVhName() {}
/* 002504d8 00000020 */ SeSoundOff() {}
/* 002504f8 00000020 */ SeSePortOff() {}
/* 00250518 00000020 */ SeMidiPortOff() {}
/* 00250538 00000020 */ SeStrmOff() {}
/* 00250558 00000030 */ SeSpuPortOff() {}
/* 00250588 00000020 */ SeSetMasterVol() {}
/* 002505a8 00000020 */ SeSetSeVol() {}
/* 002505c8 00000020 */ SeSetBgmVol() {}
/* 002505e8 00000020 */ SeSetStrmVol() {}
/* 00250608 00000020 */ SeSetOutType() {}
/* 00250628 00000024 */ SePortInit() {}
/* 00250650 000000b4 */ SeSoundAllClose() {}
/* 00250708 00000034 */ SeInitHot() {}
/* 00250740 000000ec */ SeInit() {}
/* 00250830 00000034 */ SeSpu2Init() {}
/* 00250868 0000002c */ SeSetEffect() {}
/* 00250898 00000024 */ SeSetEffectDepth() {}
/* 002508c0 00000110 */ Se() {}
/* 002509d0 00000048 */ SeStopSe() {}
/* 00250a18 00000080 */ SeStop() {}
/* 00250a98 00000020 */ SeStopVoice() {}
/* 00250ab8 00000118 */ static SeDataOpen() {}
/* 00250bd0 00000048 */ SeGetVbBlockSize() {}
/* 00250c18 00000314 */ static SeBankOpenTransfer() {}
/* 00250f30 00000044 */ SeVabOpenEE() {}
/* 00250f78 000000d4 */ SeVabOpenBEE() {}
/* 00251050 00000030 */ SeVabOpen() {}
/* 00251080 00000068 */ SeVabOpenB() {}
/* 002510e8 00000058 */ SeVabOpenN() {}
/* 00251140 00000024 */ SeVabClose() {}
/* 00251168 00000030 */ SeVabCloseB() {}
/* 00251198 00000078 */ Se3D() {}
/* 00251210 00000064 */ SeDir() {}
/* 00251278 00000064 */ SeDir2() {}
/* 002512e0 00000064 */ SeSetVolume() {}
/* 00251348 0000003c */ SeSetPitch() {}
/* 00251388 0000005c */ SeKeyon3D() {}
/* 002513e8 0000005c */ SeKeyonDir() {}
/* 00251448 0000005c */ SeKeyonDir2() {}
/* 002514a8 00000054 */ SeKeyon() {}
/* 00251500 0000000c */ SeCSLMidiPlaySt() {}
/* 00251510 0000001c */ SeCSLMidiPortSt() {}
/* 00251530 00000080 */ SeCSLMidiPlayNo() {}
/* 002515b0 00000020 */ SeCSLSetMidi() {}
/* 002515d0 00000024 */ SeCSLMidiVolume() {}
/* 002515f8 00000020 */ SeCSLMidiPlayPort() {}
/* 00251618 00000040 */ SeCSLMidiSetLocation() {}
/* 00251658 00000134 */ SeCSLMidiPlayBP() {}
/* 00251790 000000a4 */ SeCSLMidiPlayNP() {}
/* 00251838 000000a8 */ SeCSLMidiPlayNB() {}
/* 002518e0 000000d0 */ SeCSLMidiPlay() {}
/* 002519b0 000000a0 */ SeCSLMidiPlay2() {}
/* 00251a50 00000198 */ SeCSLMidiXFadeB() {}
/* 00251be8 00000054 */ SeCSLMidiXFade() {}
/* 00251c40 00000020 */ SeCSLMidiContinue() {}
/* 00251c60 00000048 */ SeCSLMidiPause() {}
/* 00251ca8 00000070 */ SeCSLMidiStopP() {}
/* 00251d18 00000140 */ SeCSLMidiStop() {}
/* 00251e58 00000054 */ SeCSLBankOpenEE() {}
/* 00251eb0 00000158 */ SeCSLBankOpenBEE() {}
/* 00252008 0000003c */ SeCSLBankOpen() {}
/* 00252048 00000110 */ SeCSLBankOpenB() {}
/* 00252158 0000005c */ SeCSLBankOpenN() {}
/* 002521b8 0000005c */ SeCSLBankClose() {}
/* 00252218 00000038 */ SeCSLBankCloseB() {}
/* 00252250 00000094 */ SeCSLSqOpenEE() {}
/* 002522e8 000000cc */ SeCSLSqOpenBEE() {}
/* 002523b8 00000094 */ SeCSLSqOpen() {}
/* 00252450 0000007c */ SeCSLSqOpenB() {}
/* 002524d0 000000e4 */ SeCSLSqOpenN() {}
/* 002525b8 000000e8 */ SeCSLSqCloseB() {}
/* 002526a0 00000034 */ SeCSLSqClose() {}
/* 002526d8 00000020 */ SeStrmRevOn() {}
/* 002526f8 00000020 */ SeStrmRevOff() {}
/* 00252718 0000003c */ SeStrmPlaySt() {}
/* 00252758 0000001c */ SeStrmPortSt() {}
/* 00252778 00000050 */ SeStrmPlayNo() {}
/* 002527c8 0000003c */ SeStrmInit() {}
/* 00252808 000000f0 */ SeStrmOpenWithSetParam() {}
/* 002528f8 000000a8 */ SeStrmOpenTBL() {}
/* 002529a0 00000020 */ SeStrmPlay() {}
/* 002529c0 00000020 */ SeStrmStop() {}
/* 002529e0 00000040 */ SeStrmQuit() {}
/* 00252a20 0000002c */ SeMePlay() {}
/* 00252a50 000000d4 */ SeMePlayB() {}
/* 00252b28 0000002c */ SeMeStop() {}
/* 00252b58 00000078 */ SeMeStopB() {}
/* 00252bd0 000000cc */ SeMeOpenN() {}
/* 00252ca0 00000030 */ SeMeOpenB() {}
/* 00252cd0 00000048 */ SeMeOpen() {}
/* 00252d18 00000100 */ SeMeOpenEE() {}
/* 00252e18 0000002c */ SeMeClose() {}
/* 00252e48 000000c0 */ SeMeCloseB() {}

// *****************************************************************************
// FILE -- sound/CdvUse.c
// *****************************************************************************

/* 00252f08 000000cc */ static cdvCallBack() {}
/* 00252fd8 00000148 */ cdvInit() {}
/* 00253120 00000038 */ cdvClose() {}
/* 00253158 00000080 */ cdvFlush() {}
/* 002531d8 0000002c */ cdvQueStop() {}
/* 00253208 00000020 */ cdvQueStart() {}
/* 00253228 00000054 */ cdvIsEoq() {}
/* 00253280 00000008 */ cdvGetWriteQue() {}
/* 00253288 00000030 */ cdvGetWorkingQue() {}
/* 002532b8 00000008 */ cdvGetError() {}
/* 002532c0 00000008 */ cdvGetReadPos() {}
/* 002532c8 00000060 */ cdvGetDiscNameSet() {}
/* 00253328 00000068 */ static cdvGetBufNameSet() {}
/* 00253390 000000e8 */ static cdvGetBufName() {}
/* 00253478 00000080 */ static cdvCheckDiscName() {}
/* 002534f8 00000068 */ cdvNameCheckSet() {}
/* 00253560 00000078 */ cdvWaitWorkingSet() {}
/* 002535d8 00000068 */ cdvDiscReadySet() {}
/* 00253640 00000068 */ cdvSyncSet() {}
/* 002536a8 00000088 */ cdvSeekSet() {}
/* 00253730 000000c0 */ cdvReadSet() {}
/* 002537f0 000000c0 */ cdvReadIOPSet() {}
/* 002538b0 00000070 */ cdvCdStopSet() {}
/* 00253920 00000070 */ cdvCdStandbySet() {}
/* 00253990 00000070 */ cdvTrayOpenSet() {}
/* 00253a00 0000006c */ cdvTrayCloseWaitSet() {}
/* 00253a70 0000005c */ cdvDiscChangeSet() {}
/* 00253ad0 00000130 */ cdvSearchFileSet() {}
/* 00253c00 000000b8 */ cdvFReadSet() {}
/* 00253cb8 0000001c */ static FileQueClear() {}
/* 00253cd8 00000020 */ cdvGetSearchNum() {}
/* 00253cf8 00000040 */ static cdvDelSearchData() {}
/* 00253d38 00000068 */ cdvDelSearchDataSet() {}
/* 00253da0 00000018 */ static cdvDelSearchDataAll() {}
/* 00253db8 00000068 */ cdvDelSearchDataAllSet() {}
/* 00253e20 00000124 */ cdvFileReadSet() {}
/* 00253f48 00000144 */ cdvGetFileStsSet() {}
/* 00254090 00000038 */ cdvDiscNameChange() {}
/* 002540c8 00000078 */ cdvDiscNameChangeSet() {}
/* 00254140 000000b8 */ cdvFReadIOPSet() {}
/* 002541f8 00000124 */ cdvFileReadIOPSet() {}
/* 00254320 000000a0 */ cdvMpegPlaySet() {}
/* 002543c0 00000008 */ cdvMpegGetError() {}
/* 002543c8 00000e18 */ cdvMain() {}
/* 002551e0 00000044 */ static GetSecByte() {}
/* 00255228 00000018 */ static ReadDataCreate() {}
/* 00255240 0000015c */ static cdvTrapError() {}
/* 002553a0 00000008 */ cdvErrInit() {}

// *****************************************************************************
// FILE -- sound/mainmpeg.c
// *****************************************************************************

/* 002553a8 000001a8 */ cdvMpegInit() {}
/* 00255550 00000020 */ static PortSlotCheck() {}
/* 00255570 000000a0 */ cdvMpegSkipSet() {}
/* 00255610 00000078 */ cdvMpegSkipSetAll() {}
/* 00255688 0000004c */ cdvMpegSkipReset() {}
/* 002556d8 00000058 */ cdvMpegSkipResetAll() {}
/* 00255730 00000064 */ cdvMpegPadUseSet() {}
/* 00255798 00000008 */ cdvMpegRestoreSet() {}
/* 002557a0 00000008 */ cdvMpegSoundSet() {}
/* 002557a8 00000008 */ cdvMpegSoundSMSet() {}
/* 002557b0 00000008 */ cdvMpegGetFrameCount() {}
/* 002557b8 00000020 */ cdvMpegPlayEnd() {}
/* 002557d8 00000198 */ PlayMpeg() {}
/* 00255970 00000674 */ static readMpeg() {}
/* 00255fe8 00000038 */ static isAudioOK() {}
/* 00256020 00000314 */ static initAll() {}
/* 00256338 00000178 */ static termAll() {}
/* 002564b0 0000002c */ static defMain() {}
/* 002564e0 0000000c */ ResetMpeg() {}
/* 002564f0 000000d8 */ static strFileOpen() {}
/* 002565c8 0000008c */ static strFileClose() {}
/* 00256658 00000050 */ static strFileRead() {}
/* 002566a8 0000001c */ proceedAudio() {}
/* 002566c8 00000100 */ videoCallback() {}
/* 002567c8 000000dc */ pcmCallback() {}
/* 002568a8 00000118 */ static copy2area() {}
/* 002569c0 00000018 */ readBufCreate() {}
/* 002569d8 00000010 */ readBufDelete() {}
/* 002569e8 00000030 */ readBufBeginPut() {}
/* 00256a18 0000003c */ readBufEndPut() {}
/* 00256a58 00000048 */ readBufBeginGet() {}
/* 00256aa0 0000001c */ readBufEndGet() {}
/* 00256ac0 00000008 */ cdvMpegUserProgSet() {}
/* 00256ac8 00000008 */ cdvMpegUserProgDelete() {}
/* 00256ad0 00000008 */ cdvMpegSendModeSet() {}
/* 00256ad8 000000a4 */ static UserThread() {}

// *****************************************************************************
// FILE -- sound/buf.c
// *****************************************************************************

/* 00256b80 00000040 */ getFIFOindex() {}
/* 00256bc0 00000064 */ setD3_CHCR() {}
/* 00256c28 00000064 */ setD4_CHCR() {}
/* 00256c90 00000024 */ scTag2() {}
/* 00256cb8 00000078 */ viBufCreate() {}
/* 00256d30 0000013c */ viBufReset() {}
/* 00256e70 000000ec */ viBufBeginPut() {}
/* 00256f60 00000050 */ viBufEndPut() {}
/* 00256fb0 000001ec */ viBufAddDMA() {}
/* 002571a0 00000108 */ viBufStopDMA() {}
/* 002572a8 00000330 */ viBufRestartDMA() {}
/* 002575d8 00000058 */ viBufDelete() {}
/* 00257630 00000040 */ viBufIsActive() {}
/* 00257670 0000004c */ viBufCount() {}
/* 002576c0 0000004c */ viBufFlush() {}
/* 00257710 00000168 */ viBufModifyPts() {}
/* 00257878 000000fc */ viBufPutTs() {}
/* 00257978 0000018c */ viBufGetTs() {}
/* 00257b08 00000044 */ voBufCreate() {}
/* 00257b50 00000018 */ voBufDelete() {}
/* 00257b68 00000010 */ voBufReset() {}
/* 00257b78 00000014 */ voBufIsFull() {}
/* 00257b90 00000078 */ voBufIncCount() {}
/* 00257c08 0000004c */ voBufGetData() {}
/* 00257c58 0000000c */ voBufIsEmpty() {}
/* 00257c68 0000006c */ voBufGetTag() {}
/* 00257cd8 0000006c */ voBufGetAddr() {}
/* 00257d48 00000020 */ voBufDecCount() {}

// *****************************************************************************
// FILE -- sound/decoder.c
// *****************************************************************************

/* 00257d68 00000100 */ videoDecCreate() {}
/* 00257e68 00000014 */ videoDecSetDecodeMode() {}
/* 00257e80 00000018 */ videoDecBeginPut() {}
/* 00257e98 00000018 */ videoDecEndPut() {}
/* 00257eb0 00000008 */ videoDecReset() {}
/* 00257eb8 00000040 */ videoDecDelete() {}
/* 00257ef8 0000000c */ videoDecAbort() {}
/* 00257f08 00000008 */ videoDecGetState() {}
/* 00257f10 0000000c */ videoDecSetState() {}
/* 00257f20 0000003c */ videoDecPutTs() {}
/* 00257f60 00000018 */ videoDecInputCount() {}
/* 00257f78 00000034 */ videoDecInputSpaceCount() {}
/* 00257fb0 000000d0 */ videoDecFlush() {}
/* 00258080 00000048 */ videoDecIsFlushed() {}
/* 002580c8 0000006c */ videoDecMain() {}
/* 00258138 000001cc */ decBs0() {}
/* 00258308 00000028 */ mpegError() {}
/* 00258330 0000002c */ mpegNodata() {}
/* 00258360 00000024 */ mpegStopDMA() {}
/* 00258388 00000024 */ mpegRestartDMA() {}
/* 002583b0 00000044 */ mpegTS() {}
/* 002583f8 00000118 */ static cpy2area() {}
/* 00258510 00000008 */ cdvMpegChgVolume() {}
/* 00258518 000000c8 */ audioDecCreate() {}
/* 002585e0 00000064 */ audioDecDelete() {}
/* 00258648 00000098 */ audioDecPause() {}
/* 002586e0 00000080 */ audioDecResume() {}
/* 00258760 00000014 */ audioDecStart() {}
/* 00258778 00000048 */ audioDecReset() {}
/* 002587c0 000000a4 */ audioDecBeginPut() {}
/* 00258868 0000007c */ audioDecEndPut() {}
/* 002588e8 00000014 */ audioDecIsPreset() {}
/* 00258900 00000224 */ audioDecSendToIOP() {}
/* 00258b28 000000a8 */ static iopGetArea() {}
/* 00258bd0 000000f4 */ static ConvertMONO() {}
/* 00258cc8 00000148 */ static sendToIOP2area() {}
/* 00258e10 0000006c */ static sendToIOP() {}
/* 00258e80 00000074 */ static pushMasterVolume() {}
/* 00258ef8 00000074 */ static popMasterVolume() {}
/* 00258f70 00000074 */ changeMasterVolume() {}
/* 00258fe8 00000058 */ static changeInputVolume() {}

// *****************************************************************************
// FILE -- sound/disp.c
// *****************************************************************************

/* 00259040 00000144 */ initDisplay() {}
/* 00259188 00000058 */ cdvMpegChgOffset() {}
/* 002591e0 00000020 */ cdvMpegChgCtxt() {}
/* 00259200 000002f0 */ dispCreate() {}
/* 002594f0 00000008 */ dispDelete() {}
/* 002594f8 000000ac */ texsave() {}
/* 002595a8 000000ac */ texload() {}
/* 00259658 0000059c */ dispSetTags() {}
/* 00259bf8 0000002c */ dispSwitch() {}
/* 00259c28 00000008 */ dispClear() {}
/* 00259c30 000000bc */ setTexRect() {}
/* 00259cf0 000000b0 */ setFlatRect() {}
/* 00259da0 00000054 */ setDMAscTag() {}
/* 00259df8 00000054 */ setGIFtag() {}
/* 00259e50 00000030 */ setGIFad() {}
/* 00259e80 0000001c */ setTEXFLUSH() {}
/* 00259ea0 00000064 */ setTEX1_1() {}
/* 00259f08 00000064 */ setTEX1_2() {}
/* 00259f70 0000009c */ setTEX0_1() {}
/* 0025a010 0000009c */ setTEX0_2() {}
/* 0025a0b0 00000080 */ setPRIM() {}
/* 0025a130 0000002c */ setUV() {}
/* 0025a160 0000004c */ setRGBAQ() {}
/* 0025a1b0 00000034 */ setXYZ2() {}
/* 0025a1e8 00000040 */ setFRAME_1() {}
/* 0025a228 00000040 */ setFRAME_2() {}
/* 0025a268 00000074 */ setTEST_1() {}
/* 0025a2e0 00000074 */ setTEST_2() {}
/* 0025a358 0000003c */ setSCISSOR_1() {}
/* 0025a398 0000003c */ setSCISSOR_2() {}
/* 0025a3d8 00000028 */ setXYOFFSET_1() {}
/* 0025a400 00000028 */ setXYOFFSET_2() {}
/* 0025a428 00000020 */ setPRMODECONT() {}
/* 0025a448 00000058 */ setCLAMP_1() {}
/* 0025a4a0 00000058 */ setCLAMP_2() {}
/* 0025a4f8 00000050 */ setBITBLTBUF() {}
/* 0025a548 00000044 */ setTRXPOS() {}
/* 0025a590 00000028 */ setTRXREG() {}
/* 0025a5b8 00000020 */ setTRXDIR() {}
/* 0025a5d8 00000038 */ loadImage() {}
/* 0025a610 00000174 */ vblankHandler() {}
/* 0025a788 00000038 */ handler_endimage() {}
/* 0025a7c0 0000003c */ startDisplay() {}
/* 0025a800 0000000c */ endDisplay() {}
/* 0025a810 00000024 */ SetUserData() {}

// *****************************************************************************
// FILE -- unpack.c
// *****************************************************************************

/* 0025a838 00000128 */ SDUnpack() {}

// *****************************************************************************
// FILE -- taiken/taiken.c
// *****************************************************************************

/* 0025a960 00000204 */ gsTaiken_Init() {}
/* 0025ab68 000001d4 */ gsTaiken_Exec() {}
/* 0025ad40 000000ac */ gsTaiken_End() {}
/* 0025adf0 00000100 */ gsTaiken_Init_SELECT() {}
/* 0025aef0 00000380 */ gsTaiken_Exec_SELECT() {}
/* 0025b270 000000c4 */ static _select_move_cursor() {}
/* 0025b338 00000118 */ static _select_put_cursor() {}
/* 0025b450 000000e0 */ static _select_put_info() {}
/* 0025b530 000000b4 */ gsTaiken_Init_KEYWORD() {}
/* 0025b5e8 0000032c */ gsTaiken_Exec_KEYWORD() {}
/* 0025b918 00000108 */ static _keyword_put_word() {}
/* 0025ba20 000000cc */ gsTaikenInit_READY_GO() {}
/* 0025baf0 00000090 */ gsTaikenExec_READY_GO() {}
/* 0025bb80 00000058 */ gsTaikenExec_CLEAR() {}
/* 0025bbd8 00000060 */ gsTaikenCall_CLEAR() {}
/* 0025bc38 00000010 */ gsTaikenCall_CLEAR_ON_OFF() {}
/* 0025bc48 0000032c */ static _ready_go_put_font() {}
/* 0025bf78 00000250 */ static _clear_put_font() {}

// *****************************************************************************
// FILE -- omake/omake.c
// *****************************************************************************

/* 0025c1c8 0000003c */ gsOmakeInitManager() {}
/* 0025c208 0000000c */ gsOmakeSetFlag() {}
/* 0025c218 00000034 */ gsOmakeSetArmsFlagAll() {}
/* 0025c250 0000001c */ gsOmakeResetArmsFlag() {}

// *****************************************************************************
// FILE -- omake/ninnin.c
// *****************************************************************************

/* 0025c270 00000204 */ gsNinnin_Init() {}
/* 0025c478 00000384 */ gsNinnin_Exec() {}
/* 0025c800 000000ac */ gsNinnin_End() {}
/* 0025c8b0 0000014c */ gsNinnin_InitSprite() {}
/* 0025ca00 00000348 */ gsNinnin_Exec_Warning() {}
/* 0025cd48 000000b4 */ gsNinnin_Exec_Explanation() {}
/* 0025ce00 00000524 */ gsNinnin_Exec_Title() {}

// *****************************************************************************
// FILE -- omake/mugen.c
// *****************************************************************************

/* 0025d328 00000204 */ gsMugen_Init() {}
/* 0025d530 0000035c */ gsMugen_Exec() {}
/* 0025d890 000000ac */ gsMugen_End() {}
/* 0025d940 000000cc */ gsMugen_InitSprite() {}
/* 0025da10 000000b4 */ gsMugen_Exec_Warning() {}
/* 0025dac8 00000524 */ gsMugen_Exec_Title() {}

// *****************************************************************************
// FILE -- omake/g_galery.c
// *****************************************************************************

/* 0025dff0 00000028 */ gal_texInit() {}
/* 0025e018 0000013c */ G_GALERY_Init() {}
/* 0025e158 00000044 */ G_GALERY_End() {}
/* 0025e1a0 000001dc */ G_GALERY_Exec() {}
/* 0025e380 0000006c */ static gal_setFadeIn() {}
/* 0025e3f0 0000006c */ static gal_setFadeOut() {}
/* 0025e460 00000068 */ static gal_initBgSpr() {}
/* 0025e4c8 000000c8 */ static gal_initCurSpr() {}
/* 0025e590 000000a8 */ static gal_initPageSpr() {}
/* 0025e638 00000068 */ static gal_titleEtcInitSpr() {}
/* 0025e6a0 000000a0 */ static gal_selectEtcInitSpr() {}
/* 0025e740 000000bc */ static gal_initZoomArrowSpr() {}
/* 0025e800 000000e4 */ static gal_initGalSpr() {}
/* 0025e8e8 000000e8 */ static gal_setCurPos() {}
/* 0025e9d0 000000fc */ static gal_setCurSpr() {}
/* 0025ead0 00000168 */ static gal_setArrowSpr() {}
/* 0025ec38 000000f8 */ static gal_setPageSpr() {}
/* 0025ed30 00000190 */ static gal_notice() {}
/* 0025eec0 00000230 */ static gal_title() {}
/* 0025f0f0 000004b8 */ static gal_select() {}
/* 0025f5a8 0000020c */ static gal_disp() {}
/* 0025f7b8 00000394 */ static gal_zoom() {}

// *****************************************************************************
// FILE -- omake/g_theate.c
// *****************************************************************************

/* 0025fb50 00000028 */ the_texInit() {}
/* 0025fb78 0000013c */ G_THEATE_Init() {}
/* 0025fcb8 00000044 */ G_THEATE_End() {}
/* 0025fd00 000001cc */ G_THEATE_Exec() {}
/* 0025fed0 0000006c */ static the_setFadeIn() {}
/* 0025ff40 0000006c */ static the_setFadeOut() {}
/* 0025ffb0 00000068 */ static the_initBgSpr() {}
/* 00260018 000000c8 */ static the_initCurSpr() {}
/* 002600e0 000000a8 */ static the_initPageSpr() {}
/* 00260188 000000a0 */ static the_selectEtcInitSpr() {}
/* 00260228 00000068 */ static the_titleEtcInitSpr() {}
/* 00260290 0000010c */ static the_setCurPos() {}
/* 002603a0 000000fc */ static the_setCurSpr() {}
/* 002604a0 000000f8 */ static the_setPageSpr() {}
/* 00260598 00000190 */ static the_notice() {}
/* 00260728 00000230 */ static the_title() {}
/* 00260958 00000588 */ static the_select() {}
/* 00260ee0 0000010c */ static the_disp() {}

// *****************************************************************************
// FILE -- g_guncon1/g_guncon1.c
// *****************************************************************************

/* 00260ff0 00000044 */ gsGuncon1_InitAll() {}
/* 00261038 00000034 */ gsGuncon1_Init() {}
/* 00261070 0000001c */ gsGuncon1_ClearFlag() {}
/* 00261090 00000074 */ gsGuncon1_LoadPad() {}
/* 00261108 000001b0 */ gsGuncon1_Exec() {}
/* 002612b8 0000002c */ gsGuncon1_CheckPort() {}
/* 002612e8 0000000c */ gsGuncon1_GetDelay() {}
/* 002612f8 0000000c */ gsGuncon1_Get() {}
/* 00261308 0000000c */ gsGuncon1_GetTrg() {}
/* 00261318 000000a8 */ gsGuncon1_FlashTrigger() {}
/* 002613c0 00000014 */ gsGuncon1_CheckOut() {}
/* 002613d8 00000030 */ gsGuncon1_CheckOutTrg() {}
/* 00261408 00000064 */ gsGuncon1_GetCamSight() {}
/* 00261470 0000004c */ gsGuncon1_ExchangePad() {}

// *****************************************************************************
// FILE -- g_guncon2/g_adjustgun.c
// *****************************************************************************

/* 002614c0 00000150 */ GUN_ADJUST_Init() {}
/* 00261610 00000168 */ GUN_ADJUST_Exec() {}
/* 00261778 00000030 */ GUN_ADJUST_End() {}
/* 002617a8 00000008 */ static gsAdjustGun_Init() {}
/* 002617b0 000000e4 */ static gsAdjustGun_Main() {}
/* 00261898 00000070 */ static gsAdjustGun_DrawSight() {}
/* 00261908 000000e8 */ static gsAdjustGun_DrawLine() {}
/* 002619f0 00000048 */ static gsAdjustGun_DrawBullet() {}
/* 00261a38 00000184 */ static draw_sprite() {}
/* 00261bc0 00000024 */ set_bg_color() {}

// *****************************************************************************
// FILE -- g_guncon2/g_guncon2.c
// *****************************************************************************

/* 00261be8 00000068 */ gsGuncon2_Init() {}
/* 00261c50 000000d0 */ gsGuncon2_Exec() {}
/* 00261d20 00000028 */ gsGuncon2_CheckConnect() {}
/* 00261d48 00000060 */ gsGuncon2_GetActivePort() {}
/* 00261da8 0000001c */ gsGuncon2_Get() {}
/* 00261dc8 0000001c */ gsGuncon2_GetTrg() {}
/* 00261de8 00000018 */ gsGuncon2_GetRTrg() {}
/* 00261e00 000000a8 */ static _gsGuncon2_changeByOpton() {}
/* 00261ea8 00000034 */ gsGuncon2_Get2() {}
/* 00261ee0 00000034 */ gsGuncon2_GetTrg2() {}
/* 00261f18 000001e0 */ gsGuncon2_GetGunPos() {}
/* 002620f8 00000054 */ gsGuncon2_GetCamSight() {}
/* 00262150 0000000c */ gsGuncon2_GetCycle() {}
/* 00262160 0000000c */ gsGuncon2_SetState() {}
/* 00262170 00000014 */ gsGuncon2_CanChangeArms() {}
/* 00262188 0000002c */ static gsGuncon2_InitManager() {}
/* 002621b8 0000005c */ static gsGuncon2_InitAdjustPara() {}
/* 00262218 000000b4 */ static gsGuncon2_DrawFlash() {}
/* 002622d0 00000010 */ static gsGuncon2_Flash_INIT() {}
/* 002622e0 00000048 */ gsGuncon2_Flash_CALL() {}
/* 00262328 00000010 */ gsGuncon2_Flash_RECALL() {}
/* 00262338 0000015c */ gsGuncon2_Flash_EXEC() {}
/* 00262498 00000084 */ gsGuncon2_LoadModule() {}
/* 00262520 00000120 */ static gsGunconSetTrgRepeat() {}

// *****************************************************************************
// FILE -- g_guncon2/src/gun_adjust.c
// *****************************************************************************

/* 00262640 00000050 */ gun_adjust_init() {}
/* 00262690 00000084 */ init_gun_adjust_para() {}
/* 00262718 00000158 */ gun_adjust_main() {}
/* 00262870 00000018 */ static GunAdjustInit() {}
/* 00262888 000002f8 */ static GunAdjust() {}
/* 00262b80 00000038 */ static change_wide() {}
/* 00262bb8 00000018 */ static change_wide_mode() {}
/* 00262bd0 0000003c */ static change_normal_mode() {}
/* 00262c10 00000094 */ static change_monitor() {}
/* 00262ca8 00000014 */ static gun_adjust0() {}
/* 00262cc0 00000050 */ static gun_adjust1() {}
/* 00262d10 00000024 */ static gun_adjust2() {}
/* 00262d38 00000014 */ static gun_adjust_W0() {}
/* 00262d50 00000044 */ static gun_adjust_W1() {}
/* 00262d98 00000054 */ static gun_adjust_W2() {}
/* 00262df0 00000044 */ static gun_adjust_W3() {}
/* 00262e38 000000d0 */ static gun_teaching() {}
/* 00262f08 00000228 */ static adjust_center() {}
/* 00263130 000000d0 */ static adjust_wide() {}
/* 00263200 000000e4 */ static adjust_check() {}
/* 002632e8 00000044 */ static set_adjustX() {}
/* 00263330 0000004c */ static set_adjustY() {}

// *****************************************************************************
// FILE -- g_guncon2/src/guncon2.c
// *****************************************************************************

/* 00263380 0000001c */ GetUsbGunBuffer() {}
/* 002633a0 0000001c */ GetGunBuffer() {}
/* 002633c0 00000164 */ Guncon2_Init() {}
/* 00263528 00000220 */ Guncon2_SetPort() {}
/* 00263748 00000174 */ Guncon2_Job() {}
/* 002638c0 0000011c */ static Guncon2_GetPosi() {}
/* 002639e0 00000068 */ Guncon2_TransCtrlData() {}
/* 00263a48 00000084 */ Guncon2_Action() {}
/* 00263ad0 000000bc */ static Guncon2_KeyConvert() {}

// *****************************************************************************
// FILE -- /home/aex/gunsuv_usa/libgf/libgf.c
// *****************************************************************************

/* 00263b90 00000008 */ void GF_InitGraphicsFramework() {}
/* 00263b98 00000008 */ void GF_EndGraphicsFramework() {}

/* 00263ba0 00000044 */ void gf_setsorykey(/* a0 4 */ float *p[4], /* a1 5 */ GF_INSTANCE *inst) {
	/* 0x0(sp) */ sceVu0FVECTOR out;
}

/* 00263be8 00000008 */ void GF_sort_shape(/* a0 4 */ sceVu0FMATRIX *cam) {}
/* 00263bf0 00000018 */ void _GFPKT_DMA_SET_TAG_0(/* a0 4 */ qword *p, /* a1 5 */ Uint32 id, /* a2 6 */ Uint32 qwc) {}
/* 00263c08 00000020 */ void _GFPKT_DMA_SET_TAG_1(/* a0 4 */ qword *p, /* a1 5 */ Uint32 id, /* a2 6 */ Uint32 qwc, /* a3 7 */ Uint32 addr) {}
/* 00263c28 00000034 */ void _GFPKT_DV_REF_UNPACK(/* a0 4 */ qword *p, /* a1 5 */ Uint32 addr, /* a2 6 */ Uint32 vuaddr, /* a3 7 */ Uint32 size) {}
/* 00263c60 00000038 */ void _GFPKT_DV_REF_UNPACKR(/* a0 4 */ qword *p, /* a1 5 */ Uint32 addr, /* a2 6 */ Uint32 vuaddr, /* a3 7 */ Uint32 size) {}
/* 00263c98 0000002c */ void _GFPKT_DV_RET_BASE_OFFSET(/* a0 4 */ qword *p, /* a1 5 */ Uint32 base, /* a2 6 */ Uint32 offset) {}
/* 00263cc8 0000002c */ void _GFPKT_DV_CNT_MSCAL_FLUSH(/* a0 4 */ qword *p, /* a1 5 */ Uint32 size, /* a2 6 */ Uint32 vuaddr) {}
/* 00263cf8 00000020 */ void _GFPKT_DV_CNT_FLUSH(/* a0 4 */ qword *p, /* a1 5 */ Uint32 size) {}
/* 00263d18 00000020 */ void _GFPKT_DV_CNT_MSCNT(/* a0 4 */ qword *p, /* a1 5 */ Uint32 size) {}
/* 00263d38 0000002c */ void _GFPKT_DV_CNT_UNPACK(/* a0 4 */ qword *p, /* a1 5 */ Uint32 vuaddr, /* a2 6 */ Uint32 size) {}
/* 00263d68 00000030 */ void _GFPKT_DV_CNT_UNPACKR(/* a0 4 */ qword *p, /* a1 5 */ Uint32 vuaddr, /* a2 6 */ Uint32 size) {}
/* 00263d98 00000028 */ void _GFPKT_DV_CNT_STCYCL(/* a0 4 */ qword *p, /* a1 5 */ Uint32 size, /* a2 6 */ Uint32 wl, /* a3 7 */ Uint32 cl) {}
/* 00263dc0 00000034 */ void _GFPKT_DV_CNT_STCYCL_STROW(/* a0 4 */ qword *p, /* a1 5 */ Uint32 size, /* a2 6 */ Uint32 wl, /* a3 7 */ Uint32 cl) {}
/* 00263df8 00000048 */ void _GFPKT_DV_REF_STCYCL_UNPACK(/* a0 4 */ qword *p, /* a1 5 */ Uint32 addr, /* a2 6 */ Uint32 vuaddr, /* a3 7 */ Uint32 size, /* t0 8 */ Uint32 wl, /* t1 9 */ Uint32 cl) {}
/* 00263e40 0000004c */ void _GFPKT_DV_REF_STCYCL_UNPACKR(/* a0 4 */ qword *p, /* a1 5 */ Uint32 addr, /* a2 6 */ Uint32 vuaddr, /* a3 7 */ Uint32 size, /* t0 8 */ Uint32 wl, /* t1 9 */ Uint32 cl) {}
/* 00263e90 00000040 */ void _GFPKT_DV_CNT_STCYCL_UNPACK(/* a0 4 */ qword *p, /* a1 5 */ Uint32 vuaddr, /* a2 6 */ Uint32 size, /* a3 7 */ Uint32 wl, /* t0 8 */ Uint32 cl) {}
/* 00263ed0 00000044 */ void _GFPKT_DV_CNT_STCYCL_UNPACKR(/* a0 4 */ qword *p, /* a1 5 */ Uint32 vuaddr, /* a2 6 */ Uint32 size, /* a3 7 */ Uint32 wl, /* t0 8 */ Uint32 cl) {}
/* 00263f18 00000024 */ void _GFPKT_DV_CNT_DIRECT(/* a0 4 */ qword *p, /* a1 5 */ Uint32 size) {}
/* 00263f40 0000002c */ void _GFPKT_DV_REF_DIRECT(/* a0 4 */ qword *p, /* a1 5 */ Uint32 addr, /* a2 6 */ Uint32 size) {}

// *****************************************************************************
// FILE -- /home/aex/gunsuv_usa/libgf/gfinstance.c
// *****************************************************************************

/* 00263f70 0000010c */ static void gfInstance_MakeRotMatrix(/* s0 16 */ float *rm[4], /* s1 17 */ float *m[4]) {
	/* 0x0(sp) */ sceVu0FVECTOR v;
}

/* 00264080 00000230 */ static void gfInstance_Eval2(/* s0 16 */ GF_INSTANCE *inst) {
	/* 0x0(sp) */ sceVu0FMATRIX anim_rot_mat;
	/* s1 17 */ GF_INSTANCE *pinst;
	/* f3 41 */ Float32 tmp;
	/* f0 38 */ Float32 range;
	/* v1 3 */ Uint32 lev;
}

/* 002642b0 00000054 */ void GFInstance_Eval(/* s0 16 */ GF_INSTANCE *inst) {}

/* 00264308 00000040 */ void GFInstance_Start() {
	/* a1 5 */ Uint32 i;
}

/* 00264348 0000003c */ void GFInstance_End() {
	/* a0 4 */ Uint32 i;
}

/* 00264388 000000fc */ qword* GFInstance_Draw(/* a0 4 */ qword *packet) {
	/* a2 6 */ qword *cur;
	/* s1 17 */ GF_INSTANCE *inst;
	/* s0 16 */ gf_inst_drawfunc *func;
	/* s2 18 */ Uint32 i;
}

/* 00264488 00000060 */ void GFInstance_InitHead(/* s0 16 */ GF_INSTANCE *inst) {}
/* 002644e8 00000014 */ void GFInstance_SetLocalMatrix(/* a0 4 */ GF_INSTANCE *inst, /* a1 5 */ float *m[4]) {}

/* 00264500 00000050 */ void GFInstance_AddChild(/* a0 4 */ GF_INSTANCE *parent, /* a1 5 */ GF_INSTANCE *child) {
	/* a0 4 */ GF_INSTANCE *inst;
}

/* 00264550 00000060 */ void GFInstance_Remove(/* a0 4 */ GF_INSTANCE *inst) {
	/* a1 5 */ GF_INSTANCE *inst2;
}

/* 002645b0 00000038 */ void GFInstance_ChangeParent(/* s1 17 */ GF_INSTANCE *inst, /* s0 16 */ GF_INSTANCE *parent) {}
/* 002645e8 00000044 */ void GFInstance_SetEvalFunc(/* a0 4 */ GF_INSTANCE *inst, /* a1 5 */ gf_inst_evalfunc *func) {}
/* 00264630 00000044 */ void GFInstance_SetDrawFunc(/* a0 4 */ GF_INSTANCE *inst, /* a1 5 */ gf_inst_drawfunc *func) {}
/* 00264678 00000038 */ void GFInstance_SetFunc(/* s0 16 */ GF_INSTANCE *inst, /* a1 5 */ gf_inst_evalfunc *eval, /* s1 17 */ gf_inst_drawfunc *draw) {}
/* 002646b0 00000028 */ void GFInstance_SetSortKeyMax(/* f12 50 */ Float32 max) {}
/* 002646d8 00000028 */ void GFInstance_SetSortKeyMin(/* f12 50 */ Float32 min) {}

// *****************************************************************************
// FILE -- /home/aex/gunsuv_usa/libgf/gfshape.c
// *****************************************************************************

/* 00264700 000001b8 */ void gfShape_AttachObject2(/* s2 18 */ GF_INST_OBJECT *obj, /* s3 19 */ GF_INST_SHAPE *gShape, /* a3 7 */ Sint32 gShapeNo) {
	/* s1 17 */ PodSHAPETBL *shape_ofs_top;
	/* s0 16 */ GF_INST_SHAPE *gCurShape;
}

/* 002648b8 000000bc */ void GFShape_AttachObject(/* s3 19 */ GF_INST_SHAPE *shape, /* s1 17 */ GF_INST_OBJECT *obj) {
	/* s2 18 */ Sint32 no;
}

/* 00264978 00000068 */ void GFShape_Eval(/* s0 16 */ GF_INST_SHAPE *inst) {}

/* 002649e0 0000019c */ qword* GFShape_Draw(/* a0 4 */ qword *packet, /* s1 17 */ GF_INST_SHAPE *inst) {
	/* s0 16 */ qword *cur;
	/* s2 18 */ PodMATERIAL *material;
}

/* 00264b80 000000b0 */ qword* GFShape_MakeMatrixTransferPacket(/* s1 17 */ float *mat_lw[4], /* s2 18 */ float *mat_light[4], /* s0 16 */ qword *packet) {
	/* v1 3 */ qword *cur;
	/* data 655c00 */ static sceVu0FVECTOR row;
}

/* 00264c30 0000017c */ qword* GFShape_MakeAllMatrixTransferPacket(/* s2 18 */ GF_INST_SHAPE *shape, /* a1 5 */ qword *packet) {
	/* s0 16 */ qword *cur;
	/* s3 19 */ Uint32 i;
	/* v1 3 */ int trns;
	/* a0 4 */ GF_INSTANCE *inst;
	/* data 655c10 */ static sceVu0FVECTOR row;
}

/* 00264db0 000000ac */ qword* gfTexturedraw(/* s2 18 */ qword *packet, /* s1 17 */ Sint32 texidx) {
	/* s0 16 */ qword *cur;
	/* s0 16 */ Sint32 valid;
}

// *****************************************************************************
// FILE -- /home/aex/gunsuv_usa/libgf/gfsprite.c
// *****************************************************************************

/* 00264e60 00000064 */ void GFSprite_MakeInstance(/* s0 16 */ GF_INST_SPRITE *inst) {}
/* 00264ec8 00000008 */ void GFSprite_Eval(/* a0 4 */ GF_INST_SPRITE *inst) {}

/* 00264ed0 00000258 */ qword* GFSprite_Draw(/* a0 4 */ qword *packet, /* s3 19 */ GF_INST_SPRITE *inst) {
	/* s2 18 */ qword *cur;
	/* 0x0(sp) */ qword format_flg;
	/* 0x10(sp) */ qword primitive;
	/* s4 20 */ Uint32 prim;
	/* s1 17 */ Uint32 flag;
}

// *****************************************************************************
// FILE -- /home/aex/gunsuv_usa/libgf/gfobject.c
// *****************************************************************************

/* 00265128 00000070 */ GF_INST_OBJECT* GFObject_Init(/* s0 16 */ GF_INST_OBJECT *obj) {}
/* 00265198 00000024 */ void GFObject_AttachModel(/* a0 4 */ GF_INST_OBJECT *obj, /* a1 5 */ GF_MICRO *micro, /* a2 6 */ GF_LIGHT *light, /* a3 7 */ GF_POINT_LIGHT *point_light, /* t0 8 */ GF_SPOT_LIGHT *spot_light, /* t1 9 */ GF_MODEL *model) {}

/* 002651c0 00000044 */ void GFObject_AttachMicro(/* a0 4 */ GF_INST_OBJECT *obj, /* a1 5 */ GF_MICRO **micro) {
	/* t0 8 */ Uint32 i;
	/* a2 6 */ GF_INST_SHAPE *pShape;
}

/* 00265208 00000150 */ void GFObject_Eval(/* s0 16 */ GF_INST_OBJECT *inst) {
	/* a2 6 */ Sint32 i;
	/* a1 5 */ GF_INST_SHAPE *shape;
}

// *****************************************************************************
// FILE -- /home/aex/gunsuv_usa/libgf/gfanim.c
// *****************************************************************************

/* 00265358 0000016c */ static void gfAnim_InterpolateQuaternion(/* s1 17 */ Float32 *outq, /* a1 5 */ Float32 *srcq, /* s0 16 */ Float32 *dstq, /* f23 61 */ Float32 ratio) {
	/* f20 58 */ Float32 dotp;
	/* f21 59 */ Float32 theta;
	/* f21 59 */ Float32 sin_0;
	/* f20 58 */ Float32 sin_2;
	/* 0x0(sp) */ PmtQUATERNION sq;
	/* 0x10(sp) */ PmtQUATERNION dq;
}

/* 002654c8 00000204 */ static void gfAnim_VectorToMatrix(/* s0 16 */ float *m[4], /* s2 18 */ float *rot, /* s1 17 */ Uint32 rot_flag) {}
/* 002656d0 00000018 */ void GFAnim_Attach(/* a0 4 */ GF_INST_OBJECT *obj, /* a1 5 */ PmtHEADER *anim) {}
/* 002656e8 00000018 */ void GFAnim_HotAttach(/* a0 4 */ GF_INST_OBJECT *obj, /* a1 5 */ PmtHEADER *anim) {}

/* 00265700 00000174 */ static void gfAnim_Attach(/* t0 8 */ GF_INST_OBJECT *obj, /* t2 10 */ PmtHEADER *anim, /* a2 6 */ Uint32 flag) {
	/* t1 9 */ Sint32 i;
	/* t3 11 */ Sint32 num;
	/* t4 12 */ PmtSHAPEOFS *shape_ofs;
	/* a3 7 */ GF_INST_SHAPE *shape;
}

/* 00265878 0000005c */ void GFAnim_ScaleMatrix(/* s1 17 */ float *out_mat[4], /* s2 18 */ float *in_mat[4], /* s0 16 */ float *scale) {}

/* 002658d8 000002f4 */ static void gfAnim_CalcMyMatrix(/* s0 16 */ PodSHAPETBL *shape_tbl, /* s4 20 */ float *anim_mat[4], /* s1 17 */ GF_INST_SHAPE *inst) {
	/* f20 58 */ Float32 int_pos;
	/* 0x0(sp) */ PmtQUATERNION start;
	/* 0x10(sp) */ PmtQUATERNION end;
	/* 0x20(sp) */ PmtQUATERNION work;
	/* 0x30(sp) */ sceVu0FMATRIX mat;
	/* 0x70(sp) */ sceVu0FVECTOR trns;
	/* s3 19 */ Uint8 flag;
}

/* 00265bd0 000003f0 */ void gfAnim_calcmatrix(/* s1 17 */ GF_INST_SHAPE *shape) {
	/* a1 5 */ PmtSHAPEKEYHEAD *cur_key;
	/* a2 6 */ PmtSHAPEKEYHEAD *next_key;
	/* 0x0(sp) */ _GF_ANIMCOMPDATA normalcalc;
	/* 0x30(sp) */ _GF_ANIMCOMPDATA compnextcalc;
	/* 0x60(sp) */ sceVu0FMATRIX calcoutMatrix;
	/* f20 58 */ Float32 int_pos;
	/* t0 8 */ Uint32 anim_info;
	/* s2 18 */ Uint32 anim_flag;
}

/* 00265fc0 0000058c */ void GFAnim_Eval(/* s0 16 */ GF_INST_SHAPE *shape, /* f20 58 */ Float32 spd) {
	/* t4 12 */ PmtSHAPEKEYHEAD *cur_key;
	/* v1 3 */ PmtSHAPEKEYHEAD *cur_keyComp;
	/* t0 8 */ Uint32 anim_flag;
	/* t6 14 */ Uint32 anim_info;
	/* t3 11 */ Uint32 anim_infoComp;
}

/* 00266550 00000008 */ void GFAnim_SetSpeed(/* a0 4 */ GF_INST_OBJECT *obj, /* f12 50 */ Float32 speed) {}

/* 00266558 0000005c */ void GFAnim_Forward(/* a0 4 */ GF_INST_OBJECT *obj, /* a1 5 */ Sint32 frd) {
	/* a1 5 */ Sint32 i;
	/* f1 39 */ Float32 total;
}

/* 002665b8 00000044 */ Uint32 GFAnim_ShapeFlagCheck(/* a0 4 */ GF_INST_OBJECT *obj, /* a1 5 */ Uint32 flag2) {
	/* a1 5 */ Uint32 flag;
	/* a0 4 */ Sint32 i;
	/* v1 3 */ GF_INST_SHAPE *shape;
}

/* 00266600 00000038 */ Uint32 GFAnim_ShapeFlagSet(/* a0 4 */ GF_INST_OBJECT *obj, /* a1 5 */ Uint32 setFlag) {
	/* a2 6 */ Sint32 i;
	/* v1 3 */ GF_INST_SHAPE *shape;
}

/* 00266638 00000040 */ Uint32 GFAnim_ShapeFlagClear(/* a0 4 */ GF_INST_OBJECT *obj, /* a1 5 */ Uint32 setFlag) {
	/* a2 6 */ Sint32 i;
	/* v1 3 */ GF_INST_SHAPE *shape;
}

/* 00266678 00000040 */ void GFAnim_SetNextAnimation(/* v1 3 */ GF_INST_OBJECT *object, /* a1 5 */ PmtHEADER *nextanim, /* a2 6 */ Uint32 flag, /* a3 7 */ Sint32 time) {}
/* 002666b8 00000008 */ void GFAnim_SetCallbackFunction(/* a0 4 */ GF_INST_OBJECT *object, /* a1 5 */ GF_CallBackFunction function) {}
/* 002666c0 000000f8 */ static void gfAnim_CalcPosition(/* s3 19 */ _GF_ANIMCOMPDATA *posDst, /* s1 17 */ PmtSHAPEKEYHEAD *cur_key, /* s0 16 */ PmtSHAPEKEYHEAD *next_key, /* s2 18 */ Uint32 flag, /* f20 58 */ Float32 int_pos) {}

/* 002667b8 0000025c */ static void gfAnim_MatToQuat(/* t7 15 */ Float32 *quat, /* t1 9 */ float *m[4]) {
	/* f1 39 */ Float32 tr;
	/* f5 43 */ Float32 s;
	/* 0x0(sp) */ Float32 q[4];
	/* t6 14 */ Sint32 i;
	/* t3 11 */ Sint32 j;
	/* t2 10 */ Sint32 k;
	/* data 655ca0 */ static Sint32 nxt[3];
}

/* 00266a18 000000ac */ static void gfAnim_QuaternionToMatrix(/* a0 4 */ float *m[4], /* a1 5 */ Float32 *quat) {
	/* f8 46 */ Float32 wx;
	/* f5 43 */ Float32 wy;
	/* f10 48 */ Float32 wz;
	/* f4 42 */ Float32 xx;
	/* f11 49 */ Float32 yy;
	/* f2 40 */ Float32 yz;
	/* f3 41 */ Float32 xy;
	/* f9 47 */ Float32 xz;
	/* f1 39 */ Float32 zz;
	/* f8 46 */ Float32 x2;
	/* f6 44 */ Float32 y2;
	/* f0 38 */ Float32 z2;
}

/* 00266ac8 00000044 */ static void gfAnim_NormalizeQuaternion(/* a0 4 */ Float32 *v0, /* a1 5 */ Float32 *v1) {}
/* 00266b10 00000028 */ static void gfAnim_InterpolateVector(/* a0 4 */ float *v0, /* a1 5 */ float *v1, /* a2 6 */ float *v2, /* f12 50 */ Float32 t, /* a3 7 */ Sint32 is_rot) {}
/* 00266b38 00000010 */ static void gfAnim_Vu0CopyQuat(/* a0 4 */ Float32 *v0, /* a1 5 */ Float32 *v1) {}
/* 00266b48 00000028 */ static Float32 gfAnim_Vu0InnerProduct(/* a0 4 */ Float32 *v0, /* a1 5 */ Float32 *v1) {}
/* 00266b70 00000030 */ static void gfAnim_InterpolateQuat(/* a0 4 */ Float32 *v0, /* a1 5 */ Float32 *v1, /* a2 6 */ Float32 *v2, /* f12 50 */ Float32 sin_0, /* f13 51 */ Float32 sin_1) {}

/* 00266ba0 00000064 */ static Float32 gfAnim_Sinf(/* f0 38 */ Float32 ratio) {
	/* f4 42 */ Float32 x2;
	/* 0x0(sp) */ sceVu0FVECTOR x329;
	/* data 655cb0 */ static sceVu0FVECTOR s225;
}

/* 00266c08 000000f8 */ static Float32 gfAnim_Arccosf(/* f12 50 */ Float32 ratio) {
	/* f12 50 */ Float32 x;
	/* f2 40 */ Float32 x2;
	/* 0x0(sp) */ sceVu0FVECTOR x127;
	/* 0x10(sp) */ sceVu0FVECTOR x9215;
	/* data 655cc0 */ static sceVu0FVECTOR t124;
	/* data 655cd0 */ static sceVu0FVECTOR t528;
}

// *****************************************************************************
// FILE -- /home/aex/gunsuv_usa/libgf/gftex.c
// *****************************************************************************

/* 00266d00 0000006c */ void GFTex_InitDatabase(/* a0 4 */ Uint32 *buf, /* a1 5 */ Uint32 size) {}
/* 00266d70 00000028 */ void GFTex_ResetDatabase() {}
/* 00266d98 00000020 */ void GFTex_EntryDatabase(/* a0 4 */ Uint32 *buf) {}

/* 00266db8 00000044 */ static void gfTex_ClearDb() {
	/* a0 4 */ int i;
}

/* 00266e00 000000cc */ Sint32 GFTex_Add(/* s1 17 */ Uint32 *pig) {
	/* s0 16 */ GF_TEXDB *db;
	/* s2 18 */ Sint32 index;
}

/* 00266ed0 0000024c */ static void gfTex_SetDatabaseForResident(/* s1 17 */ GF_TEXDB *db_out, /* a1 5 */ Uint32 *pig) {
	/* s0 16 */ GF_PIG_HEAD *header;
	/* 0x0(sp) */ Uint16 size;
	/* 0x2(sp) */ Uint16 bw;
	/* v0 2 */ Uint16 start;
	/* s2 18 */ int i;
}

/* 00267120 00000254 */ static void gfTex_SetDatabaseForCache(/* s1 17 */ GF_TEXDB *db_out, /* s0 16 */ Uint32 *pig, /* s6 22 */ Uint16 pos) {
	/* s2 18 */ Uint16 cur_pos;
	/* 0x0(sp) */ Uint16 size;
	/* 0x2(sp) */ Uint16 bw;
	/* s3 19 */ int i;
}

/* 00267378 000000f0 */ static GF_TEXDB* gfTex_SetDefaultValue(/* a2 6 */ GF_TEXDB *db, /* a1 5 */ Uint32 *pig) {
	/* a3 7 */ GF_PIG_HEAD *header;
}

/* 00267468 00000124 */ static void gfTex_CalcAllocationSize(/* a0 4 */ Uint16 mode, /* a1 5 */ Sint16 w, /* a2 6 */ Sint16 h, /* a3 7 */ Uint16 *size_out, /* t0 8 */ Uint16 *w_out) {
	/* t1 9 */ Uint32 page_w;
	/* t4 12 */ Uint32 page_h;
	/* t2 10 */ Uint32 block_w;
	/* a0 4 */ Uint32 block_h;
	/* a1 5 */ Uint32 aw;
	/* a2 6 */ Uint32 ah;
	/* t3 11 */ Uint32 min_tbw;
}

/* 00267590 00000064 */ GF_TEXDB* GFTex_GetDb(/* a0 4 */ Sint32 index) {}

/* 002675f8 00000098 */ Sint32 GFTex_Validate(/* a0 4 */ Sint32 index) {
	/* s0 16 */ GF_TEXDB *db;
	/* s1 17 */ Sint32 ret;
	/* v1 3 */ GF_CACHE_CELL *cp;
}

/* 00267690 00000030 */ void GFTex_SetScore(/* a0 4 */ Sint32 index, /* a1 5 */ Sint32 score) {}
/* 002676c0 00000038 */ void GFTex_AddScore(/* a0 4 */ Sint32 index) {}
/* 002676f8 00000038 */ void GFTex_ClearScore(/* a0 4 */ Sint32 index) {}

/* 00267730 00000074 */ void GFTex_ClearScoreAll() {
	/* s0 16 */ int i;
}

/* 002677a8 00000048 */ void GFTex_SubScore(/* a0 4 */ Sint32 index) {}

/* 002677f0 00000074 */ void GFTex_SubScoreAll() {
	/* s0 16 */ int i;
}

/* 00267868 00000014 */ void GFTex_FlushVramCache() {}
/* 00267880 00000024 */ void GFTex_FlushVramCache_Preset() {}
/* 002678a8 000001fc */ static void gfTex_SetMipmapRegs(/* t2 10 */ sceGsMiptbp1 *miptbp1, /* t1 9 */ sceGsMiptbp2 *miptbp2, /* a2 6 */ Uint16 n, /* a2 6 */ Uint16 pos, /* a1 5 */ Uint16 bw) {}

/* 00267aa8 00000094 */ Sint32 GFTex_Remove(/* a0 4 */ Sint32 index) {
	/* s0 16 */ GF_TEXDB *db;
	/* s1 17 */ Sint32 same;
}

/* 00267b40 00000278 */ static void gfTex_FreeVram(/* s1 17 */ sceGsTex0 *tex0, /* s6 22 */ sceGsTex1 *tex1, /* s5 21 */ sceGsMiptbp1 *miptbp1, /* s4 20 */ sceGsMiptbp2 *miptbp2, /* t0 8 */ Sint32 no_tex) {
	/* s2 18 */ Uint16 pos;
	/* 0x0(sp) */ Uint16 size;
	/* s3 19 */ int i;
}

/* 00267db8 0000006c */ static void gfTex_Defrag() {
	/* a1 5 */ int i;
}

/* 00267e28 00000070 */ static Sint32 gfTex_SearchDb(/* a3 7 */ Uint64 *guid) {
	/* a2 6 */ int i;
}

/* 00267e98 000002d4 */ void GFTex_LoadImage(/* a0 4 */ Sint32 index) {
	/* s2 18 */ GF_TEXDB *db;
	/* s4 20 */ GF_PIG_HEAD *header;
	/* s0 16 */ Sint32 rrw;
	/* s1 17 */ Sint32 rrh;
	/* v1 3 */ Sint32 tmp;
	/* 0x0(sp) */ Uint16 tbp;
	/* 0x2(sp) */ Uint16 tbw;
	/* s3 19 */ int i;
}

/* 00268170 00000358 */ static void gfTex_LoadImage(/* s3 19 */ Uint128 *addr, /* s6 22 */ Sint16 dbp, /* s5 21 */ Sint16 dbw, /* s4 20 */ Sint16 dpsm, /* s0 16 */ Sint16 w, /* t3 11 */ Sint16 h) {
	/* 0x0(sp) */ sceGsLoadImage load_img;
	/* a0 4 */ Sint32 size;
	/* f20 58 */ Float32 bitsize;
	/* s1 17 */ Uint32 rest;
	/* s2 18 */ Uint32 top;
}

/* 002684c8 0000017c */ qword* GFTex_MakeTexturePacket(/* s1 17 */ qword *pkt_buf, /* s2 18 */ GF_TEXDB *tex_db, /* s0 16 */ Sint32 trans) {
	/* s0 16 */ int i;
}

/* 00268648 000000e8 */ qword* GFTex_MakeTexturePresetPacket(/* s2 18 */ qword *pkt_buf, /* a1 5 */ Sint32 index) {
	/* bss 870780 */ static GF_TEXDB db;
}

/* 00268730 00000140 */ qword* GFTex_MakePixelTransPacket(/* s0 16 */ qword *pkt_buf, /* s7 23 */ Uint32 *addr, /* s6 22 */ Sint32 size, /* s1 17 */ Sint32 dbp, /* s2 18 */ Sint32 dbw, /* s3 19 */ Sint32 psm, /* s5 21 */ Sint32 rrw, /* s4 20 */ Sint32 rrh) {}

/* 00268870 000002b0 */ qword* GFTex_MakePixelTransPacket_TexDB(/* s4 20 */ qword *pkt_buf, /* s0 16 */ GF_TEXDB *tex_db, /* s1 17 */ Sint32 no, /* a3 7 */ Sint32 clut) {
	/* s2 18 */ Sint32 rrw;
	/* s3 19 */ Sint32 rrh;
	/* v1 3 */ Sint32 tmp;
	/* 0x0(sp) */ Uint16 tbp;
	/* 0x2(sp) */ Uint16 tbw;
}

/* 00268b20 000000a0 */ static Sint32 gfTex_IsFormat32(/* a0 4 */ Sint32 no, /* a1 5 */ Uint16 flag) {}
/* 00268bc0 00000108 */ static void gfTex_GetTbpTbw(/* a0 4 */ GF_TEXDB *tex_db, /* a1 5 */ Sint32 no, /* a2 6 */ Uint16 *tbp, /* a3 7 */ Uint16 *tbw) {}
/* 00268cc8 00000008 */ GF_TEXDB_HEAD* GFTex_GetDatabase() {}

/* 00268cd0 00000048 */ static Uint32 gfTex_GetTwTh(/* a0 4 */ Sint32 twth) {
	/* a1 5 */ Sint32 ret;
	/* a0 4 */ Sint32 tmp;
}

/* 00268d18 000002cc */ static void gfTex_InitSysTex() {
	/* s3 19 */ int i;
	/* fp 30 */ GF_VRAM_SCREEN_INFO *scrInfo;
}

/* 00268fe8 00000008 */ void GFTex_SetFrameCnt(/* a0 4 */ Uint32 cnt) {}

// *****************************************************************************
// FILE -- /home/aex/gunsuv_usa/libgf/gfscene.c
// *****************************************************************************

/* 00268ff0 00000060 */ GF_INST_SCENE* GFScene_MakeInstance(/* s0 16 */ GF_INST_SCENE *scene, /* s1 17 */ GF_INSTANCE *parent) {
	/* 0x0(sp) */ sceVu0FMATRIX unit;
}

/* 00269050 000000fc */ void GFScene_SetViewScreen(/* s2 18 */ float *view[4], /* s0 16 */ GF_SCREEN *screen) {
	/* f21 59 */ Float32 az;
	/* f20 58 */ Float32 cz;
	/* 0x0(sp) */ sceVu0FMATRIX m;
	/* 0x40(sp) */ sceVu0FMATRIX mt;
}

/* 00269150 00000104 */ void GFScene_SetViewClip(/* s1 17 */ float *view[4], /* s0 16 */ GF_SCREEN *screen) {
	/* f20 58 */ Float32 gsx;
	/* f21 59 */ Float32 gsy;
}

/* 00269258 00000104 */ void GFScene_SetClipScreen(/* s1 17 */ float *clip[4], /* s0 16 */ GF_SCREEN *screen) {
	/* f20 58 */ Float32 gsx;
	/* f21 59 */ Float32 gsy;
}

/* 00269360 00000048 */ void GFScene_SetScreen(/* s0 16 */ GF_INST_SCENE *scene, /* s1 17 */ GF_SCREEN *screen) {}
/* 002693a8 00000018 */ qword* GFScene_MakePacket(/* a0 4 */ GF_INST_SCENE *scene, /* a1 5 */ qword *packbuf) {}
/* 002693c0 00000018 */ void GFScene_SetWorldView(/* a0 4 */ GF_INST_SCENE *scene, /* a1 5 */ float *m[4]) {}
/* 002693d8 00000018 */ void GFScene_SetCameraPos(/* a0 4 */ GF_INST_SCENE *scene, /* a1 5 */ float *pos) {}
/* 002693f0 00000048 */ void GFScene_Eval(/* s0 16 */ GF_INST_SCENE *scene) {}

/* 00269438 000000d0 */ qword* GFScene_Draw(/* a0 4 */ qword *packet, /* s1 17 */ GF_INST_SCENE *scene) {
	/* s0 16 */ qword *cur;
	/* v0 2 */ qword *src;
	/* v1 3 */ Sint32 i;
}

// *****************************************************************************
// FILE -- /home/aex/gunsuv_usa/libgf/gfmodel.c
// *****************************************************************************

/* 00269508 00000030 */ Uint32 GFModel_GetVu1TransSize(/* a0 4 */ Uint32 work_size) {
	/* v0 2 */ Uint32 single;
}

/* 00269538 00000154 */ qword* GFModel_MakePreset(/* s4 20 */ GF_MODEL *model, /* s0 16 */ qword *wp, /* s2 18 */ Uint32 *rp, /* s5 21 */ Sint32 worksize) {
	/* a0 4 */ Sint32 packsize;
	/* s0 16 */ qword *cur_wp;
	/* a0 4 */ PodSHAPETBL *shapetbl;
	/* s3 19 */ int i;
}

/* 00269690 0000006c */ static qword* gfModel_MakeModelInitPacket(/* s1 17 */ Sint32 pack_size, /* s0 16 */ qword *packet) {
	/* v0 2 */ qword *cur;
}

/* 00269700 00000084 */ qword* GFModel_MakeShapePacket(/* s1 17 */ PodSHAPE *pod_shape, /* a1 5 */ qword *pkt_buf, /* s3 19 */ Uint32 trans_size, /* s2 18 */ gf_modelpkt_make make_flag) {
	/* 0x0(sp) */ qword *wp;
	/* 0x4(sp) */ Uint32 *rp;
	/* s0 16 */ int i;
}

/* 00269788 0000013c */ static void gfModel_MakeMaterialPacket(/* s3 19 */ qword **wpp, /* s4 20 */ Uint32 **rpp, /* s2 18 */ Uint32 trans_size, /* s1 17 */ gf_modelpkt_make make_flag) {
	/* s0 16 */ PodMATERIAL *material;
	/* 0x0(sp) */ qword *wp;
	/* 0x4(sp) */ Uint32 *rp;
	/* s1 17 */ int i;
}

/* 002698c8 0000019c */ static void gfModel_MakeGeometryPacket(/* s4 20 */ qword **wpp, /* s5 21 */ Uint32 **rpp, /* a2 6 */ Uint32 trans_size, /* s3 19 */ Uint32 mat_flag) {
	/* s2 18 */ PodGEOMETRY *geometry;
	/* s1 17 */ Uint32 pack_cnt;
	/* s0 16 */ Uint32 remain;
	/* 0x0(sp) */ qword *wp;
	/* 0x4(sp) */ qword *rp;
	/* v0 2 */ Sint32 data_num;
}

/* 00269a68 00000170 */ static void gfModel_MakeVertexPacket(/* s7 23 */ qword **wpp, /* s6 22 */ qword **rpp, /* s4 20 */ Uint32 pack_cnt, /* s5 21 */ Uint32 mat_flag, /* s0 16 */ Uint32 gsprim, /* s1 17 */ Sint32 vert_num) {
	/* s2 18 */ qword *wp;
	/* s3 19 */ Float32 *vert_p;
}

/* 00269bd8 00000130 */ void GFModel_GetGiftag(/* t1 9 */ sceGifTag *giftag, /* a1 5 */ Uint32 gsprim, /* a2 6 */ Uint32 vert_num) {}

// *****************************************************************************
// FILE -- /home/aex/gunsuv_usa/libgf/gfpack.c
// *****************************************************************************

/* 00269d08 00000010 */ void GFPack_InitBuf(/* a0 4 */ GF_PACKET *pm, /* a1 5 */ qword *p, /* a2 6 */ Sint32 size) {}
/* 00269d18 00000038 */ void GFPack_ResetBuf(/* v0 2 */ GF_PACKET *pm) {}

/* 00269d50 00000050 */ qword* GFPacket_Add(/* s0 16 */ qword *cur, /* a1 5 */ qword *packet) {
	/* s0 16 */ qword *p;
}

/* 00269da0 0000007c */ void GFPacket_KickDma(/* s0 16 */ qword *p) {}

// *****************************************************************************
// FILE -- /home/aex/gunsuv_usa/libgf/gfmicro.c
// *****************************************************************************

/* 00269e20 00000010 */ GF_MICRO* GFMicro_Init(/* a0 4 */ GF_MICRO *micro) {}
/* 00269e30 00000070 */ qword* GFMicro_MakePacket(/* v0 2 */ GF_MICRO *micro, /* s0 16 */ qword *packbuf, /* v1 3 */ Uint32 *dsmcode, /* s1 17 */ Sint32 worksize) {}

/* 00269ea0 000000a8 */ qword* GFMicro_Draw(/* s2 18 */ qword *packet, /* s1 17 */ GF_MICRO *micro) {
	/* v0 2 */ qword *cur;
	/* s0 16 */ Sint32 packsize;
}

// *****************************************************************************
// FILE -- /home/aex/gunsuv_usa/libgf/gflight.c
// *****************************************************************************

/* 00269f48 00000060 */ GF_LIGHT* GFLight_Init(/* s0 16 */ GF_LIGHT *light) {
	/* 0x0(sp) */ sceVu0FMATRIX unit;
	/* data 655ce0 */ static sceVu0FVECTOR zero;
}

/* 00269fa8 00000030 */ void GFLight_SetVector(/* s0 16 */ GF_LIGHT *light, /* a1 5 */ float *v0, /* a2 6 */ float *v1, /* a3 7 */ float *v2) {}
/* 00269fd8 00000018 */ void GFLight_SetColor(/* a0 4 */ GF_LIGHT *light, /* a1 5 */ float *c0, /* a2 6 */ float *c1, /* a3 7 */ float *c2, /* t0 8 */ float *amb) {}
/* 00269ff0 0000000c */ qword* GFLight_MakePacket(/* a0 4 */ GF_LIGHT *light, /* v0 2 */ qword *packbuf) {}

/* 0026a000 00000074 */ qword* GFLight_Draw(/* a0 4 */ qword *packet, /* s1 17 */ GF_LIGHT *light) {
	/* s0 16 */ qword *cur;
	/* v0 2 */ qword *src;
	/* v1 3 */ Sint32 i;
}

/* 0026a078 00000008 */ void GFLight_SetShape(/* a0 4 */ GF_INST_SHAPE *shape, /* a1 5 */ GF_LIGHT *light) {}

// *****************************************************************************
// FILE -- /home/aex/gunsuv_usa/libgf/gfpointlight.c
// *****************************************************************************

/* 0026a080 00000008 */ GF_POINT_LIGHT* GFPointLight_Init(/* a0 4 */ GF_POINT_LIGHT *light) {}
/* 0026a088 00000008 */ void GFPointLight_SetPos(/* a0 4 */ GF_POINT_LIGHT *light, /* a1 5 */ Uint32 no, /* a2 6 */ float *v0) {}
/* 0026a090 00000008 */ void GFPointLight_SetColor(/* a0 4 */ GF_POINT_LIGHT *light, /* a1 5 */ Uint32 no, /* a2 6 */ float *c0) {}
/* 0026a098 00000008 */ qword* GFPointLight_MakePacket(/* a0 4 */ GF_POINT_LIGHT *light, /* a1 5 */ qword *packbuf) {}
/* 0026a0a0 00000008 */ qword* GFPointLight_Draw(/* a0 4 */ qword *packet, /* a1 5 */ GF_POINT_LIGHT *light) {}
/* 0026a0a8 00000008 */ void GFPointLight_SetShape(/* a0 4 */ GF_INST_SHAPE *shape, /* a1 5 */ GF_POINT_LIGHT *light) {}

// *****************************************************************************
// FILE -- /home/aex/gunsuv_usa/libgf/gfspotlight.c
// *****************************************************************************

/* 0026a0b0 00000008 */ GF_SPOT_LIGHT* GFSpotLight_Init(/* a0 4 */ GF_SPOT_LIGHT *light) {}
/* 0026a0b8 00000008 */ void GFSpotLight_SetPos(/* a0 4 */ GF_SPOT_LIGHT *light, /* a1 5 */ Uint32 no, /* a2 6 */ float *v0) {}
/* 0026a0c0 00000008 */ void GFSpotLight_SetColor(/* a0 4 */ GF_SPOT_LIGHT *light, /* a1 5 */ Uint32 no, /* a2 6 */ float *c0) {}
/* 0026a0c8 00000008 */ void GFSpotLight_SetVector(/* a0 4 */ GF_SPOT_LIGHT *light, /* a1 5 */ Uint32 no, /* a2 6 */ float *v0) {}
/* 0026a0d0 00000008 */ qword* GFSpotLight_MakePacket(/* a0 4 */ GF_SPOT_LIGHT *light, /* a1 5 */ qword *packbuf) {}
/* 0026a0d8 00000008 */ qword* GFSpotLight_Draw(/* a0 4 */ qword *packet, /* a1 5 */ GF_SPOT_LIGHT *light) {}
/* 0026a0e0 00000008 */ void GFSpotLight_SetShape(/* a0 4 */ GF_INST_SHAPE *shape, /* a1 5 */ GF_SPOT_LIGHT *light) {}

// *****************************************************************************
// FILE -- /home/aex/gunsuv_usa/libgf/gfshare.c
// *****************************************************************************

/* 0026a0e8 00000020 */ static GF_INST_SHAPE* gf_GetShape(/* a0 4 */ GF_INST_OBJECT *pObj, /* a1 5 */ Uint32 n) {}

/* 0026a108 0000002c */ static sceVu0FMATRIX* gf_GetShapeWorldMatrix(/* a0 4 */ GF_INST_OBJECT *pObj, /* a1 5 */ Uint32 n) {
	/* v1 3 */ GF_INST_SHAPE *pShape;
}

/* 0026a138 0000002c */ static sceVu0FMATRIX* gf_GetShapeLightMatrix(/* a0 4 */ GF_INST_OBJECT *pObj, /* a1 5 */ Uint32 n) {
	/* v1 3 */ GF_INST_SHAPE *pShape;
}

/* 0026a168 00000038 */ qword* gf_CopyQWs(/* a0 4 */ qword *pw, /* a1 5 */ qword *pr, /* a3 7 */ Uint32 size) {
	/* a0 4 */ Uint128 *w;
	/* a1 5 */ Uint128 *r;
	/* v1 3 */ Uint32 i;
}

/* 0026a1a0 00000128 */ static qword* gf_MakeShareShape(/* s2 18 */ qword *packet, /* s1 17 */ GF_INST_SHAPE *inst) {
	/* s3 19 */ qword *cur;
	/* s0 16 */ Uint32 packsize;
}

/* 0026a2c8 0000003c */ static GF_INST_OBJECT* gf_GetParentObj(/* a0 4 */ GF_INST_SHAPE *inst) {
	/* a0 4 */ GF_INST_HEAD *pInst;
}

/* 0026a308 0000005c */ void GFShare_Eval(/* s0 16 */ GF_INST_SHAPE *inst) {}

/* 0026a368 00000088 */ qword* GFShare_Draw(/* a0 4 */ qword *packet, /* s1 17 */ GF_INST_SHAPE *inst) {
	/* s0 16 */ qword *cur;
}

/* 0026a3f0 00000010 */ void GFShare_SetBuf(/* a0 4 */ Uint32 *pBuf, /* a1 5 */ Uint32 size) {}

/* 0026a400 00000088 */ static PodSHAPE* gf_GetShareBlock(/* s0 16 */ GF_INST_SHAPE *inst) {
	/* a3 7 */ PodHEADER *pPod;
	/* a1 5 */ PodEXTENDTBL *pExtTbl;
	/* a2 6 */ Uint32 extBlkNum;
	/* t0 8 */ Uint32 i;
}

/* 0026a488 00000290 */ static qword* gf_CopyShareBlock(/* v0 2 */ qword *pWrite, /* s0 16 */ GF_INST_SHAPE *inst) {
	/* s3 19 */ qword *pVtx;
	/* 0x10(sp) */ qword *pNml;
	/* s4 20 */ qword *pCol;
	/* s5 21 */ qword *pStq;
	/* s6 22 */ qword *pwVtx;
	/* 0x14(sp) */ qword *pwNml;
	/* s7 23 */ qword *pwCol;
	/* fp 30 */ qword *pwStq;
	/* 0x0(sp) */ sceVu0FVECTOR tmpVtx;
	/* s2 18 */ qword *pr;
	/* s1 17 */ qword *pw;
	/* 0x18(sp) */ Uint32 nMat;
	/* 0x1c(sp) */ Uint32 nGeo;
	/* 0x20(sp) */ Uint32 nVtx;
	/* s0 16 */ Uint32 parShapeNo;
	/* s0 16 */ Uint32 matFlag;
	/* 0x24(sp) */ Uint32 i;
	/* 0x28(sp) */ Uint32 j;
	/* 0x2c(sp) */ Uint32 k;
	/* 0x30(sp) */ GF_INST_OBJECT *pObjOfShape;
}

/* 0026a718 00000010 */ Uint32 GFShare_GetUsedBufSize() {}
/* 0026a728 00000008 */ void GFShare_SetVu1WorkSize(/* a0 4 */ Uint32 size) {}
/* 0026a730 00000008 */ Uint32 GFShare_GetVu1WorkSize() {}

// *****************************************************************************
// FILE -- /home/aex/gunsuv_usa/libgf/gffog.c
// *****************************************************************************

/* 0026a738 00000050 */ GF_FOG* GFFog_Init(/* a0 4 */ GF_FOG *fog) {}
/* 0026a788 00000080 */ qword* GFFog_MakePacket(/* v0 2 */ GF_FOG *fog, /* s0 16 */ qword *packbuf) {}

/* 0026a808 00000074 */ qword* GFFog_Draw(/* s1 17 */ GF_FOG *fog, /* a1 5 */ qword *packet) {
	/* s0 16 */ qword *cur;
}

/* 0026a880 0000000c */ Float32 GFFog_SetNear(/* a0 4 */ GF_FOG *fog, /* f0 38 */ Float32 near) {}
/* 0026a890 0000000c */ Float32 GFFog_SetFar(/* a0 4 */ GF_FOG *fog, /* f0 38 */ Float32 far) {}
/* 0026a8a0 0000000c */ Float32 GFFog_SetMin(/* a0 4 */ GF_FOG *fog, /* f0 38 */ Float32 min) {}
/* 0026a8b0 0000000c */ Float32 GFFog_SetMax(/* a0 4 */ GF_FOG *fog, /* f0 38 */ Float32 max) {}
/* 0026a8c0 00000068 */ void GFFog_SetParam(/* s0 16 */ GF_FOG *fog, /* f12 50 */ Float32 min, /* f20 58 */ Float32 max, /* f21 59 */ Float32 near, /* f22 60 */ Float32 far) {}

// *****************************************************************************
// FILE -- /home/aex/gunsuv_usa/libgf/gfspecular.c
// *****************************************************************************

/* 0026a928 00000058 */ GF_SPECULAR* GFSpecular_Init(/* s1 17 */ GF_SPECULAR *specular) {
	/* data 655cf0 */ static sceVu0FVECTOR zero;
}

/* 0026a980 00000044 */ qword* GFSpecular_MakePacket(/* a0 4 */ GF_SPECULAR *specular, /* s0 16 */ qword *packbuf) {}
/* 0026a9c8 00000028 */ qword* GFSpecular_Draw(/* s0 16 */ GF_SPECULAR *specular, /* a1 5 */ qword *packet) {}
/* 0026a9f0 00000014 */ void GFSpecular_SetVector(/* a0 4 */ GF_SPECULAR *specular, /* a1 5 */ float *vec) {}
/* 0026aa08 00000018 */ void GFSpecular_SetColor(/* a0 4 */ GF_SPECULAR *specular, /* a1 5 */ float *color) {}
/* 0026aa20 00000010 */ void GFSpecular_SetParam(/* a0 4 */ GF_SPECULAR *specular, /* f12 50 */ Float32 spec, /* f13 51 */ Float32 diff, /* f14 52 */ Float32 bright) {}

// *****************************************************************************
// FILE -- /home/aex/gunsuv_usa/libgf/pod.c
// *****************************************************************************

/* 0026aa30 0000002c */ Sint32 GFPod_IsPodData(/* a0 4 */ Uint32 *pod) {
	/* a1 5 */ PodHEADER *head;
}

/* 0026aa60 00000180 */ Uint32* GFPod_MapTextureIndex(/* s3 19 */ Uint32 *pod, /* s5 21 */ Sint32 index_ofs) {
	/* v1 3 */ PodSHAPETBL *shape_tbl;
	/* s0 16 */ PodSHAPE *shape;
	/* s6 22 */ PodEXTENDTBL *extend_tbl;
	/* a0 4 */ PodMATERIAL *material;
	/* s4 20 */ Sint32 i;
	/* s1 17 */ Sint32 j;
}

/* 0026abe0 00000064 */ PodMATERIAL* GFPod_GetNextMaterialBlock(/* a0 4 */ PodMATERIAL *material) {
	/* a2 6 */ PodGEOMETRY *geom;
	/* a3 7 */ Sint32 vinfo;
	/* a0 4 */ Sint32 i;
}

/* 0026ac48 000001b0 */ Uint32* GFPod_MapTextureIndex2(/* s3 19 */ Uint32 *pod, /* s6 22 */ Sint32 local_index, /* s5 21 */ Sint32 tex_index) {
	/* v1 3 */ PodSHAPETBL *shape_tbl;
	/* s0 16 */ PodSHAPE *shape;
	/* s7 23 */ PodEXTENDTBL *extend_tbl;
	/* a0 4 */ PodMATERIAL *material;
	/* s4 20 */ Sint32 i;
	/* s1 17 */ Sint32 j;
}

/* 0026adf8 00000180 */ Uint32* GFPod_DeMapTextureIndex(/* s3 19 */ Uint32 *pod, /* s5 21 */ Sint32 index_ofs) {
	/* v1 3 */ PodSHAPETBL *shape_tbl;
	/* s0 16 */ PodSHAPE *shape;
	/* s6 22 */ PodEXTENDTBL *extend_tbl;
	/* a0 4 */ PodMATERIAL *material;
	/* s4 20 */ Sint32 i;
	/* s1 17 */ Sint32 j;
}

// *****************************************************************************
// FILE -- /home/aex/gunsuv_usa/libgf/pmt.c
// *****************************************************************************

/* 0026af78 0000002c */ Sint32 GFPmt_IsPmtData(/* a0 4 */ Uint32 *pmt) {
	/* a1 5 */ PmtHEADER *head;
}

// *****************************************************************************
// FILE -- /home/aex/gunsuv_usa/libgf/gfvalloc.c
// *****************************************************************************

/* 0026afa8 0000004c */ void GFVram_SetInfoAddr(/* a0 4 */ Uint32 *buf, /* a1 5 */ Uint32 size) {}

/* 0026aff8 00000044 */ static void gfVram_ClearAllCell() {
	/* a0 4 */ int i;
}

/* 0026b040 00000050 */ static GF_VRAM_CELL* gfVram_GetUnusedCell() {
	/* a1 5 */ int i;
}

/* 0026b090 00000140 */ Sint32 GFVram_AddFreeArea(/* s1 17 */ Uint16 pos, /* s2 18 */ Uint16 size, /* s3 19 */ Uint16 mode) {
	/* s0 16 */ GF_VRAM_CELL *cell;
	/* v1 3 */ GF_VRAM_CELL *p;
}

/* 0026b1d0 00000090 */ Uint16 GFVram_Alloc(/* s2 18 */ Uint16 size, /* a0 4 */ Uint16 mode) {
	/* s0 16 */ Uint8 flag;
	/* s1 17 */ Uint16 start;
}

/* 0026b260 000000a4 */ static Uint16 gfVram_SearchArea(/* a0 4 */ GF_VRAM_CELL *start_cell, /* s4 20 */ Uint16 size, /* s3 19 */ Uint8 flag) {
	/* s0 16 */ GF_VRAM_CELL *p;
	/* s1 17 */ GF_VRAM_CELL *min;
	/* v1 3 */ Sint32 score;
	/* s2 18 */ Sint32 min_score;
}

/* 0026b308 000000b4 */ static Sint32 gfVram_PseudoAlloc(/* a0 4 */ GF_VRAM_CELL *cell, /* a1 5 */ Uint16 size, /* a2 6 */ Uint8 flag) {
	/* t0 8 */ GF_VRAM_CELL *p;
	/* t3 11 */ Sint32 score;
	/* a1 5 */ Sint32 tmp;
	/* t2 10 */ Uint16 remain;
}

/* 0026b3c0 00000054 */ Sint32 GFVram_Free(/* a0 4 */ Uint16 pos, /* a1 5 */ Uint16 size, /* a2 6 */ Uint16 mode) {
	/* s0 16 */ Sint32 ret;
}

/* 0026b418 00000058 */ static Uint8 gfVram_PsmToFlag(/* a0 4 */ Uint16 mode) {}

/* 0026b470 000001d8 */ static Sint32 gfVram_ChangeArea(/* s2 18 */ Uint16 pos, /* s1 17 */ Uint16 size, /* s3 19 */ Uint8 flag, /* s4 20 */ Sint32 is_free) {
	/* s0 16 */ GF_VRAM_CELL *p;
	/* a0 4 */ GF_VRAM_CELL *tmp;
	/* s1 17 */ Uint16 remain;
	/* s2 18 */ Uint16 cur_pos;
}

/* 0026b648 00000048 */ static GF_VRAM_CELL* gfVram_SearchCellByPos(/* a0 4 */ Uint16 pos) {
	/* a1 5 */ GF_VRAM_CELL *p;
}

/* 0026b690 00000084 */ static void gfVram_DefragCell() {
	/* a2 6 */ GF_VRAM_CELL *p;
}

/* 0026b718 00000048 */ void GFVram_FreeAll() {
	/* v0 2 */ GF_VRAM_CELL *p;
}

/* 0026b760 0000013c */ void GFVram_PrintAllocationStatus() {
	/* s1 17 */ GF_VRAM_CELL *p;
}

/* 0026b8a0 00000018 */ void GFVram_SetFrameBufferSize(/* a0 4 */ Uint32 w, /* a1 5 */ Uint32 h, /* a2 6 */ Uint32 psm) {}
/* 0026b8b8 00000018 */ void GFVram_SetZBufferSize(/* a0 4 */ Uint32 w, /* a1 5 */ Uint32 h, /* a2 6 */ Uint32 psm) {}
/* 0026b8d0 00000018 */ void GFVram_SetScreenBufferSize(/* a0 4 */ Uint32 w, /* a1 5 */ Uint32 h, /* a2 6 */ Uint32 psm) {}
/* 0026b8e8 0000000c */ GF_VRAM_SCREEN_INFO* GFVram_GetScreenInfo() {}

// *****************************************************************************
// FILE -- /home/aex/gunsuv_usa/libgf/gfvcache.c
// *****************************************************************************

/* 0026b8f8 00000068 */ void GFCache_SetInfoAddr(/* a0 4 */ Uint32 *buf, /* a1 5 */ Uint32 buf_size, /* a2 6 */ Uint16 cache_pos, /* a3 7 */ Uint16 cache_size, /* t0 8 */ Uint16 preset_size) {}
/* 0026b960 0000004c */ void GFCache_Flush() {}
/* 0026b9b0 0000000c */ Uint16 GFCache_GetPresetTransPos() {}

/* 0026b9c0 00000044 */ static void gfCache_ClearAllCell() {
	/* a0 4 */ int i;
}

/* 0026ba08 00000050 */ static GF_CACHE_CELL* gfCache_GetUnusedCell() {
	/* a1 5 */ int i;
}

/* 0026ba58 000000d8 */ Uint16 GFCache_Alloc(/* s1 17 */ Uint16 size, /* s2 18 */ Sint32 bscore, /* s3 19 */ Uint32 *guid) {
	/* s0 16 */ GF_CACHE_CELL *p;
	/* v1 3 */ GF_CACHE_CELL *min;
	/* 0x0(sp) */ Sint32 min_score;
}

/* 0026bb30 000000e8 */ static GF_CACHE_CELL* gfCache_SearchAllocPos(/* a0 4 */ GF_CACHE_CELL *start_cell, /* s6 22 */ GF_CACHE_CELL **end_cell, /* s1 17 */ Uint16 size, /* s4 20 */ Sint32 allow_preset, /* s5 21 */ Sint32 *score_out) {
	/* s0 16 */ GF_CACHE_CELL *p;
	/* s3 19 */ GF_CACHE_CELL *min;
	/* v1 3 */ Sint32 score;
	/* s2 18 */ Sint32 min_score;
}

/* 0026bc18 000000ec */ static Uint16 gfCache_Alloc(/* s0 16 */ GF_CACHE_CELL *cell, /* s1 17 */ Uint16 size, /* s2 18 */ Sint32 bscore, /* s3 19 */ Uint32 *guid) {
	/* a0 4 */ GF_CACHE_CELL *p;
}

/* 0026bd08 00000060 */ static Sint32 gfCache_PseudoAlloc(/* a0 4 */ GF_CACHE_CELL *cell, /* a1 5 */ Uint16 size) {
	/* a2 6 */ GF_CACHE_CELL *p;
	/* a1 5 */ Uint16 remain;
	/* a3 7 */ Sint32 score;
}

/* 0026bd68 00000014 */ GF_CACHE_CELL* GFCache_IsOn(/* a0 4 */ Uint32 *guid) {}

/* 0026bd80 00000048 */ static GF_CACHE_CELL* gfCache_GetCellByGuid(/* a2 6 */ Uint32 *guid) {
	/* a1 5 */ GF_CACHE_CELL *p;
}

/* 0026bdc8 00000038 */ Sint32 GFCache_ChangeScore(/* a0 4 */ Uint32 *guid, /* s0 16 */ Sint32 bscore) {
	/* v1 3 */ GF_CACHE_CELL *p;
}

/* 0026be00 0000009c */ void GFCache_Invalidate(/* a3 7 */ Uint16 pos, /* a1 5 */ Uint16 size) {
	/* a0 4 */ GF_CACHE_CELL *p;
	/* a1 5 */ Uint16 end;
}

/* 0026bea0 0000005c */ static void gfCache_DefragCell() {
	/* a2 6 */ GF_CACHE_CELL *p;
}

// *****************************************************************************
// FILE -- graphdev.c
// *****************************************************************************

/* 0026bf00 00000190 */ sceGsResetGraph() {}
/* 0026c090 0000000c */ sceGsGetGParam() {}

// *****************************************************************************
// FILE -- graphdev.c
// *****************************************************************************

/* 0026c0a0 00000068 */ sceGsResetPath() {}

// *****************************************************************************
// FILE -- graphdev.c
// *****************************************************************************

/* 0026c108 00000270 */ sceGsSetDefDispEnv() {}

// *****************************************************************************
// FILE -- graphdev.c
// *****************************************************************************

/* 0026c378 000000bc */ sceGsPutDispEnv() {}

// *****************************************************************************
// FILE -- graphdev.c
// *****************************************************************************

/* 0026c438 000000e8 */ sceGsPutDrawEnv() {}

// *****************************************************************************
// FILE -- graphdev.c
// *****************************************************************************

/* 0026c520 00000298 */ sceGsSetDefDBuff() {}

// *****************************************************************************
// FILE -- graphdev.c
// *****************************************************************************

/* 0026c7b8 0000005c */ sceGsSwapDBuff() {}

// *****************************************************************************
// FILE -- graphdev.c
// *****************************************************************************

/* 0026c818 00000094 */ sceGsSyncV() {}

// *****************************************************************************
// FILE -- graphdev.c
// *****************************************************************************

/* 0026c8b0 00000314 */ sceGsSyncPath() {}

// *****************************************************************************
// FILE -- graphdev.c
// *****************************************************************************

/* 0026cbc8 0000010c */ sceGsSetDefTexEnv() {}

// *****************************************************************************
// FILE -- graphdev.c
// *****************************************************************************

/* 0026ccd8 0000005c */ sceGsSetDefAlphaEnv() {}

// *****************************************************************************
// FILE -- graphdev.c
// *****************************************************************************

/* 0026cd38 000001e4 */ sceGsSetDefLoadImage() {}

// *****************************************************************************
// FILE -- graphdev.c
// *****************************************************************************

/* 0026cf20 00000140 */ sceGsSetDefStoreImage() {}

// *****************************************************************************
// FILE -- graphdev.c
// *****************************************************************************

/* 0026d060 0000017c */ sceGsExecLoadImage() {}

// *****************************************************************************
// FILE -- graphdev.c
// *****************************************************************************

/* 0026d1e0 0000068c */ sceGsExecStoreImage() {}

// *****************************************************************************
// FILE -- graphdev.c
// *****************************************************************************

/* 0026d870 000000a0 */ sceGsSyncVCallback() {}

// *****************************************************************************
// FILE -- graphdev.c
// *****************************************************************************

/* 0026d910 0000003c */ sceGsPutIMR() {}

// *****************************************************************************
// FILE -- graphdev.c
// *****************************************************************************

/* 0026d950 00000088 */ sceGsSetHalfOffset() {}

// *****************************************************************************
// FILE -- graphdev.c
// *****************************************************************************

/* 0026d9d8 0000001c */ sceGsGetIMR() {}

// *****************************************************************************
// FILE -- graphdev.c
// *****************************************************************************

/* 0026d9f8 000000c8 */ sceGszbufaddr() {}

// *****************************************************************************
// FILE -- graphdev.c
// *****************************************************************************

/* 0026dac0 000001e4 */ sceGsSetDefDrawEnv() {}

// *****************************************************************************
// FILE -- graphdev.c
// *****************************************************************************

/* 0026dca8 00000104 */ sceGsSetDefClear() {}

// *****************************************************************************
// FILE -- devfont.c
// *****************************************************************************

/* 0026ddb0 00000088 */ static sceDevFontDefault() {}
/* 0026de38 00000040 */ static sceDevFontIdle() {}
/* 0026de78 00000038 */ static sceDevFontSetColor() {}
/* 0026deb0 00000034 */ sceDevConsInit() {}
/* 0026dee8 000000fc */ sceDevConsOpen() {}
/* 0026dfe8 00000034 */ sceDevConsClose() {}
/* 0026e020 0000009c */ sceDevConsRef() {}
/* 0026e0c0 000001c8 */ sceDevConsDraw() {}
/* 0026e288 000001ac */ sceDevConsDrawS() {}
/* 0026e438 00000058 */ sceDevConsClear() {}
/* 0026e490 00000018 */ sceDevConsSetColor() {}
/* 0026e4a8 00000254 */ sceDevConsPrintf() {}
/* 0026e700 0000002c */ sceDevConsLocate() {}
/* 0026e730 000000d0 */ sceDevConsPut() {}
/* 0026e800 00000074 */ sceDevConsGet() {}
/* 0026e878 00000008 */ sceDevConsAttribute() {}
/* 0026e880 000000c8 */ sceDevConsClearBox() {}
/* 0026e948 00000168 */ sceDevConsMove() {}
/* 0026eab0 000000ac */ sceDevConsRollup() {}
/* 0026eb60 0000011c */ sceDevConsMessage() {}
/* 0026ec80 00000164 */ sceDevConsFrame() {}
/* 0026ede8 0000000c */ static euc2jis() {}
/* 0026edf8 00000074 */ static sjis2jis() {}
/* 0026ee70 00000188 */ static sceDevFontRefDirectImage() {}
/* 0026eff8 0000015c */ static sceDevFontRefStrN() {}
/* 0026f158 0000004c */ static sceDevConsPutc() {}
/* 0026f1a8 00000050 */ static sceDevConsGetc() {}
/* 0026f1f8 00000068 */ static sceDevConsPiece() {}
/* 0026f260 00000030 */ static sceDevFontKnj2Chr() {}
/* 0026f290 00000020 */ static chaGifPkOpenGifTag2() {}
/* 0026f2b0 0000017c */ static chaMemAlloc() {}
/* 0026f430 00000118 */ static chaMemFree() {}
/* 0026f548 0000013c */ sceDevFont() {}

// *****************************************************************************
// FILE -- libdma.c
// *****************************************************************************

/* 0026f688 00000034 */ static memclr() {}
/* 0026f6c0 00000028 */ sceDmaGetChan() {}
/* 0026f6e8 000000dc */ sceDmaReset() {}
/* 0026f7c8 00000010 */ sceDmaDebug() {}
/* 0026f7d8 000001d8 */ sceDmaPutEnv() {}
/* 0026f9b0 00000038 */ sceDmaGetEnv() {}
/* 0026f9e8 00000028 */ sceDmaPutStallAddr() {}
/* 0026fa10 000000d8 */ sceDmaSend() {}
/* 0026fae8 000000e4 */ sceDmaSendN() {}
/* 0026fbd0 000000e4 */ sceDmaSendI() {}
/* 0026fcb8 000000c4 */ sceDmaRecv() {}
/* 0026fd80 000000ec */ sceDmaRecvN() {}
/* 0026fe70 000000f0 */ sceDmaRecvI() {}
/* 0026ff60 000000c4 */ sceDmaSync() {}
/* 00270028 000000d0 */ sceDmaWatch() {}
/* 002700f8 00000048 */ sceDmaPause() {}
/* 00270140 00000014 */ sceDmaRestart() {}

// *****************************************************************************
// FILE -- libpad.c
// *****************************************************************************

/* 00270158 00000114 */ static _send_to_iop() {}
/* 00270270 00000140 */ scePadInit() {}
/* 002703b0 0000009c */ static scePadInit2() {}
/* 00270450 00000080 */ scePadEnd() {}
/* 002704d0 000001e4 */ scePadPortOpen() {}
/* 002706b8 000000b8 */ scePadPortClose() {}
/* 00270770 00000060 */ static scePadGetDmaStr() {}
/* 002707d0 00000050 */ scePadGetFrameCount() {}
/* 00270820 0000007c */ scePadRead() {}
/* 002708a0 00000078 */ scePadGetState() {}
/* 00270918 00000034 */ scePadStateIntToStr() {}
/* 00270950 00000064 */ static scePadSetReqState() {}
/* 002709b8 00000050 */ scePadGetReqState() {}
/* 00270a08 00000034 */ scePadReqIntToStr() {}
/* 00270a40 00000120 */ scePadInfoAct() {}
/* 00270b60 0000011c */ scePadInfoComb() {}
/* 00270c80 00000138 */ scePadInfoMode() {}
/* 00270db8 000000b4 */ scePadSetMainMode() {}
/* 00270e70 000000c0 */ scePadSetActDirect() {}
/* 00270f30 000000d8 */ scePadSetActAlign() {}
/* 00271008 000000b4 */ static scePadGetButtonMask() {}
/* 002710c0 000000b0 */ static scePadSetButtonInfo() {}
/* 00271170 0000005c */ scePadInfoPressMode() {}
/* 002711d0 00000054 */ scePadEnterPressMode() {}
/* 00271228 00000054 */ scePadExitPressMode() {}
/* 00271280 000000cc */ static scePadSetVrefParam() {}
/* 00271350 00000064 */ static scePadGetPortMax() {}
/* 002713b8 00000068 */ scePadGetSlotMax() {}
/* 00271420 00000064 */ static scePadGetModVersion() {}
/* 00271488 00000068 */ scePadSetWarningLevel() {}

// *****************************************************************************
// FILE -- libgifpk.c
// *****************************************************************************

/* 002714f0 00000010 */ sceGifPkInit() {}

// *****************************************************************************
// FILE -- libgifpk.c
// *****************************************************************************

/* 00271500 00000010 */ sceGifPkReset() {}

// *****************************************************************************
// FILE -- libgifpk.c
// *****************************************************************************

/* 00271510 00000058 */ sceGifPkTerminate() {}

// *****************************************************************************
// FILE -- libgifpk.c
// *****************************************************************************

/* 00271568 00000014 */ sceGifPkSize() {}

// *****************************************************************************
// FILE -- libgifpk.c
// *****************************************************************************

/* 00271580 00000074 */ sceGifPkCnt() {}

// *****************************************************************************
// FILE -- libgifpk.c
// *****************************************************************************

/* 002715f8 00000074 */ sceGifPkEnd() {}

// *****************************************************************************
// FILE -- libgifpk.c
// *****************************************************************************

/* 00271670 00000014 */ sceGifPkReserve() {}

// *****************************************************************************
// FILE -- libgifpk.c
// *****************************************************************************

/* 00271688 00000018 */ sceGifPkOpenGifTag() {}

// *****************************************************************************
// FILE -- libgifpk.c
// *****************************************************************************

/* 002716a0 000000a4 */ sceGifPkCloseGifTag() {}

// *****************************************************************************
// FILE -- libgifpk.c
// *****************************************************************************

/* 00271748 00000028 */ sceGifPkAddGsData() {}

// *****************************************************************************
// FILE -- libgifpk.c
// *****************************************************************************

/* 00271770 00000024 */ sceGifPkAddGsAD() {}

// *****************************************************************************
// FILE -- libgifpk.c
// *****************************************************************************

/* 00271798 000001c0 */ sceGifPkRefLoadImage() {}

// *****************************************************************************
// FILE -- libgifpk.c
// *****************************************************************************

/* 00271958 00000098 */ sceGifPkRef() {}

// *****************************************************************************
// FILE -- libvu0.c
// *****************************************************************************

/* 002719f0 0000002c */ sceVu0ApplyMatrix() {}
/* 00271a20 00000044 */ sceVu0MulMatrix() {}
/* 00271a68 0000001c */ sceVu0OuterProduct() {}
/* 00271a88 00000024 */ sceVu0InnerProduct() {}
/* 00271ab0 0000003c */ sceVu0Normalize() {}
/* 00271af0 00000044 */ sceVu0TransposeMatrix() {}
/* 00271b38 0000006c */ sceVu0InversMatrix() {}
/* 00271ba8 00000020 */ sceVu0DivVector() {}
/* 00271bc8 00000020 */ sceVu0DivVectorXYZ() {}
/* 00271be8 00000028 */ sceVu0InterVector() {}
/* 00271c10 00000014 */ sceVu0AddVector() {}
/* 00271c28 00000014 */ sceVu0SubVector() {}
/* 00271c40 00000014 */ sceVu0MulVector() {}
/* 00271c58 00000018 */ sceVu0ScaleVector() {}
/* 00271c70 0000002c */ sceVu0TransMatrix() {}
/* 00271ca0 0000000c */ sceVu0CopyVector() {}
/* 00271cb0 00000024 */ sceVu0CopyMatrix() {}
/* 00271cd8 00000010 */ sceVu0FTOI4Vector() {}
/* 00271ce8 00000010 */ sceVu0FTOI0Vector() {}
/* 00271cf8 00000010 */ sceVu0ITOF4Vector() {}
/* 00271d08 00000010 */ sceVu0ITOF0Vector() {}
/* 00271d18 00000028 */ sceVu0UnitMatrix() {}
/* 00271d40 00000074 */ static _sceVu0ecossin() {}
/* 00271db8 000000a4 */ sceVu0RotMatrixZ() {}
/* 00271e60 000000a8 */ sceVu0RotMatrixX() {}
/* 00271f08 000000a8 */ sceVu0RotMatrixY() {}
/* 00271fb0 00000050 */ sceVu0RotMatrix() {}
/* 00272000 00000024 */ sceVu0ClampVector() {}
/* 00272028 000000b0 */ sceVu0CameraMatrix() {}
/* 002720d8 000000c0 */ sceVu0NormalLightMatrix() {}
/* 00272198 00000068 */ sceVu0LightColorMatrix() {}
/* 00272200 00000104 */ sceVu0ViewScreenMatrix() {}
/* 00272308 00000190 */ sceVu0DropShadowMatrix() {}
/* 00272498 00000058 */ sceVu0RotTransPersN() {}
/* 002724f0 00000044 */ sceVu0RotTransPers() {}
/* 00272538 0000001c */ sceVu0CopyVectorXYZ() {}
/* 00272558 0000002c */ sceVu0InterVectorXYZ() {}
/* 00272588 00000018 */ sceVu0ScaleVectorXYZ() {}
/* 002725a0 00000048 */ sceVu0ClipScreen() {}
/* 002725e8 00000060 */ sceVu0ClipScreen3() {}
/* 00272648 0000008c */ sceVu0ClipAll() {}
/* 002726d8 0000005c */ sceVpu0Reset() {}

// *****************************************************************************
// FILE -- ../eecdvd.c
// *****************************************************************************

/* 00272738 00000024 */ static CB_DelayTh() {}
/* 00272760 00000068 */ sceCdDelayThread() {}
/* 002727c8 00000054 */ sceCdCallback() {}
/* 00272820 000000a0 */ _sceCd_cd_callback() {}
/* 002728c0 000000bc */ _Cdvd_cbLoop() {}
/* 00272980 000000d4 */ sceCdInitEeCB() {}
/* 00272a58 000000a0 */ _sceCd_cd_read_intr() {}
/* 00272af8 00000094 */ static cmd_sem_init() {}
/* 00272b90 00000080 */ static cdvd_exit() {}
/* 00272c10 0000006c */ sceCdPOffCallback() {}
/* 00272c80 0000003c */ static _sceCd_Poff_Intr() {}
/* 00272cc0 00000064 */ static PowerOffCB() {}
/* 00272d28 000002fc */ sceCdSearchFile() {}
/* 00273028 00000170 */ _sceCd_ncmd_prechk() {}
/* 00273198 00000098 */ sceCdNcmdDiskReady() {}
/* 00273230 000000a0 */ sceCdSync() {}
/* 002732d0 0000006c */ sceCdSyncS() {}
/* 00273340 00000170 */ _sceCd_scmd_prechk() {}
/* 002734b0 000002e0 */ sceCdInit() {}
/* 00273790 000001f8 */ sceCdDiskReady() {}
/* 00273988 000000c4 */ sceCdMmode() {}

// *****************************************************************************
// FILE -- ../eecdvd.c
// *****************************************************************************

/* 00273a50 00000030 */ sceCdGetReadPos() {}

// *****************************************************************************
// FILE -- ../eecdvd.c
// *****************************************************************************

/* 00273a80 000001e0 */ sceCdRead() {}

// *****************************************************************************
// FILE -- ../eecdvd.c
// *****************************************************************************

/* 00273c60 00000154 */ sceCdReadIOPm() {}

// *****************************************************************************
// FILE -- ../eecdvd.c
// *****************************************************************************

/* 00273db8 000000cc */ sceCdSeek() {}

// *****************************************************************************
// FILE -- ../eecdvd.c
// *****************************************************************************

/* 00273e88 000000ac */ sceCdStandby() {}

// *****************************************************************************
// FILE -- ../eecdvd.c
// *****************************************************************************

/* 00273f38 000000b0 */ sceCdStop() {}

// *****************************************************************************
// FILE -- ../eecdvd.c
// *****************************************************************************

/* 00273fe8 00000098 */ sceCdGetDiskType() {}

// *****************************************************************************
// FILE -- ../eecdvd.c
// *****************************************************************************

/* 00274080 00000098 */ sceCdGetError() {}

// *****************************************************************************
// FILE -- ../eecdvd.c
// *****************************************************************************

/* 00274118 000000b8 */ sceCdStatus() {}

// *****************************************************************************
// FILE -- ../eecdvd.c
// *****************************************************************************

/* 002741d0 000000b8 */ sceCdBreak() {}

// *****************************************************************************
// FILE -- ../eecdvd.c
// *****************************************************************************

/* 00274288 000000f8 */ sceCdReadClock() {}

// *****************************************************************************
// FILE -- ../eecdvd.c
// *****************************************************************************

/* 00274380 000000ec */ sceCdTrayReq() {}

// *****************************************************************************
// FILE -- ../eecdvd.c
// *****************************************************************************

/* 00274470 0000002c */ sceCdStInit() {}
/* 002744a0 00000034 */ sceCdStStart() {}
/* 002744d8 0000002c */ sceCdStSeekF() {}
/* 00274508 0000002c */ sceCdStSeek() {}
/* 00274538 00000038 */ sceCdStStop() {}
/* 00274570 00000188 */ sceCdStRead() {}
/* 002746f8 00000050 */ sceCdStPause() {}
/* 00274748 00000054 */ sceCdStResume() {}
/* 002747a0 00000048 */ sceCdStStat() {}
/* 002747e8 00000168 */ sceCdStream() {}

// *****************************************************************************
// FILE -- ../libmc.c
// *****************************************************************************

/* 00274950 000001b4 */ sceMcInit() {}
/* 00274b08 00000030 */ _lmcGetClientPtr() {}
/* 00274b38 000000b4 */ sceMcChangeThreadPriority() {}
/* 00274bf0 000000c0 */ sceMcGetSlotMax() {}
/* 00274cb0 00000134 */ sceMcOpen() {}
/* 00274de8 00000034 */ sceMcMkdir() {}
/* 00274e20 000000b4 */ sceMcClose() {}
/* 00274ed8 000000d4 */ sceMcSeek() {}
/* 00274fb0 00000090 */ static mceIntrReadFixAlign() {}
/* 00275040 0000011c */ sceMcRead() {}
/* 00275160 0000017c */ sceMcWrite() {}
/* 002752e0 00000024 */ static mcHearAlarm() {}
/* 00275308 00000044 */ static mcDelayThread() {}
/* 00275350 000000e0 */ sceMcSync() {}
/* 00275430 00000054 */ static mceGetInfoApdx() {}
/* 00275488 00000184 */ sceMcGetInfo() {}
/* 00275610 00000158 */ sceMcGetDir() {}
/* 00275768 00000084 */ static mceStorePwd() {}
/* 002757f0 00000150 */ sceMcChdir() {}
/* 00275940 000000c8 */ sceMcFormat() {}
/* 00275a08 00000128 */ sceMcDelete() {}
/* 00275b30 000000b4 */ sceMcFlush() {}
/* 00275be8 000001d8 */ sceMcSetFileInfo() {}
/* 00275dc0 00000168 */ sceMcRename() {}
/* 00275f28 000000c8 */ sceMcUnformat() {}
/* 00275ff0 00000118 */ sceMcGetEntSpace() {}

// *****************************************************************************
// FILE -- pack.c
// *****************************************************************************

/* 00276108 00000088 */ _type2id() {}
/* 00276190 000001fc */ _id2type() {}
/* 00276390 000002f8 */ sceMpegDemuxPssRing() {}
/* 00276688 00000020 */ sceMpegDemuxPss() {}
/* 002766a8 000000f4 */ sceMpegAddStrCallback() {}
/* 002767a0 00000150 */ _pack_header() {}
/* 002768f0 0000006c */ _system_header() {}
/* 00276960 000005b0 */ _PES_packet() {}

// *****************************************************************************
// FILE -- mpeg.c
// *****************************************************************************

/* 00276f10 0000009c */ sceMpegInit() {}
/* 00276fb0 00000208 */ sceMpegCreate() {}
/* 002771b8 00000008 */ sceMpegDelete() {}
/* 002771c0 00000024 */ sceMpegAddBs() {}
/* 002771e8 00000048 */ sceMpegGetPicture() {}
/* 00277230 00000044 */ sceMpegGetPictureRAW8() {}
/* 00277278 00000050 */ sceMpegGetPictureRAW8xy() {}
/* 002772c8 00000014 */ sceMpegSetDecodeMode() {}
/* 002772e0 00000020 */ sceMpegGetDecodeMode() {}
/* 00277300 0000000c */ sceMpegIsEnd() {}
/* 00277310 00000010 */ sceMpegIsRefBuffEmpty() {}
/* 00277320 00000050 */ sceMpegReset() {}
/* 00277370 00000054 */ sceMpegClearRefBuff() {}
/* 002773c8 00000024 */ sceMpegAddCallback() {}
/* 002773f0 00000050 */ _dispatchMpegCallback() {}
/* 00277440 00000024 */ _dispatchMpegCbNodata() {}
/* 00277468 00000014 */ sceMpegSetDefaultPtsGap() {}
/* 00277480 00000010 */ sceMpegResetDefaultPtsGap() {}
/* 00277490 0000000c */ sceMpegSetImageBuff() {}
/* 002774a0 0000000c */ sceMpegDispWidth() {}
/* 002774b0 0000000c */ sceMpegDispHeight() {}
/* 002774c0 0000000c */ sceMpegDispCenterOffX() {}
/* 002774d0 0000000c */ sceMpegDispCenterOffY() {}
/* 002774e0 00000010 */ sceSetBrokenLink() {}
/* 002774f0 00000014 */ sceSetPtm() {}
/* 00277508 00000014 */ _alalcInit() {}
/* 00277520 0000000c */ _alalcSetDynamic() {}
/* 00277530 0000000c */ _alalcFree() {}
/* 00277540 0000006c */ _alalcAlloc() {}
/* 002775b0 00000018 */ _alalcRest() {}
/* 002775c8 00000170 */ static _getpic() {}
/* 00277738 00000114 */ static _decodeOrSkipFrame() {}
/* 00277850 00000044 */ static _decodeOrSkip() {}
/* 00277898 0000015c */ static _decodeOrSkipField() {}
/* 002779f8 00000068 */ _sceMpegFlush() {}

// *****************************************************************************
// FILE -- init.c
// *****************************************************************************

/* 00277a60 0000000c */ _initSeqAgain() {}
/* 00277a70 0000007c */ _lastFrame() {}
/* 00277af0 00000060 */ _clearOnce() {}
/* 00277b50 000000bc */ _clearEach() {}
/* 00277c10 00000010 */ _ErrMessage() {}
/* 00277c20 00000034 */ _Error1() {}
/* 00277c58 00000054 */ _Error() {}
/* 00277cb0 000000f0 */ _sendDataToIPU() {}
/* 00277da0 00000020 */ static _RefImageInit() {}
/* 00277dc0 00000124 */ _sequenceHeader() {}
/* 00277ee8 000002a8 */ _initSeq() {}
/* 00278190 000000e0 */ static _initRefImages() {}
/* 00278270 000000d4 */ static _setDefaultQM() {}
/* 00278348 00000128 */ _sequenceExtension() {}
/* 00278470 0000008c */ _sequenceDisplayExtension() {}
/* 00278500 0000000c */ _sequenceScalableExtension() {}
/* 00278510 0000000c */ _unknown_extension() {}
/* 00278520 0000000c */ _pictureSpatialScalableExtension() {}
/* 00278530 0000000c */ _pictureTemporalScalableExtension() {}

// *****************************************************************************
// FILE -- defhandler.c
// *****************************************************************************

/* 00278540 0000000c */ _defStopDMA() {}
/* 00278550 0000000c */ _defRestartDMA() {}

// *****************************************************************************
// FILE -- mpc.c
// *****************************************************************************

/* 00278560 00000368 */ static _motionComp0() {}
/* 002788c8 00000704 */ _getAllRefs() {}
/* 00278fd0 0000041c */ _getRef0() {}
/* 002793f0 0000021c */ static _doMC() {}
/* 00279610 00000074 */ _rix_000() {}
/* 00279688 00000094 */ _ri0_000() {}
/* 00279720 000000b4 */ _rix_001() {}
/* 002797d8 000000cc */ _ri0_001() {}
/* 002798a8 000000ac */ _rix_010() {}
/* 00279958 000000b8 */ _ri0_010() {}
/* 00279a10 000000f8 */ _rix_011() {}
/* 00279b08 000000fc */ _ri0_011() {}
/* 00279c08 0000009c */ _rix_100() {}
/* 00279ca8 000000ac */ _ri0_100() {}
/* 00279d58 000000dc */ _rix_101() {}
/* 00279e38 000000e4 */ _ri0_101() {}
/* 00279f20 000000d4 */ _rix_110() {}
/* 00279ff8 000000d0 */ _ri0_110() {}
/* 0027a0c8 00000120 */ _rix_111() {}
/* 0027a1e8 00000114 */ _ri0_111() {}
/* 0027a300 0000005c */ _copyAddRefImage() {}
/* 0027a360 00000058 */ _copyRefImage() {}
/* 0027a3b8 00000028 */ _ipuSetMPEG1() {}
/* 0027a3e0 000001f0 */ _waitBdecOut() {}
/* 0027a5d0 0000001c */ _dmVector() {}
/* 0027a5f0 00000184 */ _dualPrimeVector() {}
/* 0027a778 00000110 */ _mbAddressIncrement() {}
/* 0027a888 00000108 */ _pictureData0() {}
/* 0027a990 0000012c */ static _sliceA0() {}
/* 0027aac0 000001f0 */ static _slice0() {}
/* 0027acb0 000000bc */ static _skipMB0() {}
/* 0027ad70 000004a8 */ static _decMB0() {}
/* 0027b218 00000088 */ static _decode_motion_vector() {}
/* 0027b2a0 0000019c */ _motionVectors() {}
/* 0027b440 0000014c */ _motionVector() {}
/* 0027b590 0000002c */ _sendIpuCommand() {}
/* 0027b5c0 000000a4 */ _waitIpuIdle() {}
/* 0027b668 000000b0 */ _waitIpuIdle64() {}
/* 0027b718 00000178 */ _ipuVdec() {}
/* 0027b890 00000108 */ _peepBit() {}
/* 0027b998 000000f0 */ _flushBuf() {}
/* 0027ba88 00000150 */ _nextBit() {}
/* 0027bbd8 0000007c */ _nextStartCode() {}
/* 0027bc58 00000064 */ _sliceB() {}
/* 0027bcc0 0000010c */ _nextHeader() {}
/* 0027bdd0 000000c4 */ _pictureHeader() {}
/* 0027be98 00000128 */ _extensionAndUserData() {}
/* 0027bfc0 000001f0 */ _pictureCodingExtension() {}
/* 0027c1b0 00000048 */ _extrainfo() {}
/* 0027c1f8 00000074 */ static _updateTempTackData() {}
/* 0027c270 000000a0 */ _groupOfPicturesHeader() {}
/* 0027c310 000000c4 */ _quantMatrixExtension() {}
/* 0027c3d8 000000f4 */ _pictureDisplayExtension() {}
/* 0027c4d0 00000090 */ _copyrightExtension() {}
/* 0027c560 000000cc */ _decPicture() {}
/* 0027c630 00000090 */ _outputFrame() {}
/* 0027c6c0 000002b4 */ _updateRefImage() {}
/* 0027c978 000000a0 */ static _isOutSizeOK() {}
/* 0027ca18 00000270 */ _cpr8() {}
/* 0027cc88 00000028 */ static _markOutput() {}
/* 0027ccb0 0000018c */ static _getPtsDtsFlags() {}
/* 0027ce40 00000110 */ _dispRefImage() {}
/* 0027cf50 000001b8 */ _dispRefImageField() {}
/* 0027d108 00000070 */ static receiveDataFromIPU() {}

// *****************************************************************************
// FILE -- csc.c
// *****************************************************************************

/* 0027d178 00000118 */ static _doCSC() {}
/* 0027d290 00000174 */ static _ch3dmaCSC() {}
/* 0027d408 000001b0 */ static _doCSC2() {}
/* 0027d5b8 00000104 */ static _ch4dma() {}
/* 0027d6c0 00000274 */ _csc_storeRefImage() {}

// *****************************************************************************
// FILE -- bit.c
// *****************************************************************************

/* 0027d938 00000034 */ _sysbitInit() {}
/* 0027d970 0000001c */ _sysbitNext() {}
/* 0027d990 00000098 */ static _sysbitFlush() {}
/* 0027da28 0000004c */ _sysbitGet() {}
/* 0027da78 00000044 */ _sysbitMarker() {}
/* 0027dac0 00000054 */ _sysbitJump() {}
/* 0027db18 0000002c */ _sysbitPtr() {}

// *****************************************************************************
// FILE -- libipu.c
// *****************************************************************************

/* 0027db48 00000064 */ static setD3_CHCR() {}
/* 0027dbb0 00000064 */ static setD4_CHCR() {}
/* 0027dc18 000000e4 */ sceIpuStopDMA() {}
/* 0027dd00 00000150 */ sceIpuRestartDMA() {}
/* 0027de50 00000068 */ sceIpuSync() {}

// *****************************************************************************
// FILE -- ipuinit.c
// *****************************************************************************

/* 0027deb8 00000064 */ static setD4_CHCR() {}
/* 0027df20 00000238 */ sceIpuInit() {}

// *****************************************************************************
// FILE -- sdr_main.c
// *****************************************************************************

/* 0027e158 000000a4 */ sceSdRemoteInit() {}
/* 0027e200 00000084 */ sceSdTransToIOP() {}
/* 0027e288 00000010 */ sceSdCallBack() {}
/* 0027e298 000001f0 */ sceSdRemote() {}

// *****************************************************************************
// FILE -- sdr_cb.c
// *****************************************************************************

/* 0027e488 000000d4 */ sceSdRemoteCallbackInit() {}
/* 0027e560 00000064 */ static _sdrCBThread() {}
/* 0027e5c8 000000e0 */ static _sdrCB() {}

// *****************************************************************************
// FILE -- /home/aex/gunsuv/app/g_guncon2/nmlib/src/nmGC2Main.c
// *****************************************************************************

/* 0027e6a8 000000c4 */ int nmUsbGunInit() {
	/* v0 2 */ unsigned int i;
}

/* 0027e76c 0000006c */ int nmUsbGunGetInfo(/* s0 16 */ u_char *info) {}
/* 0027e7d8 00000074 */ int nmUsbGunRead(/* a0 4 */ u_int no, /* s0 16 */ char *data) {}
/* 0027e84c 00000074 */ int nmUsbGunGetLocation(/* a0 4 */ int no, /* s0 16 */ u_char *location) {}
/* 0027e8c0 00000044 */ int nmUsbGunGetConfig(/* t1 9 */ u_char *config) {}
/* 0027e904 00000068 */ int nmUsbTransCtrl(/* a0 4 */ int no, /* t1 9 */ u_char *data) {}
/* 0027e96c 0000005c */ int nmUsbGunSync(/* a0 4 */ int mode) {}

/* 0027e9c8 00000020 */ void nmPadTimerReset() {
	/* v0 2 */ int no;
}

/* 0027e9e8 0000008c */ void nmPadWaitTimer(/* a0 4 */ int time) {
	/* a1 5 */ int no;
	/* v1 3 */ int i;
}

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/math/s_cos.c
// *****************************************************************************

/* 0027ea78 00000124 */ double cos(/* a1 5 */ double x) {
	/* 0x0(sp) */ double y[2];
	/* a2 6 */ __int32_t ix;
}

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/math/s_sin.c
// *****************************************************************************

/* 0027eba0 00000134 */ double sin(/* a1 5 */ double x) {
	/* 0x0(sp) */ double y[2];
	/* a2 6 */ __int32_t ix;
}

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/math/sf_atan.c
// *****************************************************************************

/* 0027ecd8 0000029c */ float atanf(/* f13 51 */ float x) {
	/* f0 38 */ float w;
	/* f0 38 */ float s1;
	/* f1 39 */ float s2;
	/* f12 50 */ float z;
	/* s0 16 */ __int32_t ix;
	/* v1 3 */ __int32_t id;
}

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/math/sf_cos.c
// *****************************************************************************

/* 0027ef78 000000d4 */ float cosf(/* f0 38 */ float x) {
	/* 0x0(sp) */ float y[2];
	/* v0 2 */ __int32_t ix;
}

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/math/sf_fabs.c
// *****************************************************************************

/* 0027f050 00000028 */ float fabsf(/* f0 38 */ float x) {}

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/math/sf_sin.c
// *****************************************************************************

/* 0027f078 000000e8 */ float sinf(/* f0 38 */ float x) {
	/* 0x0(sp) */ float y[2];
	/* v0 2 */ __int32_t ix;
}

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/math/w_sqrt.c
// *****************************************************************************

/* 0027f160 00000014 */ double sqrt(/* a0 4 */ double x) {}

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/math/wf_acos.c
// *****************************************************************************

/* 0027f178 00000014 */ float acosf(/* f12 50 */ float x) {}

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/math/wf_atan2.c
// *****************************************************************************

/* 0027f190 00000014 */ float atan2f(/* f12 50 */ float y, /* f13 51 */ float x) {}

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/math/wf_sqrt.c
// *****************************************************************************

/* 0027f1a8 00000014 */ float sqrtf(/* f12 50 */ float x) {}

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/math/e_rem_pio2.c
// *****************************************************************************

/* 0027f1c0 000005b8 */ __int32_t __ieee754_rem_pio2(/* a1 5 */ double x, /* s4 20 */ double *y) {
	/* s1 17 */ double z;
	/* s2 18 */ double w;
	/* s1 17 */ double t;
	/* s3 19 */ double r;
	/* s5 21 */ double fn;
	/* 0x0(sp) */ double tx[3];
	/* s0 16 */ __int32_t i;
	/* s7 23 */ __int32_t j;
	/* s6 22 */ __int32_t n;
	/* s0 16 */ __int32_t ix;
	/* fp 30 */ __int32_t hx;
	/* s3 19 */ int e0;
	/* s2 18 */ int nx;
}

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/math/e_sqrt.c
// *****************************************************************************

/* 0027f778 0000031c */ double __ieee754_sqrt(/* s0 16 */ double x) {
	/* s0 16 */ double z;
	/* s4 20 */ __int32_t sign;
	/* t1 9 */ __uint32_t r;
	/* a0 4 */ __uint32_t t1;
	/* t4 12 */ __uint32_t s1;
	/* a3 7 */ __uint32_t ix1;
	/* s2 18 */ __uint32_t q1;
	/* a1 5 */ __int32_t ix0;
	/* t3 11 */ __int32_t s0;
	/* s3 19 */ __int32_t q;
	/* s1 17 */ __int32_t m;
	/* v1 3 */ __int32_t t;
	/* a0 4 */ __int32_t i;
}

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/math/ef_acos.c
// *****************************************************************************

/* 0027fa98 0000043c */ float __ieee754_acosf(/* f11 49 */ float x) {
	/* f21 59 */ float z;
	/* f20 58 */ float p;
	/* f22 60 */ float q;
	/* f12 50 */ float r;
	/* f0 38 */ float w;
	/* f13 51 */ float s;
	/* f3 41 */ float c;
	/* f11 49 */ float df;
	/* v1 3 */ __int32_t ix;
}

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/math/ef_atan2.c
// *****************************************************************************

/* 0027fed8 000001e4 */ float __ieee754_atan2f(/* f1 39 */ float y, /* f13 51 */ float x) {
	/* f2 40 */ float z;
	/* v1 3 */ __int32_t k;
	/* s0 16 */ __int32_t m;
	/* t0 8 */ __int32_t ix;
	/* a3 7 */ __int32_t iy;
}

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/math/ef_rem_pio2.c
// *****************************************************************************

/* 002800c0 000003c8 */ __int32_t __ieee754_rem_pio2f(/* f1 39 */ float x, /* s1 17 */ float *y) {
	/* f12 50 */ float z;
	/* f3 41 */ float w;
	/* f5 43 */ float t;
	/* f4 42 */ float r;
	/* f6 44 */ float fn;
	/* 0x0(sp) */ float tx[3];
	/* v1 3 */ __int32_t i;
	/* a0 4 */ __int32_t j;
	/* a1 5 */ __int32_t n;
	/* s0 16 */ __int32_t ix;
	/* a2 6 */ int e0;
	/* a3 7 */ int nx;
}

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/math/ef_sqrt.c
// *****************************************************************************

/* 00280488 000000d4 */ float __ieee754_sqrtf(/* f12 50 */ float x) {
	/* f0 38 */ float z;
	/* a0 4 */ __uint32_t r;
	/* v0 2 */ __uint32_t hx;
	/* a1 5 */ __int32_t ix;
	/* t0 8 */ __int32_t s;
	/* a2 6 */ __int32_t q;
	/* a3 7 */ __int32_t m;
	/* v1 3 */ __int32_t t;
}

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/math/k_cos.c
// *****************************************************************************

/* 00280560 000002d4 */ double __kernel_cos(/* s4 20 */ double x, /* s6 22 */ double y) {
	/* s0 16 */ double z;
	/* s5 21 */ double r;
	/* s1 17 */ double qx;
	/* s2 18 */ __int32_t ix;
	/* s3 19 */ ieee_double_shape_type iw_u;
}

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/math/k_rem_pio2.c
// *****************************************************************************

/* 00280838 00000b4c */ int __kernel_rem_pio2(/* 0x230(sp) */ double *x, /* 0x234(sp) */ double *y, /* a2 6 */ int e0, /* a3 7 */ int nx, /* 0x238(sp) */ int prec, /* 0x23c(sp) */ __int32_t *ipio2) {
	/* s6 22 */ __int32_t jz;
	/* 0x240(sp) */ __int32_t jx;
	/* 0x244(sp) */ __int32_t jv;
	/* 0x248(sp) */ __int32_t jp;
	/* s1 17 */ __int32_t carry;
	/* 0x24c(sp) */ __int32_t n;
	/* 0x0(sp) */ __int32_t iq[20];
	/* s2 18 */ __int32_t i;
	/* s0 16 */ __int32_t j;
	/* s5 21 */ __int32_t k;
	/* a0 4 */ __int32_t m;
	/* 0x250(sp) */ __int32_t q0;
	/* fp 30 */ __int32_t ih;
	/* s3 19 */ double z;
	/* s4 20 */ double fw;
	/* 0x50(sp) */ double f[20];
	/* 0xf0(sp) */ double fq[20];
	/* 0x190(sp) */ double q[20];
}

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/math/k_sin.c
// *****************************************************************************

/* 00281388 00000238 */ double __kernel_sin(/* s3 19 */ double x, /* s5 21 */ double y, /* s0 16 */ int iy) {
	/* s1 17 */ double z;
	/* s2 18 */ double r;
	/* s4 20 */ double v;
	/* a1 5 */ __int32_t ix;
}

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/math/kf_cos.c
// *****************************************************************************

/* 002815c0 00000170 */ float __kernel_cosf(/* f12 50 */ float x, /* f13 51 */ float y) {
	/* f1 39 */ float a;
	/* f0 38 */ float hz;
	/* f4 42 */ float z;
	/* f1 39 */ float r;
	/* f5 43 */ float qx;
	/* v1 3 */ __int32_t ix;
}

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/math/kf_rem_pio2.c
// *****************************************************************************

/* 00281730 000008a4 */ int __kernel_rem_pio2f(/* 0x140(sp) */ float *x, /* fp 30 */ float *y, /* a2 6 */ int e0, /* a3 7 */ int nx, /* 0x144(sp) */ int prec, /* 0x148(sp) */ __int32_t *ipio2) {
	/* s0 16 */ __int32_t jz;
	/* s2 18 */ __int32_t jx;
	/* s7 23 */ __int32_t jv;
	/* s4 20 */ __int32_t jp;
	/* a3 7 */ __int32_t carry;
	/* s5 21 */ __int32_t n;
	/* 0x0(sp) */ __int32_t iq[20];
	/* a2 6 */ __int32_t i;
	/* a1 5 */ __int32_t j;
	/* t0 8 */ __int32_t k;
	/* v1 3 */ __int32_t m;
	/* s1 17 */ __int32_t q0;
	/* s6 22 */ __int32_t ih;
	/* f20 58 */ float z;
	/* f2 40 */ float fw;
	/* 0x50(sp) */ float f[20];
	/* 0xa0(sp) */ float fq[20];
	/* 0xf0(sp) */ float q[20];
}

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/math/kf_sin.c
// *****************************************************************************

/* 00281fd8 00000124 */ float __kernel_sinf(/* f12 50 */ float x, /* f13 51 */ float y, /* a0 4 */ int iy) {
	/* f3 41 */ float z;
	/* f1 39 */ float r;
	/* f4 42 */ float v;
	/* v1 3 */ __int32_t ix;
}

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/math/s_fabs.c
// *****************************************************************************

/* 00282100 00000034 */ double fabs(/* a0 4 */ double x) {
	/* v0 2 */ __uint32_t high;
}

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/math/s_floor.c
// *****************************************************************************

/* 00282138 00000214 */ double floor(/* a2 6 */ double x) {
	/* s0 16 */ __int32_t i0;
	/* s2 18 */ __int32_t i1;
	/* s1 17 */ __int32_t j0;
	/* s3 19 */ __uint32_t i;
	/* v1 3 */ __uint32_t j;
}

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/common/s_scalbn.c
// *****************************************************************************

/* 00282350 000001e4 */ double scalbn(/* a2 6 */ double x, /* s0 16 */ int n) {
	/* v1 3 */ __int32_t k;
	/* a3 7 */ __int32_t hx;
}

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/math/sf_floor.c
// *****************************************************************************

/* 00282538 000000f0 */ float floorf(/* f12 50 */ float x) {
	/* a0 4 */ __int32_t i0;
	/* a1 5 */ __int32_t j0;
	/* a2 6 */ __uint32_t i;
	/* a2 6 */ __uint32_t ix;
}

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/common/sf_scalbn.c
// *****************************************************************************

/* 00282628 000000c8 */ float scalbnf(/* f12 50 */ float x, /* a0 4 */ int n) {
	/* a1 5 */ __int32_t k;
	/* v0 2 */ __uint32_t hx;
}

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/common/s_copysign.c
// *****************************************************************************

/* 002826f0 00000044 */ double copysign(/* v0 2 */ double x, /* a1 5 */ double y) {
	/* v1 3 */ __uint32_t hx;
	/* a1 5 */ __uint32_t hy;
}

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/common/sf_copysign.c
// *****************************************************************************

/* 00282738 0000003c */ float copysignf(/* f0 38 */ float x, /* f13 51 */ float y) {}

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/gcc/libgcc2.c
// *****************************************************************************

/* 00282778 00000074 */ DItype __muldi3(/* a0 4 */ DItype u, /* a1 5 */ DItype v) {}

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/gcc/libgcc2.c
// *****************************************************************************

/* 002827f0 00000128 */ DItype __fixunssfdi(/* f12 50 */ SFtype original_a) {}

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/gcc/libgcc2.c
// *****************************************************************************

/* 00282918 0000008c */ void __do_global_dtors() {}
/* 002829a8 000000c0 */ void __do_global_ctors() {}
/* 00282a68 00000038 */ void __main() {}

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/build/gcc/fp-bit.c
// *****************************************************************************

/* 00282aa0 0000003c */ DFtype fptodp(/* f12 50 */ SFtype arg_a) {}

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/build/gcc/dp-bit.c
// *****************************************************************************

/* 00282ae0 0000025c */ static fp_number_type* _fpadd_parts(/* t3 11 */ fp_number_type *a, /* a1 5 */ fp_number_type *b, /* a2 6 */ fp_number_type *tmp) {}
/* 00282d40 00000058 */ FLO_type dpadd(/* a0 4 */ FLO_type arg_a, /* a1 5 */ FLO_type arg_b) {}
/* 00282d98 00000064 */ FLO_type dpsub(/* a0 4 */ FLO_type arg_a, /* a1 5 */ FLO_type arg_b) {}

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/build/gcc/dp-bit.c
// *****************************************************************************

/* 00282e00 000002ac */ FLO_type dpmul(/* a0 4 */ FLO_type arg_a, /* a1 5 */ FLO_type arg_b) {}

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/build/gcc/dp-bit.c
// *****************************************************************************

/* 002830b0 00000174 */ FLO_type dpdiv(/* a0 4 */ FLO_type arg_a, /* a1 5 */ FLO_type arg_b) {}

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/build/gcc/dp-bit.c
// *****************************************************************************

/* 00283228 0000004c */ SItype dpcmp(/* a0 4 */ FLO_type arg_a, /* a1 5 */ FLO_type arg_b) {}

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/build/gcc/dp-bit.c
// *****************************************************************************

/* 00283278 000000b8 */ FLO_type litodp(/* a0 4 */ SItype arg_a) {}

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/build/gcc/dp-bit.c
// *****************************************************************************

/* 00283330 0000009c */ SItype dptoli(/* a0 4 */ FLO_type arg_a) {}

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/build/gcc/dp-bit.c
// *****************************************************************************

/* 002833d0 0000002c */ DFtype __make_dp(/* a0 4 */ fp_class_type class, /* a1 5 */ unsigned int sign, /* a2 6 */ int exp, /* a3 7 */ UDItype frac) {}

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/build/gcc/dp-bit.c
// *****************************************************************************

/* 00283400 00000054 */ SFtype dptofp(/* a0 4 */ DFtype arg_a) {}

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/build/gcc/dp-bit.c
// *****************************************************************************

/* 00283458 000000a0 */ USItype dptoul(/* a0 4 */ FLO_type arg_a) {}

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/gcc/frame-dwarf2.c
// *****************************************************************************

/* 002834f8 00000044 */ static void* decode_uleb128(/* a0 4 */ unsigned char *buf, /* a1 5 */ unsigned int *r) {}
/* 00283540 00000058 */ static void* decode_sleb128(/* a0 4 */ unsigned char *buf, /* a1 5 */ int *r) {}
/* 00283598 000000f8 */ static void fde_merge(/* s1 17 */ fde_vector *v1, /* v0 2 */ fde_vector *v2) {}
/* 00283690 00000578 */ static fde** end_fde_sort(/* s0 16 */ fde_accumulator *accu, /* s4 20 */ size_t count) {}
/* 00283c08 00000068 */ void __register_frame_info(/* a0 4 */ void *begin, /* s0 16 */ object *ob) {}
/* 00283c70 00000030 */ void __register_frame(/* s0 16 */ void *begin) {}
/* 00283ca0 00000068 */ void __register_frame_info_table(/* a0 4 */ void *begin, /* s0 16 */ object *ob) {}
/* 00283d08 00000030 */ void __register_frame_table(/* s0 16 */ void *begin) {}
/* 00283d38 000000bc */ void* __deregister_frame_info(/* s1 17 */ void *begin) {}
/* 00283df8 00000020 */ void __deregister_frame(/* a0 4 */ void *begin) {}
/* 00283e18 00000040 */ static size_t count_fdes(/* a0 4 */ fde *this_fde) {}
/* 00283e58 0000008c */ static void add_fdes(/* a0 4 */ fde *this_fde, /* a1 5 */ fde_accumulator *accu, /* a2 6 */ void **beg_ptr, /* a3 7 */ void **end_ptr) {}
/* 00283ee8 00000058 */ static fde* search_fdes(/* a0 4 */ fde *this_fde, /* a1 5 */ void *pc) {}
/* 00283f40 00000168 */ static void frame_init(/* s2 18 */ object *ob) {}
/* 002840a8 000001a8 */ static fde* find_fde(/* s2 18 */ void *pc) {}
/* 00284250 00000110 */ static void* extract_cie_info(/* a0 4 */ fde *f, /* s1 17 */ cie_info *c) {}
/* 00284360 00000120 */ static void* decode_stack_op(/* a0 4 */ unsigned char *buf, /* s1 17 */ frame_state *state) {}
/* 00284480 0000042c */ static void* execute_cfa_insn(/* s0 16 */ void *p, /* s1 17 */ frame_state_internal *state, /* s2 18 */ cie_info *info, /* a3 7 */ void **pc) {}
/* 002848b0 000001b8 */ frame_state* __frame_state_for(/* s3 19 */ void *pc_target, /* s5 21 */ frame_state *state_in) {}

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/gcc/libgcc2.c
// *****************************************************************************

/* 00284a68 000000a8 */ DFtype __floatdidf(/* s0 16 */ DItype u) {}

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/build/gcc/fp-bit.c
// *****************************************************************************

/* 00284b10 0000005c */ void __unpack_f(/* a0 4 */ FLO_union_type *src, /* a2 6 */ fp_number_type *dst) {}

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/build/gcc/fp-bit.c
// *****************************************************************************

/* 00284b70 0000002c */ SFtype __make_fp(/* a0 4 */ fp_class_type class, /* a1 5 */ unsigned int sign, /* a2 6 */ int exp, /* a3 7 */ USItype frac) {}

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/build/gcc/dp-bit.c
// *****************************************************************************

/* 00284ba0 00000118 */ FLO_type __pack_d(/* a0 4 */ fp_number_type *src) {}

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/build/gcc/dp-bit.c
// *****************************************************************************

/* 00284cb8 000000ac */ void __unpack_d(/* a0 4 */ FLO_union_type *src, /* a2 6 */ fp_number_type *dst) {}

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/build/gcc/dp-bit.c
// *****************************************************************************

/* 00284d68 00000120 */ int __fpcmp_parts_d(/* a0 4 */ fp_number_type *a, /* a1 5 */ fp_number_type *b) {}

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/build/gcc/fp-bit.c
// *****************************************************************************

/* 00284e88 000000d0 */ FLO_type __pack_f(/* a0 4 */ fp_number_type *src) {}

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libc/stdlib/abort.c
// *****************************************************************************

/* 00284f58 00000018 */ void abort() {}

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libc/stdlib/atexit.c
// *****************************************************************************

/* 00284f70 000000a0 */ int atexit(/* s1 17 */ void (*fn)(/* parameters unknown */)) {
	/* a2 6 */ _atexit *p;
}

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libc/stdlib/exit.c
// *****************************************************************************

/* 00285010 000000ac */ void exit(/* s3 19 */ int code) {
	/* s2 18 */ _atexit *p;
	/* s0 16 */ int n;
}

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libc/stdlib/malloc.c
// *****************************************************************************

/* 002850c0 00000054 */ void* malloc(/* s1 17 */ size_t nbytes) {
	/* s1 17 */ void *p;
}

/* 00285118 00000048 */ void free(/* s1 17 */ void *aptr) {}

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libc/stdlib/mallocr.c
// *****************************************************************************

/* 00285160 00000258 */ static void malloc_extend_top(/* 0x0(sp) */ _reent *reent_ptr, /* a1 5 */ size_t nb) {
	/* s1 17 */ char *brk;
	/* a1 5 */ size_t front_misalign;
	/* s0 16 */ size_t correction;
	/* a0 4 */ char *new_brk;
	/* a0 4 */ size_t top_size;
	/* s4 20 */ mchunkptr old_top;
	/* s3 19 */ size_t old_top_size;
	/* s0 16 */ char *old_end;
	/* s2 18 */ size_t sbrk_size;
	/* v1 3 */ long unsigned int pagesz;
}

/* 002853b8 00000728 */ void* _malloc_r(/* s3 19 */ _reent *reent_ptr, /* a1 5 */ size_t bytes) {
	/* s0 16 */ mchunkptr victim;
	/* a2 6 */ size_t victim_size;
	/* t2 10 */ int idx;
	/* a1 5 */ mbinptr bin;
	/* t1 9 */ mchunkptr remainder;
	/* t0 8 */ long int remainder_size;
	/* a1 5 */ int remainder_index;
	/* t1 9 */ long unsigned int block;
	/* t3 11 */ int startidx;
	/* t0 8 */ mchunkptr fwd;
	/* t3 11 */ mchunkptr bck;
	/* a0 4 */ mbinptr q;
	/* s1 17 */ size_t nb;
}

// *****************************************************************************
// FILE -- ../../../../../../src/newlib/libc/machine/r5900/memcmp.S
// *****************************************************************************

/* 00285ae0 00000094 */ memcmp() {}

// *****************************************************************************
// FILE -- ../../../../../../src/newlib/libc/machine/r5900/memcpy.S
// *****************************************************************************

/* 00285b74 000000b0 */ memcpy() {}

// *****************************************************************************
// FILE -- ../../../../../../src/newlib/libc/machine/r5900/memset.S
// *****************************************************************************

/* 00285c24 000000c0 */ memset() {}

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libc/stdlib/mlock.c
// *****************************************************************************

/* 00285ce8 0000007c */ void __malloc_lock(/* a0 4 */ _reent *ptr) {
	/* s0 16 */ int id;
}

/* 00285d68 0000004c */ void __malloc_unlock(/* a0 4 */ _reent *ptr) {}

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libc/stdio/printf.c
// *****************************************************************************

/* 00285db8 0000005c */ int _printf_r(/* a0 4 */ _reent *ptr, /* a1 5 */ char *fmt) {}
/* 00285e18 00000070 */ int printf(/* a0 4 */ char *fmt) {}

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libc/stdlib/rand.c
// *****************************************************************************

/* 00285e88 00000018 */ void srand(/* a0 4 */ unsigned int seed) {}
/* 00285ea0 00000064 */ int rand() {}

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libc/reent/sbrkr.c
// *****************************************************************************

/* 00285f08 00000058 */ void* _sbrk_r(/* s0 16 */ _reent *ptr, /* a1 5 */ size_t incr) {
	/* a0 4 */ char *ret;
}

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libc/signal/signal.c
// *****************************************************************************

/* 00285f60 00000070 */ int _init_signal_r(/* s0 16 */ _reent *ptr) {
	/* v1 3 */ int i;
}

/* 00285fd0 00000080 */ _sig_func_ptr _signal_r(/* s0 16 */ _reent *ptr, /* s1 17 */ int sig, /* s2 18 */ _sig_func_ptr func) {
	/* v0 2 */ _sig_func_ptr old_func;
}

/* 00286050 000000d8 */ int _raise_r(/* s0 16 */ _reent *ptr, /* s1 17 */ int sig) {
	/* a1 5 */ _sig_func_ptr func;
}

/* 00286128 00000098 */ int __sigtramp_r(/* s1 17 */ _reent *ptr, /* s0 16 */ int sig) {
	/* a1 5 */ _sig_func_ptr func;
}

/* 002861c0 00000020 */ int raise(/* a1 5 */ int sig) {}
/* 002861e0 00000024 */ _sig_func_ptr signal(/* a0 4 */ int sig, /* a2 6 */ _sig_func_ptr func) {}
/* 00286208 0000001c */ int _init_signal() {}
/* 00286228 00000020 */ int __sigtramp(/* a1 5 */ int sig) {}

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libc/reent/signalr.c
// *****************************************************************************

/* 00286248 0000005c */ int _kill_r(/* s0 16 */ _reent *ptr, /* a1 5 */ int pid, /* a2 6 */ int sig) {
	/* v1 3 */ int ret;
}

/* 002862a8 00000014 */ int _getpid_r(/* a0 4 */ _reent *ptr) {}

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libc/stdio/sprintf.c
// *****************************************************************************

/* 002862c0 00000088 */ int _sprintf_r(/* a0 4 */ _reent *ptr, /* v1 3 */ char *str, /* a2 6 */ char *fmt) {
	/* 0x0(sp) */ FILE f;
}

/* 00286348 00000090 */ int sprintf(/* t4 12 */ char *str, /* a1 5 */ char *fmt) {
	/* 0x0(sp) */ FILE f;
}

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libc/stdio/sscanf.c
// *****************************************************************************

/* 002863d8 00000008 */ static int eofread(/* a0 4 */ void *cookie, /* a1 5 */ char *buf, /* a2 6 */ int len) {}

/* 002863e0 000000a8 */ int sscanf(/* v0 2 */ char *str, /* s0 16 */ char *fmt) {
	/* 0x0(sp) */ FILE f;
}

// *****************************************************************************
// FILE -- ../../../../../../src/newlib/libc/machine/r5900/strcat.S
// *****************************************************************************

/* 00286488 0000012c */ strcat() {}

// *****************************************************************************
// FILE -- ../../../../../../src/newlib/libc/machine/r5900/strcmp.S
// *****************************************************************************

/* 002865b4 00000144 */ strcmp() {}

// *****************************************************************************
// FILE -- ../../../../../../src/newlib/libc/machine/r5900/strcpy.S
// *****************************************************************************

/* 002866f8 00000114 */ strcpy() {}

// *****************************************************************************
// FILE -- ../../../../../../src/newlib/libc/machine/r5900/strlen.S
// *****************************************************************************

/* 0028680c 00000138 */ strlen() {}

// *****************************************************************************
// FILE -- ../../../../../../src/newlib/libc/machine/r5900/strncmp.S
// *****************************************************************************

/* 00286948 000001b8 */ strncmp() {}

// *****************************************************************************
// FILE -- ../../../../../../src/newlib/libc/machine/r5900/strncpy.S
// *****************************************************************************

/* 00286b00 000001bc */ strncpy() {}

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libc/stdio/vfprintf.c
// *****************************************************************************

/* 00286cc0 00000048 */ static int __sprint(/* a0 4 */ FILE *fp, /* s0 16 */ __suio *uio) {}

/* 00286d08 000000b4 */ static int __sbprintf(/* s0 16 */ FILE *fp, /* a1 5 */ char *fmt, /* a2 6 */ va_list ap) {
	/* s1 17 */ int ret;
	/* 0x0(sp) */ FILE fake;
	/* 0x60(sp) */ unsigned char buf[1024];
}

/* 00286dc0 00000074 */ int vfprintf(/* s0 16 */ FILE *fp, /* s1 17 */ char *fmt0, /* s2 18 */ va_list ap) {}

/* 00286e38 00001660 */ int _vfprintf_r(/* 0x1e4(sp) */ _reent *data, /* 0x1e8(sp) */ FILE *fp, /* s0 16 */ char *fmt0, /* s6 22 */ va_list ap) {
	/* s2 18 */ char *fmt;
	/* s1 17 */ int ch;
	/* s0 16 */ int n;
	/* s1 17 */ int m;
	/* s5 21 */ char *cp;
	/* s3 19 */ __siov *iovp;
	/* s7 23 */ int flags;
	/* 0x1ec(sp) */ int ret;
	/* 0x1f0(sp) */ int width;
	/* s4 20 */ int prec;
	/* 0x1d1(sp) */ char sign;
	/* 0x1d4(sp) */ wchar_t wc;
	/* 0x1f4(sp) */ char *decimal_point;
	/* 0x1d0(sp) */ char softsign;
	/* 0x1f8(sp) */ double _double;
	/* 0x1dc(sp) */ int expt;
	/* 0x200(sp) */ int expsize;
	/* 0x1e0(sp) */ int ndig;
	/* 0x0(sp) */ char expstr[7];
	/* s0 16 */ u_long _uquad;
	/* v1 3 */ enum {
		OCT = 0,
		DEC = 1,
		HEX = 2
	} base;
	/* 0x204(sp) */ int dprec;
	/* 0x208(sp) */ int realsz;
	/* fp 30 */ int size;
	/* 0x20c(sp) */ char *xdigs;
	/* 0x10(sp) */ __suio uio;
	/* 0x20(sp) */ __siov iov[8];
	/* 0x60(sp) */ char buf[348];
	/* 0x1c0(sp) */ char ox[2];
	/* 0x1d8(sp) */ int state;
	/* rdata 670130 */ static char blanks[16];
	/* rdata 670140 */ static char zeroes[16];
	/* v0 2 */ char *p;
}

/* 00288498 000001c0 */ static char* cvt(/* s6 22 */ _reent *data, /* s2 18 */ double value, /* s3 19 */ int ndigits, /* s7 23 */ int flags, /* s0 16 */ char *sign, /* s5 21 */ int *decpt, /* s1 17 */ int ch, /* fp 30 */ int *length) {
	/* s4 20 */ int mode;
	/* 0x0(sp) */ int dsgn;
	/* s4 20 */ char *digits;
	/* s0 16 */ char *bp;
	/* 0x4(sp) */ char *rve;
	/* v0 2 */ double_union tmp;
}

/* 00288658 000000dc */ static int exponent(/* a0 4 */ char *p0, /* a1 5 */ int exp, /* a2 6 */ int fmtch) {
	/* a2 6 */ char *p;
	/* a3 7 */ char *t;
	/* 0x0(sp) */ char expbuf[308];
}

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libc/stdio/vfscanf.c
// *****************************************************************************

/* 00288738 00000c8c */ int __svfscanf(/* s2 18 */ FILE *fp, /* a1 5 */ char *fmt0, /* s7 23 */ va_list ap) {
	/* s5 21 */ char *fmt;
	/* s0 16 */ int c;
	/* s4 20 */ size_t width;
	/* s3 19 */ char *p;
	/* s0 16 */ int n;
	/* s1 17 */ int flags;
	/* s0 16 */ char *p0;
	/* 0x260(sp) */ int nassigned;
	/* t0 8 */ int nread;
	/* fp 30 */ int base;
	/* v1 3 */ wchar_t wc;
	/* 0x264(sp) */ long unsigned int (*ccfn)(/* parameters unknown */);
	/* 0x0(sp) */ char ccltab[256];
	/* 0x100(sp) */ char buf[350];
	/* s1 17 */ char *lptr;
	/* v1 3 */ short int *sp;
	/* v1 3 */ int *ip;
	/* s0 16 */ float *flp;
	/* v0 2 */ long double *ldp;
	/* v0 2 */ double *dp;
	/* v0 2 */ long int *lp;
	/* rdata 670340 */ static short int basefix[17];
	/* s1 17 */ size_t sum;
	/* v0 2 */ size_t r;
	/* a1 5 */ long unsigned int res;
	/* 0x268(sp) */ long int leading_zeroes;
	/* s6 22 */ long int zeroes;
	/* a3 7 */ long int exp_adjust;
	/* 0x270(sp) */ char *exp_start;
	/* a0 4 */ double res;
	/* a2 6 */ long int new_exp;
}

/* 002893c8 00000100 */ char* __sccl(/* a0 4 */ char *tab, /* a1 5 */ char *fmt) {
	/* a2 6 */ int c;
	/* a3 7 */ int n;
	/* t0 8 */ int v;
}

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libc/stdio/vsprintf.c
// *****************************************************************************

/* 002894c8 00000054 */ int vsprintf(/* a3 7 */ char *str, /* a1 5 */ char *fmt, /* a2 6 */ va_list ap) {
	/* 0x0(sp) */ FILE f;
}

/* 00289520 00000054 */ int vsprintf_r(/* a0 4 */ _reent *ptr, /* t0 8 */ char *str, /* a2 6 */ char *fmt, /* a3 7 */ va_list ap) {
	/* 0x0(sp) */ FILE f;
}

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libc/stdio/wsetup.c
// *****************************************************************************

/* 00289578 0000010c */ int __swsetup(/* s0 16 */ FILE *fp) {}

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libc/stdlib/atof.c
// *****************************************************************************

/* 00289688 00000018 */ double atof(/* a0 4 */ char *s) {}

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libc/stdlib/atol.c
// *****************************************************************************

/* 002896a0 0000001c */ long int atol(/* a0 4 */ char *s) {}

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libc/stdlib/dtoa.c
// *****************************************************************************

/* 002896c0 0000022c */ static int quorem(/* s4 20 */ _Bigint *b, /* t6 14 */ _Bigint *S) {
	/* s0 16 */ int n;
	/* t4 12 */ __int32_t borrow;
	/* v1 3 */ __int32_t y;
	/* v1 3 */ __ULong carry;
	/* s2 18 */ __ULong q;
	/* v0 2 */ __ULong ys;
	/* t2 10 */ __ULong *bx;
	/* t1 9 */ __ULong *bxe;
	/* t3 11 */ __ULong *sx;
	/* s3 19 */ __ULong *sxe;
	/* a1 5 */ __int32_t z;
	/* a0 4 */ __ULong si;
	/* t0 8 */ __ULong zs;
}

/* 002898f0 00001264 */ char* _dtoa_r(/* s7 23 */ _reent *ptr, /* a1 5 */ double _d, /* 0x8(sp) */ int mode, /* 0xc(sp) */ int ndigits, /* 0x10(sp) */ int *decpt, /* s0 16 */ int *sign, /* 0x14(sp) */ char **rve) {
	/* 0x4(sp) */ int bbits;
	/* 0x18(sp) */ int b2;
	/* 0x1c(sp) */ int b5;
	/* 0x0(sp) */ int be;
	/* s4 20 */ int dig;
	/* s3 19 */ int i;
	/* s3 19 */ int ieps;
	/* 0x20(sp) */ int ilim;
	/* 0x24(sp) */ int ilim0;
	/* 0x28(sp) */ int ilim1;
	/* s0 16 */ int j;
	/* s1 17 */ int j1;
	/* fp 30 */ int k;
	/* 0x2c(sp) */ int k0;
	/* 0x30(sp) */ int k_check;
	/* 0x34(sp) */ int leftright;
	/* s1 17 */ int m2;
	/* s2 18 */ int m5;
	/* 0x38(sp) */ int s2;
	/* 0x3c(sp) */ int s5;
	/* s0 16 */ int spec_case;
	/* s1 17 */ int try_quick;
	/* s4 20 */ double_union d;
	/* s6 22 */ double_union d2;
	/* s2 18 */ double_union eps;
	/* s0 16 */ __int32_t L;
	/* 0x40(sp) */ int denorm;
	/* s0 16 */ __ULong x;
	/* 0x44(sp) */ _Bigint *b;
	/* s0 16 */ _Bigint *b1;
	/* s2 18 */ _Bigint *delta;
	/* 0x48(sp) */ _Bigint *mlo;
	/* 0x4c(sp) */ _Bigint *mhi;
	/* 0x50(sp) */ _Bigint *S;
	/* s1 17 */ double ds;
	/* s5 21 */ char *s;
}

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libc/stdio/fflush.c
// *****************************************************************************

/* 0028ab58 00000114 */ int fflush(/* s1 17 */ FILE *fp) {
	/* s2 18 */ unsigned char *p;
	/* s0 16 */ int n;
	/* v1 3 */ int t;
}

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libc/stdio/findfp.c
// *****************************************************************************

/* 0028ac70 0000005c */ static void std(/* a0 4 */ FILE *ptr, /* a1 5 */ int flags, /* a2 6 */ int file, /* a3 7 */ _reent *data) {}

/* 0028acd0 00000078 */ _glue* __sfmoreglue(/* a0 4 */ _reent *d, /* s2 18 */ int n) {
	/* s1 17 */ _glue *g;
	/* v1 3 */ FILE *p;
}

/* 0028ad48 000000f8 */ FILE* __sfp(/* s1 17 */ _reent *d) {
	/* a0 4 */ FILE *fp;
	/* v1 3 */ int n;
	/* s0 16 */ _glue *g;
}

/* 0028ae40 0000001c */ void _cleanup_r(/* a0 4 */ _reent *ptr) {}
/* 0028ae60 0000001c */ void _cleanup() {}
/* 0028ae80 0000008c */ void __sinit(/* s0 16 */ _reent *s) {}

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libc/stdio/fread.c
// *****************************************************************************

/* 0028af10 0000011c */ size_t fread(/* a0 4 */ void *buf, /* s4 20 */ size_t size, /* s6 22 */ size_t count, /* s1 17 */ FILE *fp) {
	/* s3 19 */ size_t resid;
	/* s2 18 */ char *p;
	/* s0 16 */ int r;
	/* s5 21 */ size_t total;
}

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libc/stdlib/mallocr.c
// *****************************************************************************

/* 0028b030 000002f4 */ void _free_r(/* s1 17 */ _reent *reent_ptr, /* s0 16 */ void *mem) {
	/* t1 9 */ mchunkptr p;
	/* a2 6 */ size_t hd;
	/* t0 8 */ size_t sz;
	/* a1 5 */ int idx;
	/* a1 5 */ mchunkptr next;
	/* a0 4 */ size_t nextsz;
	/* v1 3 */ size_t prevsz;
	/* a3 7 */ mchunkptr bck;
	/* a2 6 */ mchunkptr fwd;
	/* t3 11 */ int islr;
}

/* 0028b328 0000016c */ int _malloc_trim_r(/* s1 17 */ _reent *reent_ptr, /* s0 16 */ size_t pad) {
	/* s2 18 */ long int top_size;
	/* s0 16 */ long int extra;
	/* a3 7 */ char *current_brk;
}

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libc/stdio/fvwrite.c
// *****************************************************************************

/* 0028b498 000003e0 */ int __sfvwrite(/* s1 17 */ FILE *fp, /* s6 22 */ __suio *uio) {
	/* s2 18 */ size_t len;
	/* s3 19 */ char *p;
	/* s4 20 */ __siov *iov;
	/* s0 16 */ int w;
	/* a1 5 */ int s;
	/* v0 2 */ char *nl;
	/* s7 23 */ int nlknown;
	/* s5 21 */ int nldist;
}

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libc/stdio/fwalk.c
// *****************************************************************************

/* 0028b878 00000094 */ int _fwalk(/* a0 4 */ _reent *ptr, /* s4 20 */ int (*function)(/* parameters unknown */)) {
	/* s1 17 */ FILE *fp;
	/* s0 16 */ int n;
	/* s3 19 */ int ret;
	/* s2 18 */ _glue *g;
}

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libc/locale/locale.c
// *****************************************************************************

/* 0028b910 0000008c */ char* _setlocale_r(/* s1 17 */ _reent *p, /* s2 18 */ int category, /* s0 16 */ char *locale) {}
/* 0028b9a0 0000000c */ lconv* _localeconv_r(/* a0 4 */ _reent *data) {}
/* 0028b9b0 00000024 */ char* setlocale(/* a0 4 */ int category, /* a2 6 */ char *locale) {}
/* 0028b9d8 0000001c */ lconv* localeconv() {}

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libc/stdio/makebuf.c
// *****************************************************************************

/* 0028b9f8 00000154 */ void __smakebuf(/* s0 16 */ FILE *fp) {
	/* s1 17 */ size_t size;
	/* s2 18 */ size_t couldbetty;
	/* a1 5 */ void *p;
	/* 0x0(sp) */ stat st;
}

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libc/stdlib/mbtowc_r.c
// *****************************************************************************

/* 0028bb50 00000034 */ int _mbtowc_r(/* a0 4 */ _reent *r, /* v1 3 */ wchar_t *pwc, /* a2 6 */ char *s, /* a3 7 */ size_t n, /* t0 8 */ int *state) {
	/* 0x0(sp) */ wchar_t dummy;
}

// *****************************************************************************
// FILE -- ../../../../../../src/newlib/libc/machine/r5900/memchr.S
// *****************************************************************************

/* 0028bb84 000000e0 */ memchr() {}

// *****************************************************************************
// FILE -- ../../../../../../src/newlib/libc/machine/r5900/memmove.S
// *****************************************************************************

/* 0028bc64 00000104 */ memmove() {}

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libc/stdlib/mprec.c
// *****************************************************************************

/* 0028bd68 000000a4 */ _Bigint* _Balloc(/* s0 16 */ _reent *ptr, /* s1 17 */ int k) {
	/* s0 16 */ int x;
	/* v1 3 */ _Bigint *rv;
}

/* 0028be10 0000002c */ void _Bfree(/* a0 4 */ _reent *ptr, /* a1 5 */ _Bigint *v) {}

/* 0028be40 00000108 */ _Bigint* _multadd(/* s4 20 */ _reent *ptr, /* s1 17 */ _Bigint *b, /* t0 8 */ int m, /* s3 19 */ int a) {
	/* t1 9 */ int i;
	/* s2 18 */ int wds;
	/* a3 7 */ __ULong *x;
	/* a0 4 */ __ULong y;
	/* v1 3 */ __ULong xi;
	/* v1 3 */ __ULong z;
	/* s0 16 */ _Bigint *b1;
}

/* 0028bf48 00000130 */ _Bigint* _s2b(/* s3 19 */ _reent *ptr, /* s0 16 */ char *s, /* s2 18 */ int nd0, /* s4 20 */ int nd, /* s1 17 */ __ULong y9) {
	/* a1 5 */ _Bigint *b;
	/* s1 17 */ int i;
	/* a1 5 */ int k;
	/* a3 7 */ __int32_t y;
}

/* 0028c078 00000080 */ int _hi0bits(/* a0 4 */ __ULong x) {
	/* a1 5 */ int k;
}

/* 0028c0f8 000000bc */ int _lo0bits(/* a0 4 */ __ULong *y) {
	/* v1 3 */ int k;
	/* a1 5 */ __ULong x;
}

/* 0028c1b8 00000038 */ _Bigint* _i2b(/* a0 4 */ _reent *ptr, /* s0 16 */ int i) {
	/* a0 4 */ _Bigint *b;
}

/* 0028c1f0 0000020c */ _Bigint* _multiply(/* a0 4 */ _reent *ptr, /* s0 16 */ _Bigint *a, /* s2 18 */ _Bigint *b) {
	/* t8 24 */ _Bigint *c;
	/* v0 2 */ int k;
	/* s4 20 */ int wc;
	/* t2 10 */ __ULong carry;
	/* t1 9 */ __ULong y;
	/* v0 2 */ __ULong z;
	/* t0 8 */ __ULong *x;
	/* t5 13 */ __ULong *xa;
	/* t6 14 */ __ULong *xae;
	/* t3 11 */ __ULong *xb;
	/* s1 17 */ __ULong *xbe;
	/* a3 7 */ __ULong *xc;
	/* t4 12 */ __ULong *xc0;
	/* v0 2 */ __ULong z2;
}

/* 0028c400 000000fc */ _Bigint* _pow5mult(/* s3 19 */ _reent *ptr, /* s2 18 */ _Bigint *b, /* s1 17 */ int k) {
	/* v0 2 */ _Bigint *b1;
	/* s0 16 */ _Bigint *p5;
	/* v1 3 */ _Bigint *p51;
	/* v0 2 */ int i;
	/* rdata 670850 */ static int p05[3];
}

/* 0028c500 00000158 */ _Bigint* _lshift(/* s5 21 */ _reent *ptr, /* s3 19 */ _Bigint *b, /* s0 16 */ int k) {
	/* a2 6 */ int i;
	/* a1 5 */ int k1;
	/* s1 17 */ int n;
	/* s2 18 */ int n1;
	/* s4 20 */ _Bigint *b1;
	/* a0 4 */ __ULong *x;
	/* a3 7 */ __ULong *x1;
	/* a2 6 */ __ULong *xe;
	/* v1 3 */ __ULong z;
}

/* 0028c658 00000068 */ int __mcmp(/* a0 4 */ _Bigint *a, /* a1 5 */ _Bigint *b) {
	/* a3 7 */ __ULong *xa;
	/* t2 10 */ __ULong *xa0;
	/* t1 9 */ __ULong *xb;
	/* v0 2 */ __ULong *xb0;
	/* v0 2 */ int i;
	/* v1 3 */ int j;
}

/* 0028c6c0 00000190 */ _Bigint* __mdiff(/* s3 19 */ _reent *ptr, /* s1 17 */ _Bigint *a, /* s2 18 */ _Bigint *b) {
	/* t3 11 */ _Bigint *c;
	/* s0 16 */ int i;
	/* t4 12 */ int wa;
	/* v0 2 */ int wb;
	/* t2 10 */ __int32_t borrow;
	/* v1 3 */ __int32_t y;
	/* t0 8 */ __ULong *xa;
	/* t5 13 */ __ULong *xae;
	/* t1 9 */ __ULong *xb;
	/* a2 6 */ __ULong *xbe;
	/* a3 7 */ __ULong *xc;
	/* a1 5 */ __int32_t z;
}

/* 0028c850 000000d0 */ double _ulp(/* a0 4 */ double _x) {
	/* a1 5 */ double_union a;
	/* a0 4 */ __int32_t L;
}

/* 0028c920 00000198 */ double _b2d(/* a0 4 */ _Bigint *a, /* s0 16 */ int *e) {
	/* s2 18 */ __ULong *xa;
	/* s4 20 */ __ULong *xa0;
	/* a0 4 */ __ULong w;
	/* s3 19 */ __ULong y;
	/* a3 7 */ __ULong z;
	/* a2 6 */ int k;
	/* s1 17 */ double_union d;
}

/* 0028cab8 00000184 */ _Bigint* _d2b(/* a0 4 */ _reent *ptr, /* a1 5 */ double _d, /* s4 20 */ int *e, /* s5 21 */ int *bits) {
	/* s0 16 */ double_union d;
	/* s3 19 */ _Bigint *b;
	/* s2 18 */ int de;
	/* s0 16 */ int i;
	/* a1 5 */ int k;
	/* s1 17 */ __ULong *x;
	/* 0x0(sp) */ __ULong y;
	/* 0x4(sp) */ __ULong z;
}

/* 0028cc40 000000cc */ double _ratio(/* s0 16 */ _Bigint *a, /* s1 17 */ _Bigint *b) {
	/* s2 18 */ double_union da;
	/* t0 8 */ double_union db;
	/* v0 2 */ int k;
	/* 0x0(sp) */ int ka;
	/* 0x4(sp) */ int kb;
}

/* 0028cd10 00000070 */ double _mprec_log10(/* s0 16 */ int dig) {
	/* a0 4 */ double v;
}

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libc/stdio/refill.c
// *****************************************************************************

/* 0028cd80 00000034 */ static int lflush(/* a0 4 */ FILE *fp) {}
/* 0028cdb8 0000017c */ int __srefill(/* s0 16 */ FILE *fp) {}

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/math/s_isinf.c
// *****************************************************************************

/* 0028cf38 00000048 */ int isinf(/* a0 4 */ double x) {
	/* a0 4 */ __int32_t hx;
}

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/math/s_isnan.c
// *****************************************************************************

/* 0028cf80 0000003c */ int isnan(/* a0 4 */ double x) {
	/* v0 2 */ __int32_t hx;
}

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libc/stdio/stdio.c
// *****************************************************************************

/* 0028cfc0 00000064 */ int __sread(/* s0 16 */ void *cookie, /* a1 5 */ char *buf, /* a3 7 */ int n) {
	/* a0 4 */ int ret;
}

/* 0028d028 00000080 */ int __swrite(/* s0 16 */ void *cookie, /* s1 17 */ char *buf, /* s2 18 */ int n) {}

/* 0028d0a8 00000064 */ fpos_t __sseek(/* s0 16 */ void *cookie, /* a1 5 */ fpos_t offset, /* a3 7 */ int whence) {
	/* v1 3 */ off_t ret;
}

/* 0028d110 0000001c */ int __sclose(/* a0 4 */ void *cookie) {}

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libc/stdlib/strtod.c
// *****************************************************************************

/* 0028d130 00000f14 */ double _strtod_r(/* fp 30 */ _reent *ptr, /* a1 5 */ char *s00, /* 0x8(sp) */ char **se) {
	/* s2 18 */ int bb2;
	/* a2 6 */ int bb5;
	/* 0x0(sp) */ int bbe;
	/* s1 17 */ int bd2;
	/* s7 23 */ int bd5;
	/* 0x4(sp) */ int bbbits;
	/* s5 21 */ int bs2;
	/* a0 4 */ int c;
	/* s5 21 */ int dsign;
	/* s0 16 */ int e1;
	/* t1 9 */ int esign;
	/* a0 4 */ int i;
	/* s4 20 */ int j;
	/* s4 20 */ int k;
	/* s2 18 */ int nd;
	/* s7 23 */ int nd0;
	/* t0 8 */ int nf;
	/* a3 7 */ int nz;
	/* t2 10 */ int nz0;
	/* 0xc(sp) */ int sign;
	/* 0x10(sp) */ long int e;
	/* s6 22 */ char *s;
	/* 0x18(sp) */ char *s0;
	/* a2 6 */ char *s1;
	/* s0 16 */ double aadj;
	/* s1 17 */ double aadj1;
	/* s1 17 */ long unsigned int z;
	/* 0x20(sp) */ __ULong y;
	/* s3 19 */ double_union rv;
	/* s4 20 */ double_union rv0;
	/* 0x30(sp) */ _Bigint *bb;
	/* s0 16 */ _Bigint *bb1;
	/* 0x34(sp) */ _Bigint *bd;
	/* 0x38(sp) */ _Bigint *bd0;
	/* 0x3c(sp) */ _Bigint *bs;
	/* 0x40(sp) */ _Bigint *delta;
}

/* 0028e048 00000024 */ double strtod(/* a0 4 */ char *s00, /* a2 6 */ char **se) {}
/* 0028e070 00000028 */ float strtodf(/* a0 4 */ char *s00, /* a1 5 */ char **se) {}

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libc/stdlib/strtol.c
// *****************************************************************************

/* 0028e098 00000238 */ long int _strtol_r(/* 0x0(sp) */ _reent *rptr, /* s5 21 */ char *nptr, /* fp 30 */ char **endptr, /* s3 19 */ int base) {
	/* s2 18 */ char *s;
	/* a1 5 */ long unsigned int acc;
	/* s1 17 */ int c;
	/* s4 20 */ long unsigned int cutoff;
	/* s7 23 */ int neg;
	/* a2 6 */ int any;
	/* s6 22 */ int cutlim;
}

/* 0028e2d0 0000002c */ long int strtol(/* a0 4 */ char *s, /* v0 2 */ char **ptr, /* a3 7 */ int base) {}

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libc/stdlib/strtoul.c
// *****************************************************************************

/* 0028e300 0000022c */ long unsigned int _strtoul_r(/* 0x0(sp) */ _reent *rptr, /* s5 21 */ char *nptr, /* fp 30 */ char **endptr, /* s3 19 */ int base) {
	/* s2 18 */ char *s;
	/* a1 5 */ long unsigned int acc;
	/* s1 17 */ int c;
	/* s4 20 */ long unsigned int cutoff;
	/* 0x4(sp) */ int neg;
	/* s0 16 */ int any;
	/* s6 22 */ int cutlim;
}

/* 0028e530 0000002c */ long unsigned int strtoul(/* a0 4 */ char *s, /* v0 2 */ char **ptr, /* a3 7 */ int base) {}

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libc/stdio/ungetc.c
// *****************************************************************************

/* 0028e560 000000e8 */ int __submore(/* s2 18 */ FILE *fp) {
	/* s3 19 */ int i;
	/* s1 17 */ unsigned char *p;
}

/* 0028e648 00000188 */ int ungetc(/* s1 17 */ int c, /* s0 16 */ FILE *fp) {}

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libc/reent/writer.c
// *****************************************************************************

/* 0028e7d0 00000060 */ _ssize_t _write_r(/* s0 16 */ _reent *ptr, /* a1 5 */ int fd, /* a2 6 */ void *buf, /* a3 7 */ size_t cnt) {
	/* v1 3 */ long int ret;
}

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libc/stdlib/mallocr.c
// *****************************************************************************

/* 0028e830 000000b4 */ void* _calloc_r(/* a0 4 */ _reent *reent_ptr, /* a1 5 */ size_t n, /* a2 6 */ size_t elem_size) {
	/* v0 2 */ size_t csz;
	/* s0 16 */ void *mem;
	/* a3 7 */ size_t mzsz;
	/* v1 3 */ size_t *mz;
}

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libc/reent/closer.c
// *****************************************************************************

/* 0028e8e8 00000058 */ int _close_r(/* s0 16 */ _reent *ptr, /* a1 5 */ int fd) {
	/* a0 4 */ int ret;
}

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libc/reent/fstatr.c
// *****************************************************************************

/* 0028e940 0000005c */ int _fstat_r(/* s0 16 */ _reent *ptr, /* a1 5 */ int fd, /* a2 6 */ stat *pstat) {
	/* v1 3 */ int ret;
}

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libc/reent/lseekr.c
// *****************************************************************************

/* 0028e9a0 00000060 */ _off_t _lseek_r(/* s0 16 */ _reent *ptr, /* a1 5 */ int fd, /* a2 6 */ off_t pos, /* a3 7 */ int whence) {
	/* a0 4 */ off_t ret;
}

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libc/reent/readr.c
// *****************************************************************************

/* 0028ea00 00000060 */ _ssize_t _read_r(/* s0 16 */ _reent *ptr, /* a1 5 */ int fd, /* a2 6 */ void *buf, /* a3 7 */ size_t cnt) {
	/* v1 3 */ long int ret;
}

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libc/stdlib/mallocr.c
// *****************************************************************************

/* 0028ea60 000005a0 */ void* _realloc_r(/* fp 30 */ _reent *reent_ptr, /* s1 17 */ void *oldmem, /* s2 18 */ size_t bytes) {
	/* s6 22 */ size_t nb;
	/* s3 19 */ mchunkptr oldp;
	/* s5 21 */ size_t oldsize;
	/* s0 16 */ mchunkptr newp;
	/* s7 23 */ size_t newsize;
	/* s2 18 */ void *newmem;
	/* a2 6 */ mchunkptr next;
	/* a3 7 */ size_t nextsize;
	/* s4 20 */ mchunkptr prev;
	/* a0 4 */ size_t prevsize;
	/* a1 5 */ mchunkptr remainder;
	/* a0 4 */ size_t remainder_size;
	/* v0 2 */ mchunkptr bck;
	/* a0 4 */ mchunkptr fwd;
	/* a2 6 */ size_t mcsz;
	/* t0 8 */ size_t *mcsrc;
	/* a3 7 */ size_t *mcdst;
	/* a2 6 */ size_t mcsz;
	/* a2 6 */ size_t mcsz;
	/* t0 8 */ size_t *mcsrc;
	/* a3 7 */ size_t *mcdst;
	/* a2 6 */ size_t mcsz;
	/* a3 7 */ size_t *mcsrc;
	/* a1 5 */ size_t *mcdst;
}

// *****************************************************************************
// FILE -- klib.s
// *****************************************************************************

/* 0028f000 00000010 */ RFU000_FullReset() {}
/* 0028f010 00000010 */ ResetEE() {}
/* 0028f020 00000010 */ SetGsCrt() {}
/* 0028f030 00000010 */ RFU003() {}
/* 0028f040 00000010 */ _Exit() {}
/* 0028f050 00000010 */ RFU005() {}
/* 0028f060 00000010 */ _LoadExecPS2() {}
/* 0028f070 00000010 */ _ExecPS2() {}
/* 0028f080 00000010 */ RFU008() {}
/* 0028f090 00000010 */ RFU009() {}
/* 0028f0a0 00000010 */ AddSbusIntcHandler() {}
/* 0028f0b0 00000010 */ RemoveSbusIntcHandler() {}
/* 0028f0c0 00000010 */ Interrupt2Iop() {}
/* 0028f0d0 00000010 */ SetVTLBRefillHandler() {}
/* 0028f0e0 00000010 */ SetVCommonHandler() {}
/* 0028f0f0 00000010 */ SetVInterruptHandler() {}
/* 0028f100 00000010 */ AddIntcHandler() {}
/* 0028f110 00000010 */ AddIntcHandler2() {}
/* 0028f120 00000010 */ RemoveIntcHandler() {}
/* 0028f130 00000010 */ AddDmacHandler() {}
/* 0028f140 00000010 */ AddDmacHandler2() {}
/* 0028f150 00000010 */ RemoveDmacHandler() {}
/* 0028f160 00000010 */ _EnableIntc() {}
/* 0028f170 00000010 */ _DisableIntc() {}
/* 0028f180 00000010 */ _EnableDmac() {}
/* 0028f190 00000010 */ _DisableDmac() {}
/* 0028f1a0 00000010 */ SetAlarm() {}
/* 0028f1b0 00000010 */ ReleaseAlarm() {}
/* 0028f1c0 00000010 */ _iEnableIntc() {}
/* 0028f1d0 00000010 */ _iDisableIntc() {}
/* 0028f1e0 00000010 */ _iEnableDmac() {}
/* 0028f1f0 00000010 */ _iDisableDmac() {}
/* 0028f200 00000010 */ iSetAlarm() {}
/* 0028f210 00000010 */ iReleaseAlarm() {}
/* 0028f220 00000010 */ CreateThread() {}
/* 0028f230 00000010 */ DeleteThread() {}
/* 0028f240 00000010 */ StartThread() {}
/* 0028f250 00000010 */ ExitThread() {}
/* 0028f260 00000010 */ ExitDeleteThread() {}
/* 0028f270 00000010 */ TerminateThread() {}
/* 0028f280 00000010 */ iTerminateThread() {}
/* 0028f290 00000010 */ DisableDispatchThread() {}
/* 0028f2a0 00000010 */ EnableDispatchThread() {}
/* 0028f2b0 00000010 */ ChangeThreadPriority() {}
/* 0028f2c0 00000010 */ iChangeThreadPriority() {}
/* 0028f2d0 00000010 */ RotateThreadReadyQueue() {}
/* 0028f2e0 00000010 */ _iRotateThreadReadyQueue() {}
/* 0028f2f0 00000010 */ ReleaseWaitThread() {}
/* 0028f300 00000010 */ iReleaseWaitThread() {}
/* 0028f310 00000010 */ GetThreadId() {}
/* 0028f320 00000010 */ ReferThreadStatus() {}
/* 0028f330 00000010 */ iReferThreadStatus() {}
/* 0028f340 00000010 */ SleepThread() {}
/* 0028f350 00000010 */ WakeupThread() {}
/* 0028f360 00000010 */ _iWakeupThread() {}
/* 0028f370 00000010 */ CancelWakeupThread() {}
/* 0028f380 00000010 */ iCancelWakeupThread() {}
/* 0028f390 00000010 */ SuspendThread() {}
/* 0028f3a0 00000010 */ _iSuspendThread() {}
/* 0028f3b0 00000010 */ ResumeThread() {}
/* 0028f3c0 00000010 */ iResumeThread() {}
/* 0028f3d0 00000010 */ JoinThread() {}
/* 0028f3e0 00000010 */ RFU060() {}
/* 0028f3f0 00000010 */ RFU061() {}
/* 0028f400 00000010 */ EndOfHeap() {}
/* 0028f410 00000010 */ RFU063() {}
/* 0028f420 00000010 */ CreateSema() {}
/* 0028f430 00000010 */ DeleteSema() {}
/* 0028f440 00000010 */ SignalSema() {}
/* 0028f450 00000010 */ iSignalSema() {}
/* 0028f460 00000010 */ WaitSema() {}
/* 0028f470 00000010 */ PollSema() {}
/* 0028f480 00000010 */ iPollSema() {}
/* 0028f490 00000010 */ ReferSemaStatus() {}
/* 0028f4a0 00000010 */ iReferSemaStatus() {}
/* 0028f4b0 00000010 */ RFU073() {}
/* 0028f4c0 00000010 */ SetOsdConfigParam() {}
/* 0028f4d0 00000010 */ GetOsdConfigParam() {}
/* 0028f4e0 00000010 */ GetGsHParam() {}
/* 0028f4f0 00000010 */ GetGsVParam() {}
/* 0028f500 00000010 */ SetGsHParam() {}
/* 0028f510 00000010 */ SetGsVParam() {}
/* 0028f520 00000010 */ RFU080_CreateEventFlag() {}
/* 0028f530 00000010 */ RFU081_DeleteEventFlag() {}
/* 0028f540 00000010 */ RFU082_SetEventFlag() {}
/* 0028f550 00000010 */ RFU083_iSetEventFlag() {}
/* 0028f560 00000010 */ RFU084_ClearEventFlag() {}
/* 0028f570 00000010 */ RFU085_iClearEventFlag() {}
/* 0028f580 00000010 */ RFU086_WaitEvnetFlag() {}
/* 0028f590 00000010 */ RFU087_PollEvnetFlag() {}
/* 0028f5a0 00000010 */ RFU088_iPollEvnetFlag() {}
/* 0028f5b0 00000010 */ RFU089_ReferEventFlagStatus() {}
/* 0028f5c0 00000010 */ RFU090_iReferEventFlagStatus() {}
/* 0028f5d0 00000010 */ RFU091() {}
/* 0028f5e0 00000010 */ EnableIntcHandler() {}
/* 0028f5f0 00000010 */ iEnableIntcHandler() {}
/* 0028f600 00000010 */ DisableIntcHandler() {}
/* 0028f610 00000010 */ iDisableIntcHandler() {}
/* 0028f620 00000010 */ EnableDmacHandler() {}
/* 0028f630 00000010 */ iEnableDmacHandler() {}
/* 0028f640 00000010 */ DisableDmacHandler() {}
/* 0028f650 00000010 */ iDisableDmacHandler() {}
/* 0028f660 00000010 */ KSeg0() {}
/* 0028f670 00000010 */ EnableCache() {}
/* 0028f680 00000010 */ DisableCache() {}
/* 0028f690 00000010 */ GetCop0() {}
/* 0028f6a0 00000010 */ FlushCache() {}
/* 0028f6b0 00000010 */ CpuConfig() {}
/* 0028f6c0 00000010 */ iGetCop0() {}
/* 0028f6d0 00000010 */ iFlushCache() {}
/* 0028f6e0 00000010 */ iCpuConfig() {}
/* 0028f6f0 00000010 */ sceSifStopDma() {}
/* 0028f700 00000010 */ SetCPUTimerHandler() {}
/* 0028f710 00000010 */ SetCPUTimer() {}
/* 0028f720 00000010 */ SetOsdConfigParam2() {}
/* 0028f730 00000010 */ GetOsdConfigParam2() {}
/* 0028f740 00000010 */ GsGetIMR() {}
/* 0028f750 00000010 */ iGsGetIMR() {}
/* 0028f760 00000010 */ GsPutIMR() {}
/* 0028f770 00000010 */ iGsPutIMR() {}
/* 0028f780 00000010 */ SetPgifHandler() {}
/* 0028f790 00000010 */ SetVSyncFlag() {}
/* 0028f7a0 00000010 */ RFU116() {}
/* 0028f7b0 00000010 */ _print() {}
/* 0028f7c0 00000010 */ sceSifDmaStat() {}
/* 0028f7d0 00000010 */ isceSifDmaStat() {}
/* 0028f7e0 00000010 */ sceSifSetDma() {}
/* 0028f7f0 00000010 */ isceSifSetDma() {}
/* 0028f800 00000010 */ sceSifSetDChain() {}
/* 0028f810 00000010 */ isceSifSetDChain() {}
/* 0028f820 00000010 */ sceSifSetReg() {}
/* 0028f830 00000010 */ sceSifGetReg() {}
/* 0028f840 00000010 */ _ExecOSD() {}
/* 0028f850 00000010 */ Deci2Call() {}
/* 0028f860 00000010 */ PSMode() {}
/* 0028f870 00000010 */ MachineType() {}
/* 0028f880 00000010 */ GetMemorySize() {}
/* 0028f890 00000010 */ _InitTLB() {}

// *****************************************************************************
// FILE -- glue.c
// *****************************************************************************

/* 0028f8a0 0000000c */ sceResetttyinit() {}
/* 0028f8b0 00000090 */ VSync() {}
/* 0028f940 000000a4 */ VSync2() {}
/* 0028f9e8 0000007c */ write() {}
/* 0028fa68 00000074 */ read() {}
/* 0028fae0 00000028 */ open() {}
/* 0028fb08 00000008 */ close() {}
/* 0028fb10 00000008 */ ioctl() {}
/* 0028fb18 00000008 */ lseek() {}
/* 0028fb20 000000ac */ sbrk() {}
/* 0028fbd0 00000008 */ isatty() {}
/* 0028fbd8 00000014 */ fstat() {}
/* 0028fbf0 00000008 */ getpid() {}
/* 0028fbf8 00000028 */ kill() {}
/* 0028fc20 00000028 */ stat() {}
/* 0028fc48 00000028 */ unlink() {}

// *****************************************************************************
// FILE -- cache.c
// *****************************************************************************

/* 0028fc70 000000a4 */ _sceSDC() {}
/* 0028fd18 0000007c */ SyncDCache() {}
/* 0028fd98 00000014 */ iSyncDCache() {}
/* 0028fdb0 000000a4 */ _sceIDC() {}
/* 0028fe58 0000007c */ InvalidDCache() {}
/* 0028fed8 00000014 */ iInvalidDCache() {}

// *****************************************************************************
// FILE -- intr.c
// *****************************************************************************

/* 0028fef0 00000068 */ DisableIntc() {}
/* 0028ff58 00000068 */ EnableIntc() {}
/* 0028ffc0 00000068 */ DisableDmac() {}
/* 00290028 00000068 */ EnableDmac() {}
/* 00290090 00000020 */ iEnableIntc() {}
/* 002900b0 00000020 */ iDisableIntc() {}
/* 002900d0 00000020 */ iEnableDmac() {}
/* 002900f0 00000020 */ iDisableDmac() {}
/* 00290110 00000010 */ static setup() {}
/* 00290120 00000010 */ static Copy() {}
/* 00290130 00000038 */ static kCopy() {}
/* 00290168 00000010 */ static GetEntryAddress() {}
/* 00290178 000000d4 */ InitAlarm() {}

// *****************************************************************************
// FILE -- thread.c
// *****************************************************************************

/* 00290250 000000d8 */ static topThread() {}
/* 00290328 000000d4 */ InitThread() {}
/* 00290400 00000094 */ iWakeupThread() {}
/* 00290498 0000007c */ iRotateThreadReadyQueue() {}
/* 00290518 00000098 */ iSuspendThread() {}

// *****************************************************************************
// FILE -- tty.c
// *****************************************************************************

/* 002905b0 00000024 */ static QueueInit() {}
/* 002905d8 0000003c */ static QueuePeekWriteDone() {}
/* 00290618 0000003c */ static QueuePeekReadDone() {}
/* 00290658 00000194 */ static sceTtyHandler() {}
/* 002907f0 00000150 */ sceTtyWrite() {}
/* 00290940 000000d0 */ sceTtyRead() {}
/* 00290a10 000000bc */ sceTtyInit() {}

// *****************************************************************************
// FILE -- kprintf.c
// *****************************************************************************

/* 00290ad0 00000038 */ static kputchar() {}
/* 00290b08 000000b0 */ static deci2Putchar() {}
/* 00290bb8 00000034 */ static serialPutchar() {}
/* 00290bf0 00000090 */ static ftoi() {}
/* 00290c80 00000168 */ static printfloat() {}
/* 00290de8 000005c8 */ _printf() {}
/* 002913b0 00000038 */ kprintf() {}
/* 002913e8 00000060 */ scePrintf() {}

// *****************************************************************************
// FILE -- sifcmd.c
// *****************************************************************************

/* 00291448 0000001c */ static _set_sreg() {}
/* 00291468 0000000c */ static _change_addr() {}
/* 00291478 00000018 */ sceSifGetSreg() {}
/* 00291490 0000001c */ sceSifSetSreg() {}
/* 002914b0 0000000c */ sceSifGetDataTable() {}
/* 002914c0 00000280 */ sceSifInitCmd() {}
/* 00291740 00000034 */ sceSifExitCmd() {}
/* 00291778 00000018 */ sceSifSetCmdBuffer() {}
/* 00291790 00000018 */ sceSifSetSysCmdBuffer() {}
/* 002917a8 0000002c */ sceSifAddCmdHandler() {}
/* 002917d8 00000028 */ sceSifRemoveCmdHandler() {}
/* 00291800 00000134 */ static _sceSifSendCmd() {}
/* 00291938 0000003c */ sceSifSendCmd() {}
/* 00291978 0000003c */ isceSifSendCmd() {}
/* 002919b8 00000128 */ static _sceSifCmdIntrHdlr() {}
/* 00291ae0 000000b0 */ sceSifWriteBackDCache() {}

// *****************************************************************************
// FILE -- sifrpc.c
// *****************************************************************************

/* 00291b90 0000019c */ sceSifInitRpc() {}
/* 00291d30 00000024 */ sceSifExitRpc() {}
/* 00291d58 000000a8 */ static _sceRpcGetPacket() {}
/* 00291e00 0000001c */ static _sceRpcFreePacket() {}
/* 00291e20 00000030 */ static _sceRpcGetFPacket() {}
/* 00291e50 00000040 */ static _sceRpcGetFPacket2() {}
/* 00291e90 000000b4 */ static _request_end() {}
/* 00291f48 00000060 */ static _request_rdata() {}
/* 00291fa8 00000158 */ sceSifGetOtherData() {}
/* 00292100 0000004c */ static _search_svdata() {}
/* 00292150 000000b0 */ static _request_bind() {}
/* 00292200 00000140 */ sceSifBindRpc() {}
/* 00292340 0000008c */ static _request_call() {}
/* 002923d0 000001ec */ sceSifCallRpc() {}
/* 002925c0 0000003c */ sceSifCheckStatRpc() {}
/* 00292600 00000094 */ sceSifSetRpcQueue() {}
/* 00292698 000000d0 */ sceSifRegisterRpc() {}
/* 00292768 00000094 */ sceSifRemoveRpc() {}
/* 00292800 00000090 */ sceSifRemoveRpcQueue() {}
/* 00292890 00000058 */ sceSifGetNextRequest() {}
/* 002928e8 000001c4 */ sceSifExecRequest() {}
/* 00292ab0 00000040 */ sceSifRpcLoop() {}

// *****************************************************************************
// FILE -- filestub.c
// *****************************************************************************

/* 00292af0 0000005c */ static _sceFsIobSemaMK() {}
/* 00292b50 00000088 */ static new_iob() {}
/* 00292bd8 0000006c */ static get_iob() {}
/* 00292c48 000003c0 */ static _sceFs_Rcv_Intr() {}
/* 00293008 0000004c */ static _sceFsSemInit() {}
/* 00293058 0000002c */ static _sceFsWaitS() {}
/* 00293088 0000000c */ static _sceFsSigSema() {}
/* 00293098 00000090 */ scePowerOffHandler() {}
/* 00293128 0000002c */ static _sceFs_Poff_Intr() {}
/* 00293158 000001c8 */ sceFsInit() {}
/* 00293320 0000008c */ static _fs_version() {}
/* 002933b0 00000034 */ sceFsReset() {}
/* 002933e8 00000284 */ sceOpen() {}
/* 00293670 0000017c */ sceClose() {}
/* 002937f0 00000238 */ sceLseek() {}
/* 00293a28 00000270 */ sceRead() {}
/* 00293c98 000002c0 */ sceWrite() {}
/* 00293f58 0000034c */ sceIoctl() {}
/* 002942a8 000001dc */ sceIoctl2() {}
/* 00294488 000001a4 */ static _sceCallCode() {}
/* 00294630 0000001c */ sceRemove() {}
/* 00294650 000001ac */ sceMkdir() {}
/* 00294800 0000001c */ sceRmdir() {}
/* 00294820 0000026c */ sceFormat() {}
/* 00294a90 00000120 */ sceAddDrv() {}
/* 00294bb0 0000001c */ sceDelDrv() {}
/* 00294bd0 000000c8 */ sceDopen() {}
/* 00294c98 00000168 */ sceDclose() {}
/* 00294e00 00000158 */ sceDread() {}
/* 00294f58 000001a0 */ sceGetstat() {}
/* 002950f8 0000023c */ sceChstat() {}
/* 00295338 000001f0 */ sceRename() {}
/* 00295528 0000001c */ sceChdir() {}
/* 00295548 00000198 */ sceSync() {}
/* 002956e0 0000026c */ sceMount() {}
/* 00295950 0000001c */ sceUmount() {}
/* 00295970 00000238 */ sceLseek64() {}
/* 00295ba8 00000238 */ sceDevctl() {}
/* 00295de0 000001e0 */ sceSymlink() {}
/* 00295fc0 000001c8 */ sceReadlink() {}

// *****************************************************************************
// FILE -- iopheap.c
// *****************************************************************************

/* 00296188 00000088 */ sceSifInitIopHeap() {}
/* 00296210 00000070 */ sceSifAllocIopHeap() {}
/* 00296280 00000080 */ sceSifAllocSysMemory() {}
/* 00296300 00000078 */ sceSifFreeSysMemory() {}
/* 00296378 0000001c */ sceSifFreeIopHeap() {}
/* 00296398 000000f0 */ sceSifLoadIopHeap() {}

// *****************************************************************************
// FILE -- eeloadfile.c
// *****************************************************************************

/* 00296488 00000100 */ static _lf_bind() {}
/* 00296588 0000008c */ static _lf_version() {}
/* 00296618 00000038 */ sceSifLoadFileReset() {}
/* 00296650 00000208 */ static _sceSifLoadModuleBuffer() {}
/* 00296858 00000208 */ sceSifStopModule() {}
/* 00296a60 00000090 */ sceSifUnloadModule() {}
/* 00296af0 000000a0 */ sceSifSearchModuleByName() {}
/* 00296b90 00000090 */ sceSifSearchModuleByAddress() {}
/* 00296c20 0000001c */ sceSifLoadModuleBuffer() {}
/* 00296c40 0000001c */ sceSifLoadStartModuleBuffer() {}
/* 00296c60 00000224 */ static _sceSifLoadModule() {}
/* 00296e88 00000020 */ sceSifLoadModule() {}
/* 00296ea8 0000001c */ sceSifLoadStartModule() {}
/* 00296ec8 00000104 */ static _sceSifLoadElfPart() {}
/* 00296fd0 0000001c */ sceSifLoadElfPart() {}
/* 00296ff0 00000028 */ sceSifLoadElf() {}
/* 00297018 000000ec */ sceSifGetIopAddr() {}
/* 00297108 000000dc */ sceSifSetIopAddr() {}

// *****************************************************************************
// FILE -- iopreset.c
// *****************************************************************************

/* 002971e8 0000013c */ sceSifResetIop() {}
/* 00297328 00000028 */ sceSifIsAliveIop() {}
/* 00297350 00000038 */ sceSifSyncIop() {}
/* 00297388 00000110 */ sceSifRebootIop() {}

// *****************************************************************************
// FILE -- diei.c
// *****************************************************************************

/* 00297498 00000048 */ DIntr() {}
/* 002974e0 00000018 */ EIntr() {}

// *****************************************************************************
// FILE -- initsys.c
// *****************************************************************************

/* 002974f8 00000048 */ static supplement_crt0() {}
/* 00297540 00000034 */ static kFindAddress() {}
/* 00297578 00000010 */ static FindAddress() {}
/* 00297588 0000003c */ static GetSystemCallTableEntry() {}
/* 002975c8 00000010 */ static setup() {}
/* 002975d8 0000001c */ _setup() {}
/* 002975f8 0000003c */ _InitSys() {}

// *****************************************************************************
// FILE -- libosd.c
// *****************************************************************************

/* 00297638 00000010 */ static setup() {}
/* 00297648 00000010 */ static Copy() {}
/* 00297658 00000038 */ static kCopy() {}
/* 00297690 00000010 */ static GetEntryAddress() {}
/* 002976a0 00000068 */ static PatchIsNeeded() {}
/* 00297708 000000ac */ InitExecPS2() {}

// *****************************************************************************
// FILE -- exit.c
// *****************************************************************************

/* 002977b8 00000008 */ static TerminateLibrary() {}
/* 002977c0 0000005c */ ExecPS2() {}
/* 00297820 00000048 */ LoadExecPS2() {}
/* 00297868 00000028 */ Exit() {}
/* 00297890 00000038 */ ExecOSD() {}

// *****************************************************************************
// FILE -- deci2.c
// *****************************************************************************

/* 002978c8 00000044 */ sceDeci2Open() {}
/* 00297910 00000024 */ sceDeci2Close() {}
/* 00297938 00000030 */ sceDeci2ReqSend() {}
/* 00297968 00000024 */ sceDeci2Poll() {}
/* 00297990 00000034 */ sceDeci2ExRecv() {}
/* 002979c8 00000034 */ sceDeci2ExSend() {}
/* 00297a00 00000030 */ sceDeci2ExReqSend() {}
/* 00297a30 00000024 */ sceDeci2ExLock() {}
/* 00297a58 00000024 */ sceDeci2ExUnLock() {}
/* 00297a80 00000024 */ kputs() {}

// *****************************************************************************
// FILE -- tlbfunc.c
// *****************************************************************************

/* 00297aa8 00000060 */ SetTLBHandler() {}
/* 00297b08 00000084 */ SetDebugHandler() {}
/* 00297b90 00000010 */ static Copy() {}
/* 00297ba0 00000038 */ static kCopy() {}
/* 00297bd8 00000010 */ static GetEntryAddress() {}
/* 00297be8 00000010 */ static setup() {}
/* 00297bf8 000000b4 */ InitTLBFunctions() {}
/* 00297cb0 00000010 */ PutTLBEntry() {}
/* 00297cc0 00000010 */ iPutTLBEntry() {}
/* 00297cd0 00000010 */ static _SetTLBEntry() {}
/* 00297ce0 00000030 */ SetTLBEntry() {}
/* 00297d10 00000010 */ iSetTLBEntry() {}
/* 00297d20 00000010 */ GetTLBEntry() {}
/* 00297d30 00000010 */ iGetTLBEntry() {}
/* 00297d40 00000010 */ ProbeTLBEntry() {}
/* 00297d50 00000010 */ iProbeTLBEntry() {}
/* 00297d60 00000010 */ ExpandScratchPad() {}
/* 00297d70 00000040 */ InitTLB() {}
/* 00297db0 000001f4 */ static InitTLB32MB() {}

// *****************************************************************************
// FILE -- tlbtrap.s
// *****************************************************************************

/* 00297fc0 0000011c */ _kTLBException() {}
/* 00298100 000000f4 */ _kExitTLBHandler() {}
/* 00298200 0000011c */ _kDebugException() {}

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/gcc/libgcc2.c
// *****************************************************************************

/* 00298320 00000694 */ DItype __divdi3(/* a0 4 */ DItype u, /* a1 5 */ DItype v) {}

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/gcc/libgcc2.c
// *****************************************************************************

/* 002989b8 00000690 */ DItype __moddi3(/* a0 4 */ DItype u, /* a1 5 */ DItype v) {}

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/gcc/libgcc2.c
// *****************************************************************************

/* 00299048 0000057c */ UDItype __udivdi3(/* a0 4 */ UDItype n, /* a1 5 */ UDItype d) {}

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/gcc/libgcc2.c
// *****************************************************************************

/* 002995c8 00000568 */ UDItype __umoddi3(/* a0 4 */ UDItype u, /* a1 5 */ UDItype v) {}

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/gcc/libgcc2.c
// *****************************************************************************

/* 00299b30 00000118 */ DItype __fixunsdfdi(/* s1 17 */ DFtype a) {}

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/gcc/libgcc2.c
// *****************************************************************************

/* 00299c48 00000078 */ DItype __fixdfdi(/* s0 16 */ DFtype a) {}

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libc/errno/errno.c
// *****************************************************************************

/* 00299cc0 0000000c */ int* __errno() {}
