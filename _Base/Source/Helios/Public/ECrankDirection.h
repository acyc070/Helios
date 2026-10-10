#pragma once
#include "CoreMinimal.h"
#include "ECrankDirection.generated.h"

UENUM()
enum class ECrankDirection : uint8 {
    Stay,
    Clockwise,
    CClockwise,
};

