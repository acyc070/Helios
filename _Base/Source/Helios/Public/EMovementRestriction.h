#pragma once
#include "CoreMinimal.h"
#include "EMovementRestriction.generated.h"

UENUM()
enum class EMovementRestriction : uint8 {
    NormalMovement,
    NoMovement,
    RootMotionWithPhysics,
    RootMotionOnly,
    PhysicalMovement,
};

