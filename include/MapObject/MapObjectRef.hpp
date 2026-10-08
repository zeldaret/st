#pragma once

#include "MapObject/MapObjectManager.hpp"
#include "global.h"
#include "math.hpp"
#include "types.h"

struct MapObject;

struct MapObjRef {
    union {
        struct {
            union {
                struct {
                    /* 00 */ u8 unk_00;
                    /* 01 */ u8 unk_01;
                };
                u16 unk_00_u16;
            };
            /* 02 */ Vec2b unk_02;
            /* 04 */
        };
        u32 data;
    };

    MapObjRef() {}

    MapObjRef(u32 value) {
        this->data = value;
    }

    void Reset() {
        this->data = 0;
    }

    const bool operator==(const MapObjRef &other) const {
        return other.data == this->data;
    }

    const bool operator!=(const MapObjRef &other) const {
        return !(*this == other);
    }

    void operator=(const MapObjRef &other) {
        this->data = other.data;
    }

    const u32 Get32() const {
        return this->data;
    }

    Vec2bCpp &GetUnk02() {
        return *(Vec2bCpp *) &this->unk_02;
    }
};

// for arrays
struct MapObjRefElem {
    MapObjRef ref;

    MapObjRefElem() {
        this->ref.Reset();
    }
};
