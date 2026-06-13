#include "Actor/ActorUnkOBPC.hpp"
#include "Actor/ActorManager.hpp"
#include "System/SysNew.hpp"
#include "Unknown/UnkStruct_027e09a4.hpp"
#include "Unknown/UnkStruct_027e0cd8.hpp"
#include "Unknown/UnkStruct_027e0ce0.hpp"
#include "Unknown/UnkStruct_ov000_02067bc4.hpp"

extern unk32 data_ov000_020b3000;

ARM DECL_PROFILE(ActorProfileUnkOBPC);

ARM Actor *ActorProfileUnkOBPC::Create() {
    return new(HeapIndex_2) ActorUnkOBPC();
}

ARM ActorProfileUnkOBPC::ActorProfileUnkOBPC() :
    ActorProfile(ActorId_OBPC) {}

ARM ActorUnkOBPC::ActorUnkOBPC() :
    mUnk_94(0),
    mUnk_98(0),
    mUnk_9C(0) {}

ARM bool ActorUnkOBPC::vfunc_18(unk32 param1) {
    this->mUnk_94 = this->mUnk_5C.mParams[1];
    this->mUnk_98 = this->mUnk_5C.mParams[3];

    if (!this->func_ov024_020d6f74()) {
        this->func_ov024_020d7064(0x00, 0x01);
    } else {
        this->func_ov024_020d7064(0x01, 0x01);
    }

    return true;
}

ARM bool ActorUnkOBPC::func_ov024_020d6f74(void) {
    if (this->mUnk_5C.mUnk_1C_0 != 0) {
        return this->func_ov000_02098a60(1);
    }

    return false;
}

ARM void ActorUnkOBPC::vfunc_20(void) {
    switch (this->mUnk_4C) {
        case 0:
            if (this->func_ov024_020d7154()) {
                if (this->mUnk_5C.mUnk_20 == 0) {
                    this->func_ov024_020d7064(0x01, 0x00);
                } else if (data_ov000_020b504c.func_ov000_0206807c(this->mUnk_5C.mUnk_20, &this->mUnk_9C)) {
                    this->func_ov024_020d7064(0x01, 0x00);
                }
            }
            break;
        case 1:
            if (this->mUnk_5C.mParams[2] != 0 && !this->func_ov024_020d7154()) {
                this->func_ov024_020d7064(0x00, 0x00);
            }
            break;
        default:
            break;
    }

    if ((u16) this->mUnk_9C.mUnk_08 != 0xFFFF) {
        this->mUnk_9C.vfunc_04();
    }
}

ARM void ActorUnkOBPC::vfunc_24(void) {
    this->vfunc_20();
}

ARM void ActorUnkOBPC::func_ov024_020d7064(s16 param1, unk32 param2) {
    this->mUnk_4C = param1;

    switch (this->mUnk_4C) {
        case 0:
            if (this->mUnk_5C.mParams[2] == 0 || this->mUnk_5C.mParams[2] == 2) {
                break;
            }

            switch (this->mUnk_98) {
                case 1:
                    this->func_ov000_02098a88(0, 1);
                    break;
                case 2:
                    break;
                case 0:
                default:
                    this->func_ov000_02098a88(0, 0);
                    break;
            }
            break;
        case 1:
            switch (this->mUnk_98) {
                case 1:
                    this->func_ov000_02098a88(0, 0);
                    break;
                case 2:
                    if (this->func_ov000_02098a60(0)) {
                        this->func_ov000_02098a88(0, 0);
                    } else {
                        this->func_ov000_02098a88(0, 1);
                    }
                    break;
                case 0:
                default:
                    this->func_ov000_02098a88(0, 1);
                    break;
            }
            break;
        default:
            break;
    }
}

ARM bool ActorUnkOBPC::func_ov024_020d7154(void) {
    u8 temp_r4                     = this->mUnk_5C.mParams[0];
    UnkStruct_027e0cd8_0c *temp_r5 = data_027e0cd8->mUnk_0C;
    ActorManager *pActorMgr;
    VecFx32 sp10;

    switch (this->mUnk_94) {
        case 0:
            if (data_027e09a4->IsTrain()) {
                VecFx32_Copy(&data_027e0ce0->mUnk_38->mPos, &sp10);
            } else {
                VecFx32_Copy(data_027e0ce0->func_01fff148(0), &sp10);
            }
            break;
        case 2: {
            struct {
                void *ptr;
                unk32 actorId;
            } sp8;

            sp8.ptr     = &data_ov000_020b3000;
            sp8.actorId = ActorId_KEYB;
            pActorMgr   = gpActorManager;

            Actor **ppActor = pActorMgr->func_01fff350(&sp8, pActorMgr->mActorTable);

            if (ppActor == pActorMgr->mUnk_08) {
                return false;
            }

            VecFx32_Copy(&(*ppActor)->mPos, &sp10);
            break;
        }
        default: {
            struct {
                void *ptr;
                unk32 actorId;
            } sp0;

            sp0.ptr     = &data_ov000_020b3000;
            sp0.actorId = ActorId_KEYT;
            pActorMgr   = gpActorManager;

            Actor **ppActor = pActorMgr->func_01fff350(&sp0, pActorMgr->mActorTable);

            if (ppActor == pActorMgr->mUnk_08) {
                return false;
            }

            VecFx32_Copy(&(*ppActor)->mPos, &sp10);
            break;
        }
    }

    sp10.y = 0;
    return temp_r5->func_ov000_020802ec(temp_r4, &sp10);
}

ARM ActorUnkOBPC::~ActorUnkOBPC() {}

ARM ActorProfileUnkOBPC::~ActorProfileUnkOBPC() {}
