#include "Actor/ActorUnkNFSP.hpp"

#include "Actor/ActorManager.hpp"
#include "MapObject/MapObjectUnkSWFS.hpp"
#include "System/SysNew.hpp"

struct ActorUnkNFSP_vfunc_54 : public Actor {
public:
    /* 000 (base) */
    /* 094 */ STRUCT_PAD(0x94, 0x2B0);
    /* 2B0 */ unk32 mUnk_2B0;
    /* 2B4 */
};

struct ActorUnkNFSP_ov031_020fb9b4 : public Actor {
public:
    /* 000 (base) */
    /* 094 */ STRUCT_PAD(0x94, 0xE8);
    /* 0E8 */ VecFx32 mUnk_E8;
    /* 0F4 */
};

extern "C" void func_01ff993c(VecFx32 *, VecFx32 *, unk32);

DECL_PROFILE(ActorProfileUnkNFSP);

Actor *ActorProfileUnkNFSP::Create() {
    return new(HeapIndex_2) ActorUnkNFSP();
}

ActorProfileUnkNFSP::ActorProfileUnkNFSP() :
    ActorProfile_Derived1(ActorId_NFSP) {
    this->mUnk_04.Init(FLOAT_TO_FX32(0.0f), FLOAT_TO_FX32(0.0f), FLOAT_TO_FX32(0.0f), FLOAT_TO_FX32(0.4f));
}

ActorUnkNFSP::ActorUnkNFSP() :
    mUnk_94(0x4),
    mUnk_98(0x0),
    mUnk_9A(0x0),
    mUnk_9C(NULL),
    mUnk_C0(this),
    mUnk_E4(0x0) {
    this->mUnk_40 = &this->mUnk_C0;
}

bool ActorUnkNFSP::vfunc_18(unk32 param1) {
    this->mUnk_9C = (MapObjectUnkSWFS *) param1;

    this->mUnk_C0.mUnk_08 = 0x0;
    this->mUnk_C0.mUnk_0A = 0x0;
    this->mUnk_C0.mUnk_0C = 0x1000;
    this->mUnk_C0.mUnk_0E = 0x0;
    this->mUnk_C0.mUnk_10 = 0x0;
    this->mUnk_C0.mUnk_12 = 0x1000;

    if (this->mUnk_5C.mParams[3] == 0x0) {
        this->vfunc_54(0x0);
    }

    return true;
}

void ActorUnkNFSP::vfunc_20() {
    this->mUnk_C0.mUnk_1C = 0x1;

    switch (this->mUnk_94) {
        default:
            break;
        case 0:
            this->func_ov031_020fb988();
            break;
        case 1:
            this->func_ov031_020fb994();
            break;
        case 2:
            this->func_ov031_020fb9b4();
            break;
        case 3:
            this->func_ov031_020fba60();
            break;
    }
    if (this->mUnk_98 < this->mUnk_9A) {
        ++this->mUnk_98;
    }
}

void ActorUnkNFSP::vfunc_2C(unk32 param1) {}

void ActorUnkNFSP::vfunc_54(unk32 param1) {
    this->mUnk_94 = param1;
    this->mUnk_9A = 0xFFFF;
    this->mUnk_98 = 0x0;

    switch (param1) {
        case 0x0:
            this->mUnk_40 = &this->mUnk_C0;
            break;
        case 0x1:
            this->mUnk_40 = &this->mUnk_C0;
            break;
        case 0x2:
            this->mUnk_40 = &this->mUnk_C0;
            break;
        case 0x3:
            ActorUnkNFSP_vfunc_54 *actor = (ActorUnkNFSP_vfunc_54 *) gpActorManager->func_01fff3b4(this->mUnk_E4);
            if (actor != NULL) {
                actor->mUnk_2B0 = 0x0;
            }
            this->mUnk_E4 = 0x0;
            this->mUnk_40 = NULL;
            if (this->mUnk_9C == NULL) {
                break;
            }
            this->mUnk_9C->func_ov031_0210d750();
            break;
    }
}

