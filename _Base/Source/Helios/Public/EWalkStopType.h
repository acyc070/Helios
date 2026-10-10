#pragma once
#include "CoreMinimal.h"
#include "EWalkStopType.generated.h"

UENUM()
enum class EWalkStopType : uint8 {
    None,
    Normal,
    Sprint,
    PlatformEdge,
    DistancePrediction,
};

