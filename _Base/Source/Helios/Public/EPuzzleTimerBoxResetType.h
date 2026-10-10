#pragma once
#include "CoreMinimal.h"
#include "EPuzzleTimerBoxResetType.generated.h"

UENUM()
enum class EPuzzleTimerBoxResetType : uint8 {
    TimerReset_Pause,
    TimerReset_Reset,
    TimerReset_ProgressDown,
    TimerReset_ProgressToClose,
};

