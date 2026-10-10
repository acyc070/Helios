#pragma once
#include "CoreMinimal.h"
#include "ESmartPointValidation.generated.h"

UENUM()
enum class ESmartPointValidation {
    Disabled,
    Priority,
    Range,
    Navmesh,
    Path,
    PathLength,
    Filtered,
    Valid,
    Current,
    CantVisit,
    InvalidObject,
};

