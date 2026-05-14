//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkCLMN : public MapObject {
public:
    /* 00 (base) */
    /* 40 */

    MapObjectUnkCLMN();

    /* 30 */ virtual ~MapObjectUnkCLMN() override;

    void func_ov094_0217195c(void);
};

class MapObjectProfileUnkCLMN : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkCLMN();
    ~MapObjectProfileUnkCLMN();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkCLMN *GetProfile();
};
