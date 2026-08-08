#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "MapObject/MapObjectDoorBase.hpp"
#include "global.h"
#include "types.h"

enum ActorUnkTLKTState_ {
    ActorUnkTLKTState_0 = 0,
    ActorUnkTLKTState_1 = 1,
    ActorUnkTLKTState_2 = 2,
    ActorUnkTLKTState_3 = 3,
    ActorUnkTLKTState_4 = 4,
    ActorUnkTLKTState_MAX
};

class ActorUnkTLKT_Base : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkTLKT_Base(); // func_ov031_020e3da0

    /* 18 */ virtual bool vfunc_18(unk32 param1) override; // func_ov031_020e3e18
    /* 1C */ virtual void vfunc_1C() override;             // func_ov031_020e3e44
    /* 20 */ virtual void vfunc_20() override;             // func_ov031_020e3e84
    /* 24 */ virtual void vfunc_24() override;             // func_ov031_020e3ed8
    // /* 4C */ virtual ~ActorUnkTLKT_Base() override; // func_ov031_020e40a8 & func_ov031_020e40bc
    /* 54 */ virtual void vfunc_54();                 // func_ov031_020e3f50
    /* 58 */ virtual void vfunc_58();                 // func_ov031_020e4074
    /* 5C */ virtual void vfunc_5C();                 // func_ov031_020e4078
    /* 60 */ virtual void vfunc_60(ActorState state); // func_ov031_020e407c

    void func_ov031_020e3e6c();
};

class ActorUnkTLKT_9C : public MapObject_UnkStruct1 {
public:
    /* 00 (base) */
    /* 08 */

    ActorUnkTLKT_9C() {
        this->mUnk_04 = 0xFFFFFFFF;
    }

    // data_ov031_02112eec
    /* 00 */ virtual void vfunc2_00() override;
};

class ActorUnkTLKT : public ActorUnkTLKT_Base {
public:
    /* 00 (base) */
    /* 94 */ STRUCT_PAD(0x94, 0x9C);
    /* 9C */ ActorUnkTLKT_9C mUnk_9C;
    /* A4 */

    ActorUnkTLKT();

    /* 24 */ virtual void vfunc_24() override; // func_ov031_020e41ec
    /* 4C */ virtual ~ActorUnkTLKT() override;
    /* 58 */ virtual void vfunc_58() override;                 // func_ov031_020e4238
    /* 60 */ virtual void vfunc_60(ActorState state) override; // func_ov031_020e4320
    /* 64 */ virtual void vfunc_64();                          // func_ov031_020e42ac
    /* 68 */ virtual void vfunc_68();                          // func_ov031_020e42f0

    void func_ov031_020e4274();
    void func_ov031_020e4514();
};

class ActorProfileUnkTLKT : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkTLKT();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkTLKT *GetProfile();
};
