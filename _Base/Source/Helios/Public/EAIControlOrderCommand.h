#pragma once
#include "CoreMinimal.h"
#include "EAIControlOrderCommand.generated.h"

UENUM()
enum class EAIControlOrderCommand : uint8 {
    None,
    Jump,
    Grab,
    Slide,
    Sneak,
};

