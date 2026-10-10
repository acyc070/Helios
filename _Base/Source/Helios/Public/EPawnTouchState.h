#pragma once
#include "CoreMinimal.h"
#include "EPawnTouchState.generated.h"

UENUM()
enum class EPawnTouchState : uint8 {
    Unspecified,
    Initiate,
    Started = 5,
    Stopped = 10,
    MAX,
};

