//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkSKDO_c4 : public Actor_c4 {
public:
    ActorUnkSKDO_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkSKDO : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkSKDO();

    /* 4C */ virtual ~ActorUnkSKDO() override;

    void func_ov031_02106de0(void);
    void func_ov031_02106de8(void);
    void func_ov031_02106e58(void);
    void func_ov031_02106e90(void);
    void func_ov031_02106e98(void);
};

class ActorProfileUnkSKDO : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkSKDO();
    ~ActorProfileUnkSKDO();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkSKDO *GetProfile();
};
