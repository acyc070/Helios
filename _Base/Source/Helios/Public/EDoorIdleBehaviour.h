#pragma once
#include "CoreMinimal.h"
#include "EDoorIdleBehaviour.generated.h"

UENUM()
enum class EDoorIdleBehaviour : uint8 {
    Idle_Stay,
    Idle_Neutral,
    Idle_MaxVal,
    Idle_MinVal,
};

