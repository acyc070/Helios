#pragma once
#include "CoreMinimal.h"
#include "ECameraBlockingAxis.generated.h"

UENUM()
enum class ECameraBlockingAxis : uint8 {
    Auto,
    Yaw,
    Pitch,
};

