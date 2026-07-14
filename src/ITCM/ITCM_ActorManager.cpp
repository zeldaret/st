#include "Actor/ActorManager.hpp"

Actor *ActorManager::func_01fff3b4(ActorRef ref) {
    if (ref.type == 1) {
        int size = this->mActorTableEnd - this->mActorTable;
        Actor *pActor;

        // Affectation directement dans la condition
        if (size != 0 && (pActor = this->mActorTable[ref.index]) != NULL) {
            if (pActor->IsAlive() && pActor->mRef == ref) {
                return pActor;
            }
        }
    }
    return NULL;
}
