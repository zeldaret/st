//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRCSG_c4 : public Actor_c4 {
public:
    ActorUnkRCSG_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkRCSG : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkRCSG();

    /* 4C */ virtual ~ActorUnkRCSG() override;

    void func_ov070_02143d30(void);
    void func_ov070_02143de0(void);
    void func_ov070_02143e54(void);
    void func_ov070_02143e68(void);
    void func_ov070_02143eac(void);
    void func_ov070_02143f2c(void);
    void func_ov070_02143f34(void);
    void func_ov070_02143f38(void);
    void func_ov070_02143f7c(void);
};

class ActorProfileUnkRCSG : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkRCSG();
    ~ActorProfileUnkRCSG();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkRCSG *GetProfile();
};
