#pragma once
#include "CoreMinimal.h"
#include "EPassengerMovementState.generated.h"

UENUM()
enum class EPassengerMovementState : uint8 {
    None,
    Avoiding,
    Following,
    ForceRotating,
    StaringAtDriver,
};

