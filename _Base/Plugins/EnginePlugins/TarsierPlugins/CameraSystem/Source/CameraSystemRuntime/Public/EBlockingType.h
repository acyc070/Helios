#pragma once
#include "CoreMinimal.h"
#include "EBlockingType.generated.h"

UENUM()
enum class EBlockingType {
    PitchBottom,
    PitchTop,
    YawLeft,
    YawRight,
};

