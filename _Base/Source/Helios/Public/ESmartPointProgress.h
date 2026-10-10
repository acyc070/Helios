#pragma once
#include "CoreMinimal.h"
#include "ESmartPointProgress.generated.h"

UENUM()
enum class ESmartPointProgress : uint8 {
    Unspecified,
    Start,
    Arrival,
    ActionStarted,
    ActionFinished,
    Succeeded,
    Aborted,
    MAX,
};

