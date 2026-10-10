#pragma once
#include "CoreMinimal.h"
#include "EAIItemInteraction.generated.h"

UENUM()
enum class EAIItemInteraction : uint8 {
    None,
    Carry,
    Putdown,
    Drop,
    Throw,
};

