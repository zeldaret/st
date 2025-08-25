#include "Actor/ActorManager.hpp"
#include "Unknown/UnkStruct_027e0cf4.hpp"
#include "Unknown/UnkStruct_027e0d70.hpp"
#include "global.h"

extern "C" void func_ov000_020977e4();

THUMB ActorManager *ActorManager::Create() {
    return new(1, 4) ActorManager();
}

THUMB ActorManager::ActorManager() {
    this->SetInstance(this);
    this->mUnk_20        = 0;
    this->mUnk_21        = 0;
    this->mUnk_22        = 0;
    this->mUnk_23        = 0;
    this->mUnk_32        = 0;
    this->mActorTable    = NULL;
    this->mActorTableEnd = NULL;
    this->mUnk_08        = NULL;
    this->mActorCount    = 0;
    this->mNextActorId   = 0;
    this->mUnk_10        = 0;
    this->mUnk_14        = 0;
    this->mUnk_18        = 0;
    this->mUnk_24        = 0;
    this->mUnk_28        = 0;
    this->mUnk_2c        = 0;
    this->mUnk_30        = 0;
    this->mUnk_34        = 0;
}

// non-matching (D0 not generating?)
THUMB ActorManager::~ActorManager() {
    this->ClearInstance();
}

THUMB void ActorManager::func_ov001_020bafdc() {}
THUMB void ActorManager::func_ov001_020bb018(s32 param1) {}
THUMB void ActorManager::func_ov001_020bb414() {}
THUMB void ActorManager::func_ov001_020bb488() {}
THUMB void ActorManager::func_ov001_020bb548() {}
THUMB void ActorManager::func_ov001_020bb630() {}
THUMB void ActorManager::func_ov001_020bb6b0(s32 *param1) {}
THUMB bool ActorManager::func_ov001_020bb728(s32 param1) {}

THUMB void ActorManager::func_ov001_020bb7b0(ZeldaObjectList *pObjList) {
    for (s32 i = 0; i < pObjList->nEntries; i++) {
        u32 id                = pObjList->aIdList[i];
        ActorType *pActorType = data_ov000_020b539c.func_ov000_020974dc(id);

        if (!this->func_ov001_020bb728(id) && pActorType != NULL) {
            pActorType->vfunc_08();
        }
    }
}

THUMB void ActorManager::func_ov001_020bb7f0() {
    unk32 *ptr1 = data_ov000_020b539c.func_ov000_02073dc();
    unk32 *ptr2 = data_ov000_020b539c.func_ov000_02073e8();

    while (ptr1 != ptr2) {
        if (*ptr1 != 0) {
            func_ov000_020977e4();
        }

        ptr1++;
        ptr2 = data_ov000_020b539c.func_ov000_02073e8();
    }
}

THUMB void ActorManager::func_ov001_020bb824() {
    if (data_027e0cf4 != NULL) {
        delete data_027e0cf4;
    }
}

THUMB void ActorManager::func_ov001_020bb844() {
    if (data_027e0d70 != NULL) {
        delete data_027e0d70;
    }
}

THUMB void ActorManager::SetInstance(ActorManager *instance) {
    gActorManager = instance;
}

// non-matching (regalloc)
THUMB void ActorManager::ClearInstance() {
    gActorManager = NULL;
}
