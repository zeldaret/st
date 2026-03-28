#pragma once

#include "Item/ItemManager.hpp"
#include "Player/Player.hpp"
#include "Player/TouchControl.hpp"
#include "global.h"
#include "nitro/button.h"

// incomplete
class UnkStruct_027e0478 {
public:
    /* 000 */ void *mUnk_000; // set to -1 on land and to a pointer on train?
    /* 004 */ void *mUnk_004;
    /* 008 */ ItemManager *mpItemManager;
    /* 00C */ Input mButtons;
    /* 012 */ unk16 mUnk_012;
    /* 014 */ TouchControl mTouchControl;
    /* 036 */ STRUCT_PAD(0x36, 0xF0);
    /* 0F0 */ unk32 mUnk_0F0; // seems to be the walking speed of link??
    /* 0F4 */ unk32 mUnk_0F4;
    /* 0F8 */ unk32 mUnk_0F8;
    /* 0FC */ unk32 mUnk_0FC;
    /* 100 */ unk32 mUnk_100;
    /* 104 */ unk8 mUnk_104;
    /* 105 */ unk8 mUnk_105; // set to 0 on idle, set to 3 when pulling out an item
    /* 106 */ unk8 mUnk_106;
    /* 107 */ unk8 mUnk_107;
    /* 108 */ void *mUnk_108; // vtable
    /* 10C */ void *mUnk_10C; // linklist?
    /* 110 */ void *mUnk_110;
    /* 114 */ STRUCT_PAD(0x114, 0x154);
    /* 154 */ PlayerActor mPlayer;
};

extern UnkStruct_027e0478 data_027e0478;
