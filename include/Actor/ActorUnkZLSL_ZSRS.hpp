//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "Render/ModelRender.hpp"
#include "global.h"
#include "types.h"

struct ActorUnkZLSL_AnimationTag {
    unk32 index;
    char name[0x14];
};

class UnkStruct_ov000_020b31a8 {
public:
    /* 00 (vtable) */
    /* 04 */

    // data_ov000_020b31a8
    /* 00 */ virtual ~UnkStruct_ov000_020b31a8(); // func_ov000_02099aec (T) & func_ov000_02099af0 (T)
    /* 08 */ virtual void vfunc_08();             // func_ov000_02099b00
    /* 0C */ virtual void vfunc_0C();             // func_ov000_02099b38
    /* 10 */ virtual UnkSystem5 *vfunc_10();      // func_ov000_0209a13c
    /* 14 */ virtual void vfunc_14();             // func_ov000_0209a144
    /* 18 */ virtual void vfunc_18();             // func_ov000_0209a0e4
    /* 1C */ virtual void vfunc_1C(ActorUnkZLSL_AnimationTag param1, unk32 param2, unk32 param3,
                                   unk32 param4);               // func_ov000_02099cb0
    /* 20 */ virtual void vfunc_20();                           // func_ov000_02099ba0
    /* 24 */ virtual void vfunc_24();                           // func_ov000_0209a06c
    /* 28 */ virtual void vfunc_28();                           // func_ov000_0209a0f4
    /* 2C */ virtual void vfunc_2C();                           // func_ov000_0209a10c
    /* 30 */ virtual s8 vfunc_30();                             // func_ov000_0209a180
    /* 34 */ virtual void vfunc_34();                           // func_ov000_0209a124
    /* 38 */ virtual void vfunc_38(unk32 param1, unk32 param2); // func_ov000_0209a170
    /* 3C */ virtual void vfunc_3C();                           // func_ov000_0209a14c
};

class UnkStruct_ov000_020b31f0 : public UnkStruct_ov000_020b31a8 {
public:
    /* 00 (vtable) */
    /* 04 */

    // data_ov000_020b31f0
    /* 00 */ virtual ~UnkStruct_ov000_020b31f0() override; // func_ov000_0209a228 (T) & func_ov000_0209a234 (T)
    /* 08 */ virtual void vfunc_08() override;             // func_ov000_0209a254
    /* 0C */ virtual void vfunc_0C() override;             // func_ov000_0209a288
    /* 10 */ virtual UnkSystem5 *vfunc_10() override;      // func_ov000_0209a320
    /* 14 */ virtual void vfunc_14() override;             // func_ov000_0209a334
    /* 1C */ virtual void vfunc_1C(char param1[], unk32 param2, unk32 param3,
                                   unk32 param4) override;               // func_ov000_0209a35c
    /* 20 */ virtual void vfunc_20() override;                           // func_ov000_0209a3e4
    /* 28 */ virtual void vfunc_28() override;                           // func_ov000_0209a2f0
    /* 2C */ virtual void vfunc_2C() override;                           // func_ov000_0209a308
    /* 30 */ virtual s8 vfunc_30() override;                             // func_ov000_0209a348
    /* 34 */ virtual void vfunc_34() override;                           // func_ov000_0209a6d4
    /* 38 */ virtual void vfunc_38(unk32 param1, unk32 param2) override; // func_ov000_0209a738
    /* 3C */ virtual void vfunc_3C() override;                           // func_ov000_0209a714
    /* 40 */ virtual void vfunc_40();                                    // func_ov000_0209a70c
};

// --- Actor ZLSL ---

class ActorUnkZLSL_C4 : public Actor_C4 {
public:
    ActorUnkZLSL_C4(Actor *param1);

    /* 00 */ virtual bool vfunc_00(ActorRef ref, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0C(unk32 param1) override;
};

class ActorUnkZLSL : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkZLSL();

    /* 4C */ virtual ~ActorUnkZLSL() override;
};

class ActorProfileUnkZLSL : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkZLSL();
    ~ActorProfileUnkZLSL();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkZLSL *GetProfile();
};

// --- Actor ZSRS ---

class ActorUnkZSRS_C4 : public Actor_C4 {
public:
    ActorUnkZSRS_C4(Actor *param1);

    /* 00 */ virtual bool vfunc_00(ActorRef ref, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0C(unk32 param1) override;
};

class ActorUnkZSRS : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkZSRS();

    /* 4C */ virtual ~ActorUnkZSRS() override;
};

class ActorProfileUnkZSRS : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkZSRS();
    ~ActorProfileUnkZSRS();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkZSRS *GetProfile();
};
