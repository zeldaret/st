#pragma once

#include "global.h"
#include "math.hpp"

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

union RefCommon {
    struct {
        /* 00 */ u16 index : 14;
        /* 00 */ u16 type : 2;
        /* 02 */ u16 id : 12;
        /* 02 */ u16 unk : 4;
        /* 04 */
    };
    /* 00 */ u16 unk_00;
    /* 02 */ u16 unk_02;
    /* 04 */
};

struct ActorRef {
    union {
        struct {
            /* 00 */ u16 type_index;
            /* 02 */ u16 unk_id;
            /* 04 */
        };
        u32 data;
    };

    const u16 GetTypeIndex1() {
        if (this->type_index == REF_TYPE_INDEX(ActorRefType_0, 0x101)) {
            return 0x00;
        }

        return this->unk_id;
    }

    const bool HasTypeIndexValue(u16 value) {
        return this->type_index == value;
    }

    const bool UnkCheck1() {
        bool ret = true;

        if (this->type_index != REF_TYPE_INDEX(ActorRefType_0, 0x100) &&
            this->type_index != REF_TYPE_INDEX(ActorRefType_0, 0x101)) {
            ret = false;
        }

        return ret;
    }

    const bool UnkCheck2() {
        bool ret = false;

        if (this->UnkCheck1() && this->GetTypeIndex1() == 0x01) {
            ret = true;
        }

        return ret;
    }

    const bool UnkCheck3(u16 value) {
        BOOL ret = false;

        if (this->HasTypeIndexValue(value) && (this->unk_id == 1 || this->unk_id == 3)) {
            ret = true;
        }

        return ret;
    }
};

struct MapObjRef {
    union {
        struct {
            /* 00 */ union {
                struct {
                    u8 unk_00;
                    u8 unk_01;
                };
                u16 unk_00_u16;
            };
            /* 02 */ Vec2b unk_02;
            /* 04 */
        };
        u32 data;
    };

    Vec2bCpp &GetUnk02() {
        return *(Vec2bCpp *) &this->unk_02;
    }
};

struct RefStruct {
    union {
        RefCommon common; // use this when the kind is undetermined
        ActorRef acRef;   // use this when the kind is clearly an actor ref
        MapObjRef moRef;  // use this when the kind is clearly a map object ref
        u32 data;         // raw data as a u32
    };

    RefStruct() {}

    RefStruct(u32 value) {
        this->data = value;
    }

    void Reset() {
        this->data = 0;
    }

    const bool operator==(const RefStruct &other) const {
        return other.data == this->data;
    }

    const bool operator!=(const RefStruct &other) const {
        return !(*this == other);
    }

    void operator=(const RefStruct &other) {
        this->data = other.data;
    }

    const u32 Get32() const {
        return this->data;
    }
};

// for arrays
struct RefElem {
    RefStruct ref;

    RefElem() {
        this->ref.Reset();
    }
};
