#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorDroppedItem : public Actor {
public:
    ActorDroppedItem();

    virtual ~ActorDroppedItem() override;

    void func_ov031_020f9f8c();
    void func_ov031_020fa00c();
    void func_ov031_020fa20c();
    void func_ov031_020fa23c();
    void func_ov031_020fa260();
    void func_ov031_020fa424();
    void func_ov031_020fa468();
    void func_ov031_020fa46c();
    void func_ov031_020fa494();
    void func_ov031_020fa4a0();
    void func_ov031_020fa524();
    void func_ov031_020fa568();
    void func_ov031_020fa5f0();
    void func_ov031_020fa650();
    void func_ov031_020fa664();
    void func_ov031_020fa668();
    void func_ov031_020fa678();
    void func_ov031_020fa6c8();
    void func_ov031_020fa72c();
    void func_ov031_020fa83c();
    void func_ov031_020fa900();
    void func_ov031_020fa9f8();
    void func_ov031_020faa30();
    void func_ov031_020faa74();
    void func_ov031_020faa94();
    void func_ov031_020faabc();
};

// --- Actor SPAR ---

class ActorUnkSPAR_c4 : public Actor_c4 {
public:
    ActorUnkSPAR_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkSPAR : public ActorDroppedItem {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkSPAR();

    /* 4C */ virtual ~ActorUnkSPAR() override;
};

class ActorProfileUnkSPAR : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkSPAR();
    ~ActorProfileUnkSPAR();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkSPAR *GetProfile();
};

// --- Actor SPBM ---

class ActorUnkSPBM_c4 : public Actor_c4 {
public:
    ActorUnkSPBM_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkSPBM : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkSPBM();

    /* 4C */ virtual ~ActorUnkSPBM() override;
};

class ActorProfileUnkSPBM : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkSPBM();
    ~ActorProfileUnkSPBM();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkSPBM *GetProfile();
};

// --- Actor SPDR ---

class ActorUnkSPDR_c4 : public Actor_c4 {
public:
    ActorUnkSPDR_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkSPDR : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkSPDR();

    /* 4C */ virtual ~ActorUnkSPDR() override;
};

class ActorProfileUnkSPDR : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkSPDR();
    ~ActorProfileUnkSPDR();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkSPDR *GetProfile();
};

// --- Actor SPTR ---

class ActorUnkSPTR_c4 : public Actor_c4 {
public:
    ActorUnkSPTR_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkSPTR : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkSPTR();

    /* 4C */ virtual ~ActorUnkSPTR() override;
};

class ActorProfileUnkSPTR : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkSPTR();
    ~ActorProfileUnkSPTR();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkSPTR *GetProfile();
};
