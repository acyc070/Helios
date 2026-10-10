#pragma once
#include "CoreMinimal.h"
#include "EHeightLevel.generated.h"

UENUM()
enum class EHeightLevel : uint8 {
    UnreachableLow,
    Below,
    Normal,
    OnTop,
    High,
    UnreachableHigh,
    Invalid,
};

