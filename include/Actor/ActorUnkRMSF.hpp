#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "Actor/ActorUnkRMSBase.hpp"
#include "global.h"
#include "nns/g3d/g3d.h"

class ActorUnkRMSF : public ActorUnkRMSBase {
public:
    /* 00 (base) */
    /* 158 */

    ActorUnkRMSF();

    /* 4C */ virtual ~ActorUnkRMSF() override;
    /* 50 */

    /* 54 */ virtual G3d_Model *vfunc_54(void);
    /* 58 */ virtual G3d_Model *vfunc_58(void);
};

class ActorProfileUnkRMSF : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkRMSF();
    ~ActorProfileUnkRMSF();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkRMSF *GetProfile();
};
