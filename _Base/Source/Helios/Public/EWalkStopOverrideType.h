#pragma once
#include "CoreMinimal.h"
#include "EWalkStopOverrideType.generated.h"

UENUM()
enum class EWalkStopOverrideType : uint8 {
    WalkStopInvalid,
    WalkStopStand,
    WalkStopCrouch,
    SprintStopStand,
    SprintStopCrouch,
    PlatformEdgeStopStand,
    PlatformEdgeStopCrouch,
};

