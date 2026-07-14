//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkTRCC : public MapObject {
public:
    /* 00 (base) */
    /* 40 */

    MapObjectUnkTRCC();

    /* 30 */ virtual ~MapObjectUnkTRCC() override;

    void func_ov090_021750fc(void);
    void func_ov090_02175148(void);
    void func_ov090_021751dc(void);
};

class MapObjectProfileUnkTRCC : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkTRCC();
    ~MapObjectProfileUnkTRCC();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkTRCC *GetProfile();
};
