#pragma once
#include "CoreMinimal.h"
#include "EClimbableReleaseType.generated.h"

UENUM()
enum class EClimbableReleaseType : uint8 {
    None,
    ToTop,
    ToFalling,
    ToJumping,
};

