#pragma once
#include "CoreMinimal.h"
#include "EAIAlertState.generated.h"

UENUM()
enum class EAIAlertState : uint8 {
    Idle,
    Investigate,
    HostileInvestigate,
    Hostile,
    Alerted,
    ShortAlerted,
    Listen,
    LostPlayer,
    KillingTarget,
    CantReachTarget,
    ExitInvestigate,
    TargetDead,
};

