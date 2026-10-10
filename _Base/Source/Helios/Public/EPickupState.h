#pragma once
#include "CoreMinimal.h"
#include "EPickupState.generated.h"

UENUM()
enum class EPickupState : uint8 {
    Inactive,
    Transitioning,
    PickingUp,
    Carrying,
    StashingInPocket,
    StoringPermanentlyStoredItem,
    InPocket,
    TakingFromPocket,
    PuttingDown,
    PutDownTransition,
    Throwing,
    ThrowTransition,
    Disabled,
};

