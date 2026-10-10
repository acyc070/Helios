#pragma once
#include "CoreMinimal.h"
#include "EAnimLocomotionType.generated.h"

UENUM()
enum class EAnimLocomotionType : uint8 {
    Jumping,
    Landing,
    Falling,
    Crouching,
    Sliding,
    Investigating,
    Chasing,
    Grabbing,
    MAX,
};

