#pragma once

#include "types.h"

#define ACTOR_INDEX_MASK 0x3FFF

struct ActorRef {
    /* 0 */ u16 index;
    /* 2 */ u16 id;
    /* 4 */

    void Reset() {
        *(u32 *) this = 0;
    }

    bool operator==(const ActorRef &other) const {
        return this->index == other.index && this->id == other.id;
    }

    bool operator!=(const ActorRef &other) const {
        return !(*this == other);
    }

    u32 Get32() {
        return *(u32 *) this;
    }
};
