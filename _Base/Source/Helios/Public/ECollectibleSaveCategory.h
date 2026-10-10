#pragma once
#include "CoreMinimal.h"
#include "ECollectibleSaveCategory.generated.h"

UENUM()
enum class ECollectibleSaveCategory : uint8 {
    Metadata,
    UserMetadata,
};

