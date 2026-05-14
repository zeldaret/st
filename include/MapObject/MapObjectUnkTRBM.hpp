//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkTRBM : public MapObject {
public:
    /* 00 (base) */
    /* 40 */

    MapObjectUnkTRBM();

    /* 30 */ virtual ~MapObjectUnkTRBM() override;

    void func_ov028_02144ec4(void);
    void func_ov028_02144fb0(void);
    void func_ov028_02145024(void);
    void func_ov028_0214503c(void);
    void func_ov028_0214507c(void);
    void func_ov028_0214509c(void);
    void func_ov028_021450bc(void);
};

class MapObjectProfileUnkTRBM : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkTRBM();
    ~MapObjectProfileUnkTRBM();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkTRBM *GetProfile();
};
