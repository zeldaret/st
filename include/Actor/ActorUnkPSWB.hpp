#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "CommonFuncs.hpp"
#include "MapObject/MapObject.hpp"
#include "Render/ModelRender.hpp"
#include "Unknown/UnkStruct_ov048_02137600.hpp"
#include "global.h"
#include "types.h"

class ActorUnkPSWB_C4 : public Actor_C4 {
public:
    ActorUnkPSWB_C4(Actor *param1);

    /* 00 */ virtual bool vfunc_00(RefStruct ref, unk32 param2) override;
    /* 04 */ virtual bool vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0C(unk32 param1) override;
};

//! TODO: Move to a separate file
class UnkStruct_ov000_020b287c {
public:
    /* 00 (vtable) */
    /* 04 */ unk32 mUnk_04;
    /* 08 */ unk32 mUnk_08;
    /* 0C */ unk32 mUnk_0C;

    UnkStruct_ov000_020b287c();

    /* 08 */ virtual bool vfunc_08(void);
};

class ActorUnkPSWB_194 : public UnkStruct_ov000_020b287c {
public:
    ActorUnkPSWB_194() {}

    /* 08 */ virtual bool vfunc_08(void) override;
};

class ActorUnkPSWB : public UnkStruct_ov048_02137600 {
public:
    /* 000 (base) */
    /* 0E0 */ ModelRender mUnk_E0;
    /* 140 */ unk32 mUnk_140;
    /* 144 */ unk32 mUnk_144;
    /* 148 */ unk32 mUnk_148;
    /* 14C */ unk32 mUnk_14C;
    /* 150 */ unk32 mUnk_150;
    /* 154 */ unk32 mUnk_154;
    /* 158 */ unk32 mUnk_158;
    /* 15C */ unk32 mUnk_15C;
    /* 160 */ unk32 mUnk_160;
    /* 164 */ unk8 mUnk_164;
    /* 165 */ unk8 mUnk_165; // WARN: unused
    /* 166 */ unk16 mUnk_166;
    /* 168 */ unk16 mUnk_168;
    /* 16A */ unk16 mUnk_16A;
    /* 16C */ unk16 mUnk_16C;
    /* 16E */ unk16 mUnk_16E;
    /* 170 */ unk16 mUnk_170;
    /* 172 */ unk16 mUnk_172; // WARN: unused
    /* 174 */ unk32 mUnk_174;
    /* 178 */ unk32 mUnk_178;
    /* 17C */ unk32 mUnk_17C;
    /* 180 */ unk16 mUnk_180;
    /* 182 */ unk16 mUnk_182; // WARN: unused
    /* 184 */ unk32 mUnk_184;
    /* 188 */ unk32 mUnk_188;
    /* 18C */ unk32 mUnk_18C;
    /* 190 */ unk16 mUnk_190;
    /* 192 */ unk16 mUnk_192;
    /* 194 */ ActorUnkPSWB_194 mUnk_194;
    /* 1A4 */ void *mUnk_1A4;

    ActorUnkPSWB();

    /* 18 */ virtual bool Init(unk32 param1) override;
    /* 20 */ virtual void Update() override;
    /* 24 */ virtual void vfunc_24() override;
    /* 2C */ virtual void vfunc_2C(unk32 param1) override;
    /* 58 */ virtual void vfunc_58(void) override;
    /* 58 */ virtual void vfunc_5C(void) override;
    /* 58 */ virtual void vfunc_60(void) override;
    /* 6C */ virtual void vfunc_6C(void) override;
    /* 70 */ virtual void vfunc_70(void) override;

    void func_ov094_02166424(void);
    void func_ov094_02166438(void);
    void func_ov094_02166454(void);
    void func_ov094_02166680(void);
    void func_ov094_02166890(void);
    void func_ov094_021668cc(void);
    void func_ov094_021668e0(void);
    void func_ov094_02166bcc(void);
    void func_ov094_02166c10(void);
    void func_ov094_02166c2c(void);
    void func_ov094_02166c88(void);
    void func_ov094_02166e10(void);
    void func_ov094_02166e60(void);
    void func_ov094_02166f94(void);
    void func_ov094_02167024(void);
    void func_ov094_02167224(void);
    void func_ov094_0216723c(void);
    void func_ov094_02167518(void);
    void func_ov094_021675ac(void);
    void func_ov094_02167614(void);
    void func_ov094_02167688(void);
    void func_ov094_021676f4(void);
    void func_ov094_02167794(void);
    void func_ov094_0216781c(void);
    void func_ov094_02167ab8(void);
    void func_ov094_02167b24(void);
    void func_ov094_02167b64(void);
    void func_ov094_02167bf0(void);
    void func_ov094_02167c54(void);
    void func_ov094_02167d20(void);
    void func_ov094_02167dbc(void);
    void func_ov094_02167e58(void);
    void func_ov094_0216825c(void);
    void func_ov094_02168310(void);
    void func_ov094_02168348(void);
    void func_ov094_02168364(void);
    void func_ov094_02168388(void);
};

class ActorProfileUnkPSWB_Base_D8 : public MapObject_10 {
public:
    ActorProfileUnkPSWB_Base_D8() {}
};

class ActorProfileUnkPSWB_Base : public ActorProfile_Derived1 {
public:
    /* 000 (base) */
    /* 0D8 */ ActorProfileUnkPSWB_Base_D8 mUnk_D8;
    /* 0FC */ unk32 mUnk_FC; // Some kind of unknown struct/class
    /* 100 */

    ActorProfileUnkPSWB_Base(ActorId param1) :
        ActorProfile_Derived1(param1) {
        func_ov000_0207f4e8(&mUnk_FC);
    }
};

class ActorProfileUnkPSWB : public ActorProfileUnkPSWB_Base {
public:
    /* 000 (base) */
    /* 100 */

    ActorProfileUnkPSWB();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkPSWB *GetProfile();
};
