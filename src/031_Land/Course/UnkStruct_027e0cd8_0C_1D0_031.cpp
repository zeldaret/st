#include "Actor/ActorManager.hpp"
#include "Actor/ActorUnkMLCK.hpp"
#include "Course/CourseManager.hpp"
#include "Unknown/UnkStruct_ov000_020b3000.hpp"

void UnkStruct_027e0cd8_0C_1D0::func_ov031_020d9314(unk32 param1, ActorUnkMLCK_A0 *param2) {
    UnkStruct_ov031_02112ad4 local_18(ActorId_MLCK, param1);

    ActorUnkMLCK *pActor = (ActorUnkMLCK *) *gpActorManager->func_01fff350(&local_18, gpActorManager->mActorTable);
    pActor->func_ov031_020fb1e8(param2);
}

void UnkStruct_027e0cd8_0C_1D0::func_ov031_020d9368(Actor *pActor, Actor_vfunc_30 *param2) {
    bool value = param2 != NULL;

    if (pActor->GetActorId() == ActorId_MLCK) {
        ((ActorUnkMLCK *) pActor)->mUnk_F3 = value;
    }
}

void UnkStruct_027e0cd8_0C_1D0::func_ov031_020d9398(void *param1) {
    gpActorManager->func_01fff2fc(UnkStruct_027e0cd8_0C_1D0::func_ov031_020d9368, param1);
}

bool UnkStruct_ov031_02112ad4::vfunc_00(Actor *pActor) {
    if (this->mActorId == pActor->GetActorId() && this->mUnk_08 == pActor->mUnk_5C.mParams[0]) {
        return true;
    }

    return false;
}
