#pragma once
#include "CoreMinimal.h"
#include "EItemHandlingState.generated.h"

UENUM()
enum class EItemHandlingState {
    Idle,
    PickingUp,
    StoringItem,
    StoringItemToPickingUp,
    Carrying,
    PutDown,
    PuttingDown,
    Throwing,
    Firing,
    Aiming,
};

