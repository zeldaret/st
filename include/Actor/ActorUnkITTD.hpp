#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class UnkStruct_ov031_02112ff4 : public UnkStruct_ov031_Items_00 {
public:
    // data_ov031_02112ff4
    /* 00 */ virtual ~UnkStruct_ov031_02112ff4() {}                                       // func_ov031_020e5b20 & ?
    /* 08 */ virtual bool vfunc_08(const UnkStruct_ov031_020f3310 *param1);               // func_ov031_020e575c
    /* 0C */ virtual bool vfunc_0C(const UnkStruct_ov031_020e54d4 *param1, unk32 param2); // func_ov031_020e5784
};

enum ActorUnkITTDState_ {
    ActorUnkITTDState_0 = 0,
    ActorUnkITTDState_1 = 1,
    ActorUnkITTDState_2 = 2,
    ActorUnkITTDState_MAX,
};

class ActorUnkITTD : public Actor {
public:
    /* 000 (base) */
    /* 094 */ ModelRender mUnk_94;
    /* 0F4 */ UnkSystem5 mUnk_F4;
    /* 114 */ unk32 mUnk_114;
    /* 118 */ STRUCT_PAD(0x118, 0x134);
    /* 134 */ UnkSystem5 mUnk_134;
    /* 154 */ unk32 mUnk_154;
    /* 158 */ STRUCT_PAD(0x158, 0x174);
    /* 174 */ UnkStruct_ov031_02112ff4 mUnk_174;
    /* 178 */ STRUCT_PAD(0x178, 0x17C);
    /* 17C */ VecFx32 mUnk_17C;
    /* 188 */ STRUCT_PAD(0x188, 0x194);
    /* 194 */ UnkStruct_ov031_Items_01 mUnk_194;
    /* 1C0 */ VecFx32 mUnk_1C0;
    /* 1CC */ u16 mUnk_1CC;
    /* 1CE */ bool mUnk_1CE;
    /* 1CF */ bool mUnk_1CF;
    /* 1D0 */ u8 mUnk_1D0;
    /* 1D1 */ u8 mUnk_1D1;
    /* 1D2 */ u16 mUnk_1D2;
    /* 1D4 */ u16 mUnk_1D4;
    /* 1D6 */ u16 mUnk_1D6;
    /* 1D8 */ unk32 mUnk_1D8;
    /* 1DC */ fx32 mUnk_1DC;
    /* 1E0 */ UnkStruct_PlayerGet_ec mUnk_1E0[0x3];
    /* 1EC */

    ActorUnkITTD();

    /* 18 */ virtual bool vfunc_18(unk32 param1) override; // func_ov031_020e5b34
    /* 20 */ virtual void vfunc_20() override;             // func_ov031_020e6148
    /* 24 */ virtual void vfunc_24() override;             // func_ov031_020e6158
    /* 2C */ virtual void vfunc_2C(unk32 param1) override; // func_ov031_020e619c
    /* 4C */ virtual ~ActorUnkITTD() override;             // func_ov031_020e6474

    unk16 UnkFunc(Actor *actor) {
        return actor->func_ov000_0207df88(this->mUnk_30, 0x4) | actor->func_ov000_0207e294(this->mUnk_30);
    }

    void SetState(ActorState state);
    void func_ov031_020e5d18(unk32 param1);
    bool func_ov031_020e62c0();
    bool func_ov031_020e6314(u16 param1);
    bool func_ov031_020e6340(VecFx32 *param1, unk16 param2, unk16 param3);
    bool func_ov031_020e6398();
};

class ActorProfileUnkITTD : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkITTD();
    ~ActorProfileUnkITTD();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkITTD *GetProfile();
};
