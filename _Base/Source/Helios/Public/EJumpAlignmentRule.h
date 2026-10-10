#pragma once
#include "CoreMinimal.h"
#include "EJumpAlignmentRule.generated.h"

UENUM()
enum class EJumpAlignmentRule : uint8 {
    NoAlignment,
    DirectionOnly,
    DistanceAndDirection,
};

