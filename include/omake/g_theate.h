// STATUS: NOT STARTED

#ifndef OMAKE_G_THEATE_H
#define OMAKE_G_THEATE_H

typedef struct { // 0x18
	/* 0x00 */ int unk0;
	/* 0x04 */ int unk4;
	/* 0x08 */ int unk8;
	/* 0x0c */ int unkC;
	/* 0x10 */ int unk10;
	/* 0x14 */ int unk14;
} THE_STAT;

extern THE_STAT theStat;

void the_texInit();
void G_THEATE_Init();
void G_THEATE_End();
void G_THEATE_Exec();
void the_notice();

#endif // OMAKE_G_THEATE_H
