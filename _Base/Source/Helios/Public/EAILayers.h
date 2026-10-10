#pragma once
#include "CoreMinimal.h"
#include "EAILayers.generated.h"

UENUM()
enum class EAILayers {
    None,
    Legs,
    Torso,
    Head,
    DEPRECATED_MovementStyle,
    SpecialResource1,
    SpecialResource2,
    SpecialResource3,
    SpecialResource4,
    MainActivity,
    MovementSpeed = 20,
    MovementAction,
    MovementStyle,
    MAX,
};

