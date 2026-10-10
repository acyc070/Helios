#pragma once
#include "CoreMinimal.h"
#include "EVolumeEventType.generated.h"

UENUM()
enum class EVolumeEventType : uint8 {
    Invalid,
    Enter,
    Exit,
    MAX,
};

