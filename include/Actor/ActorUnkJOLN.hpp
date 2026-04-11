//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

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
