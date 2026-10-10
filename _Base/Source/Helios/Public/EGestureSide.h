#pragma once
#include "CoreMinimal.h"
#include "EGestureSide.generated.h"

UENUM()
enum class EGestureSide : uint8 {
    None,
    Left,
    Right,
    MAX,
};

