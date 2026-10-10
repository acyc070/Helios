#pragma once
#include "CoreMinimal.h"
#include "EDebugPlaySessionType.generated.h"

UENUM()
enum class EDebugPlaySessionType : uint8 {
    Other,
    PlayInEditor,
    Debug,
    Development,
};

