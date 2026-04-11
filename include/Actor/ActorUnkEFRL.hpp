//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkEFRL : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkEFRL();

    /* 4C */ virtual ~ActorUnkEFRL() override;

    void func_ov099_021814bc(void);
    void func_ov099_021815fc(void);
    void func_ov099_021816e8(void);
    void func_ov099_02181748(void);
    void func_ov099_0218175c(void);
    void func_ov099_0218181c(void);
    void func_ov099_02181840(void);
    void func_ov099_02181850(void);
    void func_ov099_02181858(void);
};

class ActorProfileUnkEFRL : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkEFRL();
    ~ActorProfileUnkEFRL();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkEFRL *GetProfile();
};
