//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkTHER : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkTHER();

    /* 4C */ virtual ~ActorUnkTHER() override;

    void func_ov026_02111108(void);
    void func_ov026_021111a4(void);
    void func_ov026_021111fc(void);
    void func_ov026_02111280(void);
};

class ActorProfileUnkTHER : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkTHER();
    ~ActorProfileUnkTHER();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkTHER *GetProfile();
};
