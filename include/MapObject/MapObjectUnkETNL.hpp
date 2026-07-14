//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkETNL : public MapObject {
public:
    /* 00 (base) */
    /* 40 */

    MapObjectUnkETNL();

    /* 30 */ virtual ~MapObjectUnkETNL() override;

    void func_ov026_0210ac24(void);
    void func_ov026_0210ac7c(void);
    void func_ov026_0210ad44(void);
    void func_ov026_0210ad4c(void);
    void func_ov026_0210ad54(void);
    void func_ov026_0210ad5c(void);
    void func_ov026_0210adac(void);
    void func_ov026_0210ae10(void);
    void func_ov026_0210ae18(void);
};

class MapObjectProfileUnkETNL : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkETNL();
    ~MapObjectProfileUnkETNL();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkETNL *GetProfile();
};
