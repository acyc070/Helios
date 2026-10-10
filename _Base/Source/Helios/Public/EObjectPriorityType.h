#pragma once
#include "CoreMinimal.h"
#include "EObjectPriorityType.generated.h"

UENUM()
enum class EObjectPriorityType : uint8 {
    Pickup,
    Target,
    Dragging,
    Climbing,
    Handholding,
};

