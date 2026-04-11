//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkTMDE : public MapObject {
public:
    /* 00 (base) */
    /* 94 */

    MapObjectUnkTMDE();

    /* 4C */ virtual ~MapObjectUnkTMDE() override;

    void func_ov029_02141b0c(void);
    void func_ov029_02141b20(void);
    void func_ov029_02141d0c(void);
    void func_ov029_02141df4(void);
    void func_ov029_02141dfc(void);
    void func_ov029_02141e04(void);
    void func_ov029_02141e08(void);
    void func_ov029_02141e0c(void);
    void func_ov029_02141e80(void);
    void func_ov029_02141ea0(void);
    void func_ov029_02141ec0(void);
    void func_ov029_02141f24(void);
    void func_ov029_02141f54(void);
};

class MapObjectProfileUnkTMDE : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkTMDE();
    ~MapObjectProfileUnkTMDE();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkTMDE *GetProfile();
};
