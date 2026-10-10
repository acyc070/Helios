#pragma once
#include "CoreMinimal.h"
#include "EAbilitySetLocomotion.generated.h"

UENUM()
enum class EAbilitySetLocomotion : uint8 {
    Sprint,
    Move,
    Crouch,
    CrouchSprint,
    MAX,
};

