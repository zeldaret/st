#include "Actor/ActorUnkNORE.hpp"
#include "CommonFuncs.hpp"
#include "System/SysNew.hpp"

#include "Course/CourseManager.hpp"

DECL_PROFILE(ActorProfileUnkNORE);

Actor *ActorProfileUnkNORE::Create() {
    return new(HeapIndex_2) ActorUnkNORE();
}

ActorProfileUnkNORE::ActorProfileUnkNORE() :
    ActorProfile(ActorId_NORE) {}

ActorUnkNORE::ActorUnkNORE() {}

bool ActorUnkNORE::Init(unk32 param1) {
    Vec2bCpp local_vec;

    MapManagerBase *unk_obj = gpCourseManager->mpMapMgr;

    func_01ffedac(&local_vec, &this->mPos);

    unk_obj->func_ov000_020801b0(&local_vec, 7, 1);

    this->Kill();

    return true;
}
