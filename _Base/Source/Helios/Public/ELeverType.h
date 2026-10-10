#pragma once
#include "CoreMinimal.h"
#include "ELeverType.generated.h"

UENUM()
enum class ELeverType : uint8 {
    Lever,
    Crank,
    Slot,
    MAX,
};

