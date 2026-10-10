#pragma once
#include "CoreMinimal.h"
#include "EClimbableInitType.generated.h"

UENUM()
enum class EClimbableInitType : uint8 {
    None,
    FromStanding,
    FromFalling,
    FromTop,
};

