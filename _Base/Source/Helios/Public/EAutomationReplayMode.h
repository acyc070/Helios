#pragma once
#include "CoreMinimal.h"
#include "EAutomationReplayMode.generated.h"

UENUM()
enum class EAutomationReplayMode : int32 {
    Random,
    First,
    Last,
};

