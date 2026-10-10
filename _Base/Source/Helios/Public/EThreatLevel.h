#pragma once
#include "CoreMinimal.h"
#include "EThreatLevel.generated.h"

UENUM()
enum class EThreatLevel : uint8 {
    NoThreat,
    Idle,
    Investigate,
    Chase,
};

