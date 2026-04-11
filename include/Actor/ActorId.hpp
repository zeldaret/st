#pragma once

#include "types.h"
#include "versions.h"

enum ActorId {
#define DEFINE_ACTOR_TYPE(id, name) ActorId_##name = id,
#include "Actor/ActorTable.inl"
#undef DEFINE_ACTOR_TYPE
};
