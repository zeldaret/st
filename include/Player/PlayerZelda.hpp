#pragma once

#include "Item/Item.hpp"
#include "Player/PlayerActorBase.hpp"

class UnkStruct_027e0ce0_40;
class UnkStruct_027e0ce0_40_150;

class PlayerZeldaActor : public PlayerActorBase {
public:
    /* 000 (base) */
    /* 094 */ unk32 mUnk_94;
    /* 098 */ PlayerActorBase *mpPlayer;
    /* 09C */ STRUCT_PAD(0x9C, 0xCC);
    /* 0CC */ bool mUnk_0CC;
    /* 0CD */ STRUCT_PAD(0xCD, 0xD0);
    /* 0D0 */ unk32 mUnk_0D0;
    /* 0D4 */ unk32 mUnk_0D4;
    /* 0D8 */ unk32 mUnk_0D8;
    /* 0DC */ unk32 mUnk_0DC;
    /* 0E0 */ STRUCT_PAD(0xE0, 0x154);
    /* 154 */

    PlayerZeldaActor(void *param1, UnkStruct_027e0ce0_40 *param2, UnkStruct_027e0ce0_40_150 *param3, ItemFlag *pEquippedItem);
    ~PlayerZeldaActor();
};
