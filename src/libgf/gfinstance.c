#include "gunsuv_usa/libgf/gfinstance.h"

INCLUDE_ASM("asm/nonmatchings/libgf/gfinstance", gfInstance_MakeRotMatrix);

INCLUDE_ASM("asm/nonmatchings/libgf/gfinstance", gfInstance_Eval2);

INCLUDE_ASM("asm/nonmatchings/libgf/gfinstance", GFInstance_Eval);   

INCLUDE_ASM("asm/nonmatchings/libgf/gfinstance", GFInstance_Start);

INCLUDE_ASM("asm/nonmatchings/libgf/gfinstance", GFInstance_End);

INCLUDE_ASM("asm/nonmatchings/libgf/gfinstance", GFInstance_Draw);

INCLUDE_ASM("asm/nonmatchings/libgf/gfinstance", GFInstance_InitHead);

void GFInstance_SetLocalMatrix(GF_INSTANCE* inst, sceVu0FMATRIX m) 
{
    sceVu0CopyMatrix(inst->localMatrix, m);
}

void GFInstance_AddChild(GF_INSTANCE* parent, GF_INSTANCE* child) 
{
    GF_INSTANCE* inst;
    GF_INSTANCE* temp, *temp2; // not from STAB

    child->parent = parent;
    
    if (parent->child != NULL) 
    {
        temp = parent->child->bros;
        
        inst = parent->child;
        
        while (inst->bros != NULL) 
        {
            inst = temp;
            
            temp2 = inst->bros;
            
            temp = temp2;
        } 
        
        inst->bros = child;
    }
    else 
    {
        parent->child = child;
    }
}

INCLUDE_ASM("asm/nonmatchings/libgf/gfinstance", GFInstance_Remove);

INCLUDE_ASM("asm/nonmatchings/libgf/gfinstance", GFInstance_ChangeParent);

INCLUDE_ASM("asm/nonmatchings/libgf/gfinstance", GFInstance_SetEvalFunc);

INCLUDE_ASM("asm/nonmatchings/libgf/gfinstance", GFInstance_SetDrawFunc);

INCLUDE_ASM("asm/nonmatchings/libgf/gfinstance", GFInstance_SetFunc);

INCLUDE_ASM("asm/nonmatchings/libgf/gfinstance", GFInstance_SetSortKeyMax);

INCLUDE_ASM("asm/nonmatchings/libgf/gfinstance", GFInstance_SetSortKeyMin);
