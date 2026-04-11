//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkSBDE : public MapObject {
public:
    /* 00 (base) */
    /* 94 */

    MapObjectUnkSBDE();

    /* 4C */ virtual ~MapObjectUnkSBDE() override;

    void func_ov029_021438cc(void);
    void func_ov029_02143990(void);
    void func_ov029_02143df4(void);
    void func_ov029_02143e08(void);
    void func_ov029_02143f44(void);
    void func_ov029_02143fdc(void);
};

class MapObjectProfileUnkSBDE : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkSBDE();
    ~MapObjectProfileUnkSBDE();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkSBDE *GetProfile();
};
