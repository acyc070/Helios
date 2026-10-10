#pragma once
#include "CoreMinimal.h"
#include "EDynamicObjectCharacteristics.generated.h"

UENUM()
enum class EDynamicObjectCharacteristics : uint8 {
    CarriedByAI,
    Hidden,
    MAX,
};

