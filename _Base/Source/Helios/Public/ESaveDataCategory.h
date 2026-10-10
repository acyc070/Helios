#pragma once
#include "CoreMinimal.h"
#include "ESaveDataCategory.generated.h"

UENUM()
enum class ESaveDataCategory : uint8 {
    GameProgression,
    MetaProgression,
    UserMetaData,
};

