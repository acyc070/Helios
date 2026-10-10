#pragma once
#include "CoreMinimal.h"
#include "EAnimDragInitType.generated.h"

UENUM()
enum class EAnimDragInitType : uint8 {
    Stand,
    LowGrab,
    Jog,
    Sprint,
};

