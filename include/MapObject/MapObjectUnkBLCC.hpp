//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkBLCC : public MapObject {
public:
    /* 00 (base) */
    /* 40 */

    MapObjectUnkBLCC();

    /* 30 */ virtual ~MapObjectUnkBLCC() override;

    void func_ov031_02109ac4(void);
    void func_ov031_02109b94(void);
    void func_ov031_02109c3c(void);
    void func_ov031_02109c54(void);
    void func_ov031_02109c74(void);
    void func_ov031_02109c98(void);
    void func_ov031_02109e74(void);
};

class MapObjectProfileUnkBLCC : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkBLCC();
    ~MapObjectProfileUnkBLCC();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkBLCC *GetProfile();
};
