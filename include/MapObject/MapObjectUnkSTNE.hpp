//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkSTNE : public MapObject {
public:
    /* 00 (base) */
    /* 40 */

    MapObjectUnkSTNE();

    /* 30 */ virtual ~MapObjectUnkSTNE() override;

    void func_ov058_0214ebe0(void);
    void func_ov058_0214ec90(void);
    void func_ov058_0214ed54(void);
    void func_ov058_0214eda4(void);
    void func_ov058_0214ef64(void);
    void func_ov058_0214efb8(void);
    void func_ov058_0214efcc(void);
    void func_ov058_0214f000(void);
};

class MapObjectProfileUnkSTNE : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkSTNE();
    ~MapObjectProfileUnkSTNE();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkSTNE *GetProfile();
};
