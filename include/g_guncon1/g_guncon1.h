// STATUS: NOT STARTED

#ifndef G_GUNCON1_G_GUNCON1_H
#define G_GUNCON1_G_GUNCON1_H

gsGuncon1_InitAll();
gsGuncon1_Init();
void gsGuncon1_ClearFlag(int a);
gsGuncon1_LoadPad();
gsGuncon1_Exec();
int gsGuncon1_CheckPort();
int gsGuncon1_GetDelay();
int gsGuncon1_Get();
int gsGuncon1_GetTrg();
gsGuncon1_FlashTrigger();
int gsGuncon1_CheckOut();
gsGuncon1_CheckOutTrg();
void gsGuncon1_GetCamSight(char* a);
int gsGuncon1_ExchangePad(int a, int b);
#endif // G_GUNCON1_G_GUNCON1_H
