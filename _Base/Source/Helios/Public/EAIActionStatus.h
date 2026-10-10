#pragma once
#include "CoreMinimal.h"
#include "EAIActionStatus.generated.h"

UENUM()
enum class EAIActionStatus : uint8 {
    Unstarted,
    Running,
    Success,
    Failure,
    Interrupted,
};

