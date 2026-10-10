#pragma once
#include "CoreMinimal.h"
#include "EHitSoundType.generated.h"

UENUM()
enum class EHitSoundType : uint8 {
    Default,
    Custom,
    None,
    MAX,
};

