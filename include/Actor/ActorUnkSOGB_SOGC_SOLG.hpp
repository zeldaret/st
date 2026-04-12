//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

// --- Actor SOGB ---

class ActorUnkSOGB_c4 : public Actor_c4 {
public:
    ActorUnkSOGB_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkSOGB : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkSOGB();

    /* 4C */ virtual ~ActorUnkSOGB() override;
};

class ActorProfileUnkSOGB : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkSOGB();
    ~ActorProfileUnkSOGB();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkSOGB *GetProfile();
};

// --- Actor SOGC ---

class ActorUnkSOGC_c4 : public Actor_c4 {
public:
    ActorUnkSOGC_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkSOGC : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkSOGC();

    /* 4C */ virtual ~ActorUnkSOGC() override;
};

class ActorProfileUnkSOGC : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkSOGC();
    ~ActorProfileUnkSOGC();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkSOGC *GetProfile();
};

// --- Actor SOLG ---

class ActorUnkSOLG_c4 : public Actor_c4 {
public:
    ActorUnkSOLG_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkSOLG : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkSOLG();

    /* 4C */ virtual ~ActorUnkSOLG() override;
};

class ActorProfileUnkSOLG : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkSOLG();
    ~ActorProfileUnkSOLG();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkSOLG *GetProfile();
};
