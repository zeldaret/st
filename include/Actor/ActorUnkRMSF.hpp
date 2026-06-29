#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "Actor/ActorUnkRMSD.hpp"
#include "Render/ModelRender.hpp"
#include "global.h"
#include "nns/g3d/g3d.h"
#include "types.h"

class ActorUnkRMSF_C4 : public Actor_C4 {
public:
    ActorUnkRMSF_C4(Actor *param1);

    /* 00 */ virtual bool vfunc_00(ActorRef ref, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0C(unk32 param1) override;
};

class ActorUnkRMSF_Base : public Actor {
public:
    /* 00 (base) */
    /* 94 */ ModelRender mUnk_94;
    /* F4 */ ModelRender mUnk_F4;
    /* 154 */ unk32 mUnk_154;
    /* 158 */

    ActorUnkRMSF_Base();
};

class ActorUnkRMSF : public ActorUnkRMSBase {
public:
    /* 00 (base) */
    /* 158 */

    ActorUnkRMSF();

    /* 4C */ virtual ~ActorUnkRMSF() override;
    /* 50 */ virtual G3d_Model *vfunc_50(void);
    /* 54 */ virtual G3d_Model *vfunc_54(void);
};

class ActorProfileUnkRMSF : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkRMSF();
    ~ActorProfileUnkRMSF();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkRMSF *GetProfile();
};
