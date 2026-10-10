#pragma once
#include "CoreMinimal.h"
#include "ELerpFactor.generated.h"

UENUM()
enum class ELerpFactor : uint8 {
    Auto,
    Position,
    Rotation,
};

