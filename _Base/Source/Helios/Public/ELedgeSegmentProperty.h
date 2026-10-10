#pragma once
#include "CoreMinimal.h"
#include "ELedgeSegmentProperty.generated.h"

UENUM()
enum class ELedgeSegmentProperty {
    AlignJump,
    NonClimbable,
    PreventFalloff,
    MAX,
};

