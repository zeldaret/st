//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkFBSC : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkFBSC();

    /* 4C */ virtual ~ActorUnkFBSC() override;

    void func_ov058_0214aab8(void);
    void func_ov058_0214aacc(void);
    void func_ov058_0214ab04(void);
    void func_ov058_0214ab34(void);
    void func_ov058_0214ab68(void);
    void func_ov058_0214ab78(void);
};

class ActorProfileUnkFBSC : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkFBSC();
    ~ActorProfileUnkFBSC();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkFBSC *GetProfile();
};
