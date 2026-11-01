// STATUS: NOT STARTED

#ifndef GUNSUV_APP_G_GUNCON2_NMLIB_SRC_NMGC2MAIN_H
#define GUNSUV_APP_G_GUNCON2_NMLIB_SRC_NMGC2MAIN_H

#include "common.h"

typedef struct nm_TimerRegAdr_tag 
{
	u_int* count;
	u_int* mode;
	u_int* comp;
	u_int* hold;
} nm_TimerRegAdr_t;

int nmUsbGunInit();
int nmUsbGunGetInfo(u_char *info);
int nmUsbGunRead(u_int no, char *data);
int nmUsbGunGetLocation(int no, u_char *location);
int nmUsbGunGetConfig(u_char *config);
int nmUsbTransCtrl(int no, u_char *data);
int nmUsbGunSync(int mode);
void nmPadTimerReset();
void nmPadWaitTimer(int time);

#endif // GUNSUV_APP_G_GUNCON2_NMLIB_SRC_NMGC2MAIN_H
