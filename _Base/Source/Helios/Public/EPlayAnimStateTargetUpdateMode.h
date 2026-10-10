#pragma once
#include "CoreMinimal.h"
#include "EPlayAnimStateTargetUpdateMode.generated.h"

UENUM()
enum class EPlayAnimStateTargetUpdateMode : uint8 {
    EveryFrame,
    OnlyOnce,
};

