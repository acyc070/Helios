#pragma once
#include "CoreMinimal.h"
#include "ECurveInterpolation.generated.h"

UENUM()
enum class ECurveInterpolation : uint8 {
    AkCurveInterpolation_Log3,
    AkCurveInterpolation_Sine,
    AkCurveInterpolation_Linear = 4,
    AkCurveInterpolation_SCurve,
};

