//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkOLDS_C4 : public Actor_C4 {
public:
    ActorUnkOLDS_C4(Actor *param1);

    /* 00 */ virtual bool vfunc_00(ActorRef ref, unk32 param2) override;
    /* 04 */ virtual bool vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0C(unk32 param1) override;
};

class ActorUnkOLDS : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkOLDS();

    /* 4C */ virtual ~ActorUnkOLDS() override;

    void func_ov040_0212cd8c(void);
    void func_ov040_0212cee4(void);
    void func_ov040_0212cefc(void);
    void func_ov040_0212cf34(void);
    void func_ov040_0212cf5c(void);
    void func_ov040_0212cf74(void);
    void func_ov040_0212cfac(void);
    void func_ov040_0212cfb8(void);
    void func_ov040_0212cfd4(void);
    void func_ov040_0212d040(void);
};

class ActorProfileUnkOLDS : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkOLDS();
    ~ActorProfileUnkOLDS();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkOLDS *GetProfile();
};
