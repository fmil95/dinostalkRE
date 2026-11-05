// STATUS: NOT STARTED

#ifndef G_WORLD_ST3WAVE_H
#define G_WORLD_ST3WAVE_H

gsWaveScrollX();
gsWaveScrollZ();
gsWaveMovePos();
void gsWaveSetScroll(float x, float y);
gsWaveInit();
gsWaveCalc();
gsMoveWave();
gsWaveMakeScrollWave();
void gsWaveSetWaveSize(float v);
gsWaveGetHeight();
void gsSetRefTex();
void gsWaveAvoidInit();
void gsWaveAvoidEnd();
int _gsWaveHandler(int ch);
gsWaveAvoidSetStart();
void gsWaveAvoidSetEnd();
gsWaveCollisionWater();
void printVector(void);
gsWaveMakeWave();
char* GFWave_MakeInstance(char* a);
GFWave_Draw();
gsSt3WaveChange();
void gsWave_ChgColStart();
gsWave_ChgColExec();

#endif // G_WORLD_ST3WAVE_H
