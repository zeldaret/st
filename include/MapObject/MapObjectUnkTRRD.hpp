//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkTRRD : public MapObject {
public:
    /* 00 (base) */
    /* 40 */

    MapObjectUnkTRRD();

    /* 30 */ virtual ~MapObjectUnkTRRD() override;

    void func_ov029_02143354(void);
    void func_ov029_02143440(void);
    void func_ov029_02143460(void);
    void func_ov029_02143480(void);
    void func_ov029_021434a0(void);
};

class MapObjectProfileUnkTRRD : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkTRRD();
    ~MapObjectProfileUnkTRRD();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkTRRD *GetProfile();
};
