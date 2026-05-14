//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkWLMS : public MapObject {
public:
    /* 00 (base) */
    /* 40 */

    MapObjectUnkWLMS();

    /* 30 */ virtual ~MapObjectUnkWLMS() override;

    void func_ov063_0215fe74(void);
    void func_ov063_0215fe88(void);
    void func_ov063_0215feb0(void);
    void func_ov063_0215fff8(void);
    void func_ov063_02160030(void);
    void func_ov063_02160254(void);
    void func_ov063_02160548(void);
    void func_ov063_02160580(void);
    void func_ov063_02160688(void);
    void func_ov063_021606b4(void);
    void func_ov063_02160780(void);
    void func_ov063_02160880(void);
    void func_ov063_021608a8(void);
    void func_ov063_02160918(void);
    void func_ov063_02160938(void);
    void func_ov063_0216095c(void);
};

class MapObjectProfileUnkWLMS : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkWLMS();
    ~MapObjectProfileUnkWLMS();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkWLMS *GetProfile();
};
