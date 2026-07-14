#pragma once

#include "types.h"
#include "versions.h"

typedef u32 ActorId;
enum ActorId_ {
    ActorId_None = 0,
#define DEFINE_ACTOR_TYPE(id, name) ActorId_##name = id,
#include "Actor/ActorTable.inl"
#undef DEFINE_ACTOR_TYPE
};
