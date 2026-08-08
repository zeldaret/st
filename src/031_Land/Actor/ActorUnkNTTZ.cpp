#include "Actor/ActorUnkNTTZ.hpp"

#include "Actor/ActorManager.hpp"
#include "Actor/ActorUnkTGTZ.hpp"
#include "System/SysNew.hpp"

DECL_PROFILE(ActorProfileUnkNTTZ);

unk32 data_ov031_02116b58[0x3];
unk32 data_ov031_02116b54;

Actor *ActorProfileUnkNTTZ::Create() {
    return new(HeapIndex_2) ActorUnkNTTZ();
}

ActorProfileUnkNTTZ::ActorProfileUnkNTTZ() :
    ActorProfile(ActorId_NTTZ) {}

ActorUnkNTTZ::ActorUnkNTTZ() :
    mUnk_94(0x0) {
    this->func_ov000_0209862c(0x0);
}

bool ActorUnkNTTZ::vfunc_18(unk32 param1) {
    return true;
}

void ActorUnkNTTZ::vfunc_20() {}

void ActorUnkNTTZ::vfunc_2C(unk32 param1) {}

void ActorUnkNTTZ::func_ov031_020f61a0() {
    if (this->mUnk_5C.mUnk_28.type == 0x0) {
        return;
    }

    ActorUnkTGTZ *actorTGTZ = (ActorUnkTGTZ *) gpActorManager->func_01fff3b4(this->mUnk_5C.mUnk_28);
    if (actorTGTZ == NULL || actorTGTZ->GetActorId() != ActorId_TGTZ) {
        return;
    }

    actorTGTZ->func_ov031_020f73e4();
}

void ActorUnkNTTZ::func_ov031_020f61f0() {
    if (this->mUnk_5C.mUnk_28.type == 0x0) {
        return;
    }

    ActorUnkTGTZ *actorTGTZ = (ActorUnkTGTZ *) gpActorManager->func_01fff3b4(this->mUnk_5C.mUnk_28);
    if (actorTGTZ == NULL || actorTGTZ->GetActorId() != ActorId_TGTZ) {
        return;
    }

    actorTGTZ->func_ov031_020f73f0();
}
