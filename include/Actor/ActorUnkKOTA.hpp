#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "nitro/types.h"
#include "types.h"

class ActorUnkKOTA_C4 : public Actor_C4 {
public:
    ActorUnkKOTA_C4(Actor *param1);

    /* 00 */ virtual bool vfunc_00(RefStruct ref, unk32 param2) override;
    /* 04 */ virtual bool vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0C(unk32 param1) override;
};

class ActorUnkKOTA : public Actor {
public:
    /* 00 (base) */
    /* 94 */ Actor *mUnk_94[0x10];
    /* D4 */ Actor **mUnk_D4; // Sentinel for the array above
    /* D8 */ u16 mUnk_D8;
    /* DA */ u16 mUnk_DA;
    /* DC */

    Actor **GetUnkD4() const {
        return (Actor **) mUnk_D4; // cast is required
    }

    void UnknownAction1(s32 start) {
        for (unk32 i = start; i < this->func_ov094_0216ed94(); i++) {
            this->func_ov094_0216e4f0();
            this->mUnk_D8++;
        }

        this->mUnk_DA = this->mUnk_D8;
    }

    ActorUnkKOTA();

    /* 18 */ virtual bool Init(unk32 param1);
    /* 1C */ virtual void Setup();
    /* 20 */ virtual void Update();
    /* 24 */ virtual void vfunc_24();

    void func_ov094_0216e4f0(void);
    void func_ov094_0216e5a4(const ActorParams *param1);
    void func_ov094_0216e9fc(VecFx32 *param1, const VecFx32 *param2, fx32 param3) const;
    unk32 func_ov094_0216ed94(void) const;
};

class ActorProfileUnkKOTA : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkKOTA();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkKOTA *GetProfile();
};
