#pragma once
#include "CoreMinimal.h"
#include "EKosmosDebugFilter.generated.h"

UENUM()
enum class EKosmosDebugFilter : uint8 {
    AnimMixer,
    ResetActivities,
    MAX,
    INVALID,
};

