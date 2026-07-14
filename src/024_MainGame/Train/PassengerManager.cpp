#include "MainGame/PassengerManager.hpp"
#include "System/Random.hpp"
#include "System/SysNew.hpp"
#include "Unknown/UnkStruct_02049bac.hpp"
#include "Unknown/UnkStruct_027e09b8.hpp"

extern "C" SceneIndex func_ov000_0205c984();
extern "C" u32 func_ov000_0205c9b4();

const s16 data_ov024_020d7598[] = {0x29, 0x2F, 0x2B, 0x2C, 0x2E};

struct PassengerInfos {
    ActorId actorId;
    AdventureFlag_Half flagBoard;
    AdventureFlag_Half flagFail;
};

static const PassengerInfos sPassengerInfos[] = {
    {
        .actorId   = ActorId_SYWA,
        .flagBoard = AdventureFlag_CarbenBoardsTrain,
        .flagFail  = AdventureFlag_FailedCarbenTrainRide,
    },
    {
        .actorId   = ActorId_WAMA,
        .flagBoard = AdventureFlag_WadatsumiBoardsTrain,
        .flagFail  = AdventureFlag_FailedWadatsumiTrainRide,
    },
    {
        .actorId   = ActorId_FOMA,
        .flagBoard = AdventureFlag_MorrisBoardsTrain,
        .flagFail  = AdventureFlag_FailedMorrisTrainRide,
    },
    {
        .actorId   = ActorId_FOMB,
        .flagBoard = AdventureFlag_MashBoardsTrain,
        .flagFail  = AdventureFlag_FailedMashTrainRide,
    },
    {
        .actorId   = ActorId_FOMC,
        .flagBoard = AdventureFlag_YamahikoBoardsTrain,
        .flagFail  = AdventureFlag_FailedYamahikoTrainRide,
    },
    {
        .actorId   = ActorId_FOPD,
        .flagBoard = AdventureFlag_Unk_1B1,
        .flagFail  = AdventureFlag_Unk_1C9,
    },
    {
        .actorId   = ActorId_FOMR,
        .flagBoard = AdventureFlag_DovokBoardsTrain,
        .flagFail  = AdventureFlag_FailedDovokTrainRide,
    },
    {
        .actorId   = ActorId_YKAP,
        .flagBoard = AdventureFlag_KofuBoardsTrain,
        .flagFail  = AdventureFlag_FailedKofuTrainRide,
    },
    {
        .actorId   = ActorId_GORP,
        .flagBoard = AdventureFlag_GoronAdultBoardsTrain,
        .flagFail  = AdventureFlag_FailedGoronAdultTrainRide,
    },
    {
        .actorId   = ActorId_GOCP,
        .flagBoard = AdventureFlag_ChildGoronBoardsTrain,
        .flagFail  = AdventureFlag_FailedChildGoronTrainRide,
    },
    {
        .actorId   = ActorId_YKCP,
        .flagBoard = AdventureFlag_NokoBoardsTrain,
        .flagFail  = AdventureFlag_FailedNokoTrainRide,
    },
    {
        .actorId   = ActorId_TMNA,
        .flagBoard = AdventureFlag_FerrusBoardsTrainToOutset,
        .flagFail  = AdventureFlag_FailedFerrusTrainRideToOutset,
    },
    {
        .actorId   = ActorId_TMNP,
        .flagBoard = AdventureFlag_FerrusBoardsTrainToMarineTemple,
        .flagFail  = AdventureFlag_FailedFerrusTrainRideToMarineTemple,
    },
    {
        .actorId   = ActorId_CAWB,
        .flagBoard = AdventureFlag_MonaBoardsTrain,
        .flagFail  = AdventureFlag_FailedMonaTrainRide,
    },
    {
        .actorId   = ActorId_NCCA,
        .flagBoard = AdventureFlag_JoeBoardsTrain,
        .flagFail  = AdventureFlag_FailedJoeTrainRide,
    },
    {
        .actorId   = ActorId_CRFP,
        .flagBoard = AdventureFlag_KenzoBoardsTrainToBuildFence,
        .flagFail  = AdventureFlag_FailedKenzoTrainRideToAnouki,
    },
};

