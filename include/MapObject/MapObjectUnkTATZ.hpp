//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkTATZ : public MapObject {
public:
    /* 00 (base) */
    /* 40 */

    MapObjectUnkTATZ();

    /* 30 */ virtual ~MapObjectUnkTATZ() override;

    void func_ov031_02108ae4(void);
    void func_ov031_02108c48(void);
    void func_ov031_021090d0(void);
    void func_ov031_02109120(void);
    void func_ov031_021093c4(void);
    void func_ov031_02109504(void);
    void func_ov031_02109574(void);
};

class MapObjectProfileUnkTATZ : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkTATZ();
    ~MapObjectProfileUnkTATZ();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkTATZ *GetProfile();
};
