#pragma once
#include "CoreMinimal.h"
#include "ETargetCategory.generated.h"

UENUM()
enum class ETargetCategory {
    Combat,
    Throw,
    Jump,
    Flashlight,
    Remote,
    PreciseJump,
    Slingshot,
};