u32 PassengerManager::GetPassengerInfoIndex(ActorId actorId) {
    for (u32 i = 0; i < ARRAY_LEN(sPassengerInfos); i++) {
        if (actorId == sPassengerInfos[i].actorId) {
            return i;
        }
    }

    return -1;
}

AdventureFlag PassengerManager::GetBoardFlag(ActorId actorId) {
    u32 index = PassengerManager::GetPassengerInfoIndex(actorId);

    if (index != -1) {
        return sPassengerInfos[index].flagBoard;
    }

    return AdventureFlag_Nothing;
}

AdventureFlag PassengerManager::GetFailFlag(ActorId actorId) {
    u32 index = PassengerManager::GetPassengerInfoIndex(actorId);

    if (index != -1) {
        return sPassengerInfos[index].flagFail;
    }

    return AdventureFlag_Nothing;
}

PassengerManager *PassengerManager::Create() {
    return new(HeapIndex_1) PassengerManager();
}

void PassengerManager::func_ov024_020d41bc(const UnkStruct_Param1 *param1) {
    this->mPassenger.mActorId    = param1->actorId;
    this->mPassenger.mUnk_04     = param1->mUnk_04;
    this->mPassenger.mSceneIndex = (s16) param1->sceneIndex;
    this->mPassenger.mRoomIndex  = param1->roomIndex;
    this->mPassenger.mHappiness  = param1->happiness;
    this->mDate                  = param1->mUnk_14;
    this->func_ov024_020d4228();
}

void PassengerManager::func_ov024_020d41f4(UnkStruct_Param1 *param1) {
    param1->actorId    = this->mPassenger2.mActorId;
    param1->mUnk_04    = this->mPassenger2.mUnk_04;
    param1->sceneIndex = this->mPassenger2.mSceneIndex;
    param1->roomIndex  = this->mPassenger2.mRoomIndex;
    param1->happiness  = this->mPassenger2.mHappiness;
    param1->mUnk_14    = this->mDate;
}

void PassengerManager::func_ov024_020d4228() {
    this->mPassenger2.mActorId    = this->mPassenger.mActorId;
    this->mPassenger2.mUnk_04     = this->mPassenger.mUnk_04;
    this->mPassenger2.mSceneIndex = this->mPassenger.mSceneIndex;
    this->mPassenger2.mRoomIndex  = this->mPassenger.mRoomIndex;
    this->mPassenger2.mHappiness  = this->mPassenger.mHappiness;
}

void PassengerManager::func_ov024_020d4258() {
    this->mPassenger.mActorId    = this->mPassenger2.mActorId;
    this->mPassenger.mUnk_04     = this->mPassenger2.mUnk_04;
    this->mPassenger.mSceneIndex = this->mPassenger2.mSceneIndex;
    this->mPassenger.mRoomIndex  = this->mPassenger2.mRoomIndex;
    this->mPassenger.mHappiness  = this->mPassenger2.mHappiness;
}

bool PassengerManager::TryBoardTrain(ActorId actorId, SceneIndex sceneIndex, u32 roomIndex) {
    if (!this->CanCompleteTrip() && !this->IsCaughtByPirates()) {
        this->mPassenger.mActorId    = actorId;
        this->mPassenger.mUnk_04     = 0;
        this->mPassenger.mSceneIndex = sceneIndex;
        this->mPassenger.mRoomIndex  = roomIndex;
        this->mPassenger.mHappiness  = HappinessLevel_5;
        this->func_ov024_020d4228();

        if (this->mPassenger.mActorId == ActorId_OLDS) {
            this->func_ov024_020d4554();
        }

        return true;
    }

    return false;
}

bool PassengerManager::TryReset() {
    if (this->CanCompleteTrip()) {
        this->Reset();
        return true;
    }

    return false;
}

bool PassengerManager::TryResetAtDestination() {
    if (this->CanCompleteTrip()) {
        if (this->ReachedDestination(func_ov000_0205c984(), func_ov000_0205c9b4())) {
            this->Reset();
            return true;
        }
    }

    return false;
}

