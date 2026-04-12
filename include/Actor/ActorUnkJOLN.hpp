//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkJOLN_c4 : public Actor_c4 {
public:
    ActorUnkJOLN_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkJOLN : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkJOLN();

    /* 4C */ virtual ~ActorUnkJOLN() override;

    void func_ov061_02159048(void);
    void func_ov061_0215906c(void);
    void func_ov061_02159078(void);
    void func_ov061_02159080(void);
};

class ActorProfileUnkJOLN : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkJOLN();
    ~ActorProfileUnkJOLN();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkJOLN *GetProfile();
};
