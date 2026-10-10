#pragma once
#include "CoreMinimal.h"
#include "ELookAtPointInvalidation.generated.h"

UENUM()
enum class ELookAtPointInvalidation {
    Disabled,
    Priority,
    Angle,
    Distance,
    Filtered,
    OutsideVolume,
    Valid,
};

