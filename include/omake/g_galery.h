// STATUS: NOT STARTED

#ifndef OMAKE_G_GALERY_H
#define OMAKE_G_GALERY_H

typedef struct { // 0x18
	/* 0x00 */ int unk0;
	/* 0x04 */ int unk4;
	/* 0x08 */ int unk8;
	/* 0x0c */ int unkC;
	/* 0x10 */ int unk10;
	/* 0x14 */ int unk14;
} GAL_STAT;

extern GAL_STAT galStat;

void gal_texInit();
G_GALERY_Init();
void G_GALERY_End();
G_GALERY_Exec();

#endif // OMAKE_G_GALERY_H
