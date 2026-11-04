// STATUS: NOT STARTED

#ifndef AIR_INSECT_A_INSECT_H
#define AIR_INSECT_A_INSECT_H

typedef struct ISC_INFO
{
    unsigned int   flags;
    short          unk4;
    unsigned short unk6; 
    char           _pad8[8];
    float          unk10[4];
    char           _pad20[4];
    float          unk24;
    char           _pad28[24];
    float          unk40[4];
    char           _pad50[80];
    int            unkA0;
    int            unkA4;
    char           _padA8[792];
} ISC_INFO;

extern ISC_INFO gsIscInfos[];

int gsIscInfosAllClear();
int gsIscInfosClear();
int gsFreeIscInfosSearch();
int gsIscPictureLoad();
int gsIscAnimLoad();
int gsMake_IscObjPacket();
int gsObjSet_Insect();
int gsMake_AllIscObj();
int gsInitInsect();
int gsManagementInsect();
int gsInsectAnimSet();
int gsMakeIscLocalMatrix();
int gsFixIscSetIdCheck();
int gsInsectAddBreakVe();
int gsInsectDead();
int gsInsect_DeadDisp00();
int gsInsect_DeadDisp01();
int gsInsectInfoCheck();
int gsIscInit_AfterMovie();
int gsInit_IscSe();
int gsIscSe_VolumeAdjust();

#endif // AIR_INSECT_A_INSECT_H
