// STATUS: NOT STARTED

#ifndef LIBVU0_H
#define LIBVU0_H

#include "types.h"

int sceVu0ApplyMatrix();
int sceVu0MulMatrix();
int sceVu0OuterProduct();
int sceVu0InnerProduct();
int sceVu0Normalize();
int sceVu0TransposeMatrix();
int sceVu0InversMatrix();
int sceVu0DivVector();
int sceVu0DivVectorXYZ();
int sceVu0InterVector();
int sceVu0AddVector();
int sceVu0SubVector();
int sceVu0MulVector();
int sceVu0ScaleVector();
int sceVu0TransMatrix();
int sceVu0CopyVector();
void sceVu0CopyMatrix(sceVu0FMATRIX m0, sceVu0FMATRIX m1);
int sceVu0FTOI4Vector();
int sceVu0FTOI0Vector();
int sceVu0ITOF4Vector();
int sceVu0ITOF0Vector();
int sceVu0UnitMatrix();
int sceVu0RotMatrixZ();
int sceVu0RotMatrixX();
int sceVu0RotMatrixY();
int sceVu0RotMatrix();
int sceVu0ClampVector();
int sceVu0CameraMatrix();
int sceVu0NormalLightMatrix();
int sceVu0LightColorMatrix();
int sceVu0ViewScreenMatrix();
int sceVu0DropShadowMatrix();
int sceVu0RotTransPersN();
int sceVu0RotTransPers();
int sceVu0CopyVectorXYZ();
int sceVu0InterVectorXYZ();
int sceVu0ScaleVectorXYZ();
int sceVu0ClipScreen();
int sceVu0ClipScreen3();
int sceVu0ClipAll();
int sceVpu0Reset();

#endif // LIBVU0_H
