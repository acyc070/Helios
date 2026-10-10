#pragma once
#include "CoreMinimal.h"
#include "EGrabbingStates.generated.h"

UENUM()
enum class EGrabbingStates : uint8 {
    NotGrabbing,
    Transition,
    EnterGrabbing,
    Grabbing,
    ExitGrabbing,
};

