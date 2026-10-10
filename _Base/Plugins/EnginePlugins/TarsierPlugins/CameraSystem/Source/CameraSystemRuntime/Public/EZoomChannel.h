#pragma once
#include "CoreMinimal.h"
#include "EZoomChannel.generated.h"

UENUM()
enum class EZoomChannel : uint8 {
    AI,
    Gameplay,
    Cinematic,
    Player,
    MAX,
};

