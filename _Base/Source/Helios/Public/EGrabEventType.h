#pragma once
#include "CoreMinimal.h"
#include "EGrabEventType.generated.h"

UENUM()
enum class EGrabEventType : uint8 {
    Unspecified,
    Ledge,
    Hangable,
    Draggable,
    Climb,
    Carry,
    Lever,
    MAX,
};

