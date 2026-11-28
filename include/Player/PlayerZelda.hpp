#pragma once

#include "Item/Item.hpp"
#include "Player/PlayerActorBase.hpp"

class UnkStruct_027e0ce0_40;
class UnkStruct_027e0ce0_40_150;

// related to MapObjectUnkRPFL (warping floor in ToS)
class PlayerZeldaActor_CC {
public:
    /* 00 */ bool mUnk_00; // seems to trigger the warp when set to true
    /* 04 */ VecFx32 mPosLink;
    /* 10 */ VecFx32 mPosZelda;
    /* 1C */

    PlayerZeldaActor_CC();

    // overlay 31
    void func_ov031_020dcd70(const VecFx32 *pPosLink, const VecFx32 *pPosZelda);
};

class PlayerZeldaActor_E8 {
public:
    /* 00 */ unk32 pad;
    /* 04 */

    PlayerZeldaActor_E8();
};

class PlayerZeldaActor : public PlayerActorBase {
public:
    /* 000 (base) */
    /* 094 */ unk32 mUnk_94;
    /* 098 */ PlayerActorBase *mpPlayer;
    /* 09C */ PAD(0x9C, 0xCC);
    /* 0CC */ PlayerZeldaActor_CC mUnk_CC;
    /* 0E8 */ PlayerZeldaActor_E8 mUnk_E8;
    /* 0EC */ PAD(0xEC, 0x154);
    /* 154 */

    PlayerZeldaActor(void *param1, UnkStruct_027e0ce0_40 *param2, UnkStruct_027e0ce0_40_150 *param3, ItemFlag *pEquippedItem);
    ~PlayerZeldaActor();
};
