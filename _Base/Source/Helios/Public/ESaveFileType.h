#pragma once
#include "CoreMinimal.h"
#include "ESaveFileType.generated.h"

UENUM()
enum class ESaveFileType : uint8 {
    Meta,
    Progression,
    Playthrough,
};

