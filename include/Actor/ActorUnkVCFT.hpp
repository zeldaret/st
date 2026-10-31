#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorCharacter.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkVCFT;

class ActorUnkVCFT_2BC_3C {
public:
    /* 00 */ PAD(0x00, 0x30);
    /* 30 */
};

class ActorUnkVCFT_2BC : public UnkStruct_ov000_020b31a8 {
public:
    /* 00 (base) */
    /* 1C */ UnkSystem5 mUnk_1C;
    /* 3C */ ActorUnkVCFT_2BC_3C mUnk_3C;
    /* 6C */

    ActorUnkVCFT_2BC(ModelRender_ov000_020b4d64 *param1, UnkActorFileSystem2 *param2) :
        UnkStruct_ov000_020b31a8(&this->mUnk_1C, param1, param2),
        mUnk_1C(&this->mUnk_3C, NULL) {
        if (param2 != NULL) {
            this->mUnk_1C.mpModel = this->mUnk_10;
        }
    }

    // data_ov066_0215e294
    /* 30 */ virtual s8 vfunc_30() override;
    /* 38 */ virtual void vfunc_38(unk32 param1, unk32 param2) override;
    /* 3C */ virtual void vfunc_3C() override;
};

class ActorUnkVCFT_328_Base {
public:
    /* 00 (vtable) */
    /* 04 */ unk8 mUnk_04[0x2C];
    /* 30 */ const char **mUnk_30;
    /* 34 */

    ActorUnkVCFT_328_Base(const char **param2);

    /* 00 */ virtual ~ActorUnkVCFT_328_Base();
    /* 08 */ virtual bool vfunc_08();
    /* 0C */ virtual void vfunc_0C();
    /* 10 */ virtual void vfunc_10();
    /* 14 */

    unk32 func_ov089_02165a18(unk32 param1);
    unk32 func_ov089_02165a28(unk32 param1);
    void func_ov089_021658ec(void);
};

class ActorUnkVCFT_328 : public ActorUnkVCFT_328_Base {
public:
    /* 00 (base) */
    /* 34 */ ActorUnkVCFT *mUnk_34;
    /* 38 */ u32 mUnk_38;
    /* 3C */ unk32 mUnk_3C;
    /* 40 */ bool mUnk_40;
    /* 41 */ bool mUnk_41;
    /* 44 */

    void UnknownAction1(bool param1, bool param2, unk32 param3) {
        this->mUnk_40 = param1;
        this->mUnk_41 = param2;
        this->mUnk_3C = param3;
    }

    void UnknownAction2(unk32 param1, unk32 param2) {
        this->mUnk_38 *= param1;
        this->UnknownAction1(true, true, param2);
    }

    ActorUnkVCFT_328(ActorUnkVCFT *pActor);

    // data_ov066_0215ffb0
    /* 00 */ virtual ~ActorUnkVCFT_328() override;
    /* 08 */ virtual bool vfunc_08() override;

    void func_ov066_02158eb4(void);
    void func_ov066_0215ac68(const char **param1);

    unk32 func_ov089_02165a34();
};

class ActorUnkVCFT_3B0 : public LinkList<ActorUnkVCFT_3B0> {
public:
    /* 00 (vtable) */
    /* 04 (base) */
    /* 0C */ unk32 mUnk_0C;
    /* 0C */ unk16 mUnk_10;
    /* 0C */ unk16 mUnk_12;
    /* 0C */ unk32 mUnk_14;
    /* 0C */ unk32 mUnk_18;
    /* 0C */ Vec2s mUnk_1C;
    /* 20 */

    ActorUnkVCFT_3B0();

    // data_ov089_02170e8c
    /* 00 */ virtual void vfunc_00();

    void func_ov089_0216642c(unk32 param1);
    void func_ov089_021664b8();
};

class ActorUnkVCFT : public ActorCharacter_Derived1 {
public:
    /* 000 (base) */
    /* 24C */ ModelRender_ov000_020b4d64 mUnk_24C;
    /* 2AC */ PAD(0x2AC, 0x2BC);
    /* 2BC */ ActorUnkVCFT_2BC mUnk_2BC;
    /* 328 */ ActorUnkVCFT_328 mUnk_328;
    /* 36C */ ActorUnkVCFT_328 mUnk_36C;
    /* 3B0 */ ActorUnkVCFT_3B0 mUnk_3B0;
    /* 3D0 */ unk32 mUnk_3D0;
    /* 3D4 */ unk32 mUnk_3D4;
    /* 3D8 */ Timer mUnk_3D8;
    /* 3DC */ Timer mUnk_3DC;
    /* 3E0 */ Timer mUnk_3E0;
    /* 3E4 */ unk32 mUnk_3E4;
    /* 3E8 */ bool mUnk_3E8;
    /* 3E9 */ bool mUnk_3E9;
    /* 3EA */ bool mUnk_3EA;
    /* 3EC */ unk16 mUnk_3EC;
    /* 3F0 */

    ActorUnkVCFT();

    /* 20 */ virtual void Update() override;
    /* 2C */ virtual void vfunc_2C(unk32 param1) override;
    /* 7C */ virtual unk32 vfunc_7C(unk32 param1) override;
    /* 80 */ virtual s16 vfunc_80(unk32 param1, unk32 param2, unk32 param3) override;
    /* 98 */ virtual void vfunc_98(u32 param1) override;
    /* 0BC */ virtual void vfunc_0BC() override;

    void func_ov066_0215b2f4(void);
    void func_ov066_0215b848(void);
    void func_ov066_0215b864(s32 index);
    void func_ov066_0215b8c4(void);
    void func_ov066_0215b938(void);
};

class ActorProfileUnkVCFT : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkVCFT();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkVCFT *GetProfile();
};
