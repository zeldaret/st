//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkTRSD : public MapObject {
public:
    /* 00 (base) */
    /* 94 */

    MapObjectUnkTRSD();

    /* 4C */ virtual ~MapObjectUnkTRSD() override;

    void func_ov090_02173520(void);
    void func_ov090_021735d8(void);
    void func_ov090_02173628(void);
    void func_ov090_02173634(void);
};

class MapObjectProfileUnkTRSD : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkTRSD();
    ~MapObjectProfileUnkTRSD();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkTRSD *GetProfile();
};
