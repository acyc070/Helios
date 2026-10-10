#pragma once
#include "CoreMinimal.h"
#include "EAnimDragState.generated.h"

UENUM()
enum class EAnimDragState : uint8 {
    None,
    Idle,
    Moving,
    Stuck,
    Pushed,
};

