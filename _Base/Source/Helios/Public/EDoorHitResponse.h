#pragma once
#include "CoreMinimal.h"
#include "EDoorHitResponse.generated.h"

UENUM()
enum class EDoorHitResponse : uint8 {
    ConstantForce,
    PositionBased,
    Physics,
};

