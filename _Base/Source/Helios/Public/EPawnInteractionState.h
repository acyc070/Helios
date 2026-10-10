#pragma once
#include "CoreMinimal.h"
#include "EPawnInteractionState.generated.h"

UENUM()
enum class EPawnInteractionState : uint8 {
    Unspecified,
    Started,
    Completed,
    Cancelled,
    MAX,
};

