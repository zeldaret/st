#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "Actor/ActorUnkSCCN.hpp"
#include "CommonFuncs.hpp"
#include "MapObject/MapObject.hpp"
#include "RefStruct.hpp"
#include "Render/ModelRender.hpp"
#include "Unknown/Common.hpp"
#include "Unknown/UnkStruct_ov031_Items.hpp"
#include "Unknown/UnkStruct_ov048_021375e4.hpp"
#include "Unknown/UnkStruct_ov048_02137600.hpp"
#include "global.h"
#include "math.hpp"
#include "nitro/fx.h"
#include "nitro/types.h"
#include "timer.hpp"
#include "types.h"

struct ActorUnkPSWB;

class UnkStruct_ov094_02176fb8 : public UnkStruct_ov048_021375e4 {
public:
    /* 00 (vtable) */
    /* 0C */ ActorUnkPSWB *mUnk_0C;
    /* 10 */

    UnkStruct_ov094_02176fb8(ActorUnkPSWB *param1);

    /* 00 */ virtual ~UnkStruct_ov094_02176fb8() override;
    /* 08 */ virtual bool vfunc_08(const UnkStruct_ov031_020f3310 *param1, unk32 param2) override;
};

class ActorUnkPSWB_184 : public UnkSystem7 {
public:
    ActorUnkPSWB_184(UnkSystem7_UnkStruct_00 *param1) :
        UnkSystem7(param1) {}
};

class ActorUnkPSWB_194 : public ActorUnkSCCN_B8 {
public:
    /* 00 (vtable) */
    /* 10 */ ActorUnkPSWB *mUnk_10;

    ActorUnkPSWB_194(ActorUnkPSWB *param1) {
        mUnk_10 = param1;
    }

    /* 00 */ virtual ~ActorUnkPSWB_194() override;
    /* 08 */ virtual bool vfunc_08(RefStruct param1, unk32 param2, unk32 param3) override;
};

enum ActorUnkPSWBState_ {
    ActorUnkPSWBState_0   = 0,
    ActorUnkPSWBState_1   = 1,
    ActorUnkPSWBState_2   = 2,
    ActorUnkPSWBState_3   = 3,
    ActorUnkPSWBState_4   = 4,
    ActorUnkPSWBState_Max = 5,
};

class ActorUnkPSWB : public UnkStruct_ov048_02137600 {
public:
    /* 000 (base) */
    /* 0E0 */ ModelRender mUnk_E0;
    /* 140 */ fx32 mUnk_140; // Some x coord
    /* 144 */ fx32 mUnk_144; // Some z coord
    /* 148 */ fx32 mUnk_148;
    /* 14C */ unk32 mUnk_14C;
    /* 150 */ unk32 mUnk_150;
    /* 154 */ fx32 mUnk_154;
    /* 158 */ fx32 mUnk_158;
    /* 15C */ fx32 mUnk_15C; // Some y coord
    /* 160 */ unk32 mUnk_160;
    /* 164 */ unk8 mUnk_164;
    /* 165 */ PAD(0x164, 0x165);
    /* 166 */ unk16 mUnk_166;
    /* 168 */ unk16 mUnk_168; // Likely an angle
    /* 16A */ unk16 mUnk_16A; // Likely an angle
    /* 16C */ unk16 mUnk_16C; // Likely an angle
    /* 16E */ unk16 mUnk_16E; // Likely an angle
    /* 170 */ s16 mUnk_170;   // Likely an angle
    /* 172 */ PAD(0x172, 0x174);
    /* 174 */ VecFx32Cpp mUnk_174;
    /* 180 */ volatile u16 mUnk_180; // Some kind of flag
    /* 182 */ PAD(0x182, 0x184);
    /* 184 */ ActorUnkPSWB_184 mUnk_184;
    /* 188 */ unk32 mUnk_188;
    /* 18C */ unk32 mUnk_18C;
    /* 190 */ Timer mUnk_190;
    /* 194 */ ActorUnkPSWB_194 mUnk_194;

    ActorUnkPSWB();

    /* 18 */ virtual bool Init(unk32 param1) override;
    /* 20 */ virtual void Update() override;
    /* 24 */ virtual void vfunc_24() override;
    /* 2C */ virtual void vfunc_2C(unk32 param1) override;
    /* 4C */ virtual ~ActorUnkPSWB();
    /* 58 */ virtual bool vfunc_58(VecFx32 *param1) override;
    /* 5C */ virtual unk32 vfunc_5C(void) override;
    /* 60 */ virtual unk32 vfunc_60(void) override;
    /* 6C */ virtual void vfunc_6C(void) override;
    /* 70 */ virtual unk32 vfunc_70(void) override;

    void func_ov094_02166680(void);
    void func_ov094_02166890(void);
    void func_ov094_021668cc(void);
    void func_ov094_021668e0(ActorUnkPSWBState_ param1);
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
    unk32 func_ov094_02167518(void);
    void func_ov094_021675ac(VecFx32 *vec);
    unk32 func_ov094_02167614(void);
    void func_ov094_02167688(void);
    void func_ov094_021676f4(void);
    void func_ov094_02167794(unk16 param1, unk16 param2, unk16 param3);
    void func_ov094_0216781c(void);
    bool func_ov094_02167ab8(unk32 param1);
    bool func_ov094_02167b24(unk32 param1);
    void func_ov094_02167b64(unk32 param1);
    void func_ov094_02167bf0(void);
    void func_ov094_02167c54(void);
    void func_ov094_02167d20(void);
    void func_ov094_02167dbc(void);
    void func_ov094_02167e58(void);
    void func_ov094_0216825c(VecFx32 *param1, unk32 param2);
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
