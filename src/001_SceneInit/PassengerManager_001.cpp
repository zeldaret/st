#include "MainGame/PassengerManager.hpp"
#include "Unknown/UnkStruct_02049bac.hpp"
#include "Unknown/UnkStruct_027e09b8.hpp"

extern "C" bool func_ov000_0205c9d0(unk32 stationSceneIdx);

bool PassengerManager::func_ov001_020bf870() {
    s32 *pSceneIndex = &data_027e09a4->mUnk_00.sceneIndex;

    bool var_r0 = true;
    bool var_r3 = true;
    bool var_r4 = true;

    if (data_027e09a4->mUnk_00.sceneIndex != SceneIndex_t_dark) {
        bool var_r5 = false;

        if (data_027e09a4->IsDarkRealm()) {
            var_r5 = true;
        }

        if (!var_r5) {
            var_r4 = false;
        }
    }

    if (!var_r4 && *pSceneIndex != SceneIndex_b_last1) {
        var_r3 = false;
    }

    if (!var_r3 && *pSceneIndex != SceneIndex_b_last2) {
        var_r0 = false;
    }

    return var_r0;
}

PassengerManager::PassengerManager() {
    this->mDate   = 0;
    this->mUnk_2C = -1;
    this->mUnk_30 = -1;
}

PassengerManager::~PassengerManager() {}

void PassengerManager::func_ov001_020bf8e4() {
    this->func_ov001_020bf910();

    if (this->CanCompleteTrip() && this->func_ov001_020bf870()) {
        this->SetFailedFlag();
        this->Reset();
    }
}

void PassengerManager::func_ov001_020bf90c() {}

void PassengerManager::func_ov001_020bf910() {
    union Pair {
        struct {
            s32 a;
            s32 b;
        };
        s32 data[2];
    };

    struct LocalStack {
        Pair sp14[20];
        Pair *spB4;
    } stack;

    int spC_10[2];
    Date sp4[4];
    const s16 *new_var7;
    s32 temp_r0;
    s32 temp_r1;
    s32 temp_r4;
    bool temp_r5;
    s32 var_r2;
    Pair(*new_var2)[20];
    bool var_r6;
    s32 var_r7;
    Date temp_r2;
    Pair(*new_var)[20];

    temp_r4 = this->IsDateUnset();
    temp_r5 = func_ov000_0205c9d0(SceneIndex_f_flame5);

    var_r6 = true;
    if (data_027e09b8->HasAdventureFlag(AdventureFlag_CompletedSnowRestorationSong)) {
        if (this->GetActorId() != ActorId_OLDS) {
            sp4[1]      = this->GetDate();
            sp4[3].data = sp4[1].data;

            if (sp4[1] != this->mDate) {
                var_r6 = false;
            }
        }
    }

    if (var_r6) {
        this->func_ov024_020d4554();
        return;
    }

    if (!temp_r4 && !this->func_ov001_020bfa1c()) {
        this->func_ov024_020d4554();
        return;
    }

    new_var7   = data_ov024_020d7598;
    stack.spB4 = stack.sp14;

    for (var_r7 = 0; var_r7 < 5; var_r7++) {
        for (var_r2 = 0; var_r2 < 5; var_r2++) {
            if (temp_r4 && (new_var7[var_r7] != 0x29)) {
                continue;
            }

            if (new_var7[var_r7] == new_var7[var_r2]) {
                continue;
            }

            if (!temp_r5 && (new_var7[var_r7] == 0x2E || new_var7[var_r2] == 0x2E)) {
                continue;
            }

            if (new_var7[var_r7] == 0x2E && new_var7[var_r2] == 0x29) {
                continue;
            }

            if (new_var7[var_r7] == 0x29 && new_var7[var_r2] == 0x2E) {
                continue;
            }

            spC_10[0] = new_var7[var_r7];
            spC_10[1] = new_var7[var_r2];

            if (stack.spB4 != 0) {
                stack.spB4->data = spC_10;
            }

            stack.spB4++;
        }
    }

    temp_r1        = stack.spB4 - stack.sp14;
    sp4[0].data[0] = this->GetDate();
    sp4[2].data    = sp4[0].data;
    temp_r0        = this->GetRandomIndex(temp_r1, sp4[2].data[0]);

    new_var2      = &stack.sp14;
    this->mUnk_2C = (*new_var2)[temp_r0].a;
    this->mUnk_30 = (*(new_var = &stack.sp14))[temp_r0].b;
}

bool PassengerManager::func_ov001_020bfa1c() {
    Date date;
    s16 result = this->GetDate();
    date       = *(u16 *) &result;
    return !(date.day & 1);
}

DECL_INSTANCE(PassengerManager, gpPassengerManager);
