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

void GFInstance_Remove(GF_INSTANCE* inst)
{
    GF_INSTANCE* inst2;

    if (inst->parent->child == inst)
    {
        inst->parent->child = inst->bros;
    }
    else
    {
        inst2 = inst->parent->child;

        while (inst2->bros != inst)
        {
            inst2 = inst2->bros;
        }

        inst2->bros = inst->bros;
    }

    inst->bros   = NULL;
    inst->parent = NULL;
}

void GFInstance_ChangeParent(GF_INSTANCE* inst, GF_INSTANCE* parent)
{
    GFInstance_Remove(inst);

    GFInstance_AddChild(parent, inst);
}

void GFInstance_SetEvalFunc(GF_INSTANCE* inst, gf_inst_evalfunc* func)
{
    if (func != NULL)
    {
        inst->evalFunc = func;
    }
    else
    {
        if (inst->type < 5)
        {
            inst->evalFunc = gf_default_evalfunc[inst->type];
        }
        else
        {
            inst->evalFunc = gf_default_evalfunc[0];
        }
    }
}

void GFInstance_SetDrawFunc(GF_INSTANCE* inst, gf_inst_drawfunc* func)
{
    if (func != NULL)
    {
        inst->drawFunc = func;
    }
    else
    {
        if (inst->type < 5)
        {
            inst->drawFunc = gf_default_drawfunc[inst->type];
        }
        else
        {
            inst->drawFunc = gf_default_drawfunc[0];
        }
    }
}

void GFInstance_SetFunc(GF_INSTANCE* inst, gf_inst_evalfunc* eval, gf_inst_drawfunc* draw)
{
    GFInstance_SetEvalFunc(inst, eval);
    GFInstance_SetDrawFunc(inst, draw);
}

INCLUDE_ASM("asm/nonmatchings/libgf/gfinstance", GFInstance_SetSortKeyMax);

INCLUDE_ASM("asm/nonmatchings/libgf/gfinstance", GFInstance_SetSortKeyMin);
