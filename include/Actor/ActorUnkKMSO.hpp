//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkKMSO : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkKMSO();

    /* 4C */ virtual ~ActorUnkKMSO() override;

    void func_ov071_02160288(void);
    void func_ov071_0216029c(void);
    void func_ov071_02160368(void);
    void func_ov071_021603c4(void);
    void func_ov071_02160400(void);
    void func_ov071_02160430(void);
    void func_ov071_021604c8(void);
    void func_ov071_021605a8(void);
    void func_ov071_02160684(void);
    void func_ov071_02160688(void);
    void func_ov071_02160930(void);
};

class ActorProfileUnkKMSO : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkKMSO();
    ~ActorProfileUnkKMSO();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkKMSO *GetProfile();
};
