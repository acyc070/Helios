#pragma once
#include "CoreMinimal.h"
#include "EStimulusSource.generated.h"

UENUM()
enum class EStimulusSource : uint8 {
    None,
    Visual,
    Noise,
    Proximity,
    OnDemand,
};

