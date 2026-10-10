#pragma once
#include "CoreMinimal.h"
#include "ESmartVolumeHint.generated.h"

UENUM()
enum class ESmartVolumeHint : uint8 {
    None,
    Sneak,
    Sprint,
    Slide,
    SneakSprint,
    MimicPlayer,
};

