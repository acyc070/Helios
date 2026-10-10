#pragma once
#include "CoreMinimal.h"
#include "EBedLiftingState.generated.h"

UENUM()
enum class EBedLiftingState : uint8 {
    BL_State_NoBedLifting,
    BL_State_LiftingBedStart,
    BL_State_LiftingBedGrab,
    BL_State_LiftingBedSuccess,
    BL_State_LiftingBedFail,
};

