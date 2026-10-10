#pragma once
#include "CoreMinimal.h"
#include "EAIPatternEvaluationResult.generated.h"

UENUM()
enum class EAIPatternEvaluationResult {
    StartMeNow,
    Inactive,
    ResourcesLocked,
    InitialDelay,
    Coolingdown,
    RemainingSpawns,
    SequenceWait,
    ConditionsNotMet,
    MissingHint,
    WaitingForValueChange,
};

