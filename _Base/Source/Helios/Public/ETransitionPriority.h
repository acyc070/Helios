#pragma once
#include "CoreMinimal.h"
#include "ETransitionPriority.generated.h"

UENUM()
enum class ETransitionPriority {
    Unset,
    Quaternary,
    Tertiary,
    Secondary,
    Primary,
    MAX,
};

