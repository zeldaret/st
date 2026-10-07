#include "Actor/Actor.hpp"
#include "Actor/ActorHeart.hpp"
#include "Actor/ActorItemBoomerang.hpp"
#include "Actor/ActorItemDrop.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorRef.hpp"
#include "Actor/ActorRupee.hpp"
#include "Actor/ActorUnkKEYN.hpp"
#include "Actor/ActorUnkSWBM.hpp"
#include "Physics/Cylinder.hpp"
#include "Unknown/UnkStruct_0204af1c.hpp"
#include "Unknown/UnkStruct_027e0998.hpp"
#include "Unknown/UnkStruct_027e09a4.hpp"
#include "Unknown/UnkStruct_027e09a8.hpp"
#include "Unknown/UnkStruct_027e09b4.hpp"
#include "Unknown/UnkStruct_027e09bc.hpp"
#include "Unknown/UnkStruct_027e0ce0.hpp"
#include "Unknown/UnkStruct_027e0d38.hpp"
#include "math.hpp"
#include "nitro/fx.h"
#include "nitro/math.h"

extern "C" bool func_01ffecdc(unk32 param1, Cylinder *param2);
extern "C" u16 func_01ffbbe0(fx32 x, fx32 z);
extern "C" void func_01ff93c0(VecFx32 *, fx32);
extern "C" void func_01ff9770(VecFx32 *, unk32);
extern "C" void func_01ffb714(VecFx32 *, VecFx32 *, void *);
extern "C" void func_01ff97c8(VecFx32 *, int);
extern "C" void func_01ffce1c(Cylinder *, Cylinder *);
extern "C" unk32 func_01ff9258(fx32, fx32);

extern "C" void func_ov000_0209807c(void *);
extern "C" void func_ov000_020980e0(void *);
extern "C" void func_ov000_02098244(VecFx32 *);
extern "C" void func_ov000_02097f38(VecFx32 *);
extern "C" void func_ov000_02097fcc(VecFx32 *);
extern "C" void func_ov000_02097ea0(VecFx32 *);
extern "C" void func_ov000_02097e04(VecFx32 *);
extern "C" void func_ov000_02097d4c(VecFx32 *);
extern "C" void func_ov000_02099870(UnkStruct_ActorUnkCANS_224 *, VecFx32 *, u16);
extern "C" void func_ov000_020a1330(u16, ActorRef, VecFx32, UnkAngleStruct, unk32, unk32);
extern "C" void func_ov031_020f439c(void *, Vec3s *, unk32);

extern unk32 data_ov000_020aed08;
extern unk32 data_ov000_020aed04;
extern unk32 data_ov000_020aecfc;
extern u16 data_ov000_020aed00;
extern const unk16 data_ov000_020aecec;
extern VecFx32 data_027e07d4;

struct UnkStruct_ov000_020aa888 {
    /* 00 */ u16 unk_00;
    /* 00 */ u16 unk_02;
};
extern UnkStruct_ov000_020aa888 data_ov000_020aa888;

bool Actor::func_ov017_020beeec(unk32 param1) {
    Cylinder sp0;

    this->func_ov000_02098a18(&sp0);
    sp0.size += param1;

    return func_01ffecdc(0, &sp0) || func_01ffecdc(1, &sp0);
}

bool Actor::func_ov017_020bef4c(unk32 param1) {
    if (data_027e0ce0->func_ov000_0208be0c(this->mRef)) {
        return 1;
    }

    return this->func_ov017_020beeec(param1);
}

void Actor::func_ov017_020bef88(Actor_vfunc_30 *param1, UnkStruct_ov019_020d24c8_28_258_00 *param2, unk32 param3) {
    Vec2s sp4;
    bool var_r2 = param2->mUnk_04 & 1;

    if (param1->mUnk_00.unk_00 != var_r2 && param1->mUnk_00.unk_01 != var_r2) {
        return;
    }

    if (data_027e0998->vfunc_00(&this->mPos, &sp4, &this->mRef)) {
        data_0204af1c.func_0201aa44(param2, &sp4, param3, 0);
    }
}

