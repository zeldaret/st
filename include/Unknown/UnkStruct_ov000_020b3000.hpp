#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorId.hpp"

class UnkStruct_ov000_020b3000_Base {
    /* 00 */ virtual bool vfunc_00(Actor *pActor);
};

class UnkStruct_ov000_020b3000 : public UnkStruct_ov000_020b3000_Base {
public:
    /* 00 (vtable) */
    /* 04 */ ActorId mActorId;
    /* 08 */

    UnkStruct_ov000_020b3000(ActorId actorId) :
        mActorId(actorId) {}

    /* 00 */ virtual bool vfunc_00(Actor *pActor) override;
};

class UnkStruct_ov031_02112ad4 : public UnkStruct_ov000_020b3000 {
public:
    /* 00 (base) */
    /* 08 */ u32 mUnk_08;
    /* 0C */

    UnkStruct_ov031_02112ad4(ActorId actorId, u32 param2) :
        UnkStruct_ov000_020b3000(actorId),
        mUnk_08(param2) {}

    /* 00 */ virtual bool vfunc_00(Actor *pActor) override;
};

class UnkStruct_ov031_0211361c : public UnkStruct_ov000_020b3000_Base {
public:
    /* 00 */ virtual bool vfunc_00(Actor *pActor) override;
};

class UnkStruct_ov102_02184a24 : public UnkStruct_ov000_020b3000 {
public:
    /* 00 (base) */
    /* 08 */

    UnkStruct_ov102_02184a24(ActorId actorId) :
        UnkStruct_ov000_020b3000(actorId) {}

    /* 00 */ virtual bool vfunc_00(Actor *pActor) override;
};
