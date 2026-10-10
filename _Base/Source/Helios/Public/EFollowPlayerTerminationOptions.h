#pragma once
#include "CoreMinimal.h"
#include "EFollowPlayerTerminationOptions.generated.h"

UENUM()
enum class EFollowPlayerTerminationOptions {
    StopFollowDistance,
    MinPlayerSpeed,
    NoMovementInput,
    CheckDontFollowHint,
    MaxPlayerInactiveTime,
};

