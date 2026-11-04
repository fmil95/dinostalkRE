// STATUS: NOT STARTED

#ifndef SOUND_G_SOUND_H
#define SOUND_G_SOUND_H

gsSoundInitModule();
gsSoundInitAll();
int gsSoundReadSe(int a);
int gsSoundReadBgm(int a);
int gsSoundReadWait();
int gsSoundComWait();
int gsSoundReset();
int gsSoundSeMePlay(int a);
gsSoundSeMePlayDir();
gsSoundSeMePlay3D();
int gsSoundSeMeStop(int a);
int gsSoundSeMeStop2(int a);
int gsSoundStopVoice();
int gsSoundBgmPlay(int a);
int gsSoundBgmReplay();
int gsSoundBgmStop();
int gsSoundBgmCrossFade();
void gsSoundClose();
int gsSoundSetEffect();
int gsSoundGetEffect();
void gsSoundSeMain();
int gsSoundMasterVol();
int gsSoundBgmVol();
gsSoundReboot();
int gsSoundOff();
gsSoundPlaySE_WORLD();
gsSoundEeSE_ALL_CLEAR();
void gsSoundEeSE_ALL_SLEEP();
void gsSoundEeSE_ALL_WAKE();
void gsSoundEeSE_PLAY(int a, int b);
gsSoundEeSE_PLAY2();
gsSoundEeSE_PLAY_WORLD();
int gsSoundEeSE_STOP(int* a);
int gsSoundEeSE_VOLUME(int* a, int b, int c);
int gsSoundEeSE_PITCH(int* a, int b);
gsSoundEeSE_VOLUME_WORLD();

#endif // SOUND_G_SOUND_H
