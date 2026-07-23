#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "Map/MapObjectId.hpp"
#include "MapObject/MapObjectUnkSKDI.hpp"
#include "Unknown/UnkStruct_ov000_020b34c4.hpp"
#include "global.h"
#include "types.h"

class ActorUnkSKDO_ov031_02115ce8 : public UnkStruct_ov000_020b34c4 {
public:
    /* 00 (base) */
    /* 18 */

    ActorUnkSKDO_ov031_02115ce8(MapObjectId mapObjId) :
        UnkStruct_ov000_020b34c4(mapObjId) {}

    // data_ov031_02115ce8
    virtual bool vfunc_00(MapObject *param1);
};

class ActorUnkSKDO : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;
    /* 98 */ MapObjectUnkSKDI *mUnk_98;
    /* 9C */

    ActorUnkSKDO();

    /* 18 */ virtual bool vfunc_18(unk32 param1) override;
    /* 1C */ virtual void vfunc_1C() override;
    /* 20 */ virtual void vfunc_20() override;
    /* 54 */ virtual void vfunc_54(unk32 param1);
};

class ActorProfileUnkSKDO : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkSKDO();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkSKDO *GetProfile();
};