void Actor::func_ov017_020bf024(Actor_vfunc_30 *param1) {
    if (this->IsFlag7()) {
        this->func_ov017_020bef88(param1, &gpActorManager->mUnk_14, 1);
    }
}

void Actor::func_ov017_020bf050(Actor_9C *param1, unk32 param2) {
    Cylinder sp0;
    s16 temp_r2;
    s32 var_r1;

    this->vfunc_10(&sp0);

    fx32 size = -sp0.size;

    temp_r2 = func_01ffbbe0(param1->mUnk_10.x, param1->mUnk_10.z);

    fx16 sin = SIN((u16) (s16) temp_r2);
    fx16 cos = COS((u16) (s16) temp_r2);

    sp0.pos.x += FX_MUL(sin, size);
    sp0.pos.z += FX_MUL(cos, size);

    func_ov000_0209807c(&sp0);

    if (this->mUnk_48 > 0) {
        if (param1->mUnk_1C == 0x0D) {
            var_r1 = 0x8D76;
        } else {
            var_r1 = 0xE4;
        }
    } else {
        var_r1 = 0xE5;
    }

    if (var_r1 != 0) {
        data_027e09a8->func_ov000_02071b30(var_r1, &sp0.pos, 0);
    }

    if (this->mUnk_48 <= 0) {
        this->func_ov017_020bf2d8(param1, param2);
    }
}

void Actor::func_ov017_020bf178(Actor_9C *param1, unk32 param2) {
    Cylinder sp0;
    s32 temp_r2;
    s32 var_r1;

    this->vfunc_10(&sp0);

    fx32 size = -sp0.size;

    temp_r2 = func_01ffbbe0(param1->mUnk_10.x, param1->mUnk_10.z);

    fx16 sin = SIN((u16) (s16) temp_r2);
    fx16 cos = COS((u16) (s16) temp_r2);

    sp0.pos.x += FX_MUL(sin, size);
    sp0.pos.z += FX_MUL(cos, size);

    func_ov000_020980e0(&this->mPos);

    var_r1 = this->mUnk_48 > 0 ? 0xE4 : 0xE5;

    if (var_r1 != 0) {
        data_027e09a8->func_ov000_02071b30(var_r1, &sp0.pos, 0);
    }

    if (this->mUnk_48 <= 0) {
        this->func_ov017_020bf2d8(param1, param2);
    }
}

void Actor::func_ov017_020bf284(VecFx32 *param1, VecFx32 param2) {
    VecFx32 sp0;

    sp0 = param2;

    VecFx32_Add(&sp0, param1, &sp0);
    func_01ff93c0(&sp0, FX_F32_TO_FX32(0.5f));
    func_ov000_02098244(&sp0);
}

void Actor::func_ov017_020bf2d8(Actor_9C *param1, unk32 param2) {
    u16 var_r0_2;
    u16 var_r0_3;
    u16 temp_r0;
    u16 temp_r1;
    u16 temp_r1_2;
    s32 var_r3;
    bool var_lr;
    s32 var_ip_2;

    var_r3 = 1;
    var_lr = false;

    if (param1->mUnk_0C.UnkCheck1() && param1->mUnk_0C.GetTypeIndex1() == 0x01) {
        var_lr = true;
    }

    if (!var_lr) {
        var_ip_2 = 0;

        if (param1->mUnk_0C.type_index == 0x102) {
            temp_r0 = param1->mUnk_0C.unk_id;

            if (temp_r0 != 1 && temp_r0 != 3) {

            } else {
                var_ip_2 = 1;
            }
        }

        if (var_ip_2 == 0) {
            var_r3 = 0;
        }
    }

    if (var_r3 != 0) {
        return;
    }

    switch (param2) {
        case 1:
            if (!data_027e09a4->IsSceneModeAdventure()) {
                return;
            }

            temp_r1  = data_027e09a4->mUnk_5C;
            var_r0_2 = data_ov000_020aa888.unk_00;

            if (var_r0_2 <= temp_r1) {
                var_r0_2 = temp_r1;
            }

            data_027e09a4->mUnk_5C = var_r0_2;
            break;
        case 2:
            if (!data_027e09a4->IsSceneModeAdventure()) {
                return;
            }

            temp_r1_2 = data_027e09a4->mUnk_5C;
            var_r0_3  = data_ov000_020aa888.unk_02;

            if (var_r0_3 <= temp_r1_2) {
                var_r0_3 = temp_r1_2;
            }

            data_027e09a4->mUnk_5C = var_r0_3;
            break;
        case 0:
        default:
            break;
    }
}

