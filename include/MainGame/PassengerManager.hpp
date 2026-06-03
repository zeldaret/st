#pragma once

#include "Actor/ActorId.hpp"
#include "Save/AdventureFlags.hpp"
#include "Unknown/UnkStruct_027e09a4.hpp"
#include "types.h"

enum HappinessLevel_ {
    HappinessLevel_0,
    HappinessLevel_1,
    HappinessLevel_2,
    HappinessLevel_3,
    HappinessLevel_4,
    HappinessLevel_5,
};

struct UnkStruct_Param1 {
    ActorId actorId;
    s16 mUnk_04;
    SceneIndex_Half sceneIndex;
    u8 roomIndex;
    unk32 mUnk_0C;
    unk32 happiness;
    u16 mUnk_14;
};

class Passenger {
public:
    /* 00 */ ActorId mActorId;
    /* 04 */ unk32 mUnk_04;
    /* 08 */ SceneIndex mSceneIndex;
    /* 0C */ u8 mRoomIndex;
    /* 10 */ unk32 mHappiness;

    Passenger();
    void Reset();
};

class PassengerManager : public AutoInstance<PassengerManager> {
public:
    /* 00 */ Passenger mPassenger;
    /* 14 */ Passenger mPassenger2;
    /* 28 */ u16 mDate;
    /* 2A */ unk16 mUnk_2A;
    /* 2C */ unk32 mUnk_2C;
    /* 30 */ unk32 mUnk_30;
    /* 34 */

    // overlay 1
    PassengerManager();
    ~PassengerManager();

    void func_ov001_020bf8e4();
    void func_ov001_020bf90c();
    void func_ov001_020bf910();
    bool func_ov001_020bfa1c();

    static bool func_ov001_020bf870();

    // overlay 24
    void func_ov024_020d41bc(const UnkStruct_Param1 *pActorId);
    void func_ov024_020d41f4(UnkStruct_Param1 *param1);
    void func_ov024_020d4228();
    void func_ov024_020d4258();
    bool TryBoardTrain(ActorId actorId, SceneIndex sceneIndex, u32 roomIndex);
    bool TryReset();
    bool TryResetAtDestination();
    bool ReachedDestination(SceneIndex sceneIndex, u32 roomIndex);
    bool TrySetCaughtByPirates();
    bool CaughtByPiratesTryReset();
    void GiveHappiness(unk32 amount);
    unk32 GetHappiness();
    unk32 GetHappinessCond();
    bool CanCompleteTrip();
    bool IsCaughtByPirates();
    ActorId GetActorId();
    PassengerManager *GetInstance();
    void func_ov024_020d4554();
    void Reset();
    bool IsDateUnset();
    s16 GetDate();
    u32 GetRandomIndex(u32 param1, u32 seed);
    void SetFailedFlag();

    static u32 GetPassengerInfoIndex(ActorId actorId);
    static AdventureFlag GetBoardFlag(ActorId actorId);
    static AdventureFlag GetFailFlag(ActorId actorId);
    static PassengerManager *Create();
};

extern PassengerManager *gpPassengerManager;
