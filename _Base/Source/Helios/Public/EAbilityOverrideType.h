#pragma once
#include "CoreMinimal.h"
#include "EAbilityOverrideType.generated.h"

UENUM()
enum class EAbilityOverrideType : uint8 {
    NoChange,
    Enable,
    Disable,
};

