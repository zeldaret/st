#pragma once

#include "types.h"

// mapping:
// 0011 1111 1111 1111 = index
// 1100 0000 0000 0000 = type
//
// 0000 1111 1111 1111 = id
// 1111 0000 0000 0000 = unk

#define REF_TYPE_INDEX(type, index) (((type) << 14) | (index))

enum ActorRefType_ {
    ActorRefType_0,
    ActorRefType_1,
    ActorRefType_2,
};

enum ActorRefId_ {
    ActorRefId_0,
    ActorRefId_1,
    ActorRefId_2,
    ActorRefId_4,
    ActorRefId_5,
    ActorRefId_6,
    ActorRefId_7,
    //! TODO: more ids?
};

struct ActorRef {
    union {
        struct {
            /* 00 */ u16 index : 14;
            /* 00 */ u16 type : 2;
            /* 02 */ u16 id : 12;
            /* 02 */ u16 unk : 4;
            /* 04 */
        };
        struct {
            /* 00 */ u16 type_index;
            /* 02 */ u16 unk_id;
            /* 04 */
        };
        u32 data;
    };

    ActorRef() {
        this->Reset();
    }

    ActorRef(u32 value) {
        this->data = value;
    }

    void Reset() {
        this->data = 0;
    }

    const bool operator==(const ActorRef &other) const {
        return other.data == this->data;
    }

    const bool operator!=(const ActorRef &other) const {
        return !(*this == other);
    }

    void operator=(const ActorRef &other) {
        this->data = other.data;
    }

    const u32 Get32() const {
        return this->data;
    }
};
