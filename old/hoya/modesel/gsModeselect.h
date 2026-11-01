// STATUS: NOT STARTED

#ifndef HOYA_MODESEL_GSMODESELECT_H
#define HOYA_MODESEL_GSMODESELECT_H

gsStageInit_ModeSelect();
_gsMSLoadPigModeSelect();
gsStageExec_ModeSelect();
_gsMSDrawAllPrimitive();
_gsExtraFade();
_gsMSFadePrimitive();
_gsMSWakuColorJudge();

#endif // HOYA_MODESEL_GSMODESELECT_H
