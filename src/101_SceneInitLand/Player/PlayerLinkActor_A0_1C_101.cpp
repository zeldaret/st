#include "Actor/ActorManager.hpp"
#include "Player/PlayerLink.hpp"
#include "Unknown/UnkStruct_ov000_020b3000.hpp"

PlayerLinkActor_A0_1C::PlayerLinkActor_A0_1C(UnkStruct_027e0ce0_40 *param1) {
    this->mUnk_00 = param1;
    this->mUnk_04 = 0x00;
    this->mUnk_06 = false;
    this->mUnk_0C.Reset();
}

void PlayerLinkActor_A0_1C::func_ov101_02183290() {
    this->mUnk_06 = false;
    this->mUnk_0C.Reset();

    UnkStruct_ov000_020b3000 local_14(ActorId_IWTS);
    Actor **ppActor = gpActorManager->func_01fff350(&local_14, gpActorManager->mActorTable);

    // why is this a loop
    while (ppActor != gpActorManager->mUnk_08) {
        ActorRef ref  = (*ppActor)->mRef;
        this->mUnk_0C = ref;
        break;
    }
}