void Actor::func_ov017_020bf3e0(unk32 param1, fx32 param2) {
    VecFx32 sp0;

    sp0 = this->mPos;
    sp0.y += param2;

    if (data_027e09a4->IsTrain()) {
        switch (param1) {
            case 0:
            case 1:
            case 2:
                func_ov000_02097f38(&sp0);
                break;
            case 3:
                func_ov000_02097fcc(&sp0);
                break;
            default:
                break;
        }

        return;
    }

    switch (param1) {
        case 0:
            func_ov000_02097ea0(&sp0);
            break;
        case 1:
            func_ov000_02097e04(&sp0);
            break;
        case 2:
            func_ov000_02097d4c(&sp0);
            break;
        default:
            break;
    }
}

void Actor::func_ov017_020bf4b0(unk32 param1) {
    if (param1 >= 0 && param1 < 8) {
        ActorRef ref;
        ActorRupee::func_ov031_020e8d2c(&ref, &this->mPos, param1, 2, this->mRef);
        return;
    }

    switch (param1) {
        case 8: {
            ActorRef ref;
            ActorHeart::func_ov031_020eed64(&ref, &this->mPos, 1, this->mRef);
            break;
        }
        case 13: {
            ActorRef ref;
            ActorUnkKEYN::func_ov070_0214143c(&ref, &this->mPos, this->mRef, -1, 0, 0);
            break;
        }
        case 14: {
            ActorRef ref;
            ActorItemDrop::func_ov031_020f9f8c(&ref, &this->mPos, TreasureManager::func_ov000_020a9d78(-1), this->mRef);
            break;
        }
        default:
            break;
    }
}

void Actor::func_ov017_020bf574(unk32 param1, unk32 param2) {
    func_ov000_020a1330(param1, this->mRef, this->mPos, this->mAngle, 8, param2);
}

void Actor::func_ov017_020bf5c4(VecFx32 *param1, unk32 param2, unk32 param3, unk32 param4, s16 param5) {
    if (this->mUnk_46 & 0x01) {
        data_027e09b4->func_01fff60c(param1, param2, param3, param4, param5, 0);
    } else {
        data_027e09b4->func_ov017_020c08c4(param1, param2, param3, param4, param5, 1);
    }
}

void Actor::func_ov017_020bf634(const VecFx32 *param1, u16 param2, unk32 param3) {
    UNSET_FLAG(this->mFlags, ActorFlag_5);

    this->mTimer.Set(0, param2);

    this->mVel.x = param1->x;
    this->mVel.z = param1->z;
    this->mVel.y = 0;

    func_01ff9770(&this->mVel, param3);

    SET_FLAG(this->mFlags, ActorFlag_15);
    this->mUnk_3C = NULL;
}

void Actor::func_ov017_020bf688() {
    SET_FLAG(this->mFlags, ActorFlag_15);
    func_01ff93c0(&this->mVel, 0xC7B);

    if (this->mUnk_46 & 0x0C) {
        this->mVel.x /= 2;
        this->mVel.z /= 2;
    }

    this->mUnk_3C = NULL;

    if (this->mTimer.HasExpired()) {
        SET_FLAG(this->mFlags, ActorFlag_5);
    }
}

