#pragma once
#include "CoreMinimal.h"
#include "ETarsierPresetGraphicsQualityLevel.generated.h"

UENUM()
enum class ETarsierPresetGraphicsQualityLevel : uint8 {
    Low,
    Medium,
    High,
    Ultra,
    Custom,
    MAX,
};

