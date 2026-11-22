#pragma once

#include "Item/Item.hpp"
#include "RefStruct.hpp"
#include "math.hpp"
#include "types.h"

#include <nitro/fx.h>

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
    bool func_ov031_020d96e0();
    void func_ov031_020d96e4(const VecFx32 *param1, VecFx32 *param2);
    void func_ov031_020d96f4();
    void func_ov031_020d9704();
    bool func_ov031_020d9714();
    bool func_ov031_020d9730();
    bool func_ov031_020d9748(bool param1);
    bool func_ov031_020d9758();
    bool func_ov031_020d9770();
    bool func_ov031_020d9788();
    void func_ov031_020d97a4();
    bool func_ov031_020d97b4();
    unk32 func_ov031_020d97c4();
    unk32 func_ov031_020d97d4(bool param1);
    bool func_ov031_020d97e4();
    bool func_ov031_020d97f4();
    unk32 func_ov031_020d9804();
    unk32 func_ov031_020d9814();
    void func_ov031_020d9824(unk32 param1, unk32 param2);
    bool TryItemGive(ItemId itemId);
    void func_ov031_020d9844();
    void func_ov031_020d9854(VecFx32 *param1, fx32 param2);
    void func_ov031_020d9888(VecFx32 *param1, fx32 param2, UnkAngleStruct param3);
    void func_ov031_020d98bc(unk32 param1, unk32 param2);
    void func_ov031_020d98d8(unk32 param1, unk32 param2);
    void func_ov031_020d98f4(VecFx32 *param1, UnkAngleStruct param2);
    void func_ov031_020d9920(VecFx32 *param1, UnkAngleStruct param2);
    void func_ov031_020d994c();
    void func_ov031_020d995c(unk32 param1, unk32 param2, unk32 param3);
    void func_ov031_020d996c();
    void func_ov031_020d997c(s32 param1);
    void func_ov031_020d99ac(unk8 param1);
    void func_ov031_020d99bc();
    unk32 func_ov031_020d99cc();
    bool func_ov031_020d99dc(unk32 param1);
    bool func_ov031_020d99ec(unk32 param1);
    void func_ov031_020d99fc(unk32 param1, RefStruct ref);
    void func_ov031_020d9a1c(s32 param1);
    bool func_ov031_020d9a34(s32 param1);
    bool func_ov031_020d9a4c(bool param1);
    void func_ov031_020d9a5c(const VecFx32 *param1);
    bool func_ov031_020d9a78(RefStruct ref);
    void func_ov031_020d9a98();
    void func_ov031_020d9aa8();
    bool func_ov031_020d9ab8();
    void func_ov031_020d9b40(RefStruct ref);
    void func_ov031_020d9b60();
    void func_ov031_020d9b70();
    void func_ov031_020d9b80();
    void func_ov031_020d9b98();
    void func_ov031_020d9ba8();
    void func_ov031_020d9bb4();

    static UnkStruct_027e0d34 *Create(PlayerLinkActor *pPlayer, PlayerLinkActor_A0 *param2, UnkStruct_027e0ce0_40 *param3);
};

extern UnkStruct_027e0d34 *data_027e0d34;
