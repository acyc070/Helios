#pragma once
#include "CoreMinimal.h"
#include "EAIPatternEventDrivenEvaluation.generated.h"

UENUM()
enum class EAIPatternEventDrivenEvaluation : uint8 {
    No,
    WhenValueChanges,
    WhileValueIsValidOrTrue,
};

