#pragma once
#include "Actor/ActorId.hpp"
#include "MapObject.hpp"

enum MapObjPot_Base_State_ {
    MapObjPot_BaseState_0 = 0,
    MapObjPot_BaseState_1 = 1,
    MapObjPot_BaseState_2 = 2,
    MapObjPot_BaseState_3 = 3,
    MapObjPotBase_State_Max
};

class MapObjectPot_Base : public MapObject {
public:
    /* 00 (base) */
    /* 40 */ ActorId mUnk_40;
    /* 44 */ unk16 mUnk_44;
    /* 48 */

    MapObjectPot_Base();

    // data_ov000_020b35d0
    /* 00 */ virtual bool vfunc_00();
    /* 24 */ virtual void vfunc_24(MapObject *param1, VecFx32 param2) override;
    /* 28 */ virtual unk32 vfunc_28() override;
    /* 30 */ virtual ~MapObjectPot_Base() = 0 override;
    /* 38 */ virtual void vfunc_38() override;
    /* 3C */ virtual bool vfunc_3C() override;
    /* 40 */ virtual bool vfunc_40() override;
    /* 44 */ virtual bool SetState(MapObjState state, unk32 param2) override;
    /* 48 */ virtual void vfunc_48() override;
    /* 4C */ virtual bool vfunc_4C() override;
    /* 50 */ virtual void vfunc_50(ActorRef *param1, MapObjectPot_Base *thisx) override;
    /* 54 */ virtual unk32 vfunc_54() override;

    void func_ov000_0209da78(unk32 param1, unk32 param2);
};
