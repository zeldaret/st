#include "Actor/ActorManager.hpp"
#include "Actor/ActorId.hpp"
#include "global.h"

static ActorId gActorProfileLookupTable[] = {
#define DEFINE_ACTOR_TYPE(id, name) ActorId_##name,
#include "Actor/ActorTable.inl"
#undef DEFINE_ACTOR_TYPE
};

// static GetActorProfile gActorProfiles[] = {
// #define DEFINE_ACTOR_TYPE(id, name) &ActorProfile##name::GetProfile,
// #include "Actor/ActorTable.inl"
// #undef DEFINE_ACTOR_TYPE
// };

DTCM_BEGIN;
ActorManager *gActorManager;
DTCM_END;
