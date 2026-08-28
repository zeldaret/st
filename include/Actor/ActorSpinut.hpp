#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "ActorUnkCANS.hpp"
#include "ActorUnkZLSL_ZSRS.hpp"
#include "global.h"

class ModelRender_ov000_020b1a1c : public ModelRender {
public:
    /* 00 (base) */
    ModelRender_ov000_020b1a1c(G3d_Model *pModel);

    // data_ov000_020b1a1c
    /* 0C */ virtual void vfunc_0C() override;
};

enum ActorSpinutState_ {
    ActorSpinutState_0  = 0, // Idle
    ActorSpinutState_1  = 1, // Triggered by Link
    ActorSpinutState_2  = 2,
    ActorSpinutState_3  = 3, // Walking to target aka Link
    ActorSpinutState_4  = 4,
    ActorSpinutState_5  = 5,
    ActorSpinutState_6  = 6, // Damaged or killed ?
    ActorSpinutState_7  = 7,
    ActorSpinutState_8  = 8,
    ActorSpinutState_9  = 9, // Target lost
    ActorSpinutState_10 = 10,
    ActorSpinutState_11 = 11,
    ActorSpinutState_Max
};

class ActorSpinut_268 : public UnkStruct_ov031_Items_00 {
public:
    /* 00 (base) */
    /* 04 */ STRUCT_PAD(0x04, 0x08);
    /* 08 */ VecFx32 mUnk_08;
    /* 14 */

    ActorSpinut_268();

    // data_ov032_021221bc
    /* 00 */ virtual ~ActorSpinut_268();
    /* 08 */ virtual bool vfunc_08(const UnkStruct_ov031_020f3310 *param1) override;
};

class ActorSpinut_110 : public UnkStruct_ov000_020b31f0 {
public:
    /* 00 (base) */
    /* 2C */ UnkSystem5 mUnk_2C;
    /* 4C */ unk32 mUnk_4C;
    /* 50 */ STRUCT_PAD(0x50, 0x6C);
    /* 6C */ UnkSystem5 mUnk_6C;
    /* 8C */ unk32 mUnk_8C;
    /* 90 */

    ActorSpinut_110(ModelRender *param3, UnkActorFileSystem2 *param4) :
        UnkStruct_ov000_020b31f0(&this->mUnk_2C, &this->mUnk_6C, param3, param4),
        mUnk_2C(&this->mUnk_4C, NULL),
        mUnk_6C(&this->mUnk_8C, NULL) {
        if (param4 != NULL) {
            this->mUnk_6C.mpModel = this->mUnk_10;
            this->mUnk_2C.mpModel = this->mUnk_10;
        }
    }

    // data_ov032_02122244
    /* 38 */ virtual void vfunc_38(unk32 param1, unk32 param2) override;
    /* 3C */ virtual void vfunc_3C() override;
};

class ActorSpinut_1BC : public UnkStruct_ov000_020b31a8 {
public:
    /* 00 (base) */
    /* 1C */ UnkSystem5 mUnk_1C;
    /* 3C */ unk32 mUnk_3C;
    /* 40 */

    ActorSpinut_1BC(ModelRender *param2, UnkActorFileSystem2 *param3) :
        UnkStruct_ov000_020b31a8(&this->mUnk_1C, param2, param3),
        mUnk_1C(&this->mUnk_3C, NULL) {
        if (param3 != NULL) {
            this->mUnk_1C.mpModel = this->mUnk_10;
        }
    }

    // data data_ov032_021221fc
    /* 30 */ virtual s8 vfunc_30() override;
    /* 38 */ virtual void vfunc_38(unk32 param1, unk32 param2) override;
    /* 3C */ virtual void vfunc_3C() override;
};

class ActorSpinut : public Actor_Derived2 {
public:
    /* 000 (base) */
    /* 0AE */ STRUCT_PAD(0x0AE, 0x0B0);
    /* 0B0 */ ModelRender_ov000_020b1a1c mUnk_0B0;
    /* 110 */ ActorSpinut_110 mUnk_110;
    /* 1A0 */ STRUCT_PAD(0x1A0, 0x1BC);
    /* 1BC */ ActorSpinut_1BC mUnk_1BC;
    /* 1FC */ STRUCT_PAD(0x1FC, 0x218);
    /* 218 */ unk16 mUnk_218;
    /* 21C */ unk32 mUnk_21C;
    /* 220 */ unk32 mUnk_220;
    /* 224 */ unk16 mUnk_224;
    /* 228 */ Actor_9C mUnk_228;
    /* 248 */ UnkStruct_ActorUnkCANS_224 mUnk_248;
    /* 258 */ Actor_Derived1_94 mUnk_258;
    /* 264 */ unk32 mUnk_264;
    /* 268 */ ActorSpinut_268 mUnk_268;
    /* 27C */ VecFx32 mUnk_27C;
    /* 288 */ VecFx32 mUnk_288;
    /* 294 */ bool mUnk_294;
    /* 296 */ volatile u16 mUnk_296;
    /* 298 */ u16 mUnk_298;
    /* 29A */

    ActorSpinut();

    bool IsInternalTimerOut() {
        if (this->mUnk_296 < this->mUnk_298) {
            this->mUnk_296++;
            return false;
        }

        return true;
    }

    /* 18 */ virtual bool vfunc_18(unk32 param1) override;
    /* 1C */ virtual void vfunc_1C() override;
    /* 20 */ virtual void vfunc_20() override;
    /* 2C */ virtual void vfunc_2C(unk32 param1) override;
    /* 4C */ virtual ~ActorSpinut() override;
    /* 54 */ virtual void vfunc_54(unk32 param1) override;

    void func_ov032_021194dc(ActorState state);
    void SetState(ActorState state);
    void func_ov032_02119990();
    void func_ov032_02119a0c();
    void func_ov032_02119be8();
    void func_ov032_02119c80();
    void func_ov032_02119d7c();
    void func_ov032_02119df4();
    void func_ov032_02119e90();
    void func_ov032_02119f40();
    void func_ov032_0211a140();
    void func_ov032_0211a20c();
    void func_ov032_0211a484();
    void func_ov032_0211a52c();
    void func_ov032_0211a7b8();
    void func_ov032_0211a86c();
    void func_ov032_0211a950();
    void func_ov032_0211a9c8();
    void func_ov032_0211aa40();
    void func_ov032_0211aac8();
    void func_ov032_0211ab20();
    void func_ov032_0211abc0();
    void func_ov032_0211ac20();
    void func_ov032_0211ac94();
    void func_ov032_0211ad40();
    void func_ov032_0211adf4();
    void func_ov032_0211b024();
    bool func_ov032_0211b064(unk32 param1);
    bool func_ov032_0211b114();
    bool func_ov032_0211b17c();
    void func_ov032_0211b190(s32 param1, s32 param2);
    void func_ov032_0211b1e0();
    void func_ov032_0211b298();
    static void func_ov032_0211b37c(ActorSpinut *, u16 param1);
    void func_ov032_0211b3b0();
};

class ActorProfileSpinut : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileSpinut();

    /* 0C */ virtual Actor *Create();

    static ActorProfileSpinut *GetProfile();
};