void Actor::func_ov017_020bf710(UnkStruct_ActorUnkCANS_224 *param1, const VecFx32 *param2, u16 param3) {
    UNSET_FLAG(this->mFlags, ActorFlag_5);

    this->mUnk_54 = param1;
    func_ov000_02099870(param1, &this->mPos, param3);

    this->mTimer.Set(0, param1->mUnk_08.GetRemainingTime());

    this->mVel.x = param2->x;
    this->mVel.z = param2->z;
    this->mVel.y = 0;

    if (!VecFx32_IsCleared(&this->mVel)) {
        func_01ff9770(&this->mVel, data_ov000_020aecfc);
    }

    SET_FLAG(this->mFlags, ActorFlag_15);
    this->mUnk_3C = NULL;
}

void Actor::func_ov017_020bf7a8() {
    SET_FLAG(this->mFlags, ActorFlag_15);
    this->func_ov000_02098838();

    UnkStruct_ActorUnkCANS_224 *temp_r4 = this->mUnk_54;
    temp_r4->mUnk_08.Update();

    func_01ff93c0(&this->mVel, 0xC7B);

    if (this->mUnk_46 & 0x0C) {
        this->mVel.x /= 2;
        this->mVel.z /= 2;
    }

    if (this->mTimer.value < temp_r4->mUnk_0E) {
        this->mUnk_3C = NULL;
    }

    if (this->mTimer.HasExpired()) {
        temp_r4->Destroy();
        SET_FLAG(this->mFlags, ActorFlag_5);
    }
}

void Actor::func_ov017_020bf894(UnkStruct_ActorUnkCANS_224 *param1) {
    if (this->mUnk_48 <= 0) {
        param1->Destroy();
        return;
    }

    param1->func_ov000_020998f0(this->mRef, &this->mPos);
}

void Actor::vfunc_40() {
    UNSET_FLAG(this->mFlags, ActorFlag_5);
    this->mUnk_54 = NULL;
    VecFx32_Copy(&data_027e07d4, &this->mVel);
    SET_FLAG(this->mFlags, ActorFlag_15);
    this->mUnk_3C = NULL;
}

void Actor::vfunc_44() {
    SET_FLAG(this->mFlags, ActorFlag_15);

    if (data_027e0d38->func_ov026_020d9c14(this->mRef, &this->mPos, &this->mVel) == 0) {
        SET_FLAG(this->mFlags, ActorFlag_5);
    }

    this->mAngle += data_ov000_020aecec;
    this->mUnk_3C = NULL;
}

void Actor::func_ov017_020bf99c() {
    UNSET_FLAG(this->mFlags, ActorFlag_5);
    VecFx32_Reset(&this->mVel);
    this->mTimer.Set(0, 1);
}

void Actor::func_ov017_020bf9c8(Actor *param1) {
    if (param1 != 0) {
        func_01ffb714(&param1->mPos, &this->mPos, &this->mVel);
        func_01ff97c8(&this->mVel, 0x1000);
        return;
    }

    u16 timerMax = this->mTimer.max;
    u16 time     = this->mTimer.value;

    if (time >= timerMax) {
        SET_FLAG(this->mFlags, ActorFlag_5);
        return;
    }

    if (time < timerMax) {
        this->mTimer.value++;
    }

    func_01ffb714(data_027e0ce0->func_01fff148(0), &this->mPos, &this->mVel);
    func_01ff97c8(&this->mVel, 0x1000);
}

void Actor::func_ov017_020bfa50(VecFx32 *param1, unk32 param2) {
    UNSET_FLAG(this->mFlags, ActorFlag_5);

    this->mTimer.Set(0, param2);

    VecFx32 sp0;
    func_01ffb714(param1, &this->mPos, &sp0);

    fx32 z = sp0.z / param2;
    fx32 y = sp0.y / param2 + (this->mUnk_2C * param2) / 2;
    fx32 x = sp0.x / param2;

    this->mVel.x = x;
    this->mVel.y = y;
    this->mVel.z = z;
}

void Actor::func_ov017_020bfad4() {
    this->mVel.y -= this->mUnk_2C;

    if (this->mTimer.HasExpired()) {
        SET_FLAG(this->mFlags, ActorFlag_5);
    }
}

