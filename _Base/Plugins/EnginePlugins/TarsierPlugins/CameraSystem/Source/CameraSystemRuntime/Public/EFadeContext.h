#pragma once
#include "CoreMinimal.h"
#include "EFadeContext.generated.h"

UENUM()
enum class EFadeContext {
    CameraSystem,
    Sequencer,
    MAX,
};

