#pragma once
#include "CoreMinimal.h"
#include "ESaveSystemPIESaveBehaviour.generated.h"

UENUM()
enum class ESaveSystemPIESaveBehaviour : uint8 {
    SaveToDisk,
    OnlySaveToMemory,
};

