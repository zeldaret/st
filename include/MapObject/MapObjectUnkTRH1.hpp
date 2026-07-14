//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkTRH1 : public MapObject {
public:
    /* 00 (base) */
    /* 40 */

    MapObjectUnkTRH1();

    /* 30 */ virtual ~MapObjectUnkTRH1() override;

    void func_ov029_02145d1c(void);
    void func_ov029_02145e6c(void);
    void func_ov029_02145e78(void);
    void func_ov029_02145e84(void);
    void func_ov029_02145ec4(void);
    void func_ov029_02145ee4(void);
    void func_ov029_02145f04(void);
};

class MapObjectProfileUnkTRH1 : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkTRH1();
    ~MapObjectProfileUnkTRH1();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkTRH1 *GetProfile();
};
