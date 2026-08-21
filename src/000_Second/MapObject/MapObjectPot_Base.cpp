#include "MapObject/MapObjectPot_Base.hpp"

extern "C" void func_ov000_020a14e4(unk8, VecFx32 *);

MapObjectPot_Base::MapObjectPot_Base() {
    this->mUnk_40 = 0;
    this->mUnk_44 = 0;

    this->func_ov000_0209da78(0x0, 0x1);
    this->func_ov000_0209da78(0x1, 0x0);
}

MapObjectPot_Base::~MapObjectPot_Base() {}

bool MapObjectPot_Base::vfunc_00() {
    this->SetState(MapObjPot_BaseState_0, 0x1);
    return true;
}

// non-matching
bool MapObjectPot_Base::SetState(MapObjState state, unk32 param2) {
    if (param2 == 0x0 && this->mState == MapObjPot_BaseState_1) {
        return;
    }
    this->mState = state;
    switch (this->mState) {
        case MapObjPot_BaseState_0:
            break;
        case MapObjPot_BaseState_1:
            this->vfunc_48();
            if (this->vfunc_40()) {
                func_ov000_020a14e4(this->mUnk_38, &this->mPos);
            } else {
                if (this->vfunc_4C()) {
                    unk32 val = this->vfunc_54();
                    this->vfunc_3C();
                }
            }
            this->MapObject::func_ov000_0209d614(0x1);
            UNSET_FLAG(this->mFlags, MapObjFlag_Alive);
            break;
        case MapObjPot_BaseState_2:
            UNSET_FLAG(this->mFlags, MapObjFlag_Alive);
            break;
        case MapObjPot_BaseState_3:
            this->vfunc_38();
            UNSET_FLAG(this->mFlags, MapObjFlag_Alive);
            break;
            break;
        default:
            break;
    }
    return true;
}

// non-matching
void MapObjectPot_Base::vfunc_24(MapObject *param1, VecFx32 param2) {}
// non-matching
void MapObjectPot_Base::vfunc_38() {}
// non-matching
unk32 MapObjectPot_Base::vfunc_28() {}
// non-matching
void MapObjectPot_Base::vfunc_48() {}

unk32 MapObjectPot_Base::vfunc_54() {
    return this->mUnk_20.mParams[0] & 0xFF;
}

bool MapObjectPot_Base::vfunc_4C() {
    return true;
}

// non-matching
void MapObjectPot_Base::func_ov000_0209da78(unk32 param1, unk32 param2) {}
// non-matching
void MapObjectPot_Base::vfunc_50(ActorRef *param1, MapObjectPot_Base *thisx) {}
