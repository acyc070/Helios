#pragma once
#include "CoreMinimal.h"
#include "EHangReleaseType.generated.h"

UENUM()
enum class EHangReleaseType : uint8 {
    None,
    Released,
    Jumped,
};

