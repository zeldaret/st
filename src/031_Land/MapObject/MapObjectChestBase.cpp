#include "MapObject/MapObjectChestBase.hpp"
#include "Unknown/UnkStruct_027e09a8.hpp"
#include "Unknown/UnkStruct_027e0cd8.hpp"
#include "Unknown/UnkStruct_027e0ce0.hpp"
#include "Unknown/UnkStruct_027e0cec.hpp"

#pragma readonly_strings on

extern "C" unk32 func_0200f218(unk32, const char *);
extern "C" void func_0200b58c(G3d_RenderObject *);
extern "C" void func_01ffb714(VecFx32 *, VecFx32 *, void *);
extern "C" void func_01ffcfcc(VecFx32 *, VecFx32 *, VecFx32 *);

struct UnkStruct_ov031_02117c84 {
    u16 mUnk_00;

    UnkStruct_ov031_02117c84(u16 x) {
        this->mUnk_00 = x;
    }
};

static const Vec2pCpp data_ov031_02115830(0x800, 0x800);
static const UnkStruct_ov031_02117c84 data_ov031_02117c84(0x3C);
static const CellAnimObject data_ov031_02115c84;

ARM MapObjectTreasureSpawned_74::MapObjectTreasureSpawned_74(G3d_Model *param1) :
    ModelRender(param1),
    mUnk_60(1) {}

ARM void MapObjectTreasureSpawned_74::vfunc_1C(UnkSystem4_vfunc_1C *param1) {
    unk32 iVar1;
    unk32 uVar2;

    if (param1->mUnk_04[1] != 0) {
        iVar1 = param1->mUnk_04[1] + 0x40;
    } else {
        iVar1 = 0;
    }

    if (iVar1 != 0) {
        uVar2 = func_0200f218(iVar1, "box_B");
    } else {
        uVar2 = -1;
    }

    if (param1->mUnk_00[1] == uVar2) {
        if (!this->mUnk_60) {
            *param1->mUnk_B8 = 0;
        }
    }
}

ARM void MapObjectTreasureSpawned_74::func_ov031_0210306c() {
    func_0200b58c(&this->mRenderObj);
}

ARM MapObjectChestBase::MapObjectChestBase(unk32 param1) :
    mUnk_040(0),
    mUnk_044(-1),
    mUnk_048(param1),
    mUnk_04C(0),
    mUnk_04D(1),
    mUnk_074(0),
    mItemId(ItemId_Nothing) {
    this->mUnk_0DC.func_ov000_0206082c(0x5D, 0x05);
}

ARM MapObjectChestBase::~MapObjectChestBase() {}

ARM bool MapObjectChestBase::vfunc_00() {
    SET_FLAG(this->mFlags, MapObjFlag_9);
    this->mUnk_18[0] = 0x0D;

    UnkStruct_027e0cd8_0c *pUVar2 = data_027e0cd8->mUnk_0C;

    if (this->mUnk_20.mUnk_00[3] == 1) {
        this->mPos.x += 0x7FC;

        Vec2b sp48(this->mUnk_3A.x, this->mUnk_3A.y);
        pUVar2->func_ov000_020801b0(&sp48, 7, 1);

        sp48.x++;
        pUVar2->func_ov000_020801b0(&sp48, 7, 1);
    }

    this->vfunc_38(this->vfunc_3C(), 1);
    this->mItemId = this->mUnk_20.mUnk_00[0];
    return true;
}

