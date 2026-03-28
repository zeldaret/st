#pragma once

#include "types.h"

#define ACTOR_INDEX_MASK 0x3fff

struct ActorRef {
    /* 0 */ s16 index;
    /* 2 */ s16 id;
    /* 4 */

    inline void Reset() {
        *(u32 *) this = 0;
    }

    inline bool operator==(const ActorRef &other) const {
        return this->index == other.index && this->id == other.id;
    }

    inline bool operator!=(const ActorRef &other) const {
        return !(*this == other);
    }
};
