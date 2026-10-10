#pragma once
#include "CoreMinimal.h"
#include "EAnimationSequenceOverrideOptions.generated.h"

UENUM()
enum class EAnimationSequenceOverrideOptions {
    None,
    CancelWhenFalling,
    CanBeInterruptedByAnotherOverride,
    RootMotionWithPhysics,
    RootMotionOnly,
};

