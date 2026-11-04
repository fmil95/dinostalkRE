#include "common.h"
#include "hoya/modesel/gsModeselect.h"

extern void _gsMSSequenceWaku();
extern void _gsMSSequenceBG();
extern void _gsMSSequenceFade();

INCLUDE_ASM("asm/nonmatchings/hoya/modesel/gsModeselect", gsStageInit_ModeSelect);

INCLUDE_ASM("asm/nonmatchings/hoya/modesel/gsModeselect", _gsMSLoadPigModeSelect);

INCLUDE_ASM("asm/nonmatchings/hoya/modesel/gsModeselect", gsStageExec_ModeSelect);

INCLUDE_ASM("asm/nonmatchings/hoya/modesel/gsModeselect", _gsDrawPrimitive);

INCLUDE_ASM("asm/nonmatchings/hoya/modesel/gsModeselect", _gsMSDrawAllPrimitive);

INCLUDE_ASM("asm/nonmatchings/hoya/modesel/gsModeselect", _gsExtraFade);

INCLUDE_ASM("asm/nonmatchings/hoya/modesel/gsModeselect", _gsMSFadePrimitive);

INCLUDE_ASM("asm/nonmatchings/hoya/modesel/gsModeselect", _gsMSInitMSPrim);

INCLUDE_ASM("asm/nonmatchings/hoya/modesel/gsModeselect", _gsMSInitMSObject);

INCLUDE_ASM("asm/nonmatchings/hoya/modesel/gsModeselect", _gsMSInitGeneral);

INCLUDE_ASM("asm/nonmatchings/hoya/modesel/gsModeselect", _gsMSInitTittle);

INCLUDE_ASM("asm/nonmatchings/hoya/modesel/gsModeselect", _gsMSInitBG);

INCLUDE_ASM("asm/nonmatchings/hoya/modesel/gsModeselect", _gsMSInitLight);

INCLUDE_ASM("asm/nonmatchings/hoya/modesel/gsModeselect", _gsMSInitWaku);

INCLUDE_ASM("asm/nonmatchings/hoya/modesel/gsModeselect", _gsMSInitLevel);

INCLUDE_ASM("asm/nonmatchings/hoya/modesel/gsModeselect", _gsMSInitExtra);

INCLUDE_ASM("asm/nonmatchings/hoya/modesel/gsModeselect", _gsMSInitTile);

INCLUDE_ASM("asm/nonmatchings/hoya/modesel/gsModeselect", _gsMSInitExplain);

INCLUDE_ASM("asm/nonmatchings/hoya/modesel/gsModeselect", _gsMSInitExplainBack);

INCLUDE_ASM("asm/nonmatchings/hoya/modesel/gsModeselect", _gsMSsetTile);

INCLUDE_ASM("asm/nonmatchings/hoya/modesel/gsModeselect", _gsMSSetXY);

INCLUDE_ASM("asm/nonmatchings/hoya/modesel/gsModeselect", _gsMSSetUV);

void _gsMSSequencePrimitive()
{
    _gsMSSequenceWaku();
    _gsMSSequenceBG();
    _gsMSSequenceFade();
}

INCLUDE_ASM("asm/nonmatchings/hoya/modesel/gsModeselect", _gsMSWakuColorJudge);

INCLUDE_ASM("asm/nonmatchings/hoya/modesel/gsModeselect", _gsMSSequenceWaku);

INCLUDE_ASM("asm/nonmatchings/hoya/modesel/gsModeselect", _gsMSSequenceBG);

INCLUDE_ASM("asm/nonmatchings/hoya/modesel/gsModeselect", _gsMSSequenceFade);

INCLUDE_ASM("asm/nonmatchings/hoya/modesel/gsModeselect", _gsMSWindowOpCl);

INCLUDE_ASM("asm/nonmatchings/hoya/modesel/gsModeselect", _gsMSupdateCursol);

INCLUDE_ASM("asm/nonmatchings/hoya/modesel/gsModeselect", _gsMSDecide);

INCLUDE_ASM("asm/nonmatchings/hoya/modesel/gsModeselect", _gsMSCancel);
INCLUDE_RODATA("asm/nonmatchings/hoya/modesel/gsModeselect", D_0066C6E0);

INCLUDE_RODATA("asm/nonmatchings/hoya/modesel/gsModeselect", D_0066C708);

INCLUDE_RODATA("asm/nonmatchings/hoya/modesel/gsModeselect", D_0066C730);

INCLUDE_RODATA("asm/nonmatchings/hoya/modesel/gsModeselect", D_0066C758);

INCLUDE_RODATA("asm/nonmatchings/hoya/modesel/gsModeselect", D_0066C780);

INCLUDE_RODATA("asm/nonmatchings/hoya/modesel/gsModeselect", D_0066C7A8);

INCLUDE_RODATA("asm/nonmatchings/hoya/modesel/gsModeselect", D_0066C7D0);

INCLUDE_RODATA("asm/nonmatchings/hoya/modesel/gsModeselect", D_0066C7F8);

