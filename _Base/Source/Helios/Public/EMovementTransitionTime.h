#pragma once
#include "CoreMinimal.h"
#include "EMovementTransitionTime.generated.h"

UENUM()
enum class EMovementTransitionTime : uint8 {
    None,
    OnWalkStop,
    PostWalkStop,
    OnWalkStopTurn,
    MAX,
};