void ActorUnkNFSP::func_ov031_020fb988() {
    this->func_ov031_020fbb8c();
}

// non-matching
void ActorUnkNFSP::func_ov031_020fb994() {
    gpActorManager->func_01fff3b4(this->mUnk_E4);
}

void ActorUnkNFSP::func_ov031_020fb9b4() {
    ActorUnkNFSP_ov031_020fb9b4 *actor = (ActorUnkNFSP_ov031_020fb9b4 *) gpActorManager->func_01fff3b4(this->mUnk_E4);
    if (actor == NULL) {
        return;
    }
    VecFx32_Copy(&this->mPos, &this->mPrevPos);

    VecFx32 vec = actor->mUnk_E8;

    data_027e0ce0->func_01fff148(0x0);
    vec.z -= FLOAT_TO_FX32(1.0f);
    VecFx32_Copy(&vec, &this->mPos);

#if IS_JP
    this->mUnk_9C->func_ov031_0210d794(&this->mPos, 0x1);
#else
    this->mUnk_9C->func_ov031_0210d794(&this->mPos, 0x0, 0x0);
#endif
}

void ActorUnkNFSP::func_ov031_020fba60() {
    VecFx32_Copy(&this->mPos, &this->mPrevPos);
    func_01ff993c(&this->mPos, &this->mUnk_5C.mInitialPos, 0x666);

#if IS_JP
    this->mUnk_9C->func_ov031_0210d794(&this->mPos, 0x0);
#else
    this->mUnk_9C->func_ov031_0210d794(&this->mPos, 0x0, 0x0);
#endif

    if (this->mPos.x != this->mUnk_5C.mInitialPos.x || this->mPos.y != this->mUnk_5C.mInitialPos.y ||
        this->mPos.z != this->mUnk_5C.mInitialPos.z) {
        return;
    }
#if IS_JP
    this->vfunc_54(0x4);
#else
    this->vfunc_54(0x0);
#endif
}

void ActorUnkNFSP::func_ov031_020fbb8c() {
    this->mUnk_3C = &this->mUnk_A0;
    this->func_ov000_020989e0();
}

void ActorUnkNFSP::func_ov031_020fbba0(ActorRef ref) {
    if (this->mUnk_94 == 0x2) {
        return;
    }
    this->mUnk_E4 = ref;
    this->vfunc_54(0x1);
}

void ActorUnkNFSP::func_ov031_020fbbe0() {
    this->vfunc_54(0x2);
    this->mUnk_9C->func_ov031_0210d710();
}

ActorUnkNFSP_C0::ActorUnkNFSP_C0(ActorUnkNFSP *actor) :
    Actor_C4(actor) {
    this->mUnk_20 = actor;
    this->mUnk_04 = 0x1;
}

bool ActorUnkNFSP_C0::vfunc_00(ActorRef ref, unk32 param2) {
    if (this->GetActorPtr<ActorUnkNFSP>()->mUnk_94 != 0x0) {
        return false;
    }
    if (param2 != 0x0) {
        this->GetActorPtr<ActorUnkNFSP>()->func_ov031_020fbba0(ref);
    }
    return this->Actor_C4::vfunc_00(ref, param2);
}

bool ActorUnkNFSP_C0::vfunc_04() {
    if (this->GetActorPtr<ActorUnkNFSP>()->mUnk_94 != 0x1) {
        return false;
    }
    this->GetActorPtr<ActorUnkNFSP>()->func_ov031_020fbbe0();
    return this->Actor_C4::vfunc_04();
}

void ActorUnkNFSP_C0::vfunc_08() {
    this->mUnk_04 = 0x1;
    this->GetActorPtr<ActorUnkNFSP>()->vfunc_54(0x3);
    this->Actor_C4::vfunc_08();
}

void ActorUnkNFSP_C0::vfunc_0C(unk32 param1) {
    this->mUnk_04 = 0x1;
    this->GetActorPtr<ActorUnkNFSP>()->vfunc_54(0x3);
    this->Actor_C4::vfunc_0C(param1);
}
