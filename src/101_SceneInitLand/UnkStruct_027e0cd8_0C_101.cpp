#include "Actor/Actor.hpp"
#include "System/SysNew.hpp"
#include "Unknown/UnkStruct_0204a088.hpp"
#include "Unknown/UnkStruct_027e09b8.hpp"
#include "Unknown/UnkStruct_027e0cd8.hpp"

#include <nitro/mi.h>

struct UnkStruct_ov070_0214dc74 {
    /* 00 */ SceneIndex sceneIndex;
    /* 04 */ u8 unk_04[4];
    /* 08 */
};
extern UnkStruct_ov070_0214dc74 data_ov070_0214dc74[18];
extern "C" UnkStruct_ov070_0214dc74 *func_ov070_02143fe4(int index);

UnkStruct_027e0cd8_0C::UnkStruct_027e0cd8_0C(UnkStruct_027e0cd8 *param1) :
    UnkStruct_027e0cd8_0C_Base(param1) {
    this->mUnk_1D0 = 0x00;
    this->mUnk_1D4 = 0x00;
    this->mUnk_1D8 = -1;
    this->mUnk_1DC = false;
    this->mUnk_1DD = false;

    for (int i = 0; i < ARRAY_LEN(this->mUnk_170); i++) {
        this->mUnk_160[i] = NULL;
        this->mUnk_1C0[i] = NULL;

        for (int j = 0; j < ARRAY_LEN(this->mUnk_170[i]); j++) {
            this->mUnk_170[i][j] = NULL;
        }
    }
}

UnkStruct_027e0cd8_0C::~UnkStruct_027e0cd8_0C() {
    for (int i = 0; i < this->mUnk_1D4; i++) {
        if (this->mUnk_160[i] != NULL) {
            this->mUnk_160[i]->~UnkStruct_027e0cd8_0C_160();
            DELETE(this->mUnk_160[i]);
        }

        this->mUnk_1C0[i] = NULL;

        for (int j = 0; j < ARRAY_LEN(this->mUnk_170[i]); j++) {
            DELETE(this->mUnk_170[i][j]);
        }
    }

    if (this->mUnk_1D0 != NULL) {
        delete this->mUnk_1D0;
    }
}

void UnkStruct_027e0cd8_0C::vfunc_38() {
    this->UnkStruct_027e0cd8_0C_Base::vfunc_38();

    EntranceInfo local_28;
    MI_CpuCopy32((void *) this->func_ov001_020b8c80(0x3F), &local_28, sizeof(EntranceInfo));
    local_28.sceneIndex = data_027e09a4->mUnk_2C.mSceneIndex;
    this->func_ov001_020b8c30(local_28);

    EntranceInfo auStack_3c;
    MI_CpuCopy32((void *) this->func_ov001_020b8c80(0x3D), &auStack_3c, sizeof(EntranceInfo));
    this->func_ov001_020b8c30(auStack_3c);

    this->func_ov031_020d8738();
    this->func_ov031_020d88c0();
    this->func_ov031_020d8ae4();

    if (data_027e09a4->CurrentCSIndex() == CutsceneIndex_PassengerCarBeforeMalladusFight &&
        !data_027e09b8->HasAdventureFlag(AdventureFlag_DefeatedDemonTrain2)) {
        stack_ov000_02073578 local_48;
        local_48.unk_08 = 0x16;
        local_48.unk_00 = 0x01;
        data_027e09b8->func_ov000_02073578(&local_48, 0x01);
    } else {
        data_0204a088->func_ov000_020611fc(0x01);
        data_0204a088->func_ov000_02061230();
    }

    if (data_027e09a4->IsSceneModeAdventure()) {
        this->mUnk_1D0 = new(HeapIndex_1) UnkStruct_027e0cd8_0C_1D0();
    }
}

void UnkStruct_027e0cd8_0C::vfunc_08() {
    if (this->mUnk_1D0 != NULL) {
        this->mUnk_1D0->func_ov101_021837a0();
    }
}

UnkStruct_027e0cd8_0C_1D0::UnkStruct_027e0cd8_0C_1D0() {}

UnkStruct_027e0cd8_0C_1D0::~UnkStruct_027e0cd8_0C_1D0() {}

void func_ov101_02183884(int index, unk32 param2, unk32 param3);

void UnkStruct_027e0cd8_0C_1D0::func_ov101_021837a0() {
    ActorParams sp14;
    ActorRef sp10;
    bool spC;

    struct {
        u32 i;
        SceneIndex sceneIndex;
    } stack;

    for (int i = 0; i < 5; i++) {
        func_ov101_02183884(i, 0x00, 0x00);
    }

    spC = false;

    bool var_r6;
    if (data_027e09a4->IsCutscene()) {
        var_r6 = false;
    } else {
        var_r6        = true;
        bool var_r4_2 = true;

        UnkStruct_027e09a4 *ptr = data_027e09a4;
        if (ptr->GetCurrentCourseEntry()->unk_10 != 0x01 && ptr->GetCurrentCourseEntry()->unk_10 != 0x03) {
            var_r4_2 = false;
        }

        if (var_r4_2) {

            stack.sceneIndex = data_027e09a4->CurrentSceneIndex();

            for (stack.i = 0; stack.i < ARRAY_LEN(data_ov070_0214dc74); stack.i++) {
                UnkStruct_ov070_0214dc74 *pEntry = func_ov070_02143fe4(stack.i);

                if (stack.sceneIndex == pEntry->sceneIndex) {
                    spC    = true;
                    var_r6 = false;

                    for (int j = 0; j < ARRAY_LEN(pEntry->unk_04); j++) {
                        if (pEntry->unk_04[j] == data_027e0cd8->func_ov000_02081d5c()) {
                            var_r6 = true;
                        }
                    }
                }
            }
        }
    }

    if (spC) {
        sp14.mUnk_28.Reset();
        sp14.func_ov000_020975f8();
        sp14.func_ov000_020975f8();

        if (var_r6) {
            sp14.mParams[1] = 0x01;
        }

        Actor::func_ov000_020973f4(&sp10, &data_ov000_020b539c_eur, ActorId_RCSG, &sp14, 0x00);
    }

    if (var_r6) {
        data_027e0cd8->mUnk_17 = true;
    }
}

void func_ov101_02183884(int index, unk32 param2, unk32 param3) {
    ActorParams params;
    ActorRef ref;

    params.mUnk_28.Reset();
    params.func_ov000_020975f8();

    params.mParams[0] = index;
    params.mUnk_18[0] = param2;
    params.mUnk_1A[0] = param3;

    Actor::func_ov000_020973f4(&ref, &data_ov000_020b539c_eur, ActorId_MLCK, &params, 0x00);
}
