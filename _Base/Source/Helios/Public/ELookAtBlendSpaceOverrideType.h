#pragma once
#include "CoreMinimal.h"
#include "ELookAtBlendSpaceOverrideType.generated.h"

UENUM()
enum class ELookAtBlendSpaceOverrideType : uint8 {
    None,
    Normal,
    Carry,
    Exhausted,
    Climbing,
    Combat,
    MAX,
};

