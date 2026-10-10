#pragma once
#include "CoreMinimal.h"
#include "EAnimationOverrideType.generated.h"

UENUM()
enum class EAnimationOverrideType : uint8 {
    None,
    Simple,
    SimpleLooping,
    Complex,
};