void Actor::func_ov017_020bfb18(Actor_9C *param1) {
    switch (param1->mUnk_1C) {
        case 8:
            if (param1->mUnk_0C.HasTypeIndexValue(0x102)) {
                data_027e0ce0->func_ov000_0208bd20(param1->mUnk_0C.UnkCheck3(0x102), 0x8C98, 0);
            }

            break;
        case 4:
            data_027e0d38->func_ov031_020d9c44(data_ov000_020aed00);
            break;
        case 12: {
            Actor *pActor = gpActorManager->func_01fff3b4(param1->mUnk_0C);

            if (pActor != NULL) {
                ((ActorItemBoomerang *) pActor)->func_ov031_020e49b0(0x8D70);
            }

            break;
        }
        case 13: {
            Cylinder sp14;

            this->vfunc_10(&sp14);

            VecFx32 sp8;
            sp8 = param1->mUnk_10;
            VecFx32_TryNormalize(&sp8);
            sp8.x = -sp8.x;
            sp8.y = -sp8.y;
            sp8.z = -sp8.z;

            fx32 size = sp14.size;

            s16 temp_r2 = func_01ffbbe0(sp8.x, sp8.z);

            fx16 sin = SIN((u16) (s16) temp_r2);
            fx16 cos = COS((u16) (s16) temp_r2);

            sp14.pos.x += FX_MUL(sin, size);
            sp14.pos.z += FX_MUL(cos, size);

            Vec3s sp0;
            sp0.x = sp8.x;
            sp0.y = sp8.y;
            sp0.z = sp8.z;

            func_ov031_020f439c(&sp14, &sp0, 0x8D78);
            break;
        }
        case 7: {
            Actor *pActor = gpActorManager->func_01fff3b4(param1->mUnk_0C);

            if (pActor != NULL) {
                ((ActorUnkSWBM *) pActor)->func_ov031_020e6d48();
            }

            break;
        }
        default:
            break;
    }
}

bool Actor::vfunc_14(Cylinder *param1) {
    Cylinder sp0;

    if (this->mUnk_34 == 0) {
        return false;
    }

    this->vfunc_10(&sp0);
    func_01ffce1c(param1, &sp0);
    return true;
}

bool Actor::func_ov017_020bfd9c(Vec2s *param1, unk32 param2, UnkStruct_027e09bc_0C *param3, AABB *param4) {
    struct {
        Cylinder unk_00;
        fx32 unk_10;
    } sp4;

    sp4.unk_00.size  = 0;
    sp4.unk_00.pos.x = 0;
    sp4.unk_00.pos.y = 0;
    sp4.unk_00.pos.z = 0;

    if (this->vfunc_14(&sp4.unk_00)) {
        if (param4 != NULL) {
            bool var_r9 = false;

            //! TODO: fake match?
            bool var_r3 = param4->max.x >= *(fx32 *) &param4->min.x && param4->max.y >= param4->min.y;

            if (var_r3 != 0 && param4->max.z >= param4->min.z) {
                var_r9 = true;
            }

            if (var_r9) {
                if (sp4.unk_00.pos.x < param4->min.x - sp4.unk_00.size || param4->max.x + sp4.unk_00.size < sp4.unk_00.pos.x ||
                    sp4.unk_00.pos.y < param4->min.y - sp4.unk_10 || param4->max.y < sp4.unk_00.pos.y ||
                    sp4.unk_00.pos.z < param4->min.z - sp4.unk_00.size || param4->max.z + sp4.unk_00.size < sp4.unk_00.pos.z) {
                    return false;
                }
            }
        }

        unk8 value = this->mpProfile->mUnk_16[param2];
        Vec2s sp0;
        sp0.x = param1->x;
        sp0.y = param1->y;
        return param3->func_01ffd768(&sp4, &sp0, value);
    }

    return false;
}

bool Actor::vfunc_48(unk32 param1) {
    VecFx32 *temp_r0;
    VecFx32 sp0;

    temp_r0 = this->func_ov000_0209853c(param1);
    sp0     = *temp_r0;

    func_01ffb714(&sp0, &this->mPos, &sp0);

    if (ABS(sp0.y) < data_ov000_020aed08 && func_01ff9258(sp0.x, sp0.z) < data_ov000_020aed04) {
        return true;
    }

    return false;
}
