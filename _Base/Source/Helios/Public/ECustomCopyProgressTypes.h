#pragma once
#include "CoreMinimal.h"
#include "ECustomCopyProgressTypes.generated.h"

UENUM()
enum class ECustomCopyProgressTypes : uint8 {
    Copy_Regular,
    Copy_Inversed,
    Copy_EaseIn,
    Copy_EaseOut,
    Copy_EaseInOut,
    Copy_CustomCurve,
};

