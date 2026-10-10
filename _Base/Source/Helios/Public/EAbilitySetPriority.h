#pragma once
#include "CoreMinimal.h"
#include "EAbilitySetPriority.generated.h"

UENUM()
enum class EAbilitySetPriority {
    CodeSuggestion,
    DesignSuggestion,
    CodeRule,
    PermanentCodeRule,
    MAX,
};

