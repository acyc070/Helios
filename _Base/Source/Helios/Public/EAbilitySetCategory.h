#pragma once
#include "CoreMinimal.h"
#include "EAbilitySetCategory.generated.h"

UENUM()
enum class EAbilitySetCategory {
    Grab,
    Jump,
    Slide,
    Locomotion,
    Other,
    Touch,
    LookAt,
    Communication,
    Pickup,
    MAX,
};

