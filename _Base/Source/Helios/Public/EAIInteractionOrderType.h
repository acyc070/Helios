#pragma once
#include "CoreMinimal.h"
#include "EAIInteractionOrderType.generated.h"

UENUM()
enum class EAIInteractionOrderType : uint8 {
    GoInteract,
    StopInteracting,
};

