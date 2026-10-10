#pragma once
#include "CoreMinimal.h"
#include "ESmartPointDebugMode.generated.h"

UENUM()
enum class ESmartPointDebugMode {
    TotalWeight,
    DistanceWeight,
    WanderWeight,
    TimeWeight,
    MAX,
};

