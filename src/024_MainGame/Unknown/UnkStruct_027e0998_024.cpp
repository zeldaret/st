#include "Cutscene/Cutscene.hpp"
#include "MainGame/AdventureMode.hpp"
#include "System/SysNew.hpp"
#include "Unknown/UnkStruct_0204a088.hpp"
#include "Unknown/UnkStruct_027e0998.hpp"
#include "Unknown/UnkStruct_027e0cd8.hpp"
#include "Unknown/UnkStruct_ov024_020d86a0.hpp"
#include "Unknown/UnkStruct_ov026_02138d10.hpp"

void UnkStruct_ov024_020d86a0::Destroy() {
    delete data_ov024_020d86a0;
}

void UnkStruct_027e0998::Destroy() {
    delete data_027e0998;
}

UnkStruct_027e0998::~UnkStruct_027e0998() {
    data_027e0998 = NULL;
}

UnkStruct_027e0998::UnkStruct_027e0998() {}

UnkStruct_027e0998 *UnkStruct_027e0998::Create() {
    return new(HeapIndex_1) UnkStruct_027e0998();
}

bool UnkStruct_027e0998::vfunc_00(VecFx32 *pPos, Vec2s *param2, u16 *param3) {
    if (data_027e09a4->IsCutscene()) {
        CutsceneParamsEntry *pEntry = Cutscene_GetParamEntry(data_027e09a4->CurrentCSIndex());

        if (pEntry->mUnk_18 == 1) {
            return false;
        }
    }

    if (data_027e09a4->IsPassenger()) {
        return false;
    }

    if (data_027e09a4->IsTrain() && data_ov026_02138d10->func_ov026_020e6a6c()) {
        return false;
    }

    if (!this->func_ov024_020c716c()) {
        return false;
    }

    switch (this->mUnk_44) {
        case 3:
            return this->func_ov024_020c727c(param2, param3);
        case 4:
            if (data_027e09a4->IsTrain()) {
                u32 value = *(u32 *) param3;

                // position? param3 could be a Vec2us
                u16 stack[4];
                stack[2] = 0x200;
                stack[3] = 0x000;

                if (*(u32 *) &stack[2] != value) {
                    return false;
                }

                return this->func_ov024_020c7214(pPos, param2, param3);
            }

            return this->func_ov024_020c727c(param2, param3);
        default:
            break;
    }

    if (data_027e0cd8->func_ov000_02082124()) {
        bool var_r2 = true;

        if (*param3 != 0x100 && *param3 != 0x101) {
            var_r2 = false;
        }

        if (!var_r2) {
            return false;
        }

        VecFx32 pos;
        pos.x = data_027e0cd8->mUnk_24.x;
        pos.y = data_027e0cd8->mUnk_24.y;
        pos.z = data_027e0cd8->mUnk_24.z;
        return this->UnkStruct_027e0998_Base::vfunc_00(&pos, param2, param3);
    }

    return this->func_ov024_020c7214(pPos, param2, param3);
}

bool UnkStruct_027e0998::func_ov024_020c716c() {
    if (GetAdventureModeManager()->func_ov024_020c681c() &&
        (this->func_ov024_020c7300(0x01) || this->func_ov024_020c7300(0x06) || this->func_ov024_020c7300(0x07) ||
         this->func_ov024_020c7300(0x02) || this->func_ov024_020c7300(0x03) || this->func_ov024_020c7300(0x0A))) {
        return true;
    }

    return false;
}

bool UnkStruct_027e0998::func_ov024_020c7214(VecFx32 *pPos, Vec2s *param2, u16 *param3) {
    bool temp_r4 = this->UnkStruct_027e0998_Base::vfunc_00(pPos, param2, param3);

    if (data_027e09a4->IsTrain()) {
        Vec2s sp0;
        func_ov024_020d51dc(&sp0, data_027e09a4->CurrentSceneIndex());

        param2->x += sp0.x;
        param2->y += sp0.y;
    }

    return temp_r4;
}

bool UnkStruct_027e0998::func_ov024_020c727c(Vec2s *param1, u16 *param2) {
    bool var_r2 = true;

    if (*param2 != 0x100 && *param2 != 0x101) {
        var_r2 = false;
    }

    if (!var_r2) {
        return false;
    }

    bool temp_r4 = this->UnkStruct_027e0998_Base::vfunc_00(&data_027e09a4->mUnk_2C.mUnk_04, param1, param2);
    Vec2s sp0;
    func_ov024_020d51dc(&sp0, data_027e09a4->mUnk_2C.mSceneIndex);

    param1->x += sp0.x;
    param1->y += sp0.y;
    return temp_r4;
}

bool UnkStruct_027e0998::func_ov024_020c7300(unk32 param1) {
    UnkStruct_0204a088 *ptr = data_0204a088;

    unk32 unk_00;
    unk32 unk_04;
    unk32 unk_08;
    u16 temp_ip;

    temp_ip = ptr->mUnk_128;
    unk_00  = ptr->mUnk_00;
    unk_04  = ptr->mUnk_04;
    unk_08  = ptr->mUnk_08;

    if (unk_00 == param1 || (unk_04 == param1 && temp_ip == 0) || (unk_08 == param1 && temp_ip != 0)) {
        return true;
    }

    return false;
}

bool UnkStruct_027e0998::func_ov024_020c7354() {
    if (data_027e09a4->GetCurrentCourseEntry()->unk_10 == 6 && !data_027e09a4->IsPirate()) {
        return true;
    }

    return false;
}
