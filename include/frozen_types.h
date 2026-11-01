#ifndef FROZEN_TYPES_H
#define FROZEN_TYPES_H

typedef struct Unknown1 {
    int unk0;
    int unk4;
    int unk8;
    int unkC;
} Unknown1;

typedef struct Unknown2 {
    int unk0;
    char pad[195];
    int unkC8[1];
} Unknown2;

typedef struct Unknown3 {
    char pad[254];
    int unk100;
    int unk104;
    int unk108;
    int unk10C;
    int unk110;
    int unk114;
    int unk118;
} Unknown3;

typedef struct Camera {
    char pad[244];
    float unkF4;
    char pad2[170];
    int unk1A4;
    char pad3[136];
    int unk230;
    int unk234;
    int unk238;
    int unk23C;
    int unk240;
    int unk244;
    int unk248;
    int unk24C;
    int unk250;
    int unk254;
    int unk258;
    int unk25C;
    int unk260;
    int unk264;
    int unk268;
    int unk26C;
} Camera;

#endif