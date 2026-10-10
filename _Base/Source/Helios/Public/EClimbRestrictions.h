#pragma once
#include "CoreMinimal.h"
#include "EClimbRestrictions.generated.h"

UENUM()
enum class EClimbRestrictions : uint8 {
    None,
    Horizontal,
    Vertical,
};

