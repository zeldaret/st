//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "Actor/ActorUnkRMSD.hpp"
#include "global.h"
#include "nns/g3d/g3d.h"
#include "types.h"

class ActorUnkRMSS_C4 : public Actor_C4 {
public:
    ActorUnkRMSS_C4(Actor *param1);

    /* 00 */ virtual bool vfunc_00(ActorRef ref, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0C(unk32 param1) override;
};

class ActorUnkRMSS : public ActorUnkRMSBase {
public:
    /* 00 (base) */
    /* 158 */

    ActorUnkRMSS();

    /* 4C */ virtual ~ActorUnkRMSS() override;

    /* 54 */ virtual G3d_Model *vfunc_54(void);
    /* 58 */ virtual G3d_Model *vfunc_58(void);
};

class ActorProfileUnkRMSS : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkRMSS();
    ~ActorProfileUnkRMSS();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkRMSS *GetProfile();
};
