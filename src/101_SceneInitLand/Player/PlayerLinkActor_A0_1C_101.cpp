#include "Actor/ActorManager.hpp"
#include "Player/PlayerLink.hpp"

extern unk32 data_ov000_020b3000;

PlayerLinkActor_A0_1C::PlayerLinkActor_A0_1C(unk32 param1) {
    this->mUnk_00 = param1;
    this->mUnk_04 = 0x00;
    this->mUnk_06 = false;
    this->mUnk_0C.Reset();
}

void PlayerLinkActor_A0_1C::func_ov101_02183290() {
    this->mUnk_06 = false;
    this->mUnk_0C.Reset();

    struct {
        void *ptr;
        unk32 actorId;
    } local_14;
    local_14.ptr     = &data_ov000_020b3000;
    local_14.actorId = ActorId_IWTS;

    Actor **ppActor = gpActorManager->func_01fff350(&local_14, gpActorManager->mActorTable);

    // why is this a loop
    while (ppActor != gpActorManager->mUnk_08) {
        ActorRef ref  = (*ppActor)->mRef;
        this->mUnk_0C = ref;
        break;
    }
}
