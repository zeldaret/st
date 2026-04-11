//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkFNCE : public MapObject {
public:
    /* 00 (base) */
    /* 94 */

    MapObjectUnkFNCE();

    /* 4C */ virtual ~MapObjectUnkFNCE() override;

    void func_ov094_02170b14(void);
    void func_ov094_02170b58(void);
    void func_ov094_02170d54(void);
    void func_ov094_02170db4(void);
};

class MapObjectProfileUnkFNCE : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkFNCE();
    ~MapObjectProfileUnkFNCE();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkFNCE *GetProfile();
};
