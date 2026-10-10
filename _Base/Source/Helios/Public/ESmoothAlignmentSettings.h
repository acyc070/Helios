#pragma once
#include "CoreMinimal.h"
#include "ESmoothAlignmentSettings.generated.h"

UENUM()
enum class ESmoothAlignmentSettings : uint8 {
    OnlyRotate,
    OnlyMove,
    MoveAndRotate,
};

