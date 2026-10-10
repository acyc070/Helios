#pragma once
#include "CoreMinimal.h"
#include "ESoftReloadingSceneComponentsTransformStrategy.generated.h"

UENUM()
enum class ESoftReloadingSceneComponentsTransformStrategy : uint8 {
    SaveWorldTransform,
    SaveRelativeTransform,
};

