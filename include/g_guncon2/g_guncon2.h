// STATUS: NOT STARTED

#ifndef G_GUNCON2_G_GUNCON2_H
#define G_GUNCON2_G_GUNCON2_H

gsGuncon2_Init();
gsGuncon2_Exec();
int gsGuncon2_CheckConnect();
int gsGuncon2_GetActivePort();
int gsGuncon2_Get();
int gsGuncon2_GetTrg();
int gsGuncon2_GetRTrg();
int gsGuncon2_Get2();
int gsGuncon2_GetTrg2();
gsGuncon2_GetGunPos();
void gsGuncon2_GetCamSight(char* a);
int gsGuncon2_GetCycle();
void gsGuncon2_SetState(int a);
int gsGuncon2_CanChangeArms();
gsGuncon2_Flash_CALL();
void gsGuncon2_Flash_RECALL();
gsGuncon2_Flash_EXEC();
gsGuncon2_LoadModule();

#endif // G_GUNCON2_G_GUNCON2_H
