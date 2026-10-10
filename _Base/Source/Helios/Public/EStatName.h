#pragma once
#include "CoreMinimal.h"
#include "EStatName.generated.h"

UENUM()
enum class EStatName {
    FastestGameTime,
    Deaths,
    ThingsBroken,
    Jumps,
    Kills,
    HandHeld,
    MAX_STAT,
};

