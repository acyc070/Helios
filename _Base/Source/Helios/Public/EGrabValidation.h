#pragma once
#include "CoreMinimal.h"
#include "EGrabValidation.generated.h"

UENUM()
enum class EGrabValidation {
    ExceedAngle,
    OutOfRange,
    NoRaycast,
    NoSettings,
    HeightIssue,
    Valid,
};

