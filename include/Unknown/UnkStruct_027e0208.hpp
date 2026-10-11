#pragma once

#include "global.h"
#include "nitro/fx.h"
#include "types.h"

class UnkStruct_027e0208 {
public:
    /* 000 */ unk32 mUnk_000;
    /* 004 */ PAD(0x04, 0x94);
    /* 094 */ unk32 mUnk_094;
    /* 098 */ PAD(0x98, 0xE0);
    /* 0E0 */ unk32 mUnk_0E0;
    /* 0E4 */ unk32 mUnk_0E4;
    /* 0E8 */ unk32 mUnk_0E8;
    /* 0EC */ unk32 mUnk_0EC;
    /* 0F0 */ unk32 mUnk_0F0;
    /* 0F4 */ unk32 mUnk_0F4;
    /* 0F8 */ unk32 mUnk_0F8;
    /* 0FC */ unk32 mUnk_0FC;
    /* 100 */ PAD(0x100, 0x240);
    /* 240 */ VecFx32 mUnk_240;

    UnkStruct_027e0208();
    ~UnkStruct_027e0208();
};

extern UnkStruct_027e0208 data_027e0208;
