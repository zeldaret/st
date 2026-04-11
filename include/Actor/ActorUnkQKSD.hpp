//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkQKSD : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkQKSD();

    /* 4C */ virtual ~ActorUnkQKSD() override;

    void func_ov086_0215bc50(void);
    void func_ov086_0215bc64(void);
    void func_ov086_0215bcc8(void);
    void func_ov086_0215bcdc(void);
    void func_ov086_0215bcf0(void);
    void func_ov086_0215bd54(void);
};

class ActorProfileUnkQKSD : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkQKSD();
    ~ActorProfileUnkQKSD();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkQKSD *GetProfile();
};