// non-matching
ARM void MapObjectChestBase::vfunc_04() {
    fx32 iVar2;
    UnkStruct_027e0cd8_0c *pUVar5;
    VecFx32 sp48;
    VecFx32 sp3C;
    VecFx32 local_38;
    VecFx32 local_44;
    VecFx32 sp18;
    VecFx32 spC;
    Vec2b local_5e;
    Vec2b local_62;
    Vec2b local_64;
    Vec2b local_66;
    Vec2b local_68;
    Vec2us local_6c;

    pUVar5 = data_027e0cd8->mUnk_0C;

    sp48.x = FLOAT_TO_FX32(0.0f);
    sp48.y = FLOAT_TO_FX32(0.0f);
    sp48.z = FLOAT_TO_FX32(0.0f);

    sp3C.x = FLOAT_TO_FX32(0.0f);
    sp3C.y = FLOAT_TO_FX32(0.0f);
    sp3C.z = FLOAT_TO_FX32(0.0f);

    sp18.x = FLOAT_TO_FX32(0.5f);
    sp18.y = FLOAT_TO_FX32(0.0f);
    sp18.z = FLOAT_TO_FX32(0.5f);

    func_01ffb714(&sp48, &sp18, &sp48);

    spC.x = FLOAT_TO_FX32(0.5f);
    spC.y = FLOAT_TO_FX32(1.0f);
    spC.z = FLOAT_TO_FX32(0.5f);

    VecFx32_Add((VecFx32 *) &sp3C, &spC, (VecFx32 *) &sp3C);

    local_68.x = this->mUnk_3A.x;
    local_68.y = this->mUnk_3A.y;
    iVar2      = pUVar5->func_01ffedf4((Vec2b *) &local_68);

    if (this->mUnk_20.mUnk_00[3] == 1) {
        Vec2b temp_r0(this->mUnk_3A.x, this->mUnk_3A.y);
        temp_r0.x--;

        if (pUVar5->func_01ffedf4((Vec2b *) &temp_r0) > iVar2 || gpMapObjManager->func_01fff498(local_5e) != NULL) {
            sp48.x -= FLOAT_TO_FX32(0.5f);
        }

        temp_r0.x += 3;
        if (pUVar5->func_01ffedf4((Vec2b *) &temp_r0) > iVar2 || gpMapObjManager->func_01fff498(local_5e) != NULL) {
            sp3C.x += FLOAT_TO_FX32(0.5f);
        }
    } else {
        Vec2b temp_r0(this->mUnk_3A.x, this->mUnk_3A.y);
        temp_r0.x--;
        temp_r0.y += 2;
        // local_5e.y = this->mUnk_3A.y + (this->mUnk_3A.x - 1);
        // local_6c.y += local_5e.y;
        // local_5e.y += 2;

        if (gpMapObjManager->func_ov000_0209c3a8(&temp_r0) == MapObjectId_MiniBlocks) {
            sp48.x -= FLOAT_TO_FX32(0.5f);
        }

        // temp_r0.x += 3;
        if (gpMapObjManager->func_ov000_0209c3a8(&temp_r0) == MapObjectId_MiniBlocks) {
            sp3C.x += FLOAT_TO_FX32(0.5f);
        }
    }

    local_62.x = (this->mUnk_3A.y - 1) + this->mUnk_3A.x;

    if (gpMapObjManager->func_ov000_0209c3a8(&local_62) == MapObjectId_MiniBlocks &&
        iVar2 == pUVar5->func_01ffedf4(&local_62)) {
        sp48.z -= FLOAT_TO_FX32(0.5f);
    }

    if (data_027e09a4->mUnk_00.mSceneIndex == SceneIndex_d_flame) {
        local_64.x = this->mUnk_3A.x;
        local_66.y = this->mUnk_3A.y;

        local_66.x = local_64.x - 1;
        local_64.y = local_66.y - 1;

        if (iVar2 > pUVar5->func_01ffedf4(&local_64) && iVar2 > pUVar5->func_01ffedf4(&local_66)) {
            sp3C.y += FLOAT_TO_FX32(1.0f);
        }
    }

    func_01ffcfcc(&local_44, &sp48, (VecFx32 *) &sp3C);

    this->mUnk_050.mUnk_0C.x = local_44.x;
    this->mUnk_050.mUnk_0C.y = local_44.y;
    this->mUnk_050.mUnk_0C.z = local_44.z;

    this->mUnk_050.mUnk_18.x = local_38.x;
    this->mUnk_050.mUnk_18.y = local_38.y;
    this->mUnk_050.mUnk_18.z = local_38.z;

    this->mUnk_050.mUnk_08 = 0x84007006;
    this->mUnk_10          = &this->mUnk_050;
}

ARM void MapObjectChestBase::vfunc_08() {}

ARM void MapObjectChestBase::vfunc_0C() {
    this->vfunc_08();
}

ARM unk32 MapObjectChestBase::vfunc_28() {
    return this->func_ov031_021037d0();
}

ARM ItemId MapObjectChestBase::func_ov031_021037d0() {
    switch (this->mUnk_16) {
        case 0:
        case 1:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
            return ItemId_None;
        case 2:
        case 3:
        default:
            break;
    }

    this->vfunc_38(7, 0);

    if ((u32) this->mItemId - ItemId_RedPotion <= 2 && data_027e0ce0->mUnk_2C->PotionSlotsFull()) {
        return ItemId_BigGreenRupee;
    }

    return this->mItemId;
}

ARM bool MapObjectChestBase::func_ov031_02103864() {
    return this->mUnk_16 == 8 ? true : false;
}

ARM void MapObjectChestBase::func_ov031_02103878() {
    this->vfunc_38(8, 1);
}

ARM void MapObjectChestBase::vfunc_38(unk32 param1, unk32 param2) {}
ARM void MapObjectChestBase::vfunc_18(s8 *param1, s8 param2) {}
ARM void MapObjectChestBase::vfunc_14() {}
ARM unk32 MapObjectChestBase::vfunc_3C() {}

ARM bool MapObjectChestBase::vfunc_40() {
    return true;
}

ARM bool MapObjectChestBase::vfunc_44() {
    return false;
}

ARM void MapObjectChestBase::func_ov031_02103f48() {
    VecFx32 local_10;
    VecFx32_Init(this->mPos.x, this->mPos.y + 0x800, this->mPos.z, &local_10);
    data_027e0cec->func_ov000_0209feac(0x81F, &local_10, 4, 0, 0);
}

ARM void MapObjectChestBase::vfunc_4C() {
    data_027e09a8->func_ov000_02071b30(0x150, &this->mPos, 0);
}

ARM void MapObjectChestBase::vfunc_50() {
    data_027e09a8->func_ov000_02071b30(0x151, &this->mPos, 0);
}

ARM Vec2p *MapObjectChestBase::vfunc_54() {
    return (Vec2p *) &data_ov031_02115830;
}
