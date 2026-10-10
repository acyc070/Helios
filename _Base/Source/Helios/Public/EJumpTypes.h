#pragma once
#include "CoreMinimal.h"
#include "EJumpTypes.generated.h"

UENUM()
enum class EJumpTypes : uint8 {
    None,
    FromFloor,
    FromClimbing,
    FromSliding,
    FromHanging,
};

