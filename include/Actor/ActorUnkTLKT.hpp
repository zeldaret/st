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
    ActorUnkTLKTState_5 = 5,
    ActorUnkTLKTState_Max
};

class ActorUnkTLKTnCLLT_Base : public Actor {
public:
    /* 00 (base) */
    /* 94 */ STRUCT_PAD(0x94, 0x9C);
    /* 9C */

    ActorUnkTLKTnCLLT_Base();

    /* 18 */ virtual bool vfunc_18(unk32 param1) override;
    /* 1C */ virtual void vfunc_1C() override;
    /* 20 */ virtual void vfunc_20() override;
    /* 24 */ virtual void vfunc_24() override;
    /* 54 */ virtual void vfunc_54();
    /* 58 */ virtual void vfunc_58();
    /* 5C */ virtual void vfunc_5C();
    /* 60 */ virtual void vfunc_60(ActorState state);

    Actor *func_ov031_020e3df8();
    void func_ov031_020e3e6c();
};

class ActorUnkTLKT_9C_Base : public MapObject_UnkStruct1 {
public:
    /* 00 (base) */
    /* 08 */

    /* 00 */ virtual void vfunc2_0C() override;
};

class ActorUnkTLKT_9C : public ActorUnkTLKT_9C_Base {
public:
    /* 00 (base) */
    /* 08 */

    // data_ov031_02112eec
    /* 00 */ virtual void vfunc2_00() override;
    /* 00 */ virtual void vfunc2_08() override;
};

class ActorUnkTLKT : public ActorUnkTLKTnCLLT_Base, public ActorUnkTLKT_9C {
public:
    /* 00 (base ActorUnkTLKTnCLLT_Base) */
    /* 9C (base ActorUnkTLKT_9C) */
    /* A4 */

    ActorUnkTLKT();

    /* 24 */ virtual void vfunc_24() override;
    /* 4C */ virtual ~ActorUnkTLKT() override;
    /* 58 */ virtual void vfunc_58() override;
    /* 60 */ virtual void vfunc_60(ActorState state) override;
    /* 64 */ virtual void vfunc_64();
    /* 68 */ virtual void vfunc_68();

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