bool PassengerManager::ReachedDestination(SceneIndex sceneIndex, u32 roomIndex) {
    if (this->mPassenger.mRoomIndex == 0xFF) {
        return this->mPassenger.mSceneIndex == sceneIndex;
    }

    return this->mPassenger.mSceneIndex == sceneIndex && this->mPassenger.mRoomIndex == roomIndex;
}

bool PassengerManager::TrySetCaughtByPirates() {
    if (this->CanCompleteTrip()) {
        SET_FLAG(data_027e09b8->mAdventureFlags, AdventureFlag_Unk_2CC);
        this->mPassenger.mUnk_04 = 1;
        return true;
    }

    return false;
}

bool PassengerManager::CaughtByPiratesTryReset() {
    if (this->IsCaughtByPirates()) {
        UNSET_FLAG(data_027e09b8->mAdventureFlags, AdventureFlag_Unk_2CC);
        this->SetFailedFlag();
        this->Reset();
        return true;
    }

    return false;
}

void PassengerManager::GiveHappiness(unk32 amount) {
    if (this->CanCompleteTrip() || this->IsCaughtByPirates()) {
        if (this->mPassenger.mHappiness != HappinessLevel_0) {
            unk32 newHappiness = this->mPassenger.mHappiness + amount;

            if (newHappiness > HappinessLevel_5) {
                newHappiness = HappinessLevel_5;
            } else if (newHappiness < HappinessLevel_0) {
                newHappiness = HappinessLevel_0;
            }

            this->mPassenger.mHappiness = newHappiness;
        }
    }
}

unk32 PassengerManager::GetHappiness() {
    return this->mPassenger.mHappiness;
}

unk32 PassengerManager::GetHappinessCond() {
    if (!this->CanCompleteTrip() && !this->IsCaughtByPirates()) {
        return -1;
    }

    return this->mPassenger.mHappiness;
}

bool PassengerManager::CanCompleteTrip() {
    bool result = false;

    if (this->mPassenger.mActorId != ActorId_None && this->mPassenger.mUnk_04 == 0 &&
        data_027e09a4->CurrentSceneIndex() != SceneIndex_t_minigame) {
        result = true;
    }

    return result;
}

bool PassengerManager::IsCaughtByPirates() {
    if (this->mPassenger.mActorId != ActorId_None && this->mPassenger.mUnk_04 == 1) {
        return true;
    }

    return false;
}

ActorId PassengerManager::GetActorId() {
    return this->mPassenger.mActorId;
}

PassengerManager *PassengerManager::GetInstance() {
    PassengerManager *pPassengerManager = this;

    if (!this->CanCompleteTrip() && !this->IsCaughtByPirates()) {
        pPassengerManager = NULL;
    }

    return pPassengerManager;
}

void PassengerManager::func_ov024_020d4554() {
    this->mUnk_2C = -1;
    this->mUnk_30 = -1;
}

void PassengerManager::Reset() {
    if (this->mPassenger.mActorId == ActorId_OLDS) {
        //! TODO: fake match
        volatile u16 date[2];
        date[0]     = this->GetDate();
        u16 date2   = date[0];
        date[1]     = date2;
        this->mDate = date2;
    }

    this->mPassenger.Reset();
    this->mPassenger2.Reset();
}

bool PassengerManager::IsDateUnset() {
    return this->mDate == 0;
}

s16 PassengerManager::GetDate() {
    u16 date;
    data_02049bac.func_02014a34(&date);
    return date;
}

u32 PassengerManager::GetRandomIndex(u32 param1, u32 seed) {
    Random random;
    random.Setup(seed);
    return random.Next32(0) % param1;
}

void PassengerManager::SetFailedFlag() {
    if (this->mPassenger.mActorId != ActorId_OLDS) {
        AdventureFlag flagBoard = PassengerManager::GetBoardFlag(this->mPassenger.mActorId);
        AdventureFlag flagFail  = PassengerManager::GetFailFlag(this->mPassenger.mActorId);

        UNSET_FLAG(data_027e09b8->mAdventureFlags, flagBoard);
        SET_FLAG(data_027e09b8->mAdventureFlags, flagFail);
    }
}
