#pragma once
#include "CoreMinimal.h"
#include "ELookAtType.generated.h"

UENUM()
enum class ELookAtType : uint8 {
    Interesting,
    Dangerous,
    MAX,
};

