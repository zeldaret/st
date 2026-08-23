#pragma once

#include "Actor/ActorItemFlower.hpp"
#include "Actor/ActorUnkSCCN.hpp"
#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "MapObjectPot_Base.hpp"
#include "MapObject_10_Pot.hpp"
#include "global.h"
#include "types.h"

enum MapObjBombFlowerState_ {
    MapObjBombFlowerState_0 = 0,
    MapObjBombFlowerState_1 = 1,
    MapObjBombFlowerState_2 = 2,
    MapObjBombFlowerState_3 = 3,
    MapObjBombFlowerState_4 = 4,
    MapObjBombFlowerState_5 = 5,
    MapObjBombFlowerState_6 = 6,
    MapObjBombFlowerState_Max
};

class MapObjectBombFlower : public MapObjectPot_Base {
public:
    /* 00 (base) */
    /* 48 */ ModelRender_ov031_0211578c mUnk_48;
    /* A8 */ STRUCT_PAD(0xA8, 0xB0);
    /* BC */ fx32 mUnk_B0;
    /* BC */ fx32 mUnk_B4;
    /* B8 */ volatile u16 mUnk_B8;
    /* BA */ u16 mUnk_BA;
    /* BC */ bool mUnk_BC;
    /* C0 */ MapObject_10_Pot mUnk_C0;

    MapObjectBombFlower();

    /* 08 */ virtual void vfunc_08() override;
    /* 14 */ virtual void vfunc_14() override;
    /* 1C */ virtual bool vfunc_1C(ActorRef param1, unk32 param2, VecFx32 *param3) override;
    /* 28 */ virtual unk32 vfunc_28() override;
    /* 38 */ virtual void vfunc_38() override;
    /* 44 */ virtual bool SetState(MapObjState state, unk32) override;
    /* 48 */ virtual void vfunc_48() override;
    /* 50 */ virtual void vfunc_50(ActorRef *param1, MapObjectPot_Base *thisx) override;
    /* 58 */ virtual void vfunc_58();

    bool IsInternalTimerOut() {
        if (this->mUnk_B8 < this->mUnk_BA) {
            ++this->mUnk_B8;
            return false;
        }

        return true;
    }

    void func_ov031_02102728(unk32 param1);
};

class MapObjectProfileBombFlower : public MapObjectProfile_Derived2 {
public:
    /* 00 (base) */

    MapObjectProfileBombFlower();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileBombFlower *GetProfile();
};
