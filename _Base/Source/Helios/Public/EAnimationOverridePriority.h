#pragma once
#include "CoreMinimal.h"
#include "EAnimationOverridePriority.generated.h"

UENUM()
enum class EAnimationOverridePriority : uint8 {
    Default,
    Locomotion,
    Slopes,
    Environmental,
    BalanceBeam,
    PickupOrWeapon,
    SpecialCase,
    MAX,
};

