// STATUS: NOT STARTED

#ifndef GRAPHDEV_H
#define GRAPHDEV_H

sceGsResetGraph();
sceGsGetGParam();
sceGsResetPath();
sceGsSetDefDispEnv();
sceGsPutDispEnv();
sceGsPutDrawEnv();
sceGsSetDefDBuff();
sceGsSwapDBuff();
sceGsSyncV();
int sceGsSyncPath(int mode, unsigned short timeout);
sceGsSetDefTexEnv();
sceGsSetDefAlphaEnv();
sceGsSetDefLoadImage();
sceGsSetDefStoreImage();
sceGsExecLoadImage();
sceGsExecStoreImage();
sceGsSyncVCallback();
sceGsPutIMR();
sceGsSetHalfOffset();
sceGsGetIMR();
sceGszbufaddr();
sceGsSetDefDrawEnv();
sceGsSetDefClear();

#endif // GRAPHDEV_H
