#pragma once

#include "Item/Item.hpp"
#include "global.h"
#include "nitro/fx.h"
#include "types.h"

class PlayerLinkActor;
class PlayerLinkActor_A0;
class UnkStruct_027e0ce0_40;

class UnkStruct_027e0d34 : public AutoInstance<UnkStruct_027e0d34> {
public:
    /* 00 */ PlayerLinkActor *mpPlayer;
    /* 04 */ PlayerLinkActor_A0 *mUnk_04;
    /* 08 */ UnkStruct_027e0ce0_40 *mUnk_08;
    /* 0C */

    UnkStruct_027e0d34(PlayerLinkActor *pPlayer, PlayerLinkActor_A0 *param2, UnkStruct_027e0ce0_40 *param3);

    // overlay 1
    static void Destroy();

    // overlay 31
    bool func_ov031_020d9714();
    bool func_ov031_020d9758();
    bool func_ov031_020d97e4();
    bool func_ov031_020d97f4();
    bool TryItemGive(ItemId itemId);
    void func_ov031_020d9844();
    void func_ov031_020d9854(VecFx32 *param1, fx32 param2);
    void func_ov031_020d994c();
    void func_ov031_020d996c();
    unk32 func_ov031_020d9a4c(unk32 param1);
    bool func_ov031_020d9ab8();

    static UnkStruct_027e0d34 *Create(PlayerLinkActor *pPlayer, PlayerLinkActor_A0 *param2, UnkStruct_027e0ce0_40 *param3);
};

extern UnkStruct_027e0d34 *data_027e0d34;
