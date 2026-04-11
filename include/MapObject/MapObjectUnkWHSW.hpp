//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkWHSW : public MapObject {
public:
    /* 00 (base) */
    /* 94 */

    MapObjectUnkWHSW();

    /* 4C */ virtual ~MapObjectUnkWHSW() override;

    void func_ov029_02145500(void);
    void func_ov029_021455b4(void);
    void func_ov029_021458fc(void);
    void func_ov029_02145910(void);
    void func_ov029_02145a0c(void);
    void func_ov029_02145a7c(void);
};

class MapObjectProfileUnkWHSW : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkWHSW();
    ~MapObjectProfileUnkWHSW();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkWHSW *GetProfile();
};
