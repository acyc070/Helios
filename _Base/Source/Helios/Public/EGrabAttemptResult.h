#pragma once
#include "CoreMinimal.h"
#include "EGrabAttemptResult.generated.h"

UENUM()
enum class EGrabAttemptResult {
    CanGrab,
    GrabDisabled,
    Failed,
    TargetDisabled,
    TargetRefuse,
    NoTraversalData,
    TooFarAway,
    NotFacingTarget,
    TooFarAwayHorizontal,
    TooFarAwayVertical,
    AboveTarget,
    NoSnapHeight,
    WrongInput,
    NotTryingToGrab,
};

