#pragma once
#include "CoreMinimal.h"
#include "EAutoTestProfilerDebugActorCommand.generated.h"

UENUM()
enum class EAutoTestProfilerDebugActorCommand {
    None,
    TogglePhysics,
    ToggleVisibility,
    ToggleTick,
    Destroy,
    Fetch,
};

