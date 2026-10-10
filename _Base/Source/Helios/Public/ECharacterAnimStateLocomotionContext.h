#pragma once
#include "CoreMinimal.h"
#include "ECharacterAnimStateLocomotionContext.generated.h"

UENUM()
enum class ECharacterAnimStateLocomotionContext {
    Idling,
    Moving,
    Standing,
    Crouching,
    Climbing,
    Strafing,
};

