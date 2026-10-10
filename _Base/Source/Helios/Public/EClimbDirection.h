#pragma once
#include "CoreMinimal.h"
#include "EClimbDirection.generated.h"

UENUM()
enum class EClimbDirection : uint8 {
    Idle,
    Vertical,
    VerticalHalfStep,
    Horizontal,
};

