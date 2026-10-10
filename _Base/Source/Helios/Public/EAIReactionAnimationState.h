#pragma once
#include "CoreMinimal.h"
#include "EAIReactionAnimationState.generated.h"

UENUM()
enum class EAIReactionAnimationState : uint8 {
    None,
    Aim,
    Alert,
    Listen,
};

