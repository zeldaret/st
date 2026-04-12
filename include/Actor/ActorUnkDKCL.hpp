//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkDKCL_c4 : public Actor_c4 {
public:
    ActorUnkDKCL_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkDKCL : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkDKCL();

    /* 4C */ virtual ~ActorUnkDKCL() override;

    void func_ov026_02104fcc(void);
    void func_ov026_02104fd4(void);
    void func_ov026_02105000(void);
    void func_ov026_02105014(void);
    void func_ov026_0210501c(void);
};

class ActorProfileUnkDKCL : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkDKCL();
    ~ActorProfileUnkDKCL();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkDKCL *GetProfile();
};
