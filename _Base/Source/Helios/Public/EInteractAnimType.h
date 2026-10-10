#pragma once
#include "CoreMinimal.h"
#include "EInteractAnimType.generated.h"

UENUM()
enum class EInteractAnimType : uint8 {
    None,
    Pickup,
    StoringPermanently,
    Stashing,
    Carry,
    TakingFromPocket,
    Putdown,
    Throw,
};

