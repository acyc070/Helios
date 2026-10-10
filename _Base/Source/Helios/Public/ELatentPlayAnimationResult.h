#pragma once
#include "CoreMinimal.h"
#include "ELatentPlayAnimationResult.generated.h"

UENUM()
enum class ELatentPlayAnimationResult : uint8 {
    Started,
    Finished,
    Interrupted,
    Update,
    WorldReloaded,
};

