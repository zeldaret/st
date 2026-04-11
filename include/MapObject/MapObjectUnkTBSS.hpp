//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkTBSS : public MapObject {
public:
    /* 00 (base) */
    /* 94 */

    MapObjectUnkTBSS();

    /* 4C */ virtual ~MapObjectUnkTBSS() override;

    void func_ov029_02146070(void);
    void func_ov029_021460c8(void);
    void func_ov029_021460d4(void);
    void func_ov029_02146124(void);
    void func_ov029_02146130(void);
};

class MapObjectProfileUnkTBSS : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkTBSS();
    ~MapObjectProfileUnkTBSS();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkTBSS *GetProfile();
};
