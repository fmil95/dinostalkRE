#include "common.h"
typedef struct { char b[96]; } UsbGunBuff;
extern UsbGunBuff usbgun[];
typedef struct { char b[60]; } GunBuff;
extern GunBuff gun_buff[];

UsbGunBuff* GetUsbGunBuffer(int i)
{
    return &usbgun[i];
}

GunBuff* GetGunBuffer(int i)
{
    return &gun_buff[i];
}

INCLUDE_ASM("asm/nonmatchings/g_guncon2/src/guncon2", Guncon2_Init);

INCLUDE_ASM("asm/nonmatchings/g_guncon2/src/guncon2", Guncon2_SetPort);

INCLUDE_ASM("asm/nonmatchings/g_guncon2/src/guncon2", Guncon2_Job);

INCLUDE_ASM("asm/nonmatchings/g_guncon2/src/guncon2", Guncon2_GetPosi);

INCLUDE_ASM("asm/nonmatchings/g_guncon2/src/guncon2", Guncon2_TransCtrlData);

INCLUDE_ASM("asm/nonmatchings/g_guncon2/src/guncon2", Guncon2_Action);

INCLUDE_ASM("asm/nonmatchings/g_guncon2/src/guncon2", Guncon2_KeyConvert);
