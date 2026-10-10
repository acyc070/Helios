#pragma once
#include "CoreMinimal.h"
#include "ETarsierGraphicsQualityLevel.generated.h"

UENUM()
enum class ETarsierGraphicsQualityLevel : uint8 {
    Off,
    Low,
    Medium,
    High,
    VeryHigh,
    Ultra,
    MAX,
};

