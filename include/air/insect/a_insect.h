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

gsIscInfosAllClear();
gsIscInfosClear();
gsFreeIscInfosSearch();
gsIscPictureLoad();
gsIscAnimLoad();
gsMake_IscObjPacket();
gsObjSet_Insect();
gsMake_AllIscObj();
gsInitInsect();
gsManagementInsect();
gsInsectAnimSet();
gsMakeIscLocalMatrix();
gsFixIscSetIdCheck();
gsInsectAddBreakVe();
gsInsectDead();
gsInsect_DeadDisp00();
gsInsect_DeadDisp01();
gsInsectInfoCheck();
gsIscInit_AfterMovie();
gsInit_IscSe();
gsIscSe_VolumeAdjust();

#endif // AIR_INSECT_A_INSECT_H
