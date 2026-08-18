#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "Actor/ActorUnkRMSBase.hpp"
#include "global.h"
#include "nns/g3d/g3d.h"

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
