//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkTSGM : public MapObject {
public:
    /* 00 (base) */
    /* 40 */

    MapObjectUnkTSGM();

    /* 30 */ virtual ~MapObjectUnkTSGM() override;

    void func_ov065_02159a14(void);
    void func_ov065_02159ab0(void);
    void func_ov065_02159ab4(void);
    void func_ov065_02159ab8(void);
    void func_ov065_02159ad8(void);
    void func_ov065_02159b20(void);
    void func_ov065_02159b40(void);
};

class MapObjectProfileUnkTSGM : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkTSGM();
    ~MapObjectProfileUnkTSGM();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkTSGM *GetProfile();
};
